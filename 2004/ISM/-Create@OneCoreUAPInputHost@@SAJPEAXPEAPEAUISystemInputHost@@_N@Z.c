/*
 * XREFs of ?Create@OneCoreUAPInputHost@@SAJPEAXPEAPEAUISystemInputHost@@_N@Z @ 0x18001EE70
 * Callers:
 *     CreateSystemInputHost @ 0x18001EDA0 (CreateSystemInputHost.c)
 * Callees:
 *     ??0OneCoreUAPInputHost@@IEAA@XZ @ 0x18001EDAC (--0OneCoreUAPInputHost@@IEAA@XZ.c)
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18001F228 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x1800283CC (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CA78 (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OneCoreUAPInputHost::Create(void *a1, struct ISystemInputHost **a2, __int64 a3, const char *a4)
{
  struct OneCoreUAPInputHost *v6; // rcx
  OneCoreUAPInputHost *v7; // rax
  OneCoreUAPInputHost *v8; // rcx
  int v9; // ebx
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v9 = -2147024809;
    v11 = 156LL;
    goto LABEL_13;
  }
  v6 = OneCoreUAPInputHost::s_pInputHost;
  if ( !OneCoreUAPInputHost::s_pInputHost )
  {
    if ( ISMTestMode::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x17,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
        a4);
      __debugbreak();
    }
    ISMTestMode::s_instance = (struct ISMTestMode *)operator new(1uLL);
    *(_BYTE *)ISMTestMode::s_instance = 0;
    v7 = (OneCoreUAPInputHost *)RefCountedObject::operator new(0x68uLL);
    if ( v7 )
      v7 = OneCoreUAPInputHost::OneCoreUAPInputHost(v7);
    OneCoreUAPInputHost::s_pInputHost = v7;
    if ( v7 )
    {
      v9 = OneCoreUAPInputHost::Initialize(v8, a1);
      if ( v9 >= 0 )
      {
        v6 = OneCoreUAPInputHost::s_pInputHost;
        goto LABEL_9;
      }
      v7 = OneCoreUAPInputHost::s_pInputHost;
    }
    else
    {
      v9 = -2147024882;
    }
    if ( v7 )
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v7 + 2) + 24LL))((__int64)v7 + 16, 1LL);
    v11 = 178LL;
    goto LABEL_13;
  }
LABEL_9:
  v9 = (**(__int64 (__fastcall ***)(struct OneCoreUAPInputHost *, GUID *, struct ISystemInputHost **))v6)(
         v6,
         &GUID_1a9a7e32_5db5_45d7_98af_3d18ba629953,
         a2);
  if ( v9 >= 0 )
  {
    (*(void (__fastcall **)(struct OneCoreUAPInputHost *))(*(_QWORD *)OneCoreUAPInputHost::s_pInputHost + 16LL))(OneCoreUAPInputHost::s_pInputHost);
    return 0LL;
  }
  v11 = 183LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
    (const char *)(unsigned int)v9,
    v12);
  return (unsigned int)v9;
}
