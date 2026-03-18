/*
 * XREFs of PiDqOpenObjectRegKey @ 0x1405D19A4
 * Callers:
 *     PiDqPropertyCallback @ 0x1405D2AD0 (PiDqPropertyCallback.c)
 *     PiDqActionDataGetRequestedProperties @ 0x1405D348C (PiDqActionDataGetRequestedProperties.c)
 *     PiDqIrpPropertySet @ 0x140714030 (PiDqIrpPropertySet.c)
 *     PiDqActionDataGetChangedProperties @ 0x14075E7E4 (PiDqActionDataGetChangedProperties.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x1408A1150 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x1408A13E0 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 * Callees:
 *     _PnpOpenObjectRegKey @ 0x1405DB1B4 (_PnpOpenObjectRegKey.c)
 *     PiDqOpenUserObjectRegKey @ 0x140645608 (PiDqOpenUserObjectRegKey.c)
 */

__int64 __fastcall PiDqOpenObjectRegKey(int a1, int a2, int a3, int a4, char a5, __int64 a6, _QWORD *a7)
{
  int v8; // r8d

  *a7 = 0LL;
  if ( !a1 )
    return PnpOpenObjectRegKey(PiPnpRtlCtx, a2, a3, a4, a5, (__int64)a7);
  if ( a1 != 1 )
    return 3221225485LL;
  v8 = a4;
  LOBYTE(a4) = a5;
  return PiDqOpenUserObjectRegKey(a2, a3, v8, a4, a6, (__int64)a7);
}
