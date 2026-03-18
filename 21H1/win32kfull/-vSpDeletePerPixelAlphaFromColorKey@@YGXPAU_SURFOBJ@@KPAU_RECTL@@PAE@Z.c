/*
 * XREFs of ?vSpDeletePerPixelAlphaFromColorKey@@YGXPAU_SURFOBJ@@KPAU_RECTL@@PAE@Z @ 0x1E11DA
 * Callers:
 *     ?vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E0318 (-vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?vSpComputeClipEffective@@YGXPAVSPRITE@@AAVRGNOBJ@@@Z @ 0x1E0F06 (-vSpComputeClipEffective@@YGXPAVSPRITE@@AAVRGNOBJ@@@Z.c)
 * Callees:
 *     ??XERECTL@@QAEAAV0@ABU_RECTL@@@Z @ 0x4F46A (--XERECTL@@QAEAAV0@ABU_RECTL@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

void __userpurge vSpDeletePerPixelAlphaFromColorKey(
        int a1@<edx>,
        int a2@<ecx>,
        struct _SURFOBJ *a3,
        unsigned int a4,
        struct _RECTL *a5,
        unsigned __int8 *a6)
{
  int v7; // ebx
  int v8; // edx
  int v9; // ecx
  int v10; // [esp+10h] [ebp-44h] BYREF
  int v11; // [esp+14h] [ebp-40h]
  int v12; // [esp+18h] [ebp-3Ch]
  int v13; // [esp+1Ch] [ebp-38h]
  int v14; // [esp+20h] [ebp-34h]
  int v15; // [esp+24h] [ebp-30h]
  int v16; // [esp+28h] [ebp-2Ch]
  int v17; // [esp+2Ch] [ebp-28h]
  int v18; // [esp+30h] [ebp-24h]
  int v19; // [esp+34h] [ebp-20h]
  int v20; // [esp+38h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+3Ch] [ebp-18h]
  struct _SURFOBJ *v22; // [esp+5Ch] [ebp+8h]

  if ( *(_DWORD *)(a2 + 44) == 6 && !*(_WORD *)(a2 + 48) )
  {
    v15 = a1 & 0xFF00 | ((unsigned __int8)a1 << 16) | BYTE2(a1);
    v7 = *(_DWORD *)(a2 + 20);
    v8 = *(_DWORD *)(a2 + 16);
    v10 = 0;
    v9 = 0;
    v11 = 0;
    v12 = v8;
    v13 = v7;
    if ( a3 )
    {
      ERECTL::operator*=(&v10, (int *)a3);
      v7 = v13;
      v8 = v12;
      v9 = v11;
    }
    v14 = *(_DWORD *)(a2 + 36);
    v16 = v8 - v10;
    v20 = 0;
    v18 = v7 - v9;
    v17 = *(_DWORD *)(a2 + 32) + v14 * v9 + 4 * v10;
    while ( v18 )
    {
      v19 = v16;
      v22 = (struct _SURFOBJ *)v17;
      while ( v19 )
      {
        ms_exc.registration.TryLevel = 0;
        if ( !v22->dhsurf )
          v22->dhsurf = (DHSURF)v15;
        if ( a4 )
          HIBYTE(v22->dhsurf) = *(_BYTE *)(v20 + a4);
        ms_exc.registration.TryLevel = -2;
        if ( a4 )
          ++v20;
        --v19;
        v22 = (struct _SURFOBJ *)((char *)v22 + 4);
      }
      --v18;
      v17 += v14;
    }
    if ( a4 )
      Win32FreePool(a4);
  }
}
