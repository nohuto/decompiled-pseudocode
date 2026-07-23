/*
 * XREFs of _EtwpGetPrivateLoggerContextByName@8 @ 0x4B2F1B33
 * Callers:
 *     @EtwpGetPrivateLoggerContext@8 @ 0x4B2EDADC (@EtwpGetPrivateLoggerContext@8.c)
 *     _EtwpStartUmLogger@16 @ 0x4B2F0075 (_EtwpStartUmLogger@16.c)
 * Callees:
 *     _RtlEqualUnicodeString@12 @ 0x4B2D1250 (_RtlEqualUnicodeString@12.c)
 *     _EtwpDemuxUmTraceHandle@8 @ 0x4B381562 (_EtwpDemuxUmTraceHandle@8.c)
 */

int __fastcall EtwpGetPrivateLoggerContextByName(_UNICODE_STRING *a1, _DWORD *a2)
{
  int v3; // esi
  unsigned int v4; // ecx
  int v6; // edi
  unsigned int v8; // [esp+10h] [ebp-4h] BYREF

  *a2 = 0;
  if ( !a1 )
    return 4201;
  v3 = 0;
  while ( 1 )
  {
    v4 = v3 & 0xFFFF7FFF;
    v8 = v3 & 0xFFFF7FFF;
    if ( EtwpLoggerArray )
    {
      if ( v4 < 0x40 )
        goto LABEL_9;
      if ( !EtwpDemuxUmTraceHandle(v3, &v8) )
        break;
    }
LABEL_4:
    if ( (unsigned int)++v3 >= 0x40 )
      return 4201;
  }
  v4 = v8;
LABEL_9:
  _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v4 + 4));
  if ( (*(_DWORD *)(EtwpLoggerArray + 8 * v4) & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v4 + 4));
    goto LABEL_4;
  }
  v6 = *(_DWORD *)(EtwpLoggerArray + 8 * v4);
  if ( !RtlEqualUnicodeString((PUNICODE_STRING)(v6 + 108), a1, 1u) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v3 + 4));
    goto LABEL_4;
  }
  *a2 = v6;
  return 0;
}
