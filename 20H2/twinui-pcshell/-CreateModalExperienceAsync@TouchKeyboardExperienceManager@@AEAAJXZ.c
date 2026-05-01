/*
 * XREFs of ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180348674
 * Callers:
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z @ 0x18034D580 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800627BC (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180084658 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7701e7176002895e9cf0bc610689a4a2___ @ 0x1800B02C0 (Windows--Internal--ComTaskPool--QueueTask__lambda_7701e7176002895e9cf0bc610689a4a2___.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800B0B00 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x18034BEB0 (-IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ.c)
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
  v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_7701e7176002895e9cf0bc610689a4a2___(v3, (__int64)v5);
  std::wstring::~wstring(v5);
  if ( v4 >= 0 )
    v4 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x924,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  std::wstring::_Tidy_deallocate(v6);
  return (unsigned int)v4;
}
