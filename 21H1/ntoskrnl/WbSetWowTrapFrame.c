/*
 * XREFs of WbSetWowTrapFrame @ 0x14095F1EC
 * Callers:
 *     WbSetTrapFrame @ 0x14065F53C (WbSetTrapFrame.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     PspWow64SetContextThread @ 0x1406FC94C (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1406FCCF8 (PspWow64GetContextThread.c)
 */

__int64 __fastcall WbSetWowTrapFrame(ULONG *a1, ULONG *a2)
{
  unsigned __int64 v4; // rax
  __int16 v5; // di
  int v6; // ebp
  struct _KTHREAD *CurrentThread; // rax
  int v8; // eax
  __int64 v9; // rdx
  int ContextThread; // ebx
  __int64 v11; // r8
  __int64 v12; // r9

  v4 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
  if ( !v4 )
    return (unsigned int)-1073741637;
  v5 = *(_WORD *)(v4 + 8);
  if ( !v5 )
    return (unsigned int)-1073741637;
  if ( v5 != 332 )
  {
    if ( v5 == 452 )
    {
      v6 = 416;
      goto LABEL_7;
    }
    return (unsigned int)-1073741637;
  }
  v6 = 716;
LABEL_7:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( v5 == 332 )
    v8 = 65537;
  else
    v8 = 2097153;
  a1[12] = v8;
  ContextThread = PspWow64GetContextThread((__int64)KeGetCurrentThread(), a1 + 12, v6, 0);
  if ( ContextThread >= 0 )
  {
    if ( v5 == 332 )
    {
      a1[58] = a2[2];
      a1[61] = *a2;
      a1[60] = a2[4];
    }
    else
    {
      a1[28] = a2[2];
      a1[26] = *a2;
      a1[29] = a2[4];
    }
    ContextThread = PspWow64SetContextThread(KeGetCurrentThread(), a1 + 12, v6, 0);
  }
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v9, v11, v12);
  return (unsigned int)ContextThread;
}
