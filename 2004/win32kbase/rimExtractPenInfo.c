/*
 * XREFs of rimExtractPenInfo @ 0x1C017BB58
 * Callers:
 *     rimExtractPointerDeviceUsages @ 0x1C017BC48 (rimExtractPointerDeviceUsages.c)
 * Callees:
 *     rimExtractData @ 0x1C017B374 (rimExtractData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimExtractPenInfo(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  int v5; // ebp
  __int64 result; // rax

  v5 = a2;
  if ( (unsigned int)(*(_DWORD *)(a1 + 24) - 5) > 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  a3[43] = rimExtractData(a1, 13, 65, 2, a3 + 41);
  a3[44] = rimExtractData(a1, 13, 61, 4, a3 + 41);
  result = rimExtractData(a1, 13, 62, 8, a3 + 41);
  a3[45] = result;
  if ( (*(_DWORD *)(a1 + 312) & 0x8000) != 0 )
  {
    result = rimExtractData(a1, 13, 48, 1, a3 + 41);
    a3[42] = result;
  }
  else if ( v5 )
  {
    a3[41] |= 1u;
    a3[42] = 512;
  }
  return result;
}
