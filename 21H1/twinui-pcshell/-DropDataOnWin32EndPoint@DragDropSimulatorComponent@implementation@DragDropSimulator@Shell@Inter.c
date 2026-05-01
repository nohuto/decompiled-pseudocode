/*
 * XREFs of ?DropDataOnWin32EndPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAAKAEBV?$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@9@PEAUHWND__@@AEBUtagPOINT@@_N@Z @ 0x18043F144
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$2 @ 0x1800AE890 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800AE890.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??R_lambda_07addfc01b5a15b9e6a299ea3205aeb7_@@QEBAJKKPEAK@Z @ 0x18043E7E0 (--R_lambda_07addfc01b5a15b9e6a299ea3205aeb7_@@QEBAJKKPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnWin32EndPoint(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        __int64 *a5,
        char a6)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // edi
  int v15; // eax
  __int64 v17[4]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v19; // [rsp+50h] [rbp+10h] BYREF
  __int64 v20; // [rsp+58h] [rbp+18h] BYREF

  v19 = a1;
  v20 = *a5;
  v8 = *a2;
  v17[0] = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v17[1] = a4;
  v17[2] = v20;
  v9 = *a3;
  v17[3] = v9;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  LODWORD(v19) = 1;
  v10 = _lambda_07addfc01b5a15b9e6a299ea3205aeb7_::operator()(v17, 1, 1, (__int64)&v19);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      337LL,
      (__int64)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  LODWORD(v19) = 1;
  _lambda_07addfc01b5a15b9e6a299ea3205aeb7_::operator()(v17, 3, 1, (__int64)&v19);
  LODWORD(a5) = 1;
  v11 = _lambda_07addfc01b5a15b9e6a299ea3205aeb7_::operator()(v17, 1, 1, (__int64)&a5);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      345LL,
      (__int64)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  LODWORD(v19) = 1;
  v12 = _lambda_07addfc01b5a15b9e6a299ea3205aeb7_::operator()(v17, 2, 1, (__int64)&v19);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      348LL,
      (__int64)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  if ( a6 )
  {
    LODWORD(v20) = 1;
    v13 = _lambda_07addfc01b5a15b9e6a299ea3205aeb7_::operator()(v17, 3, 1, (__int64)&v20);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        354LL,
        (__int64)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
        (const char *)(unsigned int)v13);
      __debugbreak();
    }
    v14 = (unsigned int)a5;
  }
  else
  {
    LODWORD(v19) = 1;
    v15 = _lambda_07addfc01b5a15b9e6a299ea3205aeb7_::operator()(v17, 4, 0, (__int64)&v19);
    if ( v15 >= 0 )
    {
      v14 = v19;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x169,
        (__int64)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
        (const char *)(unsigned int)v15);
      v14 = 0;
    }
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v17);
  return v14;
}
