/*
 * XREFs of ?PanEnableSurface@@YGPAUHSURF__@@PAUDHPDEV__@@@Z @ 0x1F5CE7
 * Callers:
 *     <none>
 * Callees:
 *     ??1PANDEVLOCK@@QAE@XZ @ 0x1F569A (--1PANDEVLOCK@@QAE@XZ.c)
 *     ?PanSynchronize@@YGXPAUDHPDEV__@@PAU_RECTL@@@Z @ 0x1F6656 (-PanSynchronize@@YGXPAUDHPDEV__@@PAU_RECTL@@@Z.c)
 */

HSURF __stdcall PanEnableSurface(SIZEL *a1)
{
  LONG cx; // esi
  LONG cy; // edx
  int v3; // eax
  int v4; // ecx
  LONG v5; // eax
  HSEMAPHORE v6; // esi
  HSURF v7; // eax
  SURFOBJ *v8; // eax
  DHPDEV v9; // ecx
  HSURF DeviceSurface; // edi
  SURFOBJ *v11; // eax
  HSURF v12; // esi
  HDEV v14; // [esp-1Ch] [ebp-54h]
  HDEV v15; // [esp-8h] [ebp-40h]
  LONG v16; // [esp+10h] [ebp-28h]
  SURFOBJ *v17; // [esp+10h] [ebp-28h]
  SIZEL sizl; // [esp+14h] [ebp-24h] BYREF
  SURFOBJ *pso; // [esp+1Ch] [ebp-1Ch]
  LONG v20; // [esp+20h] [ebp-18h] BYREF
  int v21; // [esp+24h] [ebp-14h]
  LONG v22; // [esp+28h] [ebp-10h] BYREF
  int v23; // [esp+2Ch] [ebp-Ch]
  LONG v24; // [esp+30h] [ebp-8h] BYREF
  int v25; // [esp+34h] [ebp-4h]

  cx = a1->cx;
  cy = a1->cy;
  v3 = (a1[1].cx - a1->cx) >> 1;
  v4 = (a1[1].cy - cy) >> 1;
  a1[2].cx = v3;
  v5 = cx + v3;
  v6 = (HSEMAPHORE)a1[9].cy;
  a1[3].cx = v5;
  a1[2].cy = v4;
  a1[3].cy = v4 + cy;
  sizl.cy = (LONG)v6;
  EngAcquireSemaphore(v6);
  v7 = (HSURF)((int (__stdcall *)(LONG))a1[54].cx)(a1[4].cx);
  if ( !v7 )
  {
LABEL_30:
    v12 = 0;
    goto LABEL_31;
  }
  v8 = EngLockSurface(v7);
  pso = v8;
  if ( !v8 )
  {
LABEL_27:
    if ( v6 )
    {
      EngReleaseSemaphore(v6);
      sizl.cy = 0;
    }
    ((void (__stdcall *)(LONG))a1[54].cy)(a1[4].cx);
    goto LABEL_30;
  }
  v8[1].hsurf = (HSURF)((int)v8[1].hsurf & ~0x1000u);
  v9 = (DHPDEV)a1[4].cx;
  a1[7].cx = (LONG)v8;
  v8->dhpdev = v9;
  sizl.cx = a1[1].cx;
  v16 = a1[1].cy;
  DeviceSurface = EngCreateDeviceSurface(0, a1[1], a1[4].cy);
  if ( !DeviceSurface )
  {
LABEL_26:
    EngUnlockSurface(pso);
    goto LABEL_27;
  }
  v14 = (HDEV)a1[5].cy;
  a1[6].cx = (LONG)DeviceSurface;
  if ( !EngModifySurface(DeviceSurface, v14, (FLONG)&loc_394AB, 3u, (DHSURF)&a1[6], 0, 0, 0) )
  {
LABEL_25:
    EngDeleteSurface(DeviceSurface);
    goto LABEL_26;
  }
  sizl.cx = (LONG)EngCreateBitmap((SIZEL)__PAIR64__(v16, sizl.cx), sizl.cx, a1[4].cy, 1u, 0);
  v11 = EngLockSurface((HSURF)sizl.cx);
  v17 = v11;
  if ( !v11 )
  {
LABEL_24:
    EngUnlockSurface(v11);
    EngDeleteSurface((HSURF)sizl.cx);
    goto LABEL_25;
  }
  v15 = (HDEV)a1[5].cy;
  a1[6].cy = (LONG)v11;
  if ( !EngAssociateSurface((HSURF)sizl.cx, v15, 0) )
  {
LABEL_23:
    v11 = v17;
    goto LABEL_24;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v22);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v20);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v24);
  if ( !v20 || !v22 || !v24 )
  {
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v22);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v24);
    if ( v25 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v24);
    if ( v21 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
    if ( v23 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v22);
    goto LABEL_23;
  }
  RGNOBJ::vSet((RGNOBJ *)&v22);
  RGNOBJ::vSet((RGNOBJ *)&v20);
  a1[7].cy = v22;
  a1[8].cx = v20;
  a1[8].cy = v24;
  PanSynchronize((struct DHPDEV__ *)a1, 0);
  if ( v25 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v24);
  if ( v21 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
  if ( v23 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v22);
  v12 = DeviceSurface;
LABEL_31:
  PANDEVLOCK::~PANDEVLOCK((HSEMAPHORE *)&sizl.cy);
  return v12;
}
