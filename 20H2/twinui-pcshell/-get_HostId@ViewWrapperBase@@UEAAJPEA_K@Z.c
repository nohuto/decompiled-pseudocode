/*
 * XREFs of ?get_HostId@ViewWrapperBase@@UEAAJPEA_K@Z @ 0x1802D2FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::get_HostId(ViewWrapperBase *this, unsigned __int64 *a2)
{
  unsigned __int64 *v4; // rsi
  RTL_SRWLOCK *v5; // rbx
  __int64 v6; // rdx
  unsigned int v7; // edi
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (unsigned __int64 *)((char *)this + 168);
  if ( *((_QWORD *)this + 21) != -1LL )
    goto LABEL_11;
  v5 = (RTL_SRWLOCK *)(*((_QWORD *)this + 20) + 280LL);
  AcquireSRWLockShared(v5);
  v6 = *((_QWORD *)this + 23);
  if ( v6 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64 *))(**(_QWORD **)(*((_QWORD *)this + 20) + 504LL)
                                                                         + 296LL))(
            *(_QWORD *)(*((_QWORD *)this + 20) + 504LL),
            v6,
            v4);
    v7 = v10;
    if ( v10 < 0 )
    {
      v8 = (unsigned int)v10;
      v9 = 1765LL;
      goto LABEL_6;
    }
    if ( v5 )
      ReleaseSRWLockShared(v5);
LABEL_11:
    *a2 = *v4;
    return 0LL;
  }
  v7 = -2147023728;
  v8 = 2147943568LL;
  v9 = 1764LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
    (const char *)v8);
  if ( v5 )
    ReleaseSRWLockShared(v5);
  return v7;
}
