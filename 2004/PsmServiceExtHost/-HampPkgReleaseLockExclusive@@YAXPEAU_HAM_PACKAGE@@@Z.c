/*
 * XREFs of ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180025E00
 * Callers:
 *     ?HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000604C (-HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180006850 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000D958 (-HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001BB00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800216E4 (-HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180023A90 (-HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgEnterInsertion@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800262B4 (-HampPkgEnterInsertion@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostCheckWaitForQuiesceTurn@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029600 (-HampHostCheckWaitForQuiesceTurn@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckEndQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002A764 (-HampHostCheckEndQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampClientPkgClose@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x18008057C (-HampClientPkgClose@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z.c)
 *     ?HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x1800806D0 (-HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampClientPkgEnableDebugging@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x180080768 (-HampClientPkgEnableDebugging@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z.c)
 *     ?HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800807E4 (-HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampPkgReleaseLockExclusive(struct _HAM_PACKAGE *a1)
{
  _QWORD *Value; // rax

  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)Value & 0x40) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( Value[7]-- == 1LL )
      *Value &= ~0x40uLL;
  }
  *((_DWORD *)a1 + 78) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 304);
}
