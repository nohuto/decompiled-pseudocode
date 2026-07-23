/*
 * XREFs of ExpCenturyDpcRoutine @ 0x1402A4890
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140285C94 (PsGetServerSiloGlobals.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     PsIsHostSilo @ 0x14035F7D0 (PsIsHostSilo.c)
 *     _local_unwind @ 0x1403D1D00 (_local_unwind.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine9 @ 0x14040A370 (KiCustomAccessRoutine9.c)
 *     memset @ 0x140414300 (memset.c)
 */

void __fastcall ExpCenturyDpcRoutine(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v8; // rdi
  _DWORD v9[86]; // [rsp+0h] [rbp-168h] BYREF
  _DWORD *v10; // [rsp+158h] [rbp-10h]

  v10 = v9;
  memset(&v9[40], 0, 0x62uLL);
  if ( a2 >> 47 != -1 && a2 >> 47 != 0 )
  {
    v9[12] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    *(_QWORD *)((char *)&v9[62] + 2) = a3;
    *(_QWORD *)((char *)&v9[60] + 2) = __ROL8__(a2, a3);
    *(_QWORD *)((char *)&v9[42] + 2) = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine9(a2);
  }
  v8 = *((_QWORD *)PsGetServerSiloGlobals(a2) + 133);
  if ( _InterlockedIncrement((volatile signed __int32 *)(v8 + 928)) == 1 )
  {
    if ( !(unsigned __int8)PsIsHostSilo() )
      ObfReferenceObjectWithTag((PVOID)a2, 0x53707845u);
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v8 + 736), DelayedWorkQueue);
  }
}
