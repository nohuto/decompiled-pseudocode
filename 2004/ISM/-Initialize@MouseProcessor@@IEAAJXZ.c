/*
 * XREFs of ?Initialize@MouseProcessor@@IEAAJXZ @ 0x180022768
 * Callers:
 *     ?Create@MouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800226F0 (-Create@MouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x1800222C4 (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180028040 (-IsEdition@@YA_N_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800375F0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MouseProcessor::Initialize(MouseProcessor *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64, char *); // rsi
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64 (__fastcall *)(), MouseProcessor *, char *); // rsi
  HKEY v14; // rcx
  int v15; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF

  v18 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 64LL))(*((_QWORD *)this + 6));
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 72LL);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v18);
  v4 = v3(v2, &v18);
  v5 = v4;
  if ( v4 < 0 )
  {
    v9 = 119LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
      (const char *)(unsigned int)v4,
      v15);
    goto LABEL_5;
  }
  v6 = v18;
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, char *))(*(_QWORD *)v18 + 24LL);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((char *)this + 112);
  v4 = v7(v6, *((_QWORD *)this + 7), 1LL, (char *)this + 112);
  v5 = v4;
  if ( v4 < 0 )
  {
    v9 = 120LL;
    goto LABEL_8;
  }
  if ( IsEdition(0x3DDA1uLL) )
  {
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v17);
    v10 = CoreUICreate(&v17);
    v5 = v10;
    if ( v10 >= 0 )
    {
      v12 = v17;
      v13 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), MouseProcessor *, char *))(*(_QWORD *)v17
                                                                                                  + 136LL);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 212);
      v10 = v13(v12, lambda_bee3b73c73505971acff5e8346377b68_::_lambda_invoker_cdecl_, this, (char *)this + 1696);
      v5 = v10;
      if ( v10 >= 0 )
      {
        v14 = (HKEY)*((_QWORD *)this + 15);
        if ( v14 )
        {
          *((_QWORD *)this + 15) = 0LL;
          (*(void (__fastcall **)(HKEY))(*(_QWORD *)v14 + 16LL))(v14);
        }
        RegistryWatcher::Create(
          v14,
          L"SYSTEM\\MOUSE",
          this,
          lambda_f2fdab03bc5b02d353eab8edcf2c7195_::_lambda_invoker_cdecl_,
          (struct RegistryWatcher **)this + 15);
        Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v17);
        goto LABEL_4;
      }
      v11 = 134LL;
    }
    else
    {
      v11 = 125LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
      (const char *)(unsigned int)v10,
      v15);
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v17);
    goto LABEL_5;
  }
LABEL_4:
  v5 = 0;
LABEL_5:
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v18);
  return v5;
}
