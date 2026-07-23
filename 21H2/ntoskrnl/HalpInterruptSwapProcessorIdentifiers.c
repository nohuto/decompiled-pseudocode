/*
 * XREFs of HalpInterruptSwapProcessorIdentifiers @ 0x1409A9B84
 * Callers:
 *     HalpDpReplaceControl @ 0x1409A96B0 (HalpDpReplaceControl.c)
 * Callees:
 *     HalpInterruptIsRemappingRequired @ 0x140378B8C (HalpInterruptIsRemappingRequired.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     HalpUpdateIrtDestinationId @ 0x1404D17D8 (HalpUpdateIrtDestinationId.c)
 *     HalpInterruptRestoreAllControllerState @ 0x140998CA0 (HalpInterruptRestoreAllControllerState.c)
 *     HalpInterruptEnsureLineSwapComplete @ 0x1409A9A98 (HalpInterruptEnsureLineSwapComplete.c)
 *     HalpInterruptUpdateLinesPostSwap @ 0x1409A9D34 (HalpInterruptUpdateLinesPostSwap.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x1409A9EAC (HalpInterruptUpdateLocalUnitIdentifier.c)
 */

__int64 __fastcall HalpInterruptSwapProcessorIdentifiers(_DWORD *BugCheckParameter3, ULONG_PTR a2, unsigned int a3)
{
  int updated; // ebp
  unsigned int v4; // r9d
  _DWORD *v7; // r8
  unsigned int v8; // edx
  ULONG_PTR v10; // r11
  unsigned int v11; // r15d
  ULONG_PTR v12; // r12
  unsigned int *v13; // rdi
  ULONG_PTR *v14; // rsi
  ULONG_PTR *v15; // rax
  _QWORD *v16; // r13
  int v17; // ecx
  __int128 v18; // [rsp+30h] [rbp-68h] BYREF
  __int64 v19; // [rsp+40h] [rbp-58h]
  __int128 v20; // [rsp+48h] [rbp-50h] BYREF
  __int64 v21; // [rsp+58h] [rbp-40h]
  _QWORD *v23; // [rsp+B8h] [rbp+20h]

  updated = 0;
  v4 = 0;
  v19 = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  v20 = 0LL;
  if ( a3 )
  {
    v7 = BugCheckParameter3;
    while ( 1 )
    {
      v8 = 0;
      if ( !(_DWORD)HalpInterruptProcessorCount )
        return 3221226021LL;
      while ( *(_DWORD *)(((unsigned __int64)v8 << 6) + HalpInterruptProcessorState) != *v7 )
      {
        if ( ++v8 >= (unsigned int)HalpInterruptProcessorCount )
          return 3221226021LL;
      }
      ++v4;
      ++v7;
      if ( v4 >= a3 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    if ( HalpInterruptIsRemappingRequired() )
    {
      HalpUpdateIrtDestinationId();
      v10 = a2;
    }
    v11 = 0;
    if ( a3 )
    {
      v12 = v10 - (_QWORD)BugCheckParameter3;
      v13 = BugCheckParameter3;
      do
      {
        updated = HalpInterruptUpdateLocalUnitIdentifier(*v13, *(unsigned int *)((char *)v13 + v12), &v20, &v18);
        if ( updated < 0 )
          goto LABEL_20;
        v14 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
LABEL_17:
        while ( v14 != &HalpRegisteredInterruptControllers )
        {
          v15 = v14;
          v14 = (ULONG_PTR *)*v14;
          v23 = v15 + 30;
          v16 = (_QWORD *)v15[30];
          if ( (_QWORD *)*v23 != v23 )
          {
            while ( 1 )
            {
              v17 = (int)v16;
              v16 = (_QWORD *)*v16;
              updated = HalpInterruptUpdateLinesPostSwap(
                          v17,
                          *v13,
                          *(unsigned int *)((char *)v13 + v12),
                          (unsigned int)&v20,
                          (__int64)&v18);
              if ( updated < 0 )
                break;
              if ( v16 == v23 )
                goto LABEL_17;
            }
LABEL_20:
            KeBugCheckEx(0x5Cu, 0x4000uLL, HalpInterruptProcessorState, (ULONG_PTR)BugCheckParameter3, a2);
          }
        }
        ++v11;
        ++v13;
      }
      while ( v11 < a3 );
    }
    HalpInterruptEnsureLineSwapComplete();
    HalpInterruptRestoreAllControllerState();
    return (unsigned int)updated;
  }
}
