/*
 * XREFs of ?IsDuckingEnabled@CAudioStream@@UEAA_NXZ @ 0x18006E850
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CAudioStream::IsDuckingEnabled(CAudioStream *this)
{
  return !_InterlockedCompareExchange((volatile signed __int32 *)this + 103, 1, 1)
      && !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 120LL))(*((_QWORD *)this + 7));
}
