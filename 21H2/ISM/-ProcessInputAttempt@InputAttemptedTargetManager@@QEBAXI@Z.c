/*
 * XREFs of ?ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z @ 0x180103C80
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_97290a49cf3d7d8156e8fc9e8009460d__void__MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE_const___::_Do_call @ 0x1801031A0 (std--_Func_impl_no_alloc__lambda_97290a49cf3d7d8156e8fc9e8009460d__void__MIT_KEYBOA_ea_1801031A0.c)
 *     ?OnPointerInputDown@DWMInputRouter@@IEAAXIKW4InputType@@UtagPOINT@@@Z @ 0x180138D30 (-OnPointerInputDown@DWMInputRouter@@IEAAXIKW4InputType@@UtagPOINT@@@Z.c)
 *     ?ProcessInputAttemptForFocusedView@DWMInputRouter@@UEAAJXZ @ 0x180138DE0 (-ProcessInputAttemptForFocusedView@DWMInputRouter@@UEAAJXZ.c)
 * Callees:
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18003B08C (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBW4GameInputGamepadButtons@@@?$vector@W4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@QEAAPEAW4GameInputGamepadButtons@@QEAW42@AEBW42@@Z @ 0x180089E78 (--$_Emplace_reallocate@AEBW4GameInputGamepadButtons@@@-$vector@W4GameInputGamepadButtons@@V-$all.c)
 *     ?GetAllAncestors@ViewHierarchyWithWindowManager@@QEAA?AV?$vector@IV?$allocator@I@std@@@std@@I@Z @ 0x1800BDB5C (-GetAllAncestors@ViewHierarchyWithWindowManager@@QEAA-AV-$vector@IV-$allocator@I@std@@@std@@I@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InputAttemptedTargetManager::ProcessInputAttempt(InputAttemptedTargetManager *this, unsigned int a2)
{
  int *v4; // rdi
  int *v5; // rdi
  int *i; // r14
  int v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // rbp
  int v10; // eax
  int *v11; // [rsp+20h] [rbp-38h] BYREF
  int *v12; // [rsp+28h] [rbp-30h]
  int *v13; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v15; // [rsp+68h] [rbp+10h] BYREF

  v15 = a2;
  if ( *((_QWORD *)this + 2) != *((_QWORD *)this + 3) && a2 )
  {
    ViewHierarchyWithWindowManager::GetAllAncestors(*(_QWORD *)this, &v11, a2);
    v4 = v12;
    if ( v13 == v12 )
    {
      std::vector<enum GameInputGamepadButtons>::_Emplace_reallocate<enum GameInputGamepadButtons const &>(
        (const void **)&v11,
        v12,
        &v15);
      v5 = v12;
    }
    else
    {
      *v12 = a2;
      v5 = v4 + 1;
      v12 = v5;
    }
    for ( i = v11; i != v5; ++i )
    {
      v7 = *i;
      v8 = *((_QWORD *)this + 2);
      v9 = *((_QWORD *)this + 3);
      while ( v8 != v9
           && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)v8 + 8LL) + 32LL))(*(_QWORD *)v8 + 8LL) != v7 )
        v8 += 8LL;
      if ( v8 != *((_QWORD *)this + 3) )
      {
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)v8 + 8LL) + 24LL))(*(_QWORD *)v8 + 8LL);
        if ( v10 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            68LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputattemptedtargetmanager.cpp",
            (const char *)(unsigned int)v10);
          __debugbreak();
        }
      }
    }
    std::vector<Windows::UI::Color>::_Tidy((__int64)&v11);
  }
}
