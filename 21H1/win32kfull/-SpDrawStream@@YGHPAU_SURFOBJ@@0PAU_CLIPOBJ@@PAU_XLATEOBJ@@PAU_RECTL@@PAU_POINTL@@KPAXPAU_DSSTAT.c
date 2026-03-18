/*
 * XREFs of ?SpDrawStream@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@KPAXPAU_DSSTATE@@@Z @ 0x1DB598
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@ENUMUNDERLAYS@@QAEHPAPAU_SURFOBJ@@PAU_POINTL@@PAPAU_CLIPOBJ@@@Z @ 0x66A00 (-bEnum@ENUMUNDERLAYS@@QAEHPAPAU_SURFOBJ@@PAU_POINTL@@PAPAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x66EB0 (--0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QAEHPAPAU_CLIPOBJ@@@Z @ 0xCAC18 (-bRender@NEEDDDILOCK@@QAEHPAPAU_CLIPOBJ@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _OffDrawStream@44 @ 0x22EFE7 (_OffDrawStream@44.c)
 */

int __stdcall SpDrawStream(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6,
        unsigned int a7,
        void *a8,
        struct _DSSTATE *a9)
{
  int v9; // edi
  HDEV hdev; // eax
  LONG *p_lDelta; // esi
  LONG *v12; // ebx
  HSURF hsurf; // ecx
  HDEV v15; // [esp-4h] [ebp-2ECh]
  struct _CLIPOBJ *v16; // [esp+Ch] [ebp-2DCh] BYREF
  struct _SURFOBJ *v17; // [esp+10h] [ebp-2D8h] BYREF
  LONG *v18; // [esp+14h] [ebp-2D4h] BYREF
  struct _POINTL v19; // [esp+18h] [ebp-2D0h] BYREF
  int v20; // [esp+20h] [ebp-2C8h]
  int v21; // [esp+24h] [ebp-2C4h]
  int v22; // [esp+28h] [ebp-2C0h]
  int v23; // [esp+2Ch] [ebp-2BCh]
  int v24; // [esp+30h] [ebp-2B8h]
  int v25; // [esp+34h] [ebp-2B4h]
  struct _RECTL v26[42]; // [esp+38h] [ebp-2B0h] BYREF

  v19.x = 0;
  v19.y = 0;
  v24 = (int)a4;
  v22 = (int)a6;
  v21 = (int)a8;
  v9 = 1;
  v20 = (int)a9;
  hdev = a2->hdev;
  v17 = a1;
  v25 = (int)a2;
  v16 = a3;
  v23 = (int)a5;
  if ( hdev && *((struct _SURFOBJ **)hdev + 20) == a2 )
  {
    _DbgPrint("SpDrawStream: source is the screen, this should never happen\n");
  }
  else
  {
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v26, a1, a3, a5);
    while ( ENUMUNDERLAYS::bEnum(v26, &v17, &v19, &v16) )
    {
      p_lDelta = 0;
      v12 = 0;
      v18 = 0;
      if ( v17 )
      {
        hsurf = v17[1].hsurf;
        if ( ((unsigned int)hsurf & 0x80004000) != 0 && ((unsigned __int16)hsurf & 0x200) == 0 )
        {
          p_lDelta = &v17[-1].lDelta;
          v15 = v17->hdev;
          v18 = &v17[-1].lDelta;
          GreLockDisplayDevice(v15);
          v12 = p_lDelta;
        }
      }
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v18, &v16) )
        v9 &= OffDrawStream((int)v17, v25, v16, v24, v23, v22, a7, v21, v20);
      if ( v12 )
        GreUnlockDisplayDevice(p_lDelta[7]);
    }
  }
  return v9;
}
