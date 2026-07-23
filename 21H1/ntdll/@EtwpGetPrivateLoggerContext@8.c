/*
 * XREFs of @EtwpGetPrivateLoggerContext@8 @ 0x4B2EDADC
 * Callers:
 *     _EtwpStopUmLogger@16 @ 0x4B2ED853 (_EtwpStopUmLogger@16.c)
 *     _EtwpFlushUmLogger@16 @ 0x4B2ED94C (_EtwpFlushUmLogger@16.c)
 *     _EtwpQueryUmLogger@16 @ 0x4B2ED9ED (_EtwpQueryUmLogger@16.c)
 *     _EtwpIncrementUmLoggerFile@16 @ 0x4B381859 (_EtwpIncrementUmLoggerFile@16.c)
 *     _EtwpUpdateUmLogger@16 @ 0x4B3819CB (_EtwpUpdateUmLogger@16.c)
 * Callees:
 *     _EtwpGetPrivateLoggerContextByName@8 @ 0x4B2F1B33 (_EtwpGetPrivateLoggerContextByName@8.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _EtwpDemuxUmTraceHandle@8 @ 0x4B381562 (_EtwpDemuxUmTraceHandle@8.c)
 */

int __fastcall EtwpGetPrivateLoggerContext(int a1, _DWORD *a2)
{
  int v3; // eax
  int v4; // edi
  unsigned int v5; // ecx
  int v6; // eax
  int result; // eax
  _UNICODE_STRING DestinationString; // [esp+8h] [ebp-Ch] BYREF
  unsigned int v9; // [esp+10h] [ebp-4h] BYREF

  if ( *(_WORD *)(a1 + 144) )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 176));
    return EtwpGetPrivateLoggerContextByName(&DestinationString, a2);
  }
  v3 = EtwpLoggerArray;
  v4 = *(unsigned __int16 *)(a1 + 8);
  v5 = v4 & 0x7FFF;
  v9 = v5;
  if ( !EtwpLoggerArray )
    return 4201;
  if ( v5 < 0x40 )
  {
LABEL_4:
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8 * v5 + 4));
    v6 = *(_DWORD *)(EtwpLoggerArray + 8 * v5);
    if ( (v6 & 1) == 0 )
    {
      *a2 = v6;
      return 0;
    }
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v5 + 4));
    return 4201;
  }
  result = EtwpDemuxUmTraceHandle(v4, &v9);
  if ( !result )
  {
    v5 = v9;
    v3 = EtwpLoggerArray;
    goto LABEL_4;
  }
  return result;
}
