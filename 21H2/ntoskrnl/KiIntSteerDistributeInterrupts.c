/*
 * XREFs of KiIntSteerDistributeInterrupts @ 0x1402CE560
 * Callers:
 *     KeIntSteerPeriodic @ 0x1402CDD80 (KeIntSteerPeriodic.c)
 * Callees:
 *     KiIntSteerUpdateDeviceInterruptMask @ 0x14023F2BC (KiIntSteerUpdateDeviceInterruptMask.c)
 *     KiIntSteerSetDestination @ 0x140241BFC (KiIntSteerSetDestination.c)
 */

__int64 __fastcall KiIntSteerDistributeInterrupts(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 j; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int128 i; // [rsp+20h] [rbp-18h] BYREF

  v3 = KiIntTrackRootList;
  for ( i = 0LL; (__int64 *)v3 != &KiIntTrackRootList; v3 = *(_QWORD *)v3 )
  {
    if ( *(_BYTE *)(v3 + 132) )
    {
      v4 = *(_QWORD *)(v3 + 176);
      v5 = *(_QWORD *)(v3 + 160);
      if ( v4 != v5 )
      {
        WORD4(i) = *(_WORD *)(v3 + 184);
        if ( WORD4(i) == *(_WORD *)(v3 + 168) )
          v8 = v4 & ~v5;
        else
          v8 = v4;
        *(_QWORD *)&i = v8;
        KiIntSteerUpdateDeviceInterruptMask((__int64)&i, 0, a3);
      }
    }
  }
  for ( j = KiIntTrackRootList; (__int64 *)j != &KiIntTrackRootList; j = *(_QWORD *)j )
  {
    if ( *(_BYTE *)(j + 132) && *(_QWORD *)(j + 176) != *(_QWORD *)(j + 160) )
    {
      KiIntSteerSetDestination(j, j + 176, a3);
      WORD4(i) = *(_WORD *)(j + 184);
      if ( *(_WORD *)(j + 168) == WORD4(i) )
        v10 = *(_QWORD *)(j + 160) & ~*(_QWORD *)(j + 176);
      else
        v10 = *(_QWORD *)(j + 160);
      *(_QWORD *)&i = v10;
      KiIntSteerUpdateDeviceInterruptMask((__int64)&i, 1, v9);
      *(_WORD *)(j + 168) = *(_WORD *)(j + 184);
      *(_QWORD *)(j + 160) = *(_QWORD *)(j + 176);
    }
  }
  return 0LL;
}
