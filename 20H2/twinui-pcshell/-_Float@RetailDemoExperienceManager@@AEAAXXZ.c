/*
 * XREFs of ?_Float@RetailDemoExperienceManager@@AEAAXXZ @ 0x1801EDAE4
 * Callers:
 *     ?Float@RetailDemoExperienceManager@@UEAAJHHHH@Z @ 0x1801EBF10 (-Float@RetailDemoExperienceManager@@UEAAJHHHH@Z.c)
 *     ?_Show@RetailDemoExperienceManager@@AEAAXXZ @ 0x1801EE2F4 (-_Show@RetailDemoExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ @ 0x1801EE018 (-_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_SetFrameRect@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z @ 0x1801EE0A8 (-_SetFrameRect@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z.c)
 */

void __fastcall RetailDemoExperienceManager::_Float(RetailDemoExperienceManager *this)
{
  struct tagRECT v2; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_QWORD *)this + 25) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      255LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  RetailDemoExperienceManager::_RestoreWorkingArea(this);
  v2 = *(struct tagRECT *)((char *)this + 364);
  RetailDemoExperienceManager::_SetFrameRect(this, &v2);
}
