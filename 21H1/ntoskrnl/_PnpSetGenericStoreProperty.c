/*
 * XREFs of _PnpSetGenericStoreProperty @ 0x14072BE28
 * Callers:
 *     PiDqIrpPropertySet @ 0x140712180 (PiDqIrpPropertySet.c)
 *     _PnpSetObjectPropertyWorker @ 0x14072B42C (_PnpSetObjectPropertyWorker.c)
 * Callees:
 *     _PnpSetPropertyWorker @ 0x14072BE70 (_PnpSetPropertyWorker.c)
 *     _PnpDeletePropertyWorker @ 0x140758A1C (_PnpDeletePropertyWorker.c)
 */

__int64 __fastcall PnpSetGenericStoreProperty(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  if ( a5 )
    return PnpSetPropertyWorker(a1, a2, a3);
  else
    return PnpDeletePropertyWorker(a1);
}
