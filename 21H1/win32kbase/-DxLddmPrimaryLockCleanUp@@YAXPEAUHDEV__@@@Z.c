/*
 * XREFs of ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C00B2198
 * Callers:
 *     GreSuspendDirectDraw @ 0x1C00B2010 (GreSuspendDirectDraw.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007B850 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C00B16E8 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C00B4CE8 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     hdevEnumerate @ 0x1C00B4FA0 (hdevEnumerate.c)
 */

void __fastcall DxLddmPrimaryLockCleanUp(HDEV a1, __int64 a2, int a3)
{
  int v4; // r8d
  int v5; // eax
  int v6; // edx
  __int64 v7; // rcx
  HDEV i; // rcx
  int v9; // eax
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rax
  HDEV v13; // rbx
  HDEV v14; // [rsp+30h] [rbp+8h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v14, a2, a3);
  v14 = a1;
  if ( a1 )
  {
    v5 = *((_DWORD *)a1 + 10);
    if ( (v5 & 1) != 0 )
    {
      if ( (v5 & 0x20000) != 0 )
      {
        for ( i = 0LL; ; i = v13 )
        {
          v12 = hdevEnumerate(i);
          v13 = (HDEV)v12;
          if ( !v12 )
            break;
          v9 = *(_DWORD *)(v12 + 40);
          v14 = v13;
          if ( (v9 & 0x20000) == 0
            && (v9 & 1) != 0
            && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v14)
            && *((HDEV *)v13 + 3) == a1 )
          {
            DxLddmPrimaryLockCleanUpSinglePDev((struct PDEVOBJ *)&v14, v10, v11);
          }
        }
      }
      else if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v14) )
      {
        DxLddmPrimaryLockCleanUpSinglePDev((struct PDEVOBJ *)&v14, v6, v4);
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v4);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v7);
  }
}
