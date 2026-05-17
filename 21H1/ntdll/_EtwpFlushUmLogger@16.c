/*
 * XREFs of _EtwpFlushUmLogger@16 @ 0x4B2ED94C
 * Callers:
 *     _EtwProcessPrivateLoggerRequest@4 @ 0x4B2EFF20 (_EtwProcessPrivateLoggerRequest@4.c)
 * Callees:
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _EtwpQueryUmLogger@16 @ 0x4B2ED9ED (_EtwpQueryUmLogger@16.c)
 *     @EtwpGetPrivateLoggerContext@8 @ 0x4B2EDADC (@EtwpGetPrivateLoggerContext@8.c)
 *     _EtwpSynchronizeWithLogger@8 @ 0x4B2EDB44 (_EtwpSynchronizeWithLogger@8.c)
 *     _EtwpAddInstanceIdToLogFileName@12 @ 0x4B2F1A0B (_EtwpAddInstanceIdToLogFileName@12.c)
 *     _EtwpBufferingModeFlush@4 @ 0x4B38140A (_EtwpBufferingModeFlush@4.c)
 */

int __fastcall EtwpFlushUmLogger(unsigned int a1, _DWORD *a2, _DWORD *a3, int a4)
{
  int result; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // [esp+14h] [ebp-4h] BYREF

  *a2 = 0;
  v7 = 0;
  *a3 = 176;
  if ( a1 < 0xB0 )
    return 234;
  *(_DWORD *)(a4 + 148) = a4 + 176;
  *(_DWORD *)(a4 + 132) = a4 + *(unsigned __int16 *)(a4 + 146) + 176;
  result = EtwpGetPrivateLoggerContext(a4, &v7);
  if ( !result )
  {
    v5 = v7;
    if ( (*(_DWORD *)(v7 + 212) & 0x400) != 0 )
    {
      if ( !*(_WORD *)(a4 + 128) )
      {
        v6 = 2;
        goto LABEL_6;
      }
      v6 = EtwpAddInstanceIdToLogFileName(a4, *(_DWORD *)(a4 + 96), v7 + 116);
      if ( v6 )
        goto LABEL_6;
      v6 = EtwpBufferingModeFlush(v5);
      RtlFreeAnsiString((PUNICODE_STRING)(v5 + 116));
    }
    else
    {
      v6 = EtwpSynchronizeWithLogger(v7, 2);
    }
    EtwpQueryUmLogger(a3, a4);
LABEL_6:
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * *(_DWORD *)(v5 + 20) + 4));
    return v6;
  }
  return result;
}
