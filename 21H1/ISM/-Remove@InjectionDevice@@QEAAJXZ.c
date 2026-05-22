/*
 * XREFs of ?Remove@InjectionDevice@@QEAAJXZ @ 0x180121DB4
 * Callers:
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x18011FAC8 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ??1InjectionDevice@@QEAA@XZ @ 0x18011FD04 (--1InjectionDevice@@QEAA@XZ.c)
 *     ??1KeyboardInjectionDevice@@QEAA@XZ @ 0x18011FD24 (--1KeyboardInjectionDevice@@QEAA@XZ.c)
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x180123444 (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 *     ??1MouseProcessor@@MEAA@XZ @ 0x180135B8C (--1MouseProcessor@@MEAA@XZ.c)
 *     ?UpdateMouseAsTouchMode@MouseProcessor@@AEAAXPEAUHKEY__@@@Z @ 0x180136288 (-UpdateMouseAsTouchMode@MouseProcessor@@AEAAXPEAUHKEY__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InjectionDevice::Remove(InjectionDevice *this)
{
  __int64 result; // rax

  if ( !*((_BYTE *)this + 1556) )
    return 0LL;
  result = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)this + 56LL))(*(_QWORD *)this, (char *)this + 8);
  *((_BYTE *)this + 1556) = (int)result < 0;
  return result;
}
