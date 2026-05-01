/*
 * XREFs of ?TabletModePositionerHandoffContext_CreateInstance@@YAJPEAUIAppLayout@@_NAEBU_GUID@@PEAPEAX@Z @ 0x180405F28
 * Callers:
 *     ?ControlLost@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1803F6210 (-ControlLost@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnkno.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003CC50 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x18035E40C (-InternalRelease@-$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VTabletModePositionerHandoffContext@@V1@AEAPEAUIAppLayout@@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVTabletModePositionerHandoffContext@@AEAPEAUIAppLayout@@AEA_N@Z @ 0x180405C98 (--$MakeAndInitialize@VTabletModePositionerHandoffContext@@V1@AEAPEAUIAppLayout@@AEA_N@Details@WR.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositionerHandoffContext_CreateInstance(
        struct IAppLayout *a1,
        bool a2,
        const struct _GUID *a3,
        void **a4)
{
  int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  _DWORD *v9; // rcx
  volatile int *v10; // rcx
  volatile int *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IAppLayout *v14; // [rsp+30h] [rbp+8h] BYREF
  bool v15; // [rsp+38h] [rbp+10h] BYREF
  volatile int *v16; // [rsp+40h] [rbp+18h] BYREF

  v15 = a2;
  v14 = a1;
  *a4 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(&v16);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<TabletModePositionerHandoffContext,TabletModePositionerHandoffContext,IAppLayout * &,bool &>(
         &v16,
         &v14,
         &v15);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = (unsigned int)v5;
    v8 = 44LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\handoffcontext.cpp",
      (const char *)v7);
    goto LABEL_11;
  }
  *a4 = 0LL;
  if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v11 = v16;
    *a4 = (void *)v16;
    (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v11 + 8LL))(v11);
    v6 = 0;
  }
  else if ( InlineIsEqualGUID(v9, &GUID_0480d776_b053_4a1f_945d_fac2debae8e6) )
  {
    v10 = v16;
    *a4 = (void *)v16;
    v6 = 0;
    (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  else
  {
    v6 = -2147467262;
  }
  if ( v6 < 0 )
  {
    v7 = (unsigned int)v6;
    v8 = 45LL;
    goto LABEL_10;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(&v16);
  return (unsigned int)v6;
}
