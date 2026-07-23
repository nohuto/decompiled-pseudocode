/*
 * XREFs of PiDqOpenObjectRegKey @ 0x1406077B8
 * Callers:
 *     PiDqPropertyCallback @ 0x14062D300 (PiDqPropertyCallback.c)
 *     PiDqActionDataGetRequestedProperties @ 0x14062F90C (PiDqActionDataGetRequestedProperties.c)
 *     PiDqIrpPropertySet @ 0x14072682C (PiDqIrpPropertySet.c)
 *     PiDqActionDataGetChangedProperties @ 0x140771334 (PiDqActionDataGetChangedProperties.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x1408A43B0 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x1408A4640 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 * Callees:
 *     PiDqOpenUserObjectRegKey @ 0x140607838 (PiDqOpenUserObjectRegKey.c)
 *     _PnpOpenObjectRegKey @ 0x14062C674 (_PnpOpenObjectRegKey.c)
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
