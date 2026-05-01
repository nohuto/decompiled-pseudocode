/*
 * XREFs of ?GetCurrentDesktopName@VirtualDesktopAcessibility@@UEAAJPEAPEAG@Z @ 0x180441700
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualDesktopAcessibility::GetCurrentDesktopName(
        VirtualDesktopAcessibility *this,
        unsigned __int16 **a2)
{
  unsigned __int16 *v4; // rax
  RTL_SRWLOCK *v5; // rcx
  unsigned int v6; // ebx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 26) + 24LL))(*((_QWORD *)this + 26), &SRWLock);
  v4 = SysAllocString(*((const OLECHAR **)this + 27));
  v5 = SRWLock;
  *a2 = v4;
  v6 = v4 == 0LL ? 0x8007000E : 0;
  if ( v5 )
    ReleaseSRWLockShared(v5);
  return v6;
}
