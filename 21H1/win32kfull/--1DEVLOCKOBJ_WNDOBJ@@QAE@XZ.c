/*
 * XREFs of ??1DEVLOCKOBJ_WNDOBJ@@QAE@XZ @ 0xF6AB4
 * Callers:
 *     ?iOpenGLExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z @ 0x1D7E66 (-iOpenGLExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z.c)
 * Callees:
 *     ?vDestructorNULL@DEVLOCKOBJ@@QAEXXZ @ 0x1D87A2 (-vDestructorNULL@DEVLOCKOBJ@@QAEXXZ.c)
 */

void __thiscall DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ(DEVLOCKOBJ_WNDOBJ *this)
{
  DEVLOCKOBJ::vDestructorNULL(this);
  if ( *((_DWORD *)this + 13) )
    UserLeaveUserCritSec();
  DEVLOCKOBJ::~DEVLOCKOBJ(this);
}
