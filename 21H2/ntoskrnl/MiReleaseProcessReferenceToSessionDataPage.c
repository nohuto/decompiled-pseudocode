/*
 * XREFs of MiReleaseProcessReferenceToSessionDataPage @ 0x140693EA8
 * Callers:
 *     MiDereferenceSessionGlobal @ 0x1405994CC (MiDereferenceSessionGlobal.c)
 *     MiGetNextSessionGlobal @ 0x1405994E4 (MiGetNextSessionGlobal.c)
 *     MmDeleteProcessAddressSpace @ 0x140693C24 (MmDeleteProcessAddressSpace.c)
 *     MiSessionObjectDelete @ 0x14096DD40 (MiSessionObjectDelete.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x1402182F8 (MiPartitionIdToPointer.c)
 *     EtwTraceKernelEvent @ 0x14035EDE4 (EtwTraceKernelEvent.c)
 *     PsDereferencePartition @ 0x1403606C4 (PsDereferencePartition.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     MiUnlinkSessionList @ 0x140599658 (MiUnlinkSessionList.c)
 *     MiFreeSessionId @ 0x14096DC98 (MiFreeSessionId.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseProcessReferenceToSessionDataPage(_QWORD *P)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  void *v4; // rcx
  void *v5; // rcx
  _QWORD *v6; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v7; // [rsp+38h] [rbp-30h]
  int v8; // [rsp+3Ch] [rbp-2Ch]
  _QWORD **v9; // [rsp+40h] [rbp-28h] BYREF
  int v10; // [rsp+48h] [rbp-20h]
  int v11; // [rsp+4Ch] [rbp-1Ch]

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 3, 0xFFFFFFFF) == 1 )
  {
    MiUnlinkSessionList(P);
    v2 = *((_DWORD *)P + 2);
    v3 = MiPartitionIdToPointer(*((_WORD *)P + 183));
    if ( (DWORD1(PerfGlobalGroupMask) & 0x400000) != 0 )
    {
      v8 = 0;
      v11 = 0;
      v9 = &v6;
      v7 = v2;
      v6 = P;
      v10 = 12;
      EtwTraceKernelEvent((__int64)&v9, 1u, 0x20400000u, 0x24Eu, 0x401802u);
    }
    PsDereferencePartition(*(_QWORD *)(v3 + 176));
    v4 = (void *)P[96];
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    MiFreeSessionId(v2);
    v5 = (void *)P[112];
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    ExFreePoolWithTag(P, 0);
  }
}
