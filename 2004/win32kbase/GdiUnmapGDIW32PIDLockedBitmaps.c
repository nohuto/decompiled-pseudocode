/*
 * XREFs of GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C00BD400
 * Callers:
 *     GdiProcessCallout @ 0x1C00BCB60 (GdiProcessCallout.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00820E8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0082170 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 */

__int64 __fastcall GdiUnmapGDIW32PIDLockedBitmaps(__int64 a1, __int64 a2, int a3)
{
  __int64 **v4; // r8
  __int64 **v5; // rbx
  __int64 *v6; // rdx
  int v7; // r8d
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 *v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rax
  PERESOURCE v13; // [rsp+30h] [rbp+8h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v13, a2, a3);
  v13 = ghsemMapRot;
  EngAcquireSemaphore((HSEMAPHORE)ghsemMapRot);
  v5 = (__int64 **)(a1 + 224);
  v6 = *v5;
  if ( *v5 )
  {
    while ( v6 != (__int64 *)v5 )
    {
      v10 = v6;
      v11 = v6;
      v6 = (__int64 *)*v6;
      *(v10 - 33) = 0LL;
      *(v10 - 34) = 0LL;
      v12 = *v10;
      if ( *(__int64 **)(v12 + 8) != v11 || (v4 = (__int64 **)v11[1], *v4 != v11) )
        __fastfail(3u);
      *v4 = (__int64 *)v12;
      *(_QWORD *)(v12 + 8) = v4;
      v11[1] = (__int64)v11;
      *v11 = (__int64)v11;
    }
  }
  v5[1] = (__int64 *)v5;
  *v5 = (__int64 *)v5;
  SEMOBJ::vUnlock((SEMOBJ *)&v13, (__int64)v6, (int)v4);
  result = EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v7);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    return PsLeavePriorityRegion(v9);
  }
  return result;
}
