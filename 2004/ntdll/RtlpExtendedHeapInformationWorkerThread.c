/*
 * XREFs of RtlpExtendedHeapInformationWorkerThread @ 0x1800F3960
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpStackLoggingEnabled @ 0x180024820 (RtlpHpStackLoggingEnabled.c)
 *     RtlExitUserThread @ 0x1800545F0 (RtlExitUserThread.c)
 *     RtlSetHeapInformation @ 0x180073CB0 (RtlSetHeapInformation.c)
 *     RtlQueryHeapInformation @ 0x180073EA0 (RtlQueryHeapInformation.c)
 *     RtlpHpTagQueryTags @ 0x1800742C4 (RtlpHpTagQueryTags.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009D310 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009D350 (NtUnmapViewOfSection.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 */

void __fastcall __noreturn RtlpExtendedHeapInformationWorkerThread(char *a1)
{
  NTSTATUS Tags; // eax
  NTSTATUS v3; // esi
  __int64 v4; // rax
  SIZE_T *ViewSize; // r15
  _QWORD **v6; // r12
  int v7; // r14d
  void *v8; // rdx
  _WORD HeapInformation[2]; // [rsp+58h] [rbp-59h] BYREF
  int v10; // [rsp+5Ch] [rbp-55h]
  __int64 v11; // [rsp+60h] [rbp-51h]
  _DWORD v12[2]; // [rsp+68h] [rbp-49h] BYREF
  __int64 v13; // [rsp+70h] [rbp-41h]
  __int64 (__fastcall *v14)(void *, size_t); // [rsp+78h] [rbp-39h]
  char *v15; // [rsp+80h] [rbp-31h]
  __int64 v16; // [rsp+88h] [rbp-29h]
  _QWORD v17[14]; // [rsp+98h] [rbp-19h] BYREF

  switch ( *((_DWORD *)a1 + 6) )
  {
    case 0x10000000:
      v10 = 0;
      HeapInformation[0] = 1;
      HeapInformation[1] = *((_WORD *)a1 + 40);
      v11 = -1LL;
      Tags = RtlSetHeapInformation(0LL, (HEAP_INFORMATION_CLASS)5, HeapInformation, 0x10uLL);
      v3 = Tags;
LABEL_3:
      *((_DWORD *)a1 + 7) = Tags;
      goto LABEL_22;
    case 0x40000000:
      v4 = *((_QWORD *)a1 + 1);
      break;
    case 0x8000000:
      if ( RtlpHpStackLoggingEnabled() )
        *((_DWORD *)a1 + 22) |= 1u;
      v3 = 0;
      goto LABEL_22;
    default:
      v4 = 0x10000LL;
      break;
  }
  ViewSize = (SIZE_T *)(a1 + 56);
  v6 = (_QWORD **)(a1 + 48);
  *((_QWORD *)a1 + 7) = v4;
  *((_QWORD *)a1 + 8) = 0LL;
  v3 = ZwMapViewOfSection(
         *(HANDLE *)a1,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         (PVOID *)a1 + 6,
         0LL,
         *ViewSize,
         (PLARGE_INTEGER)a1 + 8,
         ViewSize,
         ViewUnmap,
         0,
         4u);
  if ( v3 >= 0 )
  {
    *((_QWORD *)a1 + 9) = 0LL;
    *((_QWORD *)a1 + 4) = 0LL;
    *((_DWORD *)a1 + 10) = 0;
    *((_DWORD *)a1 + 7) = 0;
    v7 = *((_DWORD *)a1 + 6);
    if ( v7 == 0x40000000 )
    {
      (*v6)[1] = -1LL;
      Tags = RtlpHpTagQueryTags(*v6, *ViewSize, (_QWORD *)a1 + 4);
      goto LABEL_3;
    }
    if ( v7 == 0x20000000 )
    {
      v12[1] = 0;
      v16 = 0LL;
      *((_DWORD *)a1 + 7) = 0;
      v12[0] = 2;
      v13 = -1LL;
      v14 = RtlpHpRemoteStackSerializeWriter;
      v15 = a1;
      v3 = RtlQueryHeapInformation(0LL, (HEAP_INFORMATION_CLASS)5, v12, 0x28uLL, 0LL);
      if ( v3 >= 0 )
        v3 = *((_DWORD *)a1 + 7);
      if ( (v16 & 0x100) != 0 )
        *((_DWORD *)a1 + 22) |= 1u;
    }
    else
    {
      memset(v17, 0, 0x58uLL);
      v17[1] = *((_QWORD *)a1 + 2);
      v17[0] = -1LL;
      v17[3] = RtlpExtendedHeapInformationWorkerCallback;
      LODWORD(v17[2]) = v7;
      v17[4] = a1;
      v3 = RtlQueryHeapInformation(0LL, (HEAP_INFORMATION_CLASS)2, v17, 0x58uLL, 0LL);
      if ( v3 >= 0 && *((int *)a1 + 7) < 0 )
        v3 = *((_DWORD *)a1 + 7);
    }
  }
LABEL_22:
  v8 = (void *)*((_QWORD *)a1 + 6);
  if ( v8 )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v8);
  if ( *(_QWORD *)a1 )
    NtClose(*(HANDLE *)a1);
  *((_DWORD *)a1 + 7) = v3;
  RtlExitUserThread(0);
}
