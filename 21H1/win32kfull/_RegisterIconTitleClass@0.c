/*
 * XREFs of _RegisterIconTitleClass@0 @ 0x82F88
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _NtUserRegisterClassExWOW@28 @ 0x6F44C (_NtUserRegisterClassExWOW@28.c)
 *     _NtUserGetClassInfoEx@20 @ 0x802EC (_NtUserGetClassInfoEx@20.c)
 * Callees:
 *     _InternalRegisterClassEx@16 @ 0x46B9C (_InternalRegisterClassEx@16.c)
 */

int __stdcall RegisterIconTitleClass()
{
  int *v0; // eax
  _DWORD v2[7]; // [esp+4h] [ebp-3Ch] BYREF
  int v3; // [esp+20h] [ebp-20h]
  int v4; // [esp+24h] [ebp-1Ch]
  int v5; // [esp+28h] [ebp-18h]
  int v6; // [esp+2Ch] [ebp-14h]
  int v7; // [esp+30h] [ebp-10h]
  int v8; // [esp+34h] [ebp-Ch]
  int v9; // [esp+38h] [ebp-8h]
  int v10; // [esp+3Ch] [ebp-4h]

  v2[6] = 0;
  v7 = 0;
  v5 = 0;
  memset(&v2[1], 0, 16);
  v2[5] = _hModuleWin;
  v9 = 0;
  v10 = 1;
  v0 = (int *)_gasyscur[1];
  if ( v0 )
    v3 = *v0;
  else
    v3 = 0;
  v4 = 0;
  v6 = 32772;
  v8 = 32772;
  if ( !InternalRegisterClassEx(v2, 667, 65, 0) )
    return 0;
  *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 8) |= 0x10000000u;
  return 1;
}
