/*
 * XREFs of ?InvokeCharms@CImmersiveApp@@UEAAJXZ @ 0x18017ECD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::InvokeCharms(CImmersiveApp *this)
{
  __int64 result; // rax

  result = 1LL;
  if ( *((_BYTE *)this + 671) )
    return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 45) + 240LL))(*((_QWORD *)this + 45));
  return result;
}
