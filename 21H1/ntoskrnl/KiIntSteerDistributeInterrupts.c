/*
 * XREFs of KiIntSteerDistributeInterrupts @ 0x140277450
 * Callers:
 *     KeIntSteerPeriodic @ 0x140277270 (KeIntSteerPeriodic.c)
 * Callees:
 *     KiIntSteerUpdateDeviceInterruptMask @ 0x1403110AC (KiIntSteerUpdateDeviceInterruptMask.c)
 *     KiIntSteerSetDestination @ 0x140313A10 (KiIntSteerSetDestination.c)
 */

__int64 KiIntSteerDistributeInterrupts()
{
  ULONG_PTR v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  ULONG_PTR j; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int128 i; // [rsp+20h] [rbp-18h] BYREF

  v0 = KiIntTrackRootList;
  for ( i = 0LL; (ULONG_PTR *)v0 != &KiIntTrackRootList; v0 = *(_QWORD *)v0 )
  {
    if ( *(_BYTE *)(v0 + 132) )
    {
      v1 = *(_QWORD *)(v0 + 176);
      v2 = *(_QWORD *)(v0 + 160);
      if ( v1 != v2 )
      {
        WORD4(i) = *(_WORD *)(v0 + 184);
        if ( WORD4(i) == *(_WORD *)(v0 + 168) )
          v5 = v1 & ~v2;
        else
          v5 = v1;
        *(_QWORD *)&i = v5;
        KiIntSteerUpdateDeviceInterruptMask(&i, 0LL);
      }
    }
  }
  for ( j = KiIntTrackRootList; (ULONG_PTR *)j != &KiIntTrackRootList; j = *(_QWORD *)j )
  {
    if ( *(_BYTE *)(j + 132) && *(_QWORD *)(j + 176) != *(_QWORD *)(j + 160) )
    {
      KiIntSteerSetDestination(j);
      WORD4(i) = *(_WORD *)(j + 184);
      if ( *(_WORD *)(j + 168) == WORD4(i) )
        v6 = *(_QWORD *)(j + 160) & ~*(_QWORD *)(j + 176);
      else
        v6 = *(_QWORD *)(j + 160);
      *(_QWORD *)&i = v6;
      KiIntSteerUpdateDeviceInterruptMask(&i, 1LL);
      *(_WORD *)(j + 168) = *(_WORD *)(j + 184);
      *(_QWORD *)(j + 160) = *(_QWORD *)(j + 176);
    }
  }
  return 0LL;
}
