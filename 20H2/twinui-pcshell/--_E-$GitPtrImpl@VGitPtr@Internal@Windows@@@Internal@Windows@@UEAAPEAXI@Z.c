/*
 * XREFs of ??_E?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@UEAAPEAXI@Z @ 0x18017A400
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Revoke@?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@QEAAJXZ @ 0x180180E30 (-Revoke@-$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
_DWORD *__fastcall Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  *(_QWORD *)a1 = &Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::`vftable';
  if ( a1[2] )
    Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::Revoke(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x10);
  return a1;
}
