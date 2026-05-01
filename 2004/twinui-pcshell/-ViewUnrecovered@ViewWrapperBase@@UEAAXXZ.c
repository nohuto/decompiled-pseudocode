/*
 * XREFs of ?ViewUnrecovered@ViewWrapperBase@@UEAAXXZ @ 0x1802D2D00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewWrapperBase::ViewUnrecovered(ViewWrapperBase *this)
{
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 20) + 504LL) + 48LL))(
    *(_QWORD *)(*((_QWORD *)this + 20) + 504LL),
    *((unsigned int *)this + 35),
    *((_QWORD *)this + 23),
    2LL);
  (*(void (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)this + 832LL))(this);
}
