/*
 * XREFs of _EditionKeyEventLLHook@48 @ 0x1292C
 * Callers:
 *     <none>
 * Callees:
 *     _PhkFirstValid@8 @ 0x12974 (_PhkFirstValid@8.c)
 *     ?xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z @ 0x6A7C0 (-xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z.c)
 *     _HasHidTable@4 @ 0x7498A (_HasHidTable@4.c)
 *     ?IsGpqForegroundAccessibleExplicit@@YGHHPAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0xA4996 (-IsGpqForegroundAccessibleExplicit@@YGHHPAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 *     _IsUninterceptable@8 @ 0xB17D0 (_IsUninterceptable@8.c)
 *     _IsSAS@8 @ 0xB1D3C (_IsSAS@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

BOOL __stdcall EditionKeyEventLLHook(
        _DWORD *a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        struct tagHOOK *a4,
        unsigned __int8 a5,
        unsigned __int16 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        _DWORD *a12)
{
  int Valid; // edx
  unsigned __int16 v14; // bx
  int v15; // eax
  int v16; // ecx
  int v17; // ebx
  int v18; // eax
  int v19; // ebx
  int v20; // ecx
  int *v21; // [esp+0h] [ebp-3Ch]
  bool v22; // [esp+4h] [ebp-38h]
  unsigned int v23; // [esp+10h] [ebp-2Ch] BYREF
  int v24; // [esp+14h] [ebp-28h] BYREF
  int v25; // [esp+18h] [ebp-24h]
  int v26; // [esp+1Ch] [ebp-20h]
  unsigned __int8 v27; // [esp+23h] [ebp-19h]
  int v28[5]; // [esp+24h] [ebp-18h] BYREF

  v27 = a5;
  Valid = PhkFirstValid(a1, 13);
  v24 = Valid;
  if ( !Valid )
    return 0;
  v23 = 0;
  v14 = a2;
  v26 = a2;
  if ( _gpqForeground )
  {
    v15 = *(_DWORD *)(_gpqForeground + 64);
    v16 = v15 ? *(_DWORD *)(v15 + 8) : *(_DWORD *)(_gpqForeground + 52);
    if ( v16 )
    {
      v17 = *(_DWORD *)(v16 + 232);
      if ( v17 == *(_DWORD *)(*(_DWORD *)(Valid + 8) + 232)
        && (PVOID)_grpdeskRitInput != grpdeskLogon
        && HasHidTable(v16)
        && (*(_BYTE *)(*(_DWORD *)(v17 + 472) + 52) & 0x10) != 0 )
      {
        return 0;
      }
      v14 = v26;
    }
  }
  if ( (struct tagHOOK *)a3 != a4 )
    v14 = a2 | 0x2000;
  v28[0] = v27;
  v28[1] = a6;
  v28[3] = a9;
  v28[4] = a10;
  v26 = a1[193];
  v18 = a1[194];
  v28[2] = (a8 != 0 ? 0x10 : 0) | HIBYTE(v14) | (a7 != 0 ? 0x80 : 0);
  v25 = v18;
  if ( !a8 || a11 )
  {
    a1[193] = -1;
    a1[194] = -1;
  }
  else
  {
    a1[193] = *a12;
    a1[194] = a12[1];
  }
  v19 = a1[197];
  a1[197] = v28;
  if ( !xxxCallHook2(a4, (int)v28, (unsigned int)&v23, 0, v21, v22)
    || (LOBYTE(v20) = v27, a1[193] = v26, a1[194] = v25, IsSAS(v20, &v24))
    || IsUninterceptable() )
  {
    a1[193] = v26;
    a1[194] = v25;
    a1[197] = v19;
    return !IsGpqForegroundAccessibleExplicit(a8, a1, a11, *a12, a12[1]);
  }
  a1[197] = v19;
  return 1;
}
