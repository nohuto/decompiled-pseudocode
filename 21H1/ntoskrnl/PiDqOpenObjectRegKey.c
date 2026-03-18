/*
 * XREFs of PiDqOpenObjectRegKey @ 0x14068052C
 * Callers:
 *     PiDqActionDataGetRequestedProperties @ 0x1406A1B88 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqPropertyCallback @ 0x1406ABB40 (PiDqPropertyCallback.c)
 *     PiDqIrpPropertySet @ 0x140712180 (PiDqIrpPropertySet.c)
 *     PiDqActionDataGetChangedProperties @ 0x14075C394 (PiDqActionDataGetChangedProperties.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x14089FE30 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x1408A00C0 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 * Callees:
 *     PiDqOpenUserObjectRegKey @ 0x140680718 (PiDqOpenUserObjectRegKey.c)
 *     _PnpOpenObjectRegKey @ 0x1406A97E4 (_PnpOpenObjectRegKey.c)
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
