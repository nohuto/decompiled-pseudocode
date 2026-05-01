/*
 * XREFs of ?GetAndDeleteFirstHint@ActivationHints@@UEAAJUAppIdInfo@@AEBU_GUID@@PEAPEAX@Z @ 0x180054F70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180016B3C (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?DeleteExpiredHints@ActivationHints@@AEAAXXZ @ 0x180054E60 (-DeleteExpiredHints@ActivationHints@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_82370b63b2fce59ec7b670b57ccd0f0f_::operator() @ 0x1803A93A0 (_lambda_82370b63b2fce59ec7b670b57ccd0f0f_--operator().c)
 *     ?copy_to@?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEBAXAEBU_GUID@@PEAPEAX@Z @ 0x1803A9DA8 (-copy_to@-$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEBAXAEBU_GUID@@PEAPEAX@Z.c)
 *     ?erase@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UHint@ActivationHints@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UHint@ActivationHints@@@std@@@std@@@2@@Z @ 0x1803A9DF0 (-erase@-$vector@UHint@ActivationHints@@V-$allocator@UHint@ActivationHints@@@std@@@std@@QEAA-AV-$.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ActivationHints::GetAndDeleteFirstHint(RTL_SRWLOCK *a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  RTL_SRWLOCK *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  RTL_SRWLOCK *v12; // r14
  _QWORD *Ptr; // rbx
  _QWORD *v14; // rsi
  __int64 v16[2]; // [rsp+20h] [rbp-78h] BYREF
  char v17[8]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v18; // [rsp+38h] [rbp-60h]
  int *v19; // [rsp+48h] [rbp-50h]
  __int128 v20; // [rsp+50h] [rbp-48h] BYREF
  int *v21; // [rsp+60h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  int v23; // [rsp+A8h] [rbp+10h] BYREF
  int v24; // [rsp+B8h] [rbp+20h] BYREF

  *a4 = 0LL;
  if ( *a2 || a2[1] )
  {
    v8 = a1 + 6;
    AcquireSRWLockExclusive(a1 + 6);
    v16[1] = (__int64)v8;
    ActivationHints::DeleteExpiredHints((ActivationHints *)&a1[-13]);
    v9 = -1LL;
    if ( *a2 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( *(_WORD *)(*a2 + 2 * v10) );
    }
    else
    {
      LODWORD(v10) = 0;
    }
    v23 = v10;
    v11 = a2[1];
    if ( v11 )
    {
      do
        ++v9;
      while ( *(_WORD *)(v11 + 2 * v9) );
    }
    else
    {
      LODWORD(v9) = 0;
    }
    v24 = v9;
    *(_QWORD *)&v18 = a2;
    *((_QWORD *)&v18 + 1) = &v23;
    v19 = &v24;
    v12 = a1 + 7;
    Ptr = a1[7].Ptr;
    v20 = v18;
    v21 = &v24;
    v14 = a1[8].Ptr;
    while ( Ptr != v14 && !(unsigned __int8)lambda_82370b63b2fce59ec7b670b57ccd0f0f_::operator()(&v20, Ptr) )
      Ptr += 10;
    if ( Ptr != v12[1].Ptr )
    {
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        v16,
        Ptr[9]);
      std::vector<ActivationHints::Hint>::erase(v12, v17, Ptr);
      wil::com_ptr_t<IUnknown,wil::err_exception_policy>::copy_to(v16, a3, a4);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v16);
    }
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x76,
      (unsigned int)"pcshell\\twinui\\apppositioner\\lib\\activationhints.cpp",
      (const char *)0x80070057LL,
      v16[0]);
    return 2147942487LL;
  }
}
