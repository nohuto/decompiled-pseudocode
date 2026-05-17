/*
 * XREFs of _EtwpIsPrivateLoggerOn@4 @ 0x4B2F25E2
 * Callers:
 *     _EtwpUpdateEnableInfoAndCallback@8 @ 0x4B2B0D5F (_EtwpUpdateEnableInfoAndCallback@8.c)
 * Callees:
 *     _EtwpDemuxUmTraceHandle@8 @ 0x4B381562 (_EtwpDemuxUmTraceHandle@8.c)
 */

bool __fastcall EtwpIsPrivateLoggerOn(int a1)
{
  int v1; // eax
  unsigned int v2; // edx
  unsigned int v3; // ecx
  int v4; // eax
  bool result; // al
  unsigned int v6; // [esp+0h] [ebp-4h] BYREF

  v1 = EtwpLoggerArray;
  v2 = a1 & 0xFFFF7FFF;
  v6 = a1 & 0xFFFF7FFF;
  if ( !EtwpLoggerArray )
    return 0;
  if ( v2 >= 0x40 )
  {
    v4 = EtwpDemuxUmTraceHandle(a1, &v6);
    if ( v4 )
    {
      v3 = v6;
      goto LABEL_5;
    }
    v2 = v6;
    v1 = EtwpLoggerArray;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v1 + 8 * v2 + 4));
  v3 = *(_DWORD *)(EtwpLoggerArray + 8 * v2);
  if ( (v3 & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v2 + 4));
    return 0;
  }
  v4 = 0;
LABEL_5:
  if ( !v4 )
  {
    result = *(_DWORD *)(v3 + 216) != 0;
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * *(_DWORD *)(v3 + 20) + 4));
    return result;
  }
  return 0;
}
