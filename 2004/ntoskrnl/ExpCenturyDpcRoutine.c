/*
 * XREFs of ExpCenturyDpcRoutine @ 0x140328D70
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloGlobals @ 0x14026D714 (PsGetServerSiloGlobals.c)
 *     PsIsHostSilo @ 0x140291F70 (PsIsHostSilo.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 *     _local_unwind @ 0x1403CE590 (_local_unwind.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine9 @ 0x1404016F0 (KiCustomAccessRoutine9.c)
 *     memset @ 0x14040A280 (memset.c)
 */

void __fastcall ExpCenturyDpcRoutine(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v8; // rcx
  __int64 v9; // rdi
  _DWORD v10[86]; // [rsp+0h] [rbp-168h] BYREF
  _DWORD *v11; // [rsp+158h] [rbp-10h]

  v11 = v10;
  memset(&v10[40], 0, 0x62uLL);
  if ( a2 >> 47 != -1 && a2 >> 47 != 0 )
  {
    v10[12] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    *(_QWORD *)((char *)&v10[62] + 2) = a3;
    *(_QWORD *)((char *)&v10[60] + 2) = __ROL8__(a2, a3);
    *(_QWORD *)((char *)&v10[42] + 2) = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine9(a2);
  }
  v9 = *((_QWORD *)PsGetServerSiloGlobals(a2) + 132);
  if ( _InterlockedIncrement((volatile signed __int32 *)(v9 + 928)) == 1 )
  {
    if ( !PsIsHostSilo(v8) )
      ObfReferenceObjectWithTag((PVOID)a2, 0x53707845u);
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v9 + 736), DelayedWorkQueue);
  }
}
