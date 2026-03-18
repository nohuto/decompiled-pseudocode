/*
 * XREFs of ACPIDockIsDockDevice @ 0x1C00209E0
 * Callers:
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C001A360 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C002C840 (ACPIBuildSurpriseRemovedExtension.c)
 *     OSNotifyDeviceEnum @ 0x1C002EE4C (OSNotifyDeviceEnum.c)
 *     ACPIBuildIssueNotifyDeviceEject @ 0x1C004B780 (ACPIBuildIssueNotifyDeviceEject.c)
 *     ACPIBusIrpQueryPower @ 0x1C004D380 (ACPIBusIrpQueryPower.c)
 *     ACPIFilterIrpQueryPower @ 0x1C0055600 (ACPIFilterIrpQueryPower.c)
 *     OSNotifyDeviceCheck @ 0x1C0058934 (OSNotifyDeviceCheck.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C009E810 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C00AD690 (ACPIBusAndFilterIrpQueryEjectRelations.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C00039E4 (DereferenceObjectEx.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0008DA0 (GetNameSpaceObjectNoLock.c)
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     AMLIDebugger @ 0x1C0065AF0 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0065BD0 (ConPrintf.c)
 */

bool __fastcall ACPIDockIsDockDevice(__int64 *a1)
{
  KIRQL v2; // di
  __int64 v3; // rdx
  int NameSpaceObjectNoLock; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // [rsp+20h] [rbp-A8h] BYREF
  _DWORD Src[32]; // [rsp+30h] [rbp-98h] BYREF

  strcpy((char *)Src, "_DCK");
  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v11 = 0LL;
  dword_1C0082908 = 0;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger(v7, v6, v8, v9);
  }
  if ( !LOBYTE(Src[0]) )
  {
    NameSpaceObjectNoLock = -1073741810;
    goto LABEL_9;
  }
  if ( a1 )
  {
    v3 = *a1;
    if ( (*(_BYTE *)(*a1 + 64) & 4) != 0 )
    {
      NameSpaceObjectNoLock = -1073741738;
      goto LABEL_9;
    }
  }
  else
  {
    v3 = 0LL;
  }
  NameSpaceObjectNoLock = GetNameSpaceObjectNoLock((const char *)Src, v3, (__int64 *)&v11, 1);
  if ( NameSpaceObjectNoLock >= 0 )
  {
    v10 = v11;
    if ( v11 )
    {
      dword_1C0082908 = 0;
      pszDest = 0;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 128));
        v10 = v11;
      }
      DereferenceObjectEx(v10);
    }
  }
  if ( NameSpaceObjectNoLock == 32772 )
    NameSpaceObjectNoLock = 259;
LABEL_9:
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return NameSpaceObjectNoLock >= 0;
}
