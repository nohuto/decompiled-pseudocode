/*
 * XREFs of ?SetImportanceValues@CSingleViewShellExperience@@AEAAJW4ImportanceVectorOptions@1@@Z @ 0x18001D054
 * Callers:
 *     ?BoostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x18000B794 (-BoostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x18001CDEC (-UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z @ 0x1800605A0 (-SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z.c)
 * Callees:
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001D260 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::SetImportanceValues(__int64 a1, char a2)
{
  __int64 v3; // rbx
  char v4; // al
  __int16 v5; // ax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rdx
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  unsigned int v12; // [rsp+30h] [rbp+10h] BYREF
  __int64 v13; // [rsp+40h] [rbp+20h] BYREF

  v3 = a1 + 24;
  if ( !*(_QWORD *)(a1 + 24) )
    return 0LL;
  RmActivityImportanceInitialize(&v12);
  v4 = HIBYTE(v12);
  if ( (a2 & 1) != 0 )
    v4 = -16;
  HIBYTE(v12) = v4;
  v5 = v12;
  if ( (a2 & 2) != 0 )
    v5 = v12 | 0x400;
  LOWORD(v12) = v5 | 0x101;
  v13 = 0LL;
  v6 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
         v3,
         &v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = 1270LL;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 64LL))(v13, v12);
    v7 = v6;
    if ( v6 >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      return 0LL;
    }
    v9 = 1271LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v6,
    savedregs);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return v7;
}
