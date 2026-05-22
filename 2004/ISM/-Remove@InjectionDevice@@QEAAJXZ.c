/*
 * XREFs of ?Remove@InjectionDevice@@QEAAJXZ @ 0x1801218F4
 * Callers:
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x18011F608 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ??1InjectionDevice@@QEAA@XZ @ 0x18011F844 (--1InjectionDevice@@QEAA@XZ.c)
 *     ??1KeyboardInjectionDevice@@QEAA@XZ @ 0x18011F864 (--1KeyboardInjectionDevice@@QEAA@XZ.c)
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x180122F84 (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 *     ??1MouseProcessor@@MEAA@XZ @ 0x1801356CC (--1MouseProcessor@@MEAA@XZ.c)
 *     ?UpdateMouseAsTouchMode@MouseProcessor@@AEAAXPEAUHKEY__@@@Z @ 0x180135DC8 (-UpdateMouseAsTouchMode@MouseProcessor@@AEAAXPEAUHKEY__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
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
