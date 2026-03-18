/*
 * XREFs of Interrupter_PopulateInterrupterLookupTable @ 0x1C006BD10
 * Callers:
 *     Interrupter_PrepareHardware @ 0x1C006BBE0 (Interrupter_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0009878 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00194C0 (memset.c)
 */

__int64 __fastcall Interrupter_PopulateInterrupterLookupTable(__int64 a1)
{
  unsigned int v2; // ebx
  ULONG ActiveProcessorCount; // eax
  POOL_TYPE SignalState; // ecx
  SIZE_T v6; // rsi
  PVOID PoolWithTag; // rax
  int v8; // edx
  unsigned int v9; // r9d
  unsigned int i; // r8d

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 572LL) == 1 && *(_DWORD *)(a1 + 24) == 2 || *(_DWORD *)(a1 + 24) == 1 )
  {
    return 0;
  }
  else
  {
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    SignalState = WPP_MAIN_CB.DeviceLock.Header.SignalState;
    *(_DWORD *)(a1 + 48) = ActiveProcessorCount;
    v6 = 2 * ActiveProcessorCount;
    PoolWithTag = ExAllocatePoolWithTag(SignalState, v6, 0x49434858u);
    v2 = 0;
    *(_QWORD *)(a1 + 56) = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v6);
      LOWORD(v9) = 1;
      for ( i = 0; i < *(_DWORD *)(a1 + 48); ++i )
      {
        *(_WORD *)(*(_QWORD *)(a1 + 56) + 2LL * i) = v9;
        v9 = (unsigned __int16)(v9 + ((unsigned __int16)(v9 + 1) == *(_DWORD *)(a1 + 64)) + 1);
        if ( v9 >= *(_DWORD *)(a1 + 24) )
          LOWORD(v9) = 1;
      }
    }
    else
    {
      v2 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 2;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v8,
          9,
          61,
          (__int64)&WPP_260d7188460d377ee27ff5eb6158db37_Traceguids);
      }
    }
  }
  return v2;
}
