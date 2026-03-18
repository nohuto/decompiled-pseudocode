/*
 * XREFs of ?vSpUpdatePerPixelAlphaFromColorKey@@YGXPAU_SURFOBJ@@KPAU_RECTL@@PAPAE@Z @ 0x1E2C63
 * Callers:
 *     ?bSpUpdateShape@@YGHPAVSPRITE@@KPAUHDC__@@1KPAU_BLENDFUNCTION@@PAU_POINTL@@PAUtagSIZE@@PAU_RECTL@@@Z @ 0x1DE86D (-bSpUpdateShape@@YGHPAVSPRITE@@KPAUHDC__@@1KPAU_BLENDFUNCTION@@PAU_POINTL@@PAUtagSIZE@@PAU_RECTL.c)
 *     ?vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E0318 (-vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?vSpComputeClipEffective@@YGXPAVSPRITE@@AAVRGNOBJ@@@Z @ 0x1E0F06 (-vSpComputeClipEffective@@YGXPAVSPRITE@@AAVRGNOBJ@@@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ??XERECTL@@QAEAAV0@ABU_RECTL@@@Z @ 0x4F46A (--XERECTL@@QAEAAV0@ABU_RECTL@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

void __userpurge vSpUpdatePerPixelAlphaFromColorKey(
        int a1@<edx>,
        int a2@<ecx>,
        struct _SURFOBJ *a3,
        _DWORD *a4,
        struct _RECTL *a5,
        unsigned __int8 **a6)
{
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  signed int v11; // ebx
  int i; // edx
  int v13; // [esp+10h] [ebp-44h] BYREF
  int v14; // [esp+14h] [ebp-40h]
  int v15; // [esp+18h] [ebp-3Ch]
  int v16; // [esp+1Ch] [ebp-38h]
  int v17; // [esp+20h] [ebp-34h]
  unsigned int v18; // [esp+24h] [ebp-30h]
  int v19; // [esp+28h] [ebp-2Ch]
  int v20; // [esp+2Ch] [ebp-28h]
  int v21; // [esp+30h] [ebp-24h]
  void *v22; // [esp+34h] [ebp-20h]
  int v23; // [esp+38h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+3Ch] [ebp-18h]
  int v25; // [esp+5Ch] [ebp+8h]
  struct _SURFOBJ *v26; // [esp+5Ch] [ebp+8h]
  unsigned int v27; // [esp+60h] [ebp+Ch]

  v22 = 0;
  if ( *(_DWORD *)(a2 + 44) == 6 && !*(_WORD *)(a2 + 48) )
  {
    v17 = a1 & 0xFF00 | ((unsigned __int8)a1 << 16) | BYTE2(a1);
    v23 = *(_DWORD *)(a2 + 20);
    v7 = *(_DWORD *)(a2 + 16);
    v13 = 0;
    v8 = 0;
    v21 = 0;
    v14 = 0;
    v15 = v7;
    v16 = v23;
    if ( a3 )
    {
      ERECTL::operator*=(&v13, (int *)a3);
      v23 = v16;
      v7 = v15;
      v8 = v14;
      v21 = v14;
    }
    v19 = *(_DWORD *)(a2 + 36);
    v9 = v7 - v13;
    v18 = v9;
    v10 = v23 - v8;
    v23 -= v8;
    if ( a4 )
    {
      v25 = abs32(v9);
      v11 = abs32(v23);
      if ( v25 && v11 && v25 < 0x7FFFFFFF / v11 )
      {
        v22 = PALLOCMEM2(v25 * v11, 1886221383, 0);
        *a4 = v22;
        v8 = v21;
      }
      v10 = v23;
    }
    v23 = v10;
    v21 = *(_DWORD *)(a2 + 32) + v19 * v8 + 4 * v13;
    v26 = 0;
    while ( v23 )
    {
      v27 = v18;
      for ( i = v21; ; i += 4 )
      {
        v20 = i;
        if ( !v27 )
          break;
        ms_exc.registration.TryLevel = 0;
        if ( v22 )
          *((_BYTE *)&v26->dhsurf + (_DWORD)v22) = *(_BYTE *)(i + 3);
        if ( *(_DWORD *)i == v17 )
          *(_DWORD *)i = 0;
        else
          *(_BYTE *)(i + 3) = -1;
        ms_exc.registration.TryLevel = -2;
        if ( v22 )
          v26 = (struct _SURFOBJ *)((char *)v26 + 1);
        --v27;
      }
      --v23;
      v21 += v19;
    }
  }
}
