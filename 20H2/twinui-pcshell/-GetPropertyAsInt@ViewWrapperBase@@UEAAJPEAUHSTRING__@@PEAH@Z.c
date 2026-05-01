/*
 * XREFs of ?GetPropertyAsInt@ViewWrapperBase@@UEAAJPEAUHSTRING__@@PEAH@Z @ 0x1802CED60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewWrapperBase::GetPropertyAsInt(ViewWrapperBase *this, HSTRING a2, int *a3)
{
  RTL_SRWLOCK *v6; // rbx
  __int64 v7; // rdx
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0;
  v6 = (RTL_SRWLOCK *)(*((_QWORD *)this + 20) + 280LL);
  AcquireSRWLockShared(v6);
  v7 = *((_QWORD *)this + 23);
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, HSTRING, int *))(**(_QWORD **)(*((_QWORD *)this + 20) + 504LL)
                                                                    + 248LL))(
           *(_QWORD *)(*((_QWORD *)this + 20) + 504LL),
           v7,
           a2,
           a3);
  }
  else
  {
    v8 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x595,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)0x80070490LL);
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v8;
}
