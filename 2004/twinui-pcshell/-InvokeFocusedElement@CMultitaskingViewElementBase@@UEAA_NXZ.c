/*
 * XREFs of ?InvokeFocusedElement@CMultitaskingViewElementBase@@UEAA_NXZ @ 0x1803A35F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMultitaskingViewElementBase::InvokeFocusedElement(CMultitaskingViewElementBase *this)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *((_QWORD *)this + 21);
  if ( !v2 )
    return (*(__int64 (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 312LL))(this);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 320LL))(v2);
  if ( !(_BYTE)result )
    return (*(__int64 (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 312LL))(this);
  return result;
}
