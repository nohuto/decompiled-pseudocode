/*
 * XREFs of ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0281D0C
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C0085DBC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C00846E4 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00850D4 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0085178 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0085330 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0282E10 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

void __fastcall vSpBigUnderlayCopy(struct _SPRITESTATE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  __int64 v4; // rax
  int v8; // eax
  struct SPRITE *v9; // rbp
  int v10; // r15d
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  __int64 v13; // rax
  __int64 v14; // rdi
  struct _SURFOBJ *v15; // r9
  int v16; // ecx
  struct SPRITE *v17; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v18[96]; // [rsp+50h] [rbp-B8h] BYREF
  struct _RECTL v19; // [rsp+B0h] [rbp-58h] BYREF

  v4 = *(_QWORD *)a1;
  v17 = 0LL;
  v19 = 0LL;
  if ( (*(_DWORD *)(v4 + 40) & 0x400) == 0 )
  {
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v18, a1, a4, 0, 0LL);
    do
    {
      v8 = ENUMAREAS::bEnum((ENUMAREAS *)v18, &v17, &v19);
      v9 = v17;
      v10 = v8;
      if ( v17 )
      {
        p_pvScan0 = 0LL;
        if ( a3 )
        {
          hsurf = (int)a3[1].hsurf;
          if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
          {
            p_pvScan0 = &a3[-1].pvScan0;
            GreLockDisplayDevice(a3->hdev);
          }
        }
        v13 = *((_QWORD *)v9 + 20);
        v14 = 0LL;
        v15 = (struct _SURFOBJ *)v13;
        if ( v13 )
        {
          v16 = *(_DWORD *)(v13 + 88);
          if ( (v16 & 0x80004000) != 0 && (v16 & 0x200) == 0 )
          {
            v14 = v13 - 24;
            GreLockDisplayDevice(*(_QWORD *)(v13 - 24 + 48));
            v15 = (struct _SURFOBJ *)*((_QWORD *)v9 + 20);
          }
        }
        INVOKEOFFCOPYBITS(a2, a3, (struct _POINTL *)v9 + 21, v15, 0LL, 0LL, &v19, (struct _POINTL *)&v19);
        if ( v14 )
          GreUnlockDisplayDevice(*(_QWORD *)(v14 + 48));
        if ( p_pvScan0 )
          GreUnlockDisplayDevice(p_pvScan0[6]);
      }
      else
      {
        vSpReadFromScreen(a1, a2, a3, &v19);
      }
    }
    while ( v10 );
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v18);
  }
}
