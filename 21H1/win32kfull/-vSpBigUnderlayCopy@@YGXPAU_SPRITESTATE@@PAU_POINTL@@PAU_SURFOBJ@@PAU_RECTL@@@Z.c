/*
 * XREFs of ?vSpBigUnderlayCopy@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E015A
 * Callers:
 *     ?bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z @ 0xA0A28 (-bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z.c)
 * Callees:
 *     ?INVOKEOFFCOPYBITS@@YGHPAU_POINTL@@PAU_SURFOBJ@@01PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@0@Z @ 0x92B62 (-INVOKEOFFCOPYBITS@@YGHPAU_POINTL@@PAU_SURFOBJ@@01PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@0@Z.c)
 *     ??1ENUMAREAS@@QAE@XZ @ 0xE5C28 (--1ENUMAREAS@@QAE@XZ.c)
 *     ?bEnum@ENUMAREAS@@QAEHPAPAVSPRITE@@PAU_RECTL@@@Z @ 0xE5C5A (-bEnum@ENUMAREAS@@QAEHPAPAVSPRITE@@PAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QAE@PAU_SPRITESTATE@@PAU_RECTL@@K1@Z @ 0xE5CD8 (--0ENUMAREAS@@QAE@PAU_SPRITESTATE@@PAU_RECTL@@K1@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?vSpReadFromScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E19B3 (-vSpReadFromScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 */

void __userpurge vSpBigUnderlayCopy(
        int *a1@<edx>,
        struct _SPRITESTATE *a2@<ecx>,
        SURFOBJ *a3,
        struct _RECTL *a4,
        struct _SURFOBJ *a5,
        struct _RECTL *a6)
{
  int v6; // eax
  struct SPRITE *v7; // edi
  LONG *p_lDelta; // esi
  HSURF hsurf; // eax
  struct _SURFOBJ *v10; // eax
  LONG *v11; // edi
  struct _SURFOBJ *v12; // ecx
  HSURF v13; // edx
  struct SPRITE *v14; // eax
  struct _RECTL *v15; // [esp+0h] [ebp-80h]
  struct _POINTL *v16; // [esp+4h] [ebp-7Ch]
  _BYTE v17[76]; // [esp+10h] [ebp-70h] BYREF
  int v18; // [esp+5Ch] [ebp-24h]
  struct _SPRITESTATE *v19; // [esp+60h] [ebp-20h]
  int *v20; // [esp+64h] [ebp-1Ch]
  struct SPRITE *v21; // [esp+68h] [ebp-18h] BYREF
  struct _RECTL v22; // [esp+6Ch] [ebp-14h] BYREF

  v20 = a1;
  memset(&v22, 0, sizeof(v22));
  v19 = a2;
  v21 = 0;
  if ( (*(_DWORD *)(*(_DWORD *)a2 + 24) & 0x400) == 0 )
  {
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v17, a2, a4, 0, 0);
    do
    {
      v6 = ENUMAREAS::bEnum((ENUMAREAS *)v17, &v21, &v22);
      v7 = v21;
      v18 = v6;
      if ( v21 )
      {
        p_lDelta = 0;
        if ( a3 )
        {
          hsurf = a3[1].hsurf;
          if ( ((unsigned int)hsurf & 0x80004000) != 0 && ((unsigned __int16)hsurf & 0x200) == 0 )
          {
            p_lDelta = &a3[-1].lDelta;
            GreLockDisplayDevice(a3->hdev);
          }
        }
        v10 = (struct _SURFOBJ *)*((_DWORD *)v7 + 28);
        v11 = 0;
        v12 = v10;
        if ( v10 && (v13 = v10[1].hsurf, ((unsigned int)v13 & 0x80004000) != 0) && ((unsigned __int16)v13 & 0x200) == 0 )
        {
          v11 = &v10[-1].lDelta;
          GreLockDisplayDevice(v10->hdev);
          v14 = v21;
          v12 = (struct _SURFOBJ *)*((_DWORD *)v21 + 28);
        }
        else
        {
          v14 = v21;
        }
        INVOKEOFFCOPYBITS(
          a3,
          v20,
          (struct _POINTL *)((char *)v14 + 116),
          v12,
          0,
          0,
          (struct _CLIPOBJ *)&v22,
          (struct _XLATEOBJ *)&v22,
          v15,
          v16);
        if ( v11 )
          GreUnlockDisplayDevice(v11[7]);
        if ( p_lDelta )
          GreUnlockDisplayDevice(p_lDelta[7]);
      }
      else
      {
        vSpReadFromScreen(
          (struct _SPRITESTATE *)a3,
          (struct _POINTL *)&v22,
          (struct _SURFOBJ *)v15,
          (struct _RECTL *)v16);
      }
    }
    while ( v18 );
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v17);
  }
}
