/*
 * XREFs of ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C00C0784
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00BCF4C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0082170 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     HmgShareLockCheck @ 0x1C0088B80 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0089440 (HmgDecrementShareReferenceCountEx.c)
 *     HmgNextOwned @ 0x1C00C0810 (HmgNextOwned.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00CF18C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

__int64 __fastcall vCleanupSurfaces(unsigned int a1, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  __int64 v6; // rdx
  int v7; // r8d
  __int64 v8; // rax
  __int64 v9; // r8
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF
  __int64 v13; // [rsp+48h] [rbp+20h]

  v13 = 0LL;
  v3 = 0;
  while ( 1 )
  {
    result = HmgNextOwned(v3, a1);
    v3 = result;
    if ( !(_DWORD)result )
      break;
    if ( (BYTE2(v13) & 0x1F) == 5 )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v12, v6, v7);
      v8 = HmgShareLockCheck(v13, 5);
      v12 = v8;
      if ( v8 )
      {
        v10 = *(_DWORD *)(v8 + 112);
        if ( v10 >= 0 || (v10 & 0x40000) != 0 )
        {
          SURFREF::bDeleteSurface(&v12, a2, v9);
          v8 = v12;
        }
        if ( v8 )
          HmgDecrementShareReferenceCountEx(v8, 0LL);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v9);
      if ( ghsemDynamicModeChange )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
        PsLeavePriorityRegion(v11);
      }
    }
  }
  return result;
}
