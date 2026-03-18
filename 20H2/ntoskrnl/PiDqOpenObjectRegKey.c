/*
 * XREFs of PiDqOpenObjectRegKey @ 0x1406D3940
 * Callers:
 *     PiDqPropertyCallback @ 0x140641490 (PiDqPropertyCallback.c)
 *     PiDqActionDataGetRequestedProperties @ 0x140645738 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqIrpPropertySet @ 0x14072A3CC (PiDqIrpPropertySet.c)
 *     PiDqActionDataGetChangedProperties @ 0x14076CE54 (PiDqActionDataGetChangedProperties.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x1408A6C80 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x1408A6F10 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 * Callees:
 *     _PnpOpenObjectRegKey @ 0x14063FA94 (_PnpOpenObjectRegKey.c)
 *     PiDqOpenUserObjectRegKey @ 0x1406D39C0 (PiDqOpenUserObjectRegKey.c)
 */

__int64 __fastcall PiDqOpenObjectRegKey(int a1, __int64 a2, unsigned int a3, int a4, char a5, __int64 a6, _QWORD *a7)
{
  int v8; // r8d

  *a7 = 0LL;
  if ( !a1 )
    return PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, a2, a3, a4, a5, (__int64)a7);
  if ( a1 != 1 )
    return 3221225485LL;
  v8 = a4;
  LOBYTE(a4) = a5;
  return PiDqOpenUserObjectRegKey(a2, a3, v8, a4, a6, (__int64)a7);
}
