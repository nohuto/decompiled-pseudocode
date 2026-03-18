/*
 * XREFs of ?UpdateProcessPriorityForSpinning@PriorityBoost@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00C3514
 * Callers:
 *     ?HandleProcessSpinning@@YAHXZ @ 0x1C00519B0 (-HandleProcessSpinning@@YAHXZ.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00C34CC (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     NtUserYieldTask @ 0x1C02045B0 (NtUserYieldTask.c)
 * Callees:
 *     _anonymous_namespace_::SetForegroundPriorityProcess @ 0x1C00C3614 (_anonymous_namespace_--SetForegroundPriorityProcess.c)
 */

void __fastcall PriorityBoost::UpdateProcessPriorityForSpinning(PriorityBoost *this, struct tagTHREADINFO *a2)
{
  __int64 v3; // r9
  int v4; // edx
  __int64 i; // rcx
  __int64 v6; // r8

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&`anonymous namespace'::boostLock, 0LL);
  v3 = *((_QWORD *)this + 53);
  v4 = *(_DWORD *)(v3 + 12);
  if ( (*((_DWORD *)this + 122) & 0x400) != 0 )
  {
    if ( (v4 & 0x800) == 0 )
    {
      *(_DWORD *)(v3 + 12) = v4 | 0x800;
      if ( (*(_DWORD *)(*((_QWORD *)this + 53) + 820LL) & 0x60000) == 0x20000 )
      {
        v6 = 2LL;
LABEL_10:
        anonymous_namespace_::SetForegroundPriorityProcess(v3, this, v6);
      }
    }
  }
  else if ( (v4 & 0x800) != 0 )
  {
    for ( i = *(_QWORD *)(v3 + 320); i; i = *(_QWORD *)(i + 664) )
    {
      if ( (*(_DWORD *)(i + 488) & 0x400) != 0 )
        goto LABEL_11;
    }
    *(_DWORD *)(v3 + 12) = v4 & 0xFFFFF7FF;
    if ( (*(_DWORD *)(*((_QWORD *)this + 53) + 820LL) & 0x60000) == 0x40000 )
    {
      v6 = 1LL;
      goto LABEL_10;
    }
  }
LABEL_11:
  ExReleasePushLockExclusiveEx(&`anonymous namespace'::boostLock, 0LL);
  KeLeaveCriticalRegion();
}
