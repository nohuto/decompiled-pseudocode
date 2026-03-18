/*
 * XREFs of ?Initialize@CInputManager@@QEAAJXZ @ 0x18002EAF8
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x18002E2F0 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?Reset@CMit@@QEAAJXZ @ 0x18002EBE0 (-Reset@CMit@@QEAAJXZ.c)
 *     ?Create@CGlobalMit@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18002ECC8 (-Create@CGlobalMit@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?EnsureRenderThreadCanReceiveInputThreadMessages@CInputManager@@IEAAJXZ @ 0x1800301B8 (-EnsureRenderThreadCanReceiveInputThreadMessages@CInputManager@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014DDBC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CInputManager::Initialize(CInputManager *this)
{
  __int64 *v1; // rsi
  __int64 v3; // rcx
  int CanReceiveInputThreadMessages; // eax
  unsigned int v5; // ecx
  int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(__int64, char *); // rbp
  int v10; // eax
  unsigned int v11; // ecx
  CMit *v12; // rcx
  unsigned int v14; // [rsp+20h] [rbp-18h]
  unsigned int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CGlobalMit *v17; // [rsp+40h] [rbp+8h] BYREF

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
    v15 = 44;
    goto LABEL_20;
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
    v15 = 45;
    goto LABEL_20;
  }
  CanReceiveInputThreadMessages = CInputManager::EnsureRenderThreadCanReceiveInputThreadMessages(this);
  v6 = CanReceiveInputThreadMessages;
  if ( CanReceiveInputThreadMessages < 0 )
  {
    v15 = 47;
    goto LABEL_20;
  }
  v10 = CGlobalMit::Create(*((struct CComposition **)this + 2), &v17);
  v6 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\globalmit.cpp",
      (const char *)(unsigned int)v10,
      v14);
  }
  else
  {
    v6 = 0;
    *((_QWORD *)this + 3) = v17;
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v6, 0x32u, 0LL);
    return (unsigned int)v6;
  }
  v12 = (CMit *)*((_QWORD *)this + 3);
  if ( v12 )
  {
    CanReceiveInputThreadMessages = CMit::Reset(v12);
    v6 = CanReceiveInputThreadMessages;
    if ( CanReceiveInputThreadMessages < 0 )
    {
      v15 = 54;
LABEL_20:
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, CanReceiveInputThreadMessages, v15, 0LL);
    }
  }
  return (unsigned int)v6;
}
