/*
 * XREFs of ?FeedPositionAnimationData@DWMCursor@@AEAAJXZ @ 0x180020FC4
 * Callers:
 *     ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x180021570 (-SetPosition@DWMCursor@@UEAAJJJ@Z.c)
 *     ?CreateAnimationForProcess@DWMCursor@@QEAAJKPEA_K0@Z @ 0x18019CAB8 (-CreateAnimationForProcess@DWMCursor@@QEAAJKPEA_K0@Z.c)
 * Callees:
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x18002C25C (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMCursor::FeedPositionAnimationData(DWMCursor *this)
{
  struct IAnimationDataProvider *AnimationDataProvider; // rdi
  void (__fastcall *v4)(struct IAnimationDataProvider *, __int64 *, void (__fastcall ****)(_QWORD)); // rsi
  void (__fastcall ***v5)(_QWORD); // rcx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  void (__fastcall ***v12)(_QWORD); // [rsp+48h] [rbp+10h] BYREF

  if ( !*((_QWORD *)this + 9) )
    return 0LL;
  AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
  v4 = *(void (__fastcall **)(struct IAnimationDataProvider *, __int64 *, void (__fastcall ****)(_QWORD)))(*(_QWORD *)AnimationDataProvider + 48LL);
  v5 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 9);
  v12 = v5;
  if ( v5 )
    (**v5)(v5);
  v4(AnimationDataProvider, &v11, &v12);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v11 + 8) + 48LL))(v11 + 8, 2LL);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD6,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
    (const char *)(unsigned int)v6,
    0);
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
  return v7;
}
