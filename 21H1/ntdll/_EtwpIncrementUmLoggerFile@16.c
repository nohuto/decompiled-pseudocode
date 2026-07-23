/*
 * XREFs of _EtwpIncrementUmLoggerFile@16 @ 0x4B381859
 * Callers:
 *     _EtwProcessPrivateLoggerRequest@4 @ 0x4B2EFF20 (_EtwProcessPrivateLoggerRequest@4.c)
 * Callees:
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _EtwpQueryUmLogger@16 @ 0x4B2ED9ED (_EtwpQueryUmLogger@16.c)
 *     @EtwpGetPrivateLoggerContext@8 @ 0x4B2EDADC (@EtwpGetPrivateLoggerContext@8.c)
 *     _EtwpSynchronizeWithLogger@8 @ 0x4B2EDB44 (_EtwpSynchronizeWithLogger@8.c)
 */

int __fastcall EtwpIncrementUmLoggerFile(unsigned int a1, _DWORD *a2, _DWORD *a3, int a4)
{
  ULONG v5; // esi
  int result; // eax
  int v7; // edi
  NTSTATUS v8; // eax
  int v10; // [esp+14h] [ebp-4h] BYREF

  v5 = 0;
  *a2 = 0;
  v10 = 0;
  *a3 = 176;
  if ( a1 < 0xB0 )
    return 0;
  result = EtwpGetPrivateLoggerContext(a4, &v10);
  if ( !result )
  {
    v7 = v10;
    if ( (*(_BYTE *)(v10 + 212) & 8) != 0 )
    {
      EtwpSynchronizeWithLogger(v10, 2);
      v8 = EtwpSynchronizeWithLogger(v7, 4);
      if ( !v8 || (v5 = RtlNtStatusToDosError(v8)) == 0 )
        EtwpQueryUmLogger(a1, a2, a3, a4);
    }
    else
    {
      v5 = 87;
    }
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * *(_DWORD *)(v7 + 20) + 4));
    return v5;
  }
  return result;
}
