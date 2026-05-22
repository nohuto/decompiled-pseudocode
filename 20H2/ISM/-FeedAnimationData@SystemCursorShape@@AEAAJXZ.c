/*
 * XREFs of ?FeedAnimationData@SystemCursorShape@@AEAAJXZ @ 0x18013F8C4
 * Callers:
 *     ?Initialize@SystemCursorShape@@QEAAJXZ @ 0x18013FC24 (-Initialize@SystemCursorShape@@QEAAJXZ.c)
 *     ?SetVisible@SystemCursorShape@@QEAAJ_N@Z @ 0x180140590 (-SetVisible@SystemCursorShape@@QEAAJ_N@Z.c)
 * Callees:
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x18002C2EC (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?lock@?$weak_ptr@VSystemCursorService@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService@@@2@XZ @ 0x180140AE0 (-lock@-$weak_ptr@VSystemCursorService@@@std@@QEBA-AV-$shared_ptr@VSystemCursorService@@@2@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemCursorShape::FeedAnimationData(SystemCursorShape *this)
{
  struct IAnimationDataProvider *AnimationDataProvider; // rdi
  void (__fastcall *v3)(struct IAnimationDataProvider *, __int64 *, void (__fastcall ****)(_QWORD)); // rsi
  void (__fastcall ***v4)(_QWORD); // rcx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-10h] BYREF
  std::_Ref_count_base *v11; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v13; // [rsp+50h] [rbp+20h] BYREF
  void (__fastcall ***v14)(_QWORD); // [rsp+58h] [rbp+28h] BYREF

  std::weak_ptr<SystemCursorService>::lock((char *)this + 16, &v10);
  if ( !v10 )
  {
LABEL_9:
    v6 = 0;
    goto LABEL_10;
  }
  AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
  v3 = *(void (__fastcall **)(struct IAnimationDataProvider *, __int64 *, void (__fastcall ****)(_QWORD)))(*(_QWORD *)AnimationDataProvider + 48LL);
  v4 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 4);
  v14 = v4;
  if ( v4 )
    (**v4)(v4);
  v3(AnimationDataProvider, &v13, &v14);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v13 + 8) + 32LL))(v13 + 8, 1LL);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    }
    goto LABEL_9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x262,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorservice.cpp",
    (const char *)(unsigned int)v5);
  v7 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
LABEL_10:
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  return v6;
}
