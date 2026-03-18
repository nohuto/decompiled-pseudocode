/*
 * XREFs of ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00427C0
 * Callers:
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C001C060 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     HmgLockAndModifyHandleType @ 0x1C001F040 (HmgLockAndModifyHandleType.c)
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C0055870 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
 *     GreSetSolidBrushLight @ 0x1C0082300 (GreSetSolidBrushLight.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0044950 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 */

HANDLELOCK *__fastcall HANDLELOCK::HANDLELOCK(HANDLELOCK *this, struct OBJECT *a2, int a3, int a4, int a5)
{
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  HANDLELOCK::vLockHandle(this, (unsigned __int16)*(_DWORD *)a2 | (*(_DWORD *)a2 >> 8) & 0xFF0000, a3, a4, a5);
  return this;
}
