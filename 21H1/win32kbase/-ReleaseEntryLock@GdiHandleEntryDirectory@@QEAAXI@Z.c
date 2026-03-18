/*
 * XREFs of ?ReleaseEntryLock@GdiHandleEntryDirectory@@QEAAXI@Z @ 0x1C0082FF0
 * Callers:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C000FF20 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     HmgMarkLazyDelete @ 0x1C0016EB0 (HmgMarkLazyDelete.c)
 *     EngUnlockSurface @ 0x1C0080860 (EngUnlockSurface.c)
 *     HmgLock @ 0x1C00818B0 (HmgLock.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0082610 (DEC_SHARE_REF_CNT.c)
 *     HmgShareLock @ 0x1C0083780 (HmgShareLock.c)
 * Callees:
 *     <none>
 */

void __fastcall GdiHandleEntryDirectory::ReleaseEntryLock(GdiHandleEntryDirectory *this, unsigned int a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // r10

  v2 = *((_DWORD *)this + 514);
  if ( a2 < v2 + ((*((unsigned __int16 *)this + 1) + 0xFFFF) << 16) )
  {
    v3 = ((a2 - v2) >> 16) + 1;
    if ( a2 < v2 )
      v3 = 0LL;
    v4 = *((_QWORD *)this + v3 + 1);
    if ( (_DWORD)v3 )
      a2 += ((1 - (_DWORD)v3) << 16) - v2;
    *(_DWORD *)(*(_QWORD *)v4 + 24LL * a2 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v4 + 24) + 8 * ((unsigned __int64)a2 >> 8)) + 16LL * (unsigned __int8)a2,
      0LL);
    KeLeaveCriticalRegion();
  }
}
