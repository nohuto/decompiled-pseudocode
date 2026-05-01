/*
 * XREFs of ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180327584
 * Callers:
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z @ 0x18032C550 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180067F7C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800854C8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4072c03f0563dda202850bcb805fe733___ @ 0x1800A0444 (Windows--Internal--ComTaskPool--QueueTask__lambda_4072c03f0563dda202850bcb805fe733___.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800A0D60 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x18032AE14 (-IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::CreateModalExperienceAsync(TouchKeyboardExperienceManager *this)
{
  __int64 v3; // rcx
  int v4; // ebx
  _QWORD v5[5]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v6[4]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( TouchKeyboardExperienceManager::IsSessionShuttingDown() )
    return 2147943041LL;
  std::wstring::wstring((__int64)v6);
  std::wstring::wstring((__int64)v5);
  v5[4] = this;
  v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_4072c03f0563dda202850bcb805fe733___(v3, (__int64)v5);
  std::wstring::~wstring(v5);
  if ( v4 >= 0 )
    v4 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x96A,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  std::wstring::_Tidy_deallocate(v6);
  return (unsigned int)v4;
}
