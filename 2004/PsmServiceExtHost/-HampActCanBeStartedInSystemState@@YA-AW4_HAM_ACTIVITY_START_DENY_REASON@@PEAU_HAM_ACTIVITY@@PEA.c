/*
 * XREFs of ?HampActCanBeStartedInSystemState@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@PEAU_HAM_ACT_START_SYSTEM_STATE@@@Z @ 0x180003F84
 * Callers:
 *     ?HampActCanBeStarted@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x1800039F0 (-HampActCanBeStarted@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampSessionCheckBackgroundAccessAllowed@@YAJPEAU_HAM_SESSION@@PEAU_HAM_PACKAGE_INFO@@PEAK@Z @ 0x180035788 (-HampSessionCheckBackgroundAccessAllowed@@YAJPEAU_HAM_SESSION@@PEAU_HAM_PACKAGE_INFO@@PEAK@Z.c)
 *     ?HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007DC40 (-HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampActCanBeStartedInSystemState(__int64 a1, int *a2)
{
  int v3; // esi
  __int64 v4; // rbp
  __int64 v7; // rax
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  v4 = *(_QWORD *)(a1 + 80);
  if ( (a2[1] & 0xC) != 0 )
  {
    return 7;
  }
  else if ( (a2[1] & 2) != 0 && (*(_BYTE *)(a1 + 116) & 4) != 0 )
  {
    return 1;
  }
  else if ( ((*(_BYTE *)(a1 + 116) & 8) != 0 || (*(_DWORD *)(a1 + 112) & 0x400) != 0)
         && (a2[1] & 1) != 0
         && HampHostShouldDplPolicyApply(*(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80)) )
  {
    return 2;
  }
  else if ( (v3 & 8) != 0 && (*(_BYTE *)(a1 + 116) & 2) != 0 )
  {
    return 3;
  }
  else if ( (v3 & 0x20) != 0 && (*(_BYTE *)(a1 + 116) & 1) != 0 )
  {
    return 4;
  }
  else if ( (v3 & 2) != 0 || (*(_BYTE *)(a1 + 116) & 0x10) == 0 )
  {
    if ( (v3 & 0x10) != 0 && (*(_BYTE *)(a1 + 116) & 0x20) != 0 )
    {
      return 6;
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 112) & 0x8000) == 0 )
        return 0;
      v7 = *(_QWORD *)(v4 + 776);
      v8 = 1;
      HampSessionCheckBackgroundAccessAllowed(
        *(struct _HAM_SESSION **)(*(_QWORD *)(*(_QWORD *)(v7 + 88) + 88LL) + 160LL),
        (struct _HAM_PACKAGE_INFO *)(*(_QWORD *)(v7 + 88) + 96LL),
        &v8);
      if ( v8 )
        return 0;
      else
        return 11;
    }
  }
  else
  {
    return 5;
  }
}
