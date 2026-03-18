/*
 * XREFs of AlpcpExposeViewAttributeInSenderContext @ 0x14062EAF0
 * Callers:
 *     AlpcpDispatchReplyToWaitingThread @ 0x140684350 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x140685F60 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MmUnsecureVirtualMemory @ 0x140600750 (MmUnsecureVirtualMemory.c)
 *     AlpcpRestoreWriteAccess @ 0x14060360C (AlpcpRestoreWriteAccess.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14062B87C (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpLocateView @ 0x14062EC80 (AlpcpLocateView.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14062ECA4 (MmSecureVirtualMemoryAgainstWrites.c)
 *     AlpcpUnlockBlob @ 0x140685070 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x140688570 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReferenceBlob @ 0x1406888F0 (AlpcpReferenceBlob.c)
 *     AlpcpCreateView @ 0x14068AC9C (AlpcpCreateView.c)
 *     AlpcpDeleteView @ 0x14068AF78 (AlpcpDeleteView.c)
 */

__int64 __fastcall AlpcpExposeViewAttributeInSenderContext(PVOID Object, __int64 a2)
{
  ULONG_PTR v2; // rdi
  int v5; // r14d
  ULONG_PTR i; // rsi
  ULONG_PTR View; // rax
  ULONG_PTR v8; // rbx
  int v9; // eax
  __int64 v10; // rax
  int v12; // eax
  __int64 v13; // rax
  ULONG_PTR v14; // [rsp+20h] [rbp-40h]
  _OWORD v15[3]; // [rsp+28h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a2 + 144);
  memset(v15, 0, sizeof(v15));
  v5 = 0;
  for ( i = *(_QWORD *)(v2 + 16); ; AlpcpUnlockBlob(i) )
  {
    AlpcpLockForCachedReferenceBlob(i);
    View = AlpcpLocateView(i, Object);
    v14 = View;
    v8 = View;
    if ( !View || AlpcpReferenceBlob(View) > 0 )
      break;
  }
  if ( (*(_DWORD *)(i + 48) & 1) != 0 )
  {
    if ( v8 == *(_QWORD *)(i + 80) )
    {
LABEL_12:
      *(_DWORD *)(a2 + 40) |= 0x4000u;
      *(_QWORD *)(a2 + 144) = v8;
      ++*(_DWORD *)(v8 + 76);
      goto LABEL_13;
    }
    if ( v8 && v8 == *(_QWORD *)(i + 72) )
    {
      v12 = *(_DWORD *)(v2 + 72);
      if ( (v12 & 8) == 0 )
      {
        v13 = MmSecureVirtualMemoryAgainstWrites(*(_QWORD *)(v2 + 32), *(_QWORD *)(v2 + 40), *(_QWORD *)(v2 + 48));
        if ( !v13 )
        {
          if ( *(_QWORD *)(v8 + 64) )
          {
            KiStackAttachProcess(*(_KPROCESS **)(v8 + 32), 0LL, (__int64)v15);
            MmUnsecureVirtualMemory(*(HANDLE *)(v8 + 64));
            KiUnstackDetachProcess((__int64)v15, 0LL);
            *(_QWORD *)(v8 + 64) = 0LL;
          }
          *(_DWORD *)(v8 + 72) |= 1u;
          AlpcpDereferenceBlobEx(v8);
          *(_QWORD *)(i + 72) = 0LL;
          *(_QWORD *)(i + 80) = 0LL;
          *(_DWORD *)(i + 48) &= ~1u;
          goto LABEL_12;
        }
        *(_QWORD *)(v2 + 64) = v13;
        v12 = *(_DWORD *)(v2 + 72);
      }
      *(_DWORD *)(v2 + 72) = v12 & 0xFFFFFFFE;
      AlpcpReferenceBlob(v2);
      if ( *(_QWORD *)(v8 + 64) )
      {
        KiStackAttachProcess(*(_KPROCESS **)(v8 + 32), 0LL, (__int64)v15);
        MmUnsecureVirtualMemory(*(HANDLE *)(v8 + 64));
        KiUnstackDetachProcess((__int64)v15, 0LL);
        *(_QWORD *)(v8 + 64) = 0LL;
      }
      *(_DWORD *)(v8 + 72) |= 1u;
      *(_QWORD *)(i + 72) = v2;
      *(_QWORD *)(i + 80) = v8;
      AlpcpDereferenceBlobEx(v8);
      goto LABEL_12;
    }
    v9 = *(_DWORD *)(v2 + 72);
    if ( (v9 & 8) != 0 )
      goto LABEL_9;
    v10 = MmSecureVirtualMemoryAgainstWrites(*(_QWORD *)(v2 + 32), *(_QWORD *)(v2 + 40), *(_QWORD *)(v2 + 48));
    if ( v10 )
    {
      *(_QWORD *)(v2 + 64) = v10;
      v9 = *(_DWORD *)(v2 + 72);
LABEL_9:
      *(_DWORD *)(v2 + 72) = v9 & 0xFFFFFFFE;
      AlpcpReferenceBlob(v2);
      *(_QWORD *)(i + 80) = 0LL;
      *(_QWORD *)(i + 72) = v2;
      if ( v8 )
      {
        *(_QWORD *)(i + 80) = v8;
        goto LABEL_12;
      }
      v5 = AlpcpCreateView(i, Object);
      if ( v5 >= 0 )
        goto LABEL_11;
      AlpcpRestoreWriteAccess(v2);
      AlpcpDereferenceBlobEx(v2);
      goto LABEL_35;
    }
    *(_QWORD *)(i + 72) = 0LL;
    *(_QWORD *)(i + 80) = 0LL;
    *(_DWORD *)(i + 48) &= ~1u;
  }
  else if ( v8 )
  {
    goto LABEL_12;
  }
  v5 = AlpcpCreateView(i, Object);
  if ( v5 >= 0 )
  {
LABEL_11:
    v8 = v14;
    goto LABEL_12;
  }
LABEL_35:
  *(_QWORD *)(a2 + 144) = 0LL;
LABEL_13:
  --*(_DWORD *)(v2 + 76);
  if ( (*(_DWORD *)(v2 + 72) & 2) != 0 )
  {
    AlpcpDeleteView(v2);
    *(_DWORD *)(v2 + 72) &= ~2u;
  }
  AlpcpUnlockBlob(i);
  AlpcpDereferenceBlobEx(v2);
  return (unsigned int)v5;
}
