/*
 * XREFs of _lambda_9d47f3ca24650e09de4b87214d29e4d8_::operator() @ 0x180012FD0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9d47f3ca24650e09de4b87214d29e4d8___::Run @ 0x180012FC0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9d47f3ca24650e09de4b87214d29e4d8___--Run.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180011504 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180012DC0 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002A660 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18007EFD4 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z @ 0x180165A68 (-AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_9d47f3ca24650e09de4b87214d29e4d8_::operator()(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rcx
  int v4; // edi
  int v5; // eax
  WINBOOL v6; // edx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-60h]
  __int128 v11; // [rsp+30h] [rbp-50h] BYREF
  __int128 v12; // [rsp+40h] [rbp-40h]
  __int128 v13; // [rsp+50h] [rbp-30h] BYREF
  __int64 v14; // [rsp+60h] [rbp-20h]
  int v15; // [rsp+68h] [rbp-18h]
  __int128 *v16; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  __int64 v18; // [rsp+A0h] [rbp+20h] BYREF
  void *v19; // [rsp+A8h] [rbp+28h] BYREF

  v2 = a1 + 40;
  v3 = *(_QWORD *)(a1 + 88);
  if ( *(_DWORD *)v3 == 1 )
  {
    BYTE8(v12) = 0;
    LODWORD(v11) = *(_DWORD *)(v3 + 40);
    *((_QWORD *)&v11 + 1) = *(_QWORD *)(v3 + 48);
    if ( *(_BYTE *)(v3 + 64) )
      wil::details::StoredCallContextInfo::AssignMessage(
        (wil::details::StoredCallContextInfo *)&v11,
        *(const unsigned __int16 **)(v3 + 56));
    else
      *(_QWORD *)&v12 = *(_QWORD *)(v3 + 56);
    *(_QWORD *)&v13 = 0LL;
    *((_QWORD *)&v13 + 1) = v2;
    v14 = 0LL;
    v15 = 0;
    v16 = &v11;
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)&v13);
  }
  else
  {
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0;
    v16 = 0LL;
  }
  v4 = *(_DWORD *)(a1 + 16);
  if ( v4 >= 0 )
  {
    v19 = 0LL;
    if ( *(_QWORD *)(a1 + 32) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      v8 = CMarshaledInterface::_Unmarshal(
             (CMarshaledInterface *)(a1 + 32),
             &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
             (struct IInspectable **)&v19,
             1);
      v4 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC3,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
          (const char *)(unsigned int)v8,
          v10);
        goto LABEL_11;
      }
    }
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    v5 = CoreQueryWindowService(
           *(_QWORD *)a1,
           &GUID_db37659c_5741_4985_a443_dda995e92f5f,
           &GUID_c1635471_1417_4750_811f_a6122953c5a3,
           &v18);
    v4 = v5;
    if ( v5 < 0 )
    {
      v9 = 199LL;
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, void *))(*(_QWORD *)v18 + 48LL))(
             v18,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(a1 + 24),
             v19);
      v4 = v5;
      if ( v5 >= 0 )
      {
        wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v2, v6);
        v4 = 0;
LABEL_10:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
LABEL_11:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
        goto LABEL_12;
      }
      v9 = 200LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v5,
      v10);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBD,
    (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
    (const char *)(unsigned int)v4,
    v10);
LABEL_12:
  if ( v15 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)&v13);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)&v11);
  return (unsigned int)v4;
}
