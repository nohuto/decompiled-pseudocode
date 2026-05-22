/*
 * XREFs of ?CreateNarratorProxy@NarratorProxy@@QEAAJAEAV?$ComPtr@UIMessageFactory@@@WRL@Microsoft@@PEAUIMessageProxyListener@@@Z @ 0x1800B4990
 * Callers:
 *     ?SetOverriderState@KeyboardOverriderDispatcher@@UEAAJ_N@Z @ 0x1800B5AB0 (-SetOverriderState@KeyboardOverriderDispatcher@@UEAAJ_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800375F0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall NarratorProxy::CreateNarratorProxy(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, __int64 *); // rbx
  __int64 *v12; // r14
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, unsigned __int64, _QWORD, __int64 *); // r14
  const wchar_t *v15; // rax
  const wchar_t *v16; // rdx
  int v17; // ecx
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(__int64, const wchar_t *, _QWORD, __int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD)); // rbx
  __int64 (__fastcall ***v20)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v21)(_QWORD, GUID *, __int64 *); // rdi
  unsigned int v23; // [rsp+30h] [rbp-10h] BYREF
  const wchar_t *v24; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  unsigned int v26; // [rsp+80h] [rbp+40h] BYREF
  __int64 (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // [rsp+98h] [rbp+58h] BYREF

  v27 = 0LL;
  v26 = 0;
  v6 = a1 + 3;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a1 + 3);
  v7 = CoreUIClientCreate(v6);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = *v6;
    v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 56LL);
    v12 = a1 + 2;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a1 + 2);
    v7 = v11(v10, a1 + 2);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v13 = *v12;
      v14 = *(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64 *))(*(_QWORD *)*v12 + 24LL);
      Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(a1 + 1);
      v15 = L"Input\\Service.AlpcPort\\Server";
      if ( L"Input\\Service.AlpcPort\\Server" )
      {
        v16 = L"Input\\Service.AlpcPort\\Server";
        v24 = L"Input\\Service.AlpcPort\\Server";
        v17 = 0;
        while ( *v15 )
        {
          ++v15;
          ++v17;
        }
        v23 = v17 | 0x80000000;
      }
      else
      {
        v16 = 0LL;
        v24 = 0LL;
      }
      v7 = v14(v13, (unsigned __int64)&v23 & -(__int64)(v16 != 0LL), 0LL, a1 + 1);
      v8 = v7;
      if ( v7 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*a2 + 24LL))(
               *a2,
               &GUID_036f83f6_2c8b_4f50_ad5a_833402b2feb4,
               &v26);
        v8 = v7;
        if ( v7 >= 0 )
        {
          v18 = *a2;
          v19 = *(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)*a2 + 40LL);
          Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)&v27);
          v7 = v19(
                 v18,
                 L"System\\RemoteTextInputOverrider",
                 v26,
                 (__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))&v27);
          v8 = v7;
          if ( v7 >= 0 )
          {
            v20 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v27;
            v21 = **v27;
            Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a1);
            v7 = v21(v20, &GUID_036f83f6_2c8b_4f50_ad5a_833402b2feb4, a1);
            v8 = v7;
            if ( v7 >= 0 )
            {
              v7 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*v27)[7])(
                     v27,
                     a3);
              v8 = v7;
              if ( v7 >= 0 )
              {
                v8 = 0;
                goto LABEL_23;
              }
              v9 = 32LL;
            }
            else
            {
              v9 = 29LL;
            }
          }
          else
          {
            v9 = 26LL;
          }
        }
        else
        {
          v9 = 25LL;
        }
      }
      else
      {
        v9 = 23LL;
      }
    }
    else
    {
      v9 = 22LL;
    }
  }
  else
  {
    v9 = 21LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\keyboardoverrid"
             "erdispatcher.cpp",
    (const char *)(unsigned int)v7);
LABEL_23:
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)&v27);
  return v8;
}
