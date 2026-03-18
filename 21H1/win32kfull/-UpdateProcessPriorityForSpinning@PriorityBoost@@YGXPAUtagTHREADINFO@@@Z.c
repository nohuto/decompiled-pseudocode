/*
 * XREFs of ?UpdateProcessPriorityForSpinning@PriorityBoost@@YGXPAUtagTHREADINFO@@@Z @ 0xC944C
 * Callers:
 *     ?HandleProcessSpinning@@YGHXZ @ 0x69E70 (-HandleProcessSpinning@@YGHXZ.c)
 *     ?CheckProcessForeground@@YGJPAUtagTHREADINFO@@@Z @ 0xC93F4 (-CheckProcessForeground@@YGJPAUtagTHREADINFO@@@Z.c)
 *     _NtUserYieldTask@0 @ 0x16B3E0 (_NtUserYieldTask@0.c)
 * Callees:
 *     _anonymous_namespace_::SetForegroundPriorityProcess @ 0x18D4E (_anonymous_namespace_--SetForegroundPriorityProcess.c)
 *     _anonymous_namespace_::IsProcessForegroundBoostedNoSpin @ 0xC950C (_anonymous_namespace_--IsProcessForegroundBoostedNoSpin.c)
 */

void __thiscall PriorityBoost::UpdateProcessPriorityForSpinning(_DWORD *ecx0)
{
  int v2; // esi
  int v3; // ecx
  int i; // eax

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&`anonymous namespace'::boostLock, 0);
  v2 = ecx0[58];
  v3 = *(_DWORD *)(v2 + 8);
  if ( (ecx0[66] & 0x400) != 0 )
  {
    if ( (v3 & 0x800) == 0 )
    {
      *(_DWORD *)(v2 + 8) = v3 | 0x800;
      if ( (unsigned __int8)anonymous_namespace_::IsProcessForegroundBoostedNoSpin(ecx0[58]) )
        anonymous_namespace_::SetForegroundPriorityProcess((struct _KPROCESS **)v2, (int)ecx0, 2);
    }
  }
  else if ( (v3 & 0x800) != 0 )
  {
    for ( i = *(_DWORD *)(v2 + 180); i; i = *(_DWORD *)(i + 364) )
    {
      if ( (*(_DWORD *)(i + 264) & 0x400) != 0 )
        goto LABEL_7;
    }
    *(_DWORD *)(v2 + 8) = v3 & 0xFFFFF7FF;
    if ( (*(_DWORD *)(ecx0[58] + 464) & 0x60000) == 0x40000 )
      anonymous_namespace_::SetForegroundPriorityProcess((struct _KPROCESS **)v2, (int)ecx0, 1);
  }
LABEL_7:
  ExReleasePushLockExclusiveEx(&`anonymous namespace'::boostLock, 0);
  KeLeaveCriticalRegion();
}
