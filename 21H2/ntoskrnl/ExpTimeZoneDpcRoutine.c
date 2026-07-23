/*
 * XREFs of ExpTimeZoneDpcRoutine @ 0x140394D40
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140285C94 (PsGetServerSiloGlobals.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     PsIsHostSilo @ 0x14035F7D0 (PsIsHostSilo.c)
 *     _local_unwind @ 0x1403D1D00 (_local_unwind.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine8 @ 0x14040A2B0 (KiCustomAccessRoutine8.c)
 *     memset @ 0x140414300 (memset.c)
 */

void __fastcall ExpTimeZoneDpcRoutine(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v8; // rcx
  __int64 v9; // rdi
  _DWORD v10[90]; // [rsp+0h] [rbp-178h] BYREF
  _DWORD *v11; // [rsp+168h] [rbp-10h]

  v11 = v10;
  memset(&v10[44], 0, 0x61uLL);
  if ( a2 >> 47 != -1 && a2 >> 47 != 0 )
  {
    v10[12] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    *(_QWORD *)((char *)&v10[66] + 1) = a3;
    *(_QWORD *)((char *)&v10[62] + 1) = __ROL8__(a2, a3);
    *(_QWORD *)((char *)&v10[48] + 1) = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine8(a2);
  }
  v9 = *((_QWORD *)PsGetServerSiloGlobals(a2) + 133);
  if ( _InterlockedIncrement((volatile signed __int32 *)(v9 + 928)) == 1 )
  {
    if ( !PsIsHostSilo(v8) )
      ObfReferenceObjectWithTag((PVOID)a2, 0x53707845u);
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v9 + 576), DelayedWorkQueue);
  }
}
