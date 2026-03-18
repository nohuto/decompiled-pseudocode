/*
 * XREFs of SmmIoMmuAllocatePage @ 0x1C006D894
 * Callers:
 *     SmmIoMmuUpdatePfn @ 0x1C006DCC8 (SmmIoMmuUpdatePfn.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     SmmIoMmuCompareIoMmuPagePfn @ 0x1C002FB30 (SmmIoMmuCompareIoMmuPagePfn.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

PSLIST_ENTRY __fastcall SmmIoMmuAllocatePage(__int64 a1, struct _SLIST_ENTRY *a2)
{
  char v3; // bl
  PSLIST_ENTRY v4; // rsi
  __int64 v5; // r8
  __int64 (__fastcall *v6)(__int64, __int64, __int64, __int64); // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  _QWORD *v14; // rdi
  _QWORD *v15; // rax
  struct _SLIST_ENTRY *v16; // [rsp+78h] [rbp+10h] BYREF

  v16 = a2;
  ++*(_DWORD *)(a1 + 36);
  v3 = 0;
  v4 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 16));
  if ( !v4 )
  {
    v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(a1 + 64);
    v7 = *(unsigned int *)(a1 + 60);
    v8 = *(unsigned int *)(a1 + 56);
    v9 = *(unsigned int *)(a1 + 52);
    ++*(_DWORD *)(a1 + 40);
    v4 = (PSLIST_ENTRY)v6(v9, v7, v8, a1 + 16);
    if ( !v4 )
    {
      _InterlockedIncrement(&dword_1C0130B34);
      WdLogSingleEntry1(6LL, 524LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v11,
            v10,
            v12,
            0LL,
            1,
            -1,
            L"Failed to allocate IOMMU tracker page",
            524LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
      return 0LL;
    }
  }
  v4[2].Next = v16;
  *((_DWORD *)&v4[1].Next + 2) = 0;
  v14 = *(_QWORD **)a1;
  if ( !*(_QWORD *)a1 )
    goto LABEL_11;
  while ( (int)SmmIoMmuCompareIoMmuPagePfn(&v16, (__int64)v14) < 0 )
  {
    v15 = (_QWORD *)*v14;
    if ( !*v14 )
      goto LABEL_11;
LABEL_13:
    v14 = v15;
  }
  v15 = (_QWORD *)v14[1];
  if ( v15 )
    goto LABEL_13;
  v3 = 1;
LABEL_11:
  LOBYTE(v5) = v3;
  RtlAvlInsertNodeEx(a1, v14, v5, v4);
  return v4;
}
