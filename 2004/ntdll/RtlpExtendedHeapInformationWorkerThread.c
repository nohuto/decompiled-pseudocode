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

void __fastcall __noreturn RtlpExtendedHeapInformationWorkerThread(__int64 a1)
{
  int Tags; // eax
  int HeapInformation; // esi
  __int64 v4; // rax
  unsigned __int64 *v5; // r15
  _QWORD **v6; // r12
  unsigned __int64 v7; // r9
  int v8; // r14d
  _WORD v9[2]; // [rsp+58h] [rbp-59h] BYREF
  int v10; // [rsp+5Ch] [rbp-55h]
  __int64 v11; // [rsp+60h] [rbp-51h]
  _QWORD v12[4]; // [rsp+68h] [rbp-49h] BYREF
  __int64 v13; // [rsp+88h] [rbp-29h]
  _QWORD v14[14]; // [rsp+98h] [rbp-19h] BYREF

  switch ( *(_DWORD *)(a1 + 24) )
  {
    case 0x10000000:
      v10 = 0;
      v9[0] = 1;
      v9[1] = *(_WORD *)(a1 + 80);
      v11 = -1LL;
      Tags = RtlSetHeapInformation(0LL, 5, (__int64)v9, 0x10uLL);
      HeapInformation = Tags;
LABEL_3:
      *(_DWORD *)(a1 + 28) = Tags;
      goto LABEL_22;
    case 0x40000000:
      v4 = *(_QWORD *)(a1 + 8);
      break;
    case 0x8000000:
      if ( RtlpHpStackLoggingEnabled() )
        *(_DWORD *)(a1 + 88) |= 1u;
      HeapInformation = 0;
      goto LABEL_22;
    default:
      v4 = 0x10000LL;
      break;
  }
  v5 = (unsigned __int64 *)(a1 + 56);
  v6 = (_QWORD **)(a1 + 48);
  *(_QWORD *)(a1 + 56) = v4;
  *(_QWORD *)(a1 + 64) = 0LL;
  HeapInformation = ZwMapViewOfSection();
  if ( HeapInformation >= 0 )
  {
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 28) = 0;
    v8 = *(_DWORD *)(a1 + 24);
    if ( v8 == 0x40000000 )
    {
      (*v6)[1] = -1LL;
      Tags = RtlpHpTagQueryTags(*v6, *v5, (_QWORD *)(a1 + 32), v7);
      goto LABEL_3;
    }
    if ( v8 == 0x20000000 )
    {
      HIDWORD(v12[0]) = 0;
      v13 = 0LL;
      *(_DWORD *)(a1 + 28) = 0;
      LODWORD(v12[0]) = 2;
      v12[1] = -1LL;
      v12[2] = RtlpHpRemoteStackSerializeWriter;
      v12[3] = a1;
      HeapInformation = RtlQueryHeapInformation(0LL, 5, v12, 0x28uLL, 0LL);
      if ( HeapInformation >= 0 )
        HeapInformation = *(_DWORD *)(a1 + 28);
      if ( (v13 & 0x100) != 0 )
        *(_DWORD *)(a1 + 88) |= 1u;
    }
    else
    {
      memset(v14, 0, 0x58uLL);
      v14[1] = *(_QWORD *)(a1 + 16);
      v14[0] = -1LL;
      v14[3] = RtlpExtendedHeapInformationWorkerCallback;
      LODWORD(v14[2]) = v8;
      v14[4] = a1;
      HeapInformation = RtlQueryHeapInformation(0LL, 2, v14, 0x58uLL, 0LL);
      if ( HeapInformation >= 0 && *(int *)(a1 + 28) < 0 )
        HeapInformation = *(_DWORD *)(a1 + 28);
    }
  }
LABEL_22:
  if ( *(_QWORD *)(a1 + 48) )
    NtUnmapViewOfSection();
  if ( *(_QWORD *)a1 )
    NtClose(*(HANDLE *)a1);
  *(_DWORD *)(a1 + 28) = HeapInformation;
  RtlExitUserThread(0);
}
