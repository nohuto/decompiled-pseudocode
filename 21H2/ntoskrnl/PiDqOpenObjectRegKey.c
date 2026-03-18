/*
 * XREFs of PiDqOpenObjectRegKey @ 0x14069984C
 * Callers:
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x140698510 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetChangedProperties @ 0x140699E6C (PiDqActionDataGetChangedProperties.c)
 *     PiDqIrpPropertySet @ 0x14076DD0C (PiDqIrpPropertySet.c)
 *     PiDqActionDataGetRequestedProperties @ 0x140776EE8 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqPropertyCallback @ 0x1407770E0 (PiDqPropertyCallback.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x14094A034 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 * Callees:
 *     PiDqOpenUserObjectRegKey @ 0x1406998CC (PiDqOpenUserObjectRegKey.c)
 *     _PnpOpenObjectRegKey @ 0x14077C924 (_PnpOpenObjectRegKey.c)
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
