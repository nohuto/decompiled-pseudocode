/*
 * XREFs of ?ivHandlePnpSyncPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01BB610
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C0160294 (RIMIDERemoveInjectionDevice.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C01748F4 (RIMSignalOnPnpNotificationAndWait.c)
 *     IsRimObjectUnregistered @ 0x1C01BCF58 (IsRimObjectUnregistered.c)
 */

__int64 __fastcall CBaseInput::ivHandlePnpSyncPacket(__int64 a1, _DWORD *a2, __int64 a3)
{
  _DWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 j; // rax
  __int64 v8; // rcx
  __int64 i; // rsi
  int v10; // eax

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      12,
      40,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
  }
  if ( *v4 != 1 )
  {
    if ( *v4 != 2 || *(_BYTE *)(a3 + 81) )
      return 1LL;
    RIMLockExclusive(a3 + 104);
    if ( (unsigned __int8)IsRimObjectUnregistered(a3) )
    {
      *(_QWORD *)(a3 + 112) = 0LL;
      v5 = a3 + 104;
      goto LABEL_7;
    }
    for ( i = *(_QWORD *)(a3 + 424); i; i = *(_QWORD *)(i + 40) )
    {
      v10 = *(_DWORD *)(i + 184);
      if ( (v10 & 0x40) != 0 && (v10 & 0x40000000) == 0 )
      {
        if ( (v10 & 0x2000) != 0 )
        {
          RIMIDERemoveInjectionDevice(*(_QWORD *)(i + 32));
        }
        else
        {
          *(_DWORD *)(i + 184) = v10 | 0x40000;
          RIMSignalOnPnpNotificationAndWait(a3, i, 0, 1, 0, 0);
          *(_DWORD *)(i + 184) |= 0x40000u;
          RIMSignalOnPnpNotificationAndWait(a3, i, 0, 0, 0, 1);
        }
      }
    }
    *(_QWORD *)(a3 + 112) = 0LL;
    v8 = a3 + 104;
    goto LABEL_25;
  }
  if ( !*(_BYTE *)(a3 + 81) )
  {
    RIMLockExclusive(a3 + 104);
    if ( (unsigned __int8)IsRimObjectUnregistered(a3) )
    {
      *(_QWORD *)(a3 + 112) = 0LL;
      v5 = a3 + 104;
LABEL_7:
      ExReleasePushLockExclusiveEx(v5, 0LL);
      KeLeaveCriticalRegion();
      return 2LL;
    }
    for ( j = *(_QWORD *)(a3 + 424); j; j = *(_QWORD *)(j + 40) )
      *(_DWORD *)(j + 184) &= ~0x40000000u;
    *(_QWORD *)(a3 + 112) = 0LL;
    v8 = a3 + 104;
LABEL_25:
    ExReleasePushLockExclusiveEx(v8, 0LL);
    KeLeaveCriticalRegion();
  }
  return 1LL;
}
