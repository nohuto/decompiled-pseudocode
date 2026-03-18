/*
 * XREFs of _anonymous_namespace_::NTW_GetNextTop @ 0x92470
 * Callers:
 *     ?NextTopWindow@FindNextTopWindow@@YGPAUtagWND@@PBU2@0W4FindOption@1@@Z @ 0x92358 (-NextTopWindow@FindNextTopWindow@@YGPAUtagWND@@PBU2@0W4FindOption@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GNT_NextTopScan @ 0x924A6 (_anonymous_namespace_--GNT_NextTopScan.c)
 */

int __fastcall anonymous_namespace_::NTW_GetNextTop(int a1, int a2)
{
  int v2; // esi
  int result; // eax

  v2 = a2;
  if ( !a2 )
    return anonymous_namespace_::GNT_NextTopScan(0);
  while ( 1 )
  {
    result = anonymous_namespace_::GNT_NextTopScan(v2);
    if ( result )
      break;
    if ( !v2 )
      return anonymous_namespace_::GNT_NextTopScan(0);
    v2 = *(_DWORD *)(v2 + 64);
  }
  return result;
}
