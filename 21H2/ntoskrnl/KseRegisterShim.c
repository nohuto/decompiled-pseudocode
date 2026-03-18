/*
 * XREFs of KseRegisterShim @ 0x140825A50
 * Callers:
 *     KseInitialize @ 0x140AFFF64 (KseInitialize.c)
 *     KseVersionLieInitialize @ 0x140B003F8 (KseVersionLieInitialize.c)
 *     KseDriverScopeInitialize @ 0x140B01600 (KseDriverScopeInitialize.c)
 * Callees:
 *     KseRegisterShimEx @ 0x140825A70 (KseRegisterShimEx.c)
 */

__int64 __fastcall KseRegisterShim(__int64 a1, __int64 a2, __int64 a3)
{
  return KseRegisterShimEx(a1, a2, a3, 0LL);
}
