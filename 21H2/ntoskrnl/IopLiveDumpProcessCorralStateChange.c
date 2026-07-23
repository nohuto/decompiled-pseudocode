/*
 * XREFs of IopLiveDumpProcessCorralStateChange @ 0x1409AE2AC
 * Callers:
 *     IopLiveDumpCorralDpc @ 0x1409ACB60 (IopLiveDumpCorralDpc.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x1409AD888 (IopLiveDumpInitiateCorralStateChange.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KeResumeClockTimerSafe @ 0x140513F54 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x140514030 (KeSuspendClockTimerSafe.c)
 *     KeRestoreSupervisorState @ 0x14051A0A0 (KeRestoreSupervisorState.c)
 *     KeSaveSupervisorState @ 0x14051A138 (KeSaveSupervisorState.c)
 *     IopLiveDumpBufferDumpData @ 0x1409AC32C (IopLiveDumpBufferDumpData.c)
 */

void __fastcall IopLiveDumpProcessCorralStateChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int16 v13; // [rsp+20h] [rbp-8h]
  int v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = 0;
  while ( *(_DWORD *)(a1 + 12) == *(_DWORD *)(a2 + 4) )
    KeYieldProcessorEx(&v14, a2, a3, a4);
  v6 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a2 + 4) = v6;
  v7 = v6 - 2;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              if ( v12 == 1 && *(_BYTE *)(a2 + 9) )
              {
                KeRestoreSupervisorState(
                  (__int64)KeGetCurrentPrcb()->ExtendedSupervisorState,
                  MEMORY[0xFFFFF780000005F0] | 0x100LL);
                *(_BYTE *)(a2 + 9) = 0;
              }
            }
            else if ( SaveSupervisorState )
            {
              KeSaveSupervisorState(
                (__int64)KeGetCurrentPrcb()->ExtendedSupervisorState,
                MEMORY[0xFFFFF780000005F0] | 0x100LL);
              *(_BYTE *)(a2 + 9) = 1;
            }
          }
          else if ( *(_BYTE *)(a2 + 8) )
          {
            _enable();
          }
        }
        else
        {
          KeResumeClockTimerSafe();
        }
      }
      else
      {
        IopLiveDumpBufferDumpData((__int64 *)a1, (unsigned int *)a2);
      }
    }
    else
    {
      KeSuspendClockTimerSafe();
    }
  }
  else
  {
    _disable();
    *(_BYTE *)(a2 + 8) = (v13 & 0x200) != 0;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
}
