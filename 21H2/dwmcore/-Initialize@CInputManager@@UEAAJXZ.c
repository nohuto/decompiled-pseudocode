/*
 * XREFs of ?Initialize@CInputManager@@UEAAJXZ @ 0x18002DDE0
 * Callers:
 *     ?Initialize@CGlobalInputManager@@UEAAJXZ @ 0x18002E080 (-Initialize@CGlobalInputManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CGlobalMit@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18002DD10 (-Create@CGlobalMit@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Reset@CMit@@QEAAJXZ @ 0x18002DEC8 (-Reset@CMit@@QEAAJXZ.c)
 *     ?EnsureRenderThreadCanReceiveInputThreadMessages@CInputManager@@IEAAJXZ @ 0x18002DFB0 (-EnsureRenderThreadCanReceiveInputThreadMessages@CInputManager@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputManager::Initialize(CInputManager *this)
{
  __int64 *v1; // rsi
  __int64 v3; // rcx
  int CanReceiveInputThreadMessages; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(__int64, char *); // rbp
  int v10; // eax
  CMit *v11; // rax
  unsigned int v13; // ecx
  unsigned int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CMit *v16; // [rsp+40h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 32);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    *v1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  CanReceiveInputThreadMessages = CoreUICreate(v1);
  v6 = CanReceiveInputThreadMessages;
  if ( CanReceiveInputThreadMessages < 0 )
  {
    v14 = 44;
    goto LABEL_17;
  }
  v7 = *v1;
  v8 = *((_QWORD *)this + 5);
  v9 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 24LL);
  if ( v8 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  CanReceiveInputThreadMessages = v9(v7, (char *)this + 40);
  v6 = CanReceiveInputThreadMessages;
  if ( CanReceiveInputThreadMessages < 0 )
  {
    v14 = 45;
    goto LABEL_17;
  }
  CanReceiveInputThreadMessages = CInputManager::EnsureRenderThreadCanReceiveInputThreadMessages(this);
  v6 = CanReceiveInputThreadMessages;
  if ( CanReceiveInputThreadMessages < 0 )
  {
    v14 = 47;
    goto LABEL_17;
  }
  v10 = CGlobalMit::Create(*((struct CComposition **)this + 2), &v16);
  v6 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\globalmit.cpp",
      (const char *)(unsigned int)v10);
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v6, 0x32u, 0LL);
    return v6;
  }
  v11 = v16;
  v6 = 0;
  *((_QWORD *)this + 3) = v16;
  if ( v11 )
  {
    CanReceiveInputThreadMessages = CMit::Reset(v11);
    v6 = CanReceiveInputThreadMessages;
    if ( CanReceiveInputThreadMessages < 0 )
    {
      v14 = 54;
LABEL_17:
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, CanReceiveInputThreadMessages, v14, 0LL);
    }
  }
  return v6;
}
