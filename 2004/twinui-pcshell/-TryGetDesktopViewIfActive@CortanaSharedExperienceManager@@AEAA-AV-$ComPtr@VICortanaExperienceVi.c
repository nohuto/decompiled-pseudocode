/*
 * XREFs of ?TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@XZ @ 0x1801BBE2C
 * Callers:
 *     ?Hide@CortanaSharedExperienceManager@@UEAAJXZ @ 0x1801B8F60 (-Hide@CortanaSharedExperienceManager@@UEAAJXZ.c)
 *     ?MinimizeToBoxMode@CortanaSharedExperienceManager@@UEAAJXZ @ 0x1801B9040 (-MinimizeToBoxMode@CortanaSharedExperienceManager@@UEAAJXZ.c)
 *     ?PrepareForAppTransition@CortanaSharedExperienceManager@@UEAAJW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1801BA610 (-PrepareForAppTransition@CortanaSharedExperienceManager@@UEAAJW4CortanaAppTransitionType@Experie.c)
 *     ?ShowWithStart@CortanaSharedExperienceManager@@UEAAJE@Z @ 0x1801BB700 (-ShowWithStart@CortanaSharedExperienceManager@@UEAAJE@Z.c)
 *     ?TakeKeyboardFocus@CortanaSharedExperienceManager@@UEAAJXZ @ 0x1801BBDE0 (-TakeKeyboardFocus@CortanaSharedExperienceManager@@UEAAJXZ.c)
 *     ?Uncloak@CortanaSharedExperienceManager@@UEAAJXZ @ 0x1801BBEF0 (-Uncloak@CortanaSharedExperienceManager@@UEAAJXZ.c)
 *     ?get_IsExplicitDismissEnabled@CortanaSharedExperienceManager@@UEAAJPEAE@Z @ 0x1801BE410 (-get_IsExplicitDismissEnabled@CortanaSharedExperienceManager@@UEAAJPEAE@Z.c)
 *     ?get_SuggestionsShowing@CortanaSharedExperienceManager@@UEAAJPEAE@Z @ 0x1801BE4D0 (-get_SuggestionsShowing@CortanaSharedExperienceManager@@UEAAJPEAE@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$As@VICortanaExperienceView@Cortana@TwinUI@@@?$ComPtr@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801B5BCC (--$As@VICortanaExperienceView@Cortana@TwinUI@@@-$ComPtr@UIShellExperiencePositioner@Experience@S.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall CortanaSharedExperienceManager::TryGetDesktopViewIfActive(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  int (__fastcall *v4)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rbx
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp+8h] BYREF
  __int64 *v7; // [rsp+48h] [rbp+10h]

  v7 = a2;
  *a2 = 0LL;
  v6 = 0LL;
  v3 = *(_QWORD *)(a1 + 424);
  v4 = *(int (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v3 + 8LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  if ( v4(v3, &v6) >= 0 )
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperiencePositioner>::As<TwinUI::Cortana::ICortanaExperienceView>(
      &v6,
      a2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  return a2;
}
