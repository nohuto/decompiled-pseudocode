/*
 * XREFs of _CreateInputContext@4 @ 0x9A7CC
 * Callers:
 *     _xxxCreateDefaultImeWindow@12 @ 0x1D8EA (_xxxCreateDefaultImeWindow@12.c)
 *     _NtUserCreateInputContext@4 @ 0x160785 (_NtUserCreateInputContext@4.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ??4?$SharedMixedObjectPointerFieldpImcNext@UtagIMC@@@tagIMC@@QAEPAU1@PAU1@@Z @ 0x14EEDA (--4-$SharedMixedObjectPointerFieldpImcNext@UtagIMC@@@tagIMC@@QAEPAU1@PAU1@@Z.c)
 */

_DWORD *__stdcall CreateInputContext(int a1)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  _DWORD *v3; // edi
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  _DWORD *v7; // esi

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  v3 = ThreadWin32Thread;
  if ( (ThreadWin32Thread[66] & 0x2000000) != 0 || (*_gpsi & 4) == 0 || a1 && !ThreadWin32Thread[110] )
    return 0;
  v4 = ThreadWin32Thread[62];
  if ( !v4 )
    return 0;
  v7 = (_DWORD *)HMAllocObject(v3, v4, 17, 36);
  if ( !v7 )
    return 0;
  if ( a1 )
  {
    tagIMC::SharedMixedObjectPointerFieldpImcNext<tagIMC>::operator=(*(_DWORD *)(v3[110] + 28));
    tagIMC::SharedMixedObjectPointerFieldpImcNext<tagIMC>::operator=(v7);
  }
  else
  {
    HMAssignmentLock(v6, v5);
    *(_DWORD *)(v3[65] + 172) = v7[6];
    *(_DWORD *)(v7[5] + 8) = 0;
    v7[7] = 0;
  }
  *(_DWORD *)(v7[5] + 12) = a1;
  return v7;
}
