/*
 * XREFs of ?HampSystemBeginStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_LICENSE_TYPE@@_K@Z @ 0x180035884
 * Callers:
 *     ?HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180019690 (-HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     IsUMgrQueryUserContextFromSidPresent @ 0x180045080 (IsUMgrQueryUserContextFromSidPresent.c)
 *     IsPackageRundownNotificationForStoreLicense2Present @ 0x180045664 (IsPackageRundownNotificationForStoreLicense2Present.c)
 */

__int64 __fastcall HampSystemBeginStoreLicenseAcquisition(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v6; // r8d
  int v7; // r8d
  unsigned int v8; // edi
  unsigned int v9; // ebx
  int v10; // eax

  v6 = a3 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return (unsigned int)-1073741584;
      v8 = 1;
    }
    else
    {
      v8 = 2;
    }
  }
  else
  {
    v8 = 4;
  }
  v9 = 0;
  if ( (unsigned __int8)IsPackageRundownNotificationForStoreLicense2Present(a1, a2) )
  {
    if ( (unsigned __int8)IsUMgrQueryUserContextFromSidPresent() )
    {
      if ( IsWellKnownSid((PSID)(*(_QWORD *)(a1 + 88) + 228LL), WinLocalAccountAndAdministratorSid|WinCreatorGroupSid) )
      {
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 88LL) + 160LL) + 88LL) )
          return (unsigned int)-1073741637;
        a4 = 0LL;
      }
      v10 = BeginAcquireStoreLicenseForPackageActivation2(a1 + 96, v8, a4);
      if ( v10 >= 0 )
        return 0;
      return (unsigned int)v10;
    }
    else
    {
      return (unsigned int)-1073741822;
    }
  }
  return v9;
}
