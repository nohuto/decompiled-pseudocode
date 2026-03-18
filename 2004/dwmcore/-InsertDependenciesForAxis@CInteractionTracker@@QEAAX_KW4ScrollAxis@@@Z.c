/*
 * XREFs of ?InsertDependenciesForAxis@CInteractionTracker@@QEAAX_KW4ScrollAxis@@@Z @ 0x1801CB2C8
 * Callers:
 *     ?InsertDependenciesInOrder@CInteractionTrackerScaleAnimation@@MEAAX_K@Z @ 0x180204CC0 (-InsertDependenciesInOrder@CInteractionTrackerScaleAnimation@@MEAAX_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18014E4E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x1801CB194 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?InsertDependenciesForProperty@CInteractionTracker@@QEAAX_KW4Enum@InteractionTrackerProperty@@@Z @ 0x1801CB3AC (-InsertDependenciesForProperty@CInteractionTracker@@QEAAX_KW4Enum@InteractionTrackerProperty@@@Z.c)
 *     ?InsertDependenciesForAxis@InteractionSourceManager@@QEAAX_KW4ScrollAxis@@@Z @ 0x180212790 (-InsertDependenciesForAxis@InteractionSourceManager@@QEAAX_KW4ScrollAxis@@@Z.c)
 */

char __fastcall CInteractionTracker::InsertDependenciesForAxis(__int64 a1, __int64 a2, int a3, const char *a4)
{
  __int64 v4; // rbx
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // rcx
  char result; // al
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a3;
  v7 = *(_QWORD *)(a1 + 8LL * a3 + 376);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 216LL))(v7);
  v8 = 1;
  if ( (unsigned int)v4 <= 1 )
  {
    v9 = *(_QWORD *)(a1 + 8 * v4 + 360);
    if ( v9 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 216LL))(v9, a2);
  }
  if ( (int)v4 < 0 || (int)v4 > 1 && (v8 = 2, (_DWORD)v4 != 2) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1594,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
      a4);
    JUMPOUT(0x1801CB3A3LL);
  }
  CInteractionTracker::InsertDependenciesForProperty(a1, a2, v8);
  result = InteractionSourceManager::HasActiveManipulation((InteractionSourceManager *)(a1 + 192));
  if ( result )
    return InteractionSourceManager::InsertDependenciesForAxis(a1 + 192, a2, (unsigned int)v4);
  return result;
}
