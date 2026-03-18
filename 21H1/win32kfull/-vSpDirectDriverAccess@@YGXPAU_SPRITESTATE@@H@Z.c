/*
 * XREFs of ?vSpDirectDriverAccess@@YGXPAU_SPRITESTATE@@H@Z @ 0x3061A
 * Callers:
 *     ??0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z @ 0x304FA (--0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QAE@XZ @ 0x305EC (--1SPRITEDDIACCESS@@QAE@XZ.c)
 *     ??1MULTISPRITEDDIACCESS@@QAE@XZ @ 0x9EFFA (--1MULTISPRITEDDIACCESS@@QAE@XZ.c)
 *     ??0MULTISPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z @ 0x9F02C (--0MULTISPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z.c)
 *     ?bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z @ 0xA0A28 (-bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z.c)
 *     ?bSpUpdateShape@@YGHPAVSPRITE@@KPAUHDC__@@1KPAU_BLENDFUNCTION@@PAU_POINTL@@PAUtagSIZE@@PAU_RECTL@@@Z @ 0x1DE86D (-bSpUpdateShape@@YGHPAVSPRITE@@KPAUHDC__@@1KPAU_BLENDFUNCTION@@PAU_POINTL@@PAUtagSIZE@@PAU_RECTL.c)
 * Callees:
 *     ?vSpTlSpriteStateDirectDriverAccess@@YGXPAU_SPRITESTATE@@H@Z @ 0x3099C (-vSpTlSpriteStateDirectDriverAccess@@YGXPAU_SPRITESTATE@@H@Z.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 */

void __fastcall vSpDirectDriverAccess(_DWORD *a1, int a2)
{
  int v3; // esi
  int *ThreadWin32Thread; // eax
  int v5; // eax
  int *v6; // eax
  int v7; // ecx
  int *v8; // eax
  int v9; // ecx
  int *v10; // eax
  int *v11; // eax
  int *v12; // eax
  int *v13; // eax
  PKTHREAD v14; // ebx
  int *v15; // eax
  int *v16; // eax
  int v17; // ecx
  int *v18; // eax
  int v19; // ecx
  int *v20; // eax
  int *v21; // eax
  int *v22; // eax
  int *v23; // eax
  int v24; // ebx
  int *v25; // eax
  struct _SPRITESTATE *v26; // [esp+0h] [ebp-20h]
  int v27; // [esp+4h] [ebp-1Ch]
  PKTHREAD v28; // [esp+Ch] [ebp-14h]
  PKTHREAD v29; // [esp+Ch] [ebp-14h]
  PKTHREAD v30; // [esp+Ch] [ebp-14h]
  PKTHREAD v31; // [esp+Ch] [ebp-14h]
  PKTHREAD v32; // [esp+Ch] [ebp-14h]
  PKTHREAD v33; // [esp+Ch] [ebp-14h]
  PKTHREAD v34; // [esp+Ch] [ebp-14h]
  PKTHREAD v35; // [esp+Ch] [ebp-14h]
  PKTHREAD v36; // [esp+Ch] [ebp-14h]
  PKTHREAD v37; // [esp+Ch] [ebp-14h]
  int v39; // [esp+10h] [ebp-10h]
  int v40; // [esp+10h] [ebp-10h]
  PKTHREAD CurrentThread; // [esp+14h] [ebp-Ch]
  PKTHREAD v42; // [esp+14h] [ebp-Ch]
  PKTHREAD v43; // [esp+14h] [ebp-Ch]
  PKTHREAD v44; // [esp+14h] [ebp-Ch]
  int v45; // [esp+14h] [ebp-Ch]
  int v46; // [esp+14h] [ebp-Ch]
  int v47; // [esp+14h] [ebp-Ch]
  int v48; // [esp+14h] [ebp-Ch]
  int v49; // [esp+18h] [ebp-8h]
  int v50; // [esp+18h] [ebp-8h]
  int v51; // [esp+18h] [ebp-8h]
  int v52; // [esp+1Ch] [ebp-4h] BYREF

  v52 = *a1;
  v3 = 0;
  CurrentThread = KeGetCurrentThread();
  v49 = 0;
  if ( IsThreadCrossSessionAttached() || (ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread)) == 0 )
  {
    v5 = 0;
  }
  else
  {
    v5 = *ThreadWin32Thread;
    v49 = v5;
  }
  if ( a2 )
  {
    if ( v5 && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v52) && (*(_DWORD *)(v49 + 52) || *(_DWORD *)(v49 + 56)) )
    {
      v42 = KeGetCurrentThread();
      if ( IsThreadCrossSessionAttached() || (v6 = (int *)PsGetThreadWin32Thread(v42)) == 0 )
        v7 = 0;
      else
        v7 = *v6;
      *(_DWORD *)(*(_DWORD *)(v7 + 156) + 4) = a1[15];
      v43 = KeGetCurrentThread();
      if ( IsThreadCrossSessionAttached() || (v8 = (int *)PsGetThreadWin32Thread(v43)) == 0 )
        v9 = 0;
      else
        v9 = *v8;
      *(_DWORD *)(*(_DWORD *)(v9 + 156) + 8) = a1[16];
      v44 = KeGetCurrentThread();
      v50 = 0;
      if ( !IsThreadCrossSessionAttached() )
      {
        v10 = (int *)PsGetThreadWin32Thread(v44);
        if ( v10 )
          v50 = *v10;
      }
      v28 = KeGetCurrentThread();
      v45 = 0;
      if ( !IsThreadCrossSessionAttached() )
      {
        v11 = (int *)PsGetThreadWin32Thread(v28);
        if ( v11 )
          v45 = *v11;
      }
      *(_DWORD *)(*(_DWORD *)(v45 + 156) + 20) = *(_DWORD *)(*(_DWORD *)(v50 + 156) + 4);
      v29 = KeGetCurrentThread();
      v46 = 0;
      if ( !IsThreadCrossSessionAttached() )
      {
        v12 = (int *)PsGetThreadWin32Thread(v29);
        if ( v12 )
          v46 = *v12;
      }
      v30 = KeGetCurrentThread();
      v51 = 0;
      if ( !IsThreadCrossSessionAttached() )
      {
        v13 = (int *)PsGetThreadWin32Thread(v30);
        if ( v13 )
          v51 = *v13;
      }
      *(_DWORD *)(*(_DWORD *)(v51 + 156) + 24) = *(_DWORD *)(*(_DWORD *)(v46 + 156) + 8);
      vSpTlSpriteStateDirectDriverAccess(v26, v27);
      v14 = KeGetCurrentThread();
      if ( !IsThreadCrossSessionAttached() )
      {
        v15 = (int *)PsGetThreadWin32Thread(v14);
        if ( v15 )
          v3 = *v15;
      }
      **(_DWORD **)(v3 + 156) = 1;
    }
    else
    {
      PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v52);
      *(_DWORD *)(a1[4] + 56) = a1[15];
      *(_WORD *)(a1[4] + 48) = *((_WORD *)a1 + 32);
      a1[14] = 1;
    }
  }
  else if ( v5 && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v52) && (*(_DWORD *)(v49 + 52) || *(_DWORD *)(v49 + 56)) )
  {
    v31 = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached() || (v16 = (int *)PsGetThreadWin32Thread(v31)) == 0 )
      v17 = 0;
    else
      v17 = *v16;
    *(_DWORD *)(*(_DWORD *)(v17 + 156) + 12) = a1[17];
    v32 = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached() || (v18 = (int *)PsGetThreadWin32Thread(v32)) == 0 )
      v19 = 0;
    else
      v19 = *v18;
    *(_DWORD *)(*(_DWORD *)(v19 + 156) + 16) = a1[18];
    v33 = KeGetCurrentThread();
    v39 = 0;
    if ( !IsThreadCrossSessionAttached() )
    {
      v20 = (int *)PsGetThreadWin32Thread(v33);
      if ( v20 )
        v39 = *v20;
    }
    v34 = KeGetCurrentThread();
    v47 = 0;
    if ( !IsThreadCrossSessionAttached() )
    {
      v21 = (int *)PsGetThreadWin32Thread(v34);
      if ( v21 )
        v47 = *v21;
    }
    *(_DWORD *)(*(_DWORD *)(v47 + 156) + 20) = *(_DWORD *)(*(_DWORD *)(v39 + 156) + 12);
    v35 = KeGetCurrentThread();
    v40 = 0;
    if ( !IsThreadCrossSessionAttached() )
    {
      v22 = (int *)PsGetThreadWin32Thread(v35);
      if ( v22 )
        v40 = *v22;
    }
    v36 = KeGetCurrentThread();
    v48 = 0;
    if ( !IsThreadCrossSessionAttached() )
    {
      v23 = (int *)PsGetThreadWin32Thread(v36);
      if ( v23 )
        v48 = *v23;
    }
    *(_DWORD *)(*(_DWORD *)(v48 + 156) + 24) = *(_DWORD *)(*(_DWORD *)(v40 + 156) + 16);
    vSpTlSpriteStateDirectDriverAccess(v26, v27);
    v37 = KeGetCurrentThread();
    v24 = 0;
    if ( !IsThreadCrossSessionAttached() )
    {
      v25 = (int *)PsGetThreadWin32Thread(v37);
      if ( v25 )
        v24 = *v25;
    }
    **(_DWORD **)(v24 + 156) = 0;
  }
  else
  {
    PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v52);
    *(_DWORD *)(a1[4] + 56) = a1[17];
    *(_WORD *)(a1[4] + 48) = *((_WORD *)a1 + 36);
    a1[14] = 0;
  }
}
