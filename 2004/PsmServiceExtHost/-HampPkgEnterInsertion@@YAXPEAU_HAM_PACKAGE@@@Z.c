/*
 * XREFs of ?HampPkgEnterInsertion@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800262B4
 * Callers:
 *     ?HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800216E4 (-HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18002217C (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180025E00 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

void __fastcall HampPkgEnterInsertion(struct _HAM_PACKAGE *a1)
{
  DWORD *v2; // rdi
  DWORD v3; // [rsp+30h] [rbp+8h] BYREF

  HampPkgAcquireLockExclusive(a1);
  v2 = (DWORD *)((char *)a1 + 336);
  while ( 1 )
  {
    v3 = *v2;
    if ( !v3 )
      break;
    HampPkgReleaseLockExclusive(a1);
    RtlWaitOnAddress((char *)a1 + 336, &v3, 4LL);
    HampPkgAcquireLockExclusive(a1);
  }
  *v2 = GetCurrentThreadId();
  HampPkgReleaseLockExclusive(a1);
}
