/*
 * XREFs of ??1ReferencedGitCookie@?$GitStorageType@UIInspectable@@@detail@XWinRT@@AEAA@XZ @ 0x180282988
 * Callers:
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAKXZ @ 0x18028836C (-Release@ReferencedGitCookie@-$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::detail::GitStorageType<IInspectable>::ReferencedGitCookie::~ReferencedGitCookie(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 4) )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1803D35A8 + 32LL))(qword_1803D35A8);
  return result;
}
