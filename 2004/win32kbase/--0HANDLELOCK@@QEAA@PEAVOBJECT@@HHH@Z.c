/*
 * XREFs of ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00873AC
 * Callers:
 *     HmgLockAndModifyHandleType @ 0x1C0015840 (HmgLockAndModifyHandleType.c)
 *     GreSetSolidBrushLight @ 0x1C001E680 (GreSetSolidBrushLight.c)
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C0099760 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C00A724C (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C008A360 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 */

HANDLELOCK *__fastcall HANDLELOCK::HANDLELOCK(HANDLELOCK *this, struct OBJECT *a2, int a3, int a4, int a5)
{
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  HANDLELOCK::vLockHandle(this, (unsigned __int16)*(_DWORD *)a2 | (*(_DWORD *)a2 >> 8) & 0xFF0000, a3, a4, a5);
  return this;
}
