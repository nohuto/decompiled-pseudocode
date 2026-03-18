/*
 * XREFs of ?ForegroundInputOwnerMatch@@YGHPBUtagTHREADINFO@@H@Z @ 0x11182
 * Callers:
 *     ?InForegroundQueue@@YGHPBUtagTHREADINFO@@H@Z @ 0x1112C (-InForegroundQueue@@YGHPBUtagTHREADINFO@@H@Z.c)
 *     _NtUserOpenClipboard@8 @ 0x116D0 (_NtUserOpenClipboard@8.c)
 *     _NtUserSetClipboardData@12 @ 0x168BC2 (_NtUserSetClipboardData@12.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall ForegroundInputOwnerMatch(int a1, int a2)
{
  int v3; // esi
  int v4; // edx
  int v5; // edx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  BOOL result; // eax

  v3 = 0;
  v4 = *(_DWORD *)(_gpqForeground + 52);
  if ( v4 )
    v5 = *(_DWORD *)(v4 + 232);
  else
    v5 = 0;
  v6 = *(_DWORD *)(_gpqForeground + 48);
  if ( v6 )
    v3 = *(_DWORD *)(v6 + 232);
  v7 = *(_DWORD *)(a1 + 232);
  result = 1;
  if ( v5 != v7 && v3 != v7 )
  {
    v8 = *(_DWORD *)(v7 + 500);
    if ( !a2 || !v8 )
      return 0;
    if ( *(_DWORD *)(_gpqForeground + 320) != v8
      && (!v5 || *(_DWORD *)(v5 + 500) != v8)
      && (!v3 || *(_DWORD *)(v3 + 500) != v8) )
    {
      return 0;
    }
  }
  return result;
}
