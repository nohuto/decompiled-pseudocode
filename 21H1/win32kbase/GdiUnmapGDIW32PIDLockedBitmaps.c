/*
 * XREFs of GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C000B490
 * Callers:
 *     GdiProcessCallout @ 0x1C000AC40 (GdiProcessCallout.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C007B7C8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007B850 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 */

__int64 __fastcall GdiUnmapGDIW32PIDLockedBitmaps(__int64 a1)
{
  __int64 **v2; // rbx
  __int64 *v3; // rdx
  int v4; // r8d
  __int64 result; // rax
  __int64 *v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 **v9; // r8
  PERESOURCE v10; // [rsp+30h] [rbp+8h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v10);
  v10 = ghsemMapRot;
  EngAcquireSemaphore((HSEMAPHORE)ghsemMapRot);
  v2 = (__int64 **)(a1 + 224);
  v3 = *v2;
  if ( *v2 )
  {
    while ( v3 != (__int64 *)v2 )
    {
      v6 = v3;
      v7 = v3;
      v3 = (__int64 *)*v3;
      *(v6 - 33) = 0LL;
      *(v6 - 34) = 0LL;
      v8 = *v6;
      if ( *(__int64 **)(v8 + 8) != v7 || (v9 = (__int64 **)v7[1], *v9 != v7) )
        __fastfail(3u);
      *v9 = (__int64 *)v8;
      *(_QWORD *)(v8 + 8) = v9;
      v7[1] = (__int64)v7;
      *v7 = (__int64)v7;
    }
  }
  v2[1] = (__int64 *)v2;
  *v2 = (__int64 *)v2;
  SEMOBJ::vUnlock((SEMOBJ *)&v10);
  result = EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v4);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    return PsLeavePriorityRegion();
  }
  return result;
}
