/*
 * XREFs of ??0DEVLOCKOBJ_WNDOBJ@@QAE@AAVXDCOBJ@@H@Z @ 0xF6A80
 * Callers:
 *     ?iOpenGLExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z @ 0x1D7E66 (-iOpenGLExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z.c)
 * Callees:
 *     ?vInit@DEVLOCKOBJ@@QAEXXZ @ 0x78C50 (-vInit@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?vConstructor@DEVLOCKOBJ_WNDOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x1D86EC (-vConstructor@DEVLOCKOBJ_WNDOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 */

DEVLOCKOBJ_WNDOBJ *__thiscall DEVLOCKOBJ_WNDOBJ::DEVLOCKOBJ_WNDOBJ(DEVLOCKOBJ_WNDOBJ *this, struct XDCOBJ *a2, int a3)
{
  DEVLOCKOBJ_WNDOBJ *v4; // ecx

  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_WORD *)this + 16) = 256;
  DEVLOCKOBJ::vInit(this);
  *((_DWORD *)this + 13) = 1;
  DEVLOCKOBJ_WNDOBJ::vConstructor(v4, a2);
  return this;
}
