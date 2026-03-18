/*
 * XREFs of ?vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0284804
 * Callers:
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02832F4 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C00846E4 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C009ECF8 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0159168 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C015923C (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C027F560 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 */

void __fastcall vSpWriteToExMirror(struct _SPRITESTATE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  struct _CLIPOBJ *v4; // rax
  struct REGION *v7; // rbp
  int v10; // eax
  REGION *v11[11]; // [rsp+40h] [rbp-D8h] BYREF
  int v12; // [rsp+98h] [rbp-80h]
  int v13; // [rsp+C0h] [rbp-58h]
  __int64 v14; // [rsp+D0h] [rbp-48h]
  int v15; // [rsp+D8h] [rbp-40h]

  v11[10] = 0LL;
  v4 = 0LL;
  v12 = 0;
  v14 = 0LL;
  v7 = (struct REGION *)*((_QWORD *)a1 + 129);
  v13 = 1;
  v11[7] = 0LL;
  v15 = 0;
  if ( !v7 )
    goto LABEL_4;
  v10 = bConcurrent(a1);
  ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v11, v10, v7, (struct ERECTL *)a4, 0);
  if ( !ERECTL::bEmpty((ERECTL *)((char *)v11 + 4)) )
  {
    v4 = (struct _CLIPOBJ *)v11;
LABEL_4:
    a3->iUniq = 0;
    INVOKEOFFCOPYBITS(&gptlZero, *((struct _SURFOBJ **)a1 + 166), a2, a3, v4, 0LL, a4, (struct _POINTL *)a4);
  }
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED(v11);
}
