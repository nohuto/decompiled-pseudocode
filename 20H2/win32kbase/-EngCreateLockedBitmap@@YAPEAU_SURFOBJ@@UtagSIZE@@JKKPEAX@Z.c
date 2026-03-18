/*
 * XREFs of ?EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z @ 0x1C00CF5B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C003B6E0 (--1SURFMEM@@QEAA@XZ.c)
 *     EngLockSurface @ 0x1C00473A0 (EngLockSurface.c)
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C00CF3AC (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 */

struct _SURFOBJ *__fastcall EngCreateLockedBitmap(struct tagSIZE a1, unsigned int a2, int a3, int a4, void *a5)
{
  int v5; // edx
  int v6; // r8d
  SURFOBJ *v7; // rbx
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF

  CreateDriverSurfMem((__int64)v9, 0, 0LL, *(_QWORD *)&a1, a2, a3, a4, a5);
  v7 = 0LL;
  if ( v9[0] )
    v7 = EngLockSurface(*(HSURF *)(v9[0] + 32LL));
  SURFMEM::~SURFMEM((SURFMEM *)v9, v5, v6);
  return v7;
}
