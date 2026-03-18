/*
 * XREFs of _anonymous_namespace_::CheckTopLevelOnly @ 0x92504
 * Callers:
 *     ?NextTopWindow@FindNextTopWindow@@YGPAUtagWND@@PBU2@0W4FindOption@1@@Z @ 0x92358 (-NextTopWindow@FindNextTopWindow@@YGPAUtagWND@@PBU2@0W4FindOption@1@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall anonymous_namespace_::CheckTopLevelOnly(int a1)
{
  while ( a1 && (*(_WORD *)(*(_DWORD *)(a1 + 20) + 30) & 0x3FFF) == 0x29D )
    a1 = *(_DWORD *)(a1 + 60);
  return a1;
}
