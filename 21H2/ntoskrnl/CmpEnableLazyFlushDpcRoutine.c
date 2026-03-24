/*
 * XREFs of CmpEnableLazyFlushDpcRoutine @ 0x14035FDD0
 * Callers:
 *     <none>
 * Callees:
 *     CmpEnableLazyFlush @ 0x1403A7408 (CmpEnableLazyFlush.c)
 *     _local_unwind @ 0x1403D1B90 (_local_unwind.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine4 @ 0x140409C50 (KiCustomAccessRoutine4.c)
 *     memset @ 0x140414200 (memset.c)
 */

void __fastcall CmpEnableLazyFlushDpcRoutine(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  _DWORD v8[64]; // [rsp+0h] [rbp-128h] BYREF
  _DWORD *v9; // [rsp+100h] [rbp-28h]

  v9 = v8;
  memset(&v8[40], 0, 0x5DuLL);
  if ( DeferredContext >> 47 != -1 && DeferredContext >> 47 != 0 )
  {
    v8[12] = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    *(_QWORD *)((char *)&v8[61] + 1) = SystemArgument1;
    *(_QWORD *)((char *)&v8[49] + 1) = __ROL8__(DeferredContext, SystemArgument1);
    *(_QWORD *)((char *)&v8[51] + 1) = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine4(DeferredContext);
  }
  CmpEnableLazyFlush(1LL);
}
