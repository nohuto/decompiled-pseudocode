/*
 * XREFs of _UserGetWindowRect@8 @ 0x253DA
 * Callers:
 *     _GreUpdateSpriteClipRgn@16 @ 0x239F2 (_GreUpdateSpriteClipRgn@16.c)
 *     _DxgkEngGetWindowRect@8 @ 0xAD3CE (_DxgkEngGetWindowRect@8.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 */

int __fastcall UserGetWindowRect(int a1, _DWORD *a2)
{
  _DWORD *v2; // edi
  int v3; // eax
  _DWORD *v4; // esi
  int result; // eax
  _DWORD *v6; // edi

  v2 = a2;
  LOBYTE(a2) = 1;
  v3 = HMValidateHandleNoSecure(a1, a2);
  if ( !v3 )
    return 0;
  v4 = (_DWORD *)(*(_DWORD *)(v3 + 20) + 52);
  result = 1;
  *v2 = *v4++;
  v6 = v2 + 1;
  *v6 = *v4++;
  *++v6 = *v4;
  v6[1] = v4[1];
  return result;
}
