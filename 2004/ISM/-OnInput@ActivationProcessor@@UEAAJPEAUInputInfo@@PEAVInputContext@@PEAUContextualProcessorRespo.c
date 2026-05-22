/*
 * XREFs of ?OnInput@ActivationProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801711F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?TryActivate@ActivationProcessor@@QEAA_NPEAUInputInfo@@UActivationInformation@@UtagPOINT@@@Z @ 0x18017132C (-TryActivate@ActivationProcessor@@QEAA_NPEAUInputInfo@@UActivationInformation@@UtagPOINT@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ActivationProcessor::OnInput(
        ActivationProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v14; // [rsp+20h] [rbp-10h] BYREF
  int v15; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v17; // [rsp+78h] [rbp+48h] BYREF

  v17 = 0LL;
  v8 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a4;
  v9 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a4;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v17);
  v10 = v9(v8, &GUID_9a8e3fb8_36b5_4c0c_9118_1aa39b5b35fc, &v17);
  v11 = v10;
  if ( v10 >= 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v17 + 24LL))(v17) )
    {
      *((_DWORD *)a4 + 2) = 3;
    }
    else
    {
      *((_DWORD *)a4 + 2) = 0;
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 40LL))(v17);
      v14 = *((_QWORD *)a3 + 11);
      if ( (unsigned __int8)((__int64 (__fastcall *)(char *, struct InputInfo *, __int64 *, _QWORD))ActivationProcessor::TryActivate)(
                              (char *)this - 8,
                              a2,
                              &v14,
                              *((_QWORD *)a2 + 33)) )
      {
        *((_DWORD *)a4 + 2) = 3;
        LOBYTE(v12) = 1;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 32LL))(v17, v12);
      }
    }
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\activation\\system\\lib\\acti"
               "vationprocessor.cpp",
      (const char *)(unsigned int)v10);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v17);
  return v11;
}
