/*
 * XREFs of ?HampHostCheckWaitForQuiesceTurn@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029600
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800275BC (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     CempLockSleepConditionVariableExclusive @ 0x180005898 (CempLockSleepConditionVariableExclusive.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009D90 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18002217C (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180025E00 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostIsQuiesceSerialized@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029718 (-HampHostIsQuiesceSerialized@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

__int64 __fastcall HampHostCheckWaitForQuiesceTurn(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  int v4; // eax
  __int64 v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v8; // [rsp+58h] [rbp-20h]
  __int64 v9; // [rsp+60h] [rbp-18h]

  v2 = 0;
  if ( HampHostIsQuiesceSerialized(a1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)a1 + 97) + 88LL);
    HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v3);
    v4 = *(_DWORD *)(v3 + 340);
    if ( (v4 & 4) != 0 )
    {
      HampHostReleaseLockExclusiveEx(a1);
      RmpReleaseGlobalLock();
      if ( (unsigned int)dword_1800B3218 > 5 )
      {
        v6 = *((_QWORD *)a1 - 4);
        v9 = 8LL;
        v8 = &v6;
        tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_1800A1243, 0, 0, 3u, &v7);
      }
      CempLockSleepConditionVariableExclusive(v3 + 304, v3 + 320, 0LL);
      HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v3);
      v2 = 1;
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx(a1, 0);
    }
    else
    {
      *(_DWORD *)(v3 + 340) = v4 | 4;
      HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v3);
    }
  }
  return v2;
}
