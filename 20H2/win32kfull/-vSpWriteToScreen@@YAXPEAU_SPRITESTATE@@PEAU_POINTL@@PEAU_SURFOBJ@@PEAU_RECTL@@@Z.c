/*
 * XREFs of ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0159000
 * Callers:
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0085608 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C01589A4 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C02806CC (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0283680 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C00846E4 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C009ECF8 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0159168 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C015923C (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C027F560 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 */

void __fastcall vSpWriteToScreen(struct _SPRITESTATE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  struct _CLIPOBJ *v4; // r14
  struct REGION *v7; // rbx
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  __int64 v12; // rax
  __int64 v13; // rdi
  struct _SURFOBJ *v14; // rdx
  int v15; // ecx
  int v16; // eax
  _BYTE v17[4]; // [rsp+40h] [rbp-E8h] BYREF
  _BYTE v18[52]; // [rsp+44h] [rbp-E4h] BYREF
  __int64 v19; // [rsp+78h] [rbp-B0h]
  __int64 v20; // [rsp+90h] [rbp-98h]
  int v21; // [rsp+98h] [rbp-90h]
  int v22; // [rsp+C0h] [rbp-68h]
  __int64 v23; // [rsp+D0h] [rbp-58h]
  int v24; // [rsp+D8h] [rbp-50h]

  v20 = 0LL;
  v4 = 0LL;
  v21 = 0;
  v23 = 0LL;
  v7 = (struct REGION *)*((_QWORD *)a1 + 129);
  v22 = 1;
  v19 = 0LL;
  v24 = 0;
  if ( v7 )
  {
    v16 = bConcurrent(a1);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v17, v16, v7, (struct ERECTL *)a4, 0);
    if ( ERECTL::bEmpty((ERECTL *)v18) )
      goto LABEL_13;
    v4 = (struct _CLIPOBJ *)v17;
  }
  a3->iUniq = 0;
  p_pvScan0 = 0LL;
  hsurf = (int)a3[1].hsurf;
  if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
  {
    p_pvScan0 = &a3[-1].pvScan0;
    GreLockDisplayDevice(a3->hdev);
  }
  v12 = *((_QWORD *)a1 + 4);
  v13 = 0LL;
  v14 = (struct _SURFOBJ *)v12;
  if ( v12 )
  {
    v15 = *(_DWORD *)(v12 + 88);
    if ( (v15 & 0x80004000) != 0 && (v15 & 0x200) == 0 )
    {
      v13 = v12 - 24;
      GreLockDisplayDevice(*(_QWORD *)(v12 - 24 + 48));
      v14 = (struct _SURFOBJ *)*((_QWORD *)a1 + 4);
    }
  }
  INVOKEOFFCOPYBITS(&gptlZero, v14, a2, a3, v4, 0LL, a4, (struct _POINTL *)a4);
  if ( v13 )
    GreUnlockDisplayDevice(*(_QWORD *)(v13 + 48));
  if ( p_pvScan0 )
    GreUnlockDisplayDevice(p_pvScan0[6]);
LABEL_13:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)v17);
}
