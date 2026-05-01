/*
 * XREFs of Windows::Internal::MakeAsyncAction_Microsoft::WRL::DisableCausality_Windows::Internal::ComTaskPoolHandler__lambda_2d796ec39c4cc1ad3399d6c724543242___ @ 0x18002E764
 * Callers:
 *     ?SetTitleIdAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18002C530 (-SetTitleIdAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUHSTRING__.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044B28 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180044B90 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::MakeAsyncAction_Microsoft::WRL::DisableCausality_Windows::Internal::ComTaskPoolHandler__lambda_2d796ec39c4cc1ad3399d6c724543242___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx

  v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v7;
  if ( v7 )
  {
    *v7 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::`vftable';
    v7[1] = *a4;
    v10 = a4 + 1;
    v7[2] = 0LL;
    if ( v7 + 2 != a4 + 1 )
    {
      v7[2] = *v10;
      *v10 = 0LL;
    }
    v7[3] = a4[2];
    *v7 = &off_18004D140;
    *((_DWORD *)v7 + 8) = 0;
    `eh vector constructor iterator'(
      v7 + 5,
      8uLL,
      1uLL,
      (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
      (void (*)(void *))Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>);
    *((_DWORD *)v9 + 8) = 0;
  }
  else
  {
    v9 = 0LL;
  }
  return Windows::Internal::MakeAsyncActionHelper<Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::DisableCausality>(
           a1,
           a2,
           v8,
           v9);
}
