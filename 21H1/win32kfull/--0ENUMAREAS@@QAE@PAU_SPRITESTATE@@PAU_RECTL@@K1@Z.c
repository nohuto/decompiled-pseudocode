/*
 * XREFs of ??0ENUMAREAS@@QAE@PAU_SPRITESTATE@@PAU_RECTL@@K1@Z @ 0xE5CD8
 * Callers:
 *     ?bSpBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0xE52D4 (-bSpBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUS.c)
 *     ?bSpBltScreenToScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x1DD39B (-bSpBltScreenToScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_.c)
 *     ?bSpTearDownSprites@@YGHPAUHDEV__@@PAU_RECTL@@H@Z @ 0x1DE451 (-bSpTearDownSprites@@YGHPAUHDEV__@@PAU_RECTL@@H@Z.c)
 *     ?vSpBigUnderlayCopy@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E015A (-vSpBigUnderlayCopy@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?vSpDeviceControlSprites@@YGXPAUHDEV__@@PAVEWNDOBJ@@K@Z @ 0x1E1301 (-vSpDeviceControlSprites@@YGXPAUHDEV__@@PAVEWNDOBJ@@K@Z.c)
 *     ?vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z @ 0x1E1DFF (-vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YGXPAU_SPRITESTATE@@PAU_RECTL@@@Z @ 0x1E1FC9 (-vSpRedrawAreaExMirror@@YGXPAU_SPRITESTATE@@PAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_RECTL@@PAU_CLIPOBJ@@H@Z @ 0x1E28CD (-vSpUpdateLockedScreenAreas@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_RECTL@@PAU_CLIPOBJ@@H@Z.c)
 *     _vSpUnTearDownSprites@12 @ 0x1E3F3E (_vSpUnTearDownSprites@12.c)
 * Callees:
 *     ?vLock@SINGLEREADERLOCK@@QAEXXZ @ 0x1DFBCD (-vLock@SINGLEREADERLOCK@@QAEXXZ.c)
 */

ENUMAREAS *__thiscall ENUMAREAS::ENUMAREAS(
        ENUMAREAS *this,
        struct _SPRITESTATE *a2,
        struct _RECTL *a3,
        unsigned int a4,
        struct _RECTL *a5)
{
  LONG left; // edx
  LONG right; // ecx
  LONG top; // edi
  LONG bottom; // eax
  LONG v11; // eax
  LONG *i; // ecx
  _DWORD *j; // eax
  LONG v14; // edx
  struct _RECTL *v15; // edx
  _DWORD *k; // edi
  struct _SPRITESTATE *v18; // [esp+14h] [ebp+8h]
  struct _RECTL *v19; // [esp+18h] [ebp+Ch]

  *((_DWORD *)this + 17) = a2;
  GreAcquireSemaphoreSharedInternal(*((_DWORD *)a2 + 22));
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *((_DWORD *)a2 + 22));
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 21);
  *(_DWORD *)this = a4;
  left = a3->left;
  *((_DWORD *)this + 5) = a3->left;
  *((_DWORD *)this + 1) = left;
  right = a3->right;
  *((_DWORD *)this + 7) = right;
  *((_DWORD *)this + 3) = right;
  top = a3->top;
  *((_DWORD *)this + 6) = top;
  *((_DWORD *)this + 2) = top;
  bottom = a3->bottom;
  v18 = (struct _SPRITESTATE *)right;
  v19 = (struct _RECTL *)bottom;
  *((_DWORD *)this + 8) = bottom;
  *((_DWORD *)this + 4) = bottom;
  if ( (a4 & 2) != 0 )
    v11 = bottom - 1;
  else
    v11 = top;
  for ( i = (LONG *)*((_DWORD *)a2 + 24); i[1] <= v11; i = (LONG *)((char *)i + i[2]) )
    ;
  if ( (a4 & 1) != 0 )
  {
    for ( j = (LONG *)((char *)i + i[2] - 12); *j >= (int)v18; j -= 3 )
      ;
  }
  else
  {
    for ( j = i + 4; j[1] <= left; j += 3 )
      ;
  }
  v14 = *i;
  if ( *i <= top )
    v14 = top;
  *((_DWORD *)this + 9) = v14;
  v15 = (struct _RECTL *)i[1];
  if ( (int)v15 >= (int)v19 )
    v15 = v19;
  *((_DWORD *)this + 11) = i;
  *((_DWORD *)this + 10) = v15;
  *((_DWORD *)this + 12) = j;
  if ( a5 )
    *(struct _RECTL *)((char *)this + 20) = *a5;
  for ( k = *(_DWORD **)(*((_DWORD *)this + 17) + 708); k; k = (_DWORD *)k[4] )
  {
    if ( k[11] < *((_DWORD *)this + 7)
      && k[12] < *((_DWORD *)this + 8)
      && k[13] > *((_DWORD *)this + 5)
      && k[14] > *((_DWORD *)this + 6) )
    {
      SINGLEREADERLOCK::vLock((SINGLEREADERLOCK *)(k + 45));
    }
  }
  return this;
}
