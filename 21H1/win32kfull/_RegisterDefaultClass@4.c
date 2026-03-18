/*
 * XREFs of _RegisterDefaultClass@4 @ 0x70420
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _NtUserRegisterClassExWOW@28 @ 0x6F44C (_NtUserRegisterClassExWOW@28.c)
 *     _NtUserGetClassInfoEx@20 @ 0x802EC (_NtUserGetClassInfoEx@20.c)
 * Callees:
 *     _InternalRegisterClassEx@16 @ 0x46B9C (_InternalRegisterClassEx@16.c)
 */

int __fastcall RegisterDefaultClass(wchar_t *a1)
{
  wchar_t *v1; // edx
  int v2; // eax
  unsigned __int8 IntegerAtom; // al
  int v4; // eax
  int v5; // edi
  unsigned int v6; // esi
  bool v7; // zf
  int *v9; // eax
  _DWORD v10[7]; // [esp+Ch] [ebp-50h] BYREF
  int v11; // [esp+28h] [ebp-34h]
  int v12; // [esp+2Ch] [ebp-30h]
  int v13; // [esp+30h] [ebp-2Ch]
  int v14; // [esp+34h] [ebp-28h]
  int v15; // [esp+38h] [ebp-24h]
  int v16; // [esp+3Ch] [ebp-20h]
  int v17; // [esp+40h] [ebp-1Ch]
  int v18; // [esp+44h] [ebp-18h]
  int v19; // [esp+48h] [ebp-14h]
  wchar_t *Str1; // [esp+4Ch] [ebp-10h]
  int v21; // [esp+50h] [ebp-Ch]
  int v22; // [esp+54h] [ebp-8h] BYREF
  int v23; // [esp+58h] [ebp-4h]

  v1 = a1;
  Str1 = a1;
  v2 = *(_DWORD *)(_gptiCurrent + 264) & 4;
  v19 = 1;
  v23 = v2;
  v22 = 0;
  v21 = ((unsigned int)a1 & 0xFFFF0000) == 0;
  if ( ((unsigned int)a1 & 0xFFFF0000) != 0 )
  {
    IntegerAtom = RtlGetIntegerAtom(a1, &v22);
    v1 = Str1;
    v21 = IntegerAtom;
  }
  else
  {
    v22 = (unsigned __int16)a1;
  }
  v4 = v23;
  v5 = 0;
  v6 = 0;
  while ( v4 && (gDefaultServerClasses[v6] & 1) == 0 )
  {
LABEL_9:
    v6 += 7;
    ++v5;
    if ( v6 >= 56 )
      goto LABEL_17;
    v1 = Str1;
  }
  if ( ((*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 476) >> v5) & 1) != 0 )
  {
LABEL_8:
    v4 = v23;
    goto LABEL_9;
  }
  v19 = 0;
  if ( v21 )
  {
    v7 = (_WORD)v22 == *(_WORD *)(_gpsi + 2 * (((unsigned int)gDefaultServerClasses[v6] >> 3) & 0x1F) + 468);
  }
  else
  {
    if ( (dword_24CC60[v6] & 0xFFFF0000) == 0 )
      goto LABEL_8;
    v7 = __wcsicmp(v1, (const wchar_t *)dword_24CC60[v6]) == 0;
  }
  if ( !v7 )
    goto LABEL_8;
  v10[3] = 0;
  v10[5] = _hModuleWin;
  v10[6] = 0;
  v15 = 0;
  v13 = 0;
  v7 = (gDefaultServerClasses[7 * v5] & 2) == 0;
  v10[1] = dword_24CC50[7 * v5];
  v10[2] = dword_24CC54[7 * v5];
  v17 = dword_24CC58[7 * v5];
  v10[4] = 0;
  v18 = 1;
  if ( v7 || (v9 = (int *)_gasyscur[1]) == 0 )
    v11 = 0;
  else
    v11 = *v9;
  v12 = dword_24CC5C[7 * v5];
  v14 = dword_24CC60[7 * v5];
  v16 = v14;
  if ( !InternalRegisterClassEx(v10, word_24CC4C[14 * v5], word_24CC4E[14 * v5] | 0x41, 0) )
    return 0;
  *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 476) |= 1 << v5;
LABEL_17:
  if ( v19 )
    *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 8) |= 0x2000u;
  return 1;
}
