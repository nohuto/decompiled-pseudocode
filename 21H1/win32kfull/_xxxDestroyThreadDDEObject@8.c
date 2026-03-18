/*
 * XREFs of _xxxDestroyThreadDDEObject@8 @ 0xD2D78
 * Callers:
 *     _NtUserDdeInitialize@20 @ 0xE3AA0 (_NtUserDdeInitialize@20.c)
 *     __CsDdeUninitialize@4 @ 0x195136 (__CsDdeUninitialize@4.c)
 * Callees:
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 */

int __stdcall xxxDestroyThreadDDEObject(int a1, ULONG *a2)
{
  ULONG NumberOfMapRegisters; // ecx
  ULONG *v3; // ecx
  struct tagVWPL **v4; // edi

  if ( *(_BYTE *)(_HMPheFromObject(a2) + 12) != 9
    || (*(_BYTE *)(_HMPheFromObject(a2) + 13) & 1) != 0
    || *(_DWORD *)(_HMPkheFromObject(a2) + 4) != a1 )
  {
    return 0;
  }
  NumberOfMapRegisters = WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
  if ( a2 == (ULONG *)WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
  {
    WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = a2[3];
  }
  else
  {
    while ( *(ULONG **)(NumberOfMapRegisters + 12) != a2 )
      NumberOfMapRegisters = *(_DWORD *)(NumberOfMapRegisters + 12);
    *(_DWORD *)(NumberOfMapRegisters + 12) = a2[3];
  }
  v3 = *(ULONG **)(a1 + 336);
  if ( a2 == v3 )
  {
    *(_DWORD *)(a1 + 336) = a2[4];
  }
  else
  {
    while ( (ULONG *)v3[4] != a2 )
      v3 = (ULONG *)v3[4];
    v3[4] = a2[4];
  }
  if ( HMMarkObjectDestroy(a2) )
  {
    v4 = (struct tagVWPL **)a2[6];
    if ( HMAssignmentUnlock(a2 + 6) )
    {
      HMFreeObject(a2);
      xxxDestroyWindow(v4);
    }
    else
    {
      HMFreeObject(a2);
    }
  }
  return 1;
}
