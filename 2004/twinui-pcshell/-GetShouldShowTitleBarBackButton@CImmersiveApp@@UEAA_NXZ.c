/*
 * XREFs of ?GetShouldShowTitleBarBackButton@CImmersiveApp@@UEAA_NXZ @ 0x18007C3F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::GetShouldShowTitleBarBackButton(CImmersiveApp *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_QWORD *)this + 45) )
    return (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 44) + 104LL))(**((_QWORD **)this + 44));
  return result;
}
