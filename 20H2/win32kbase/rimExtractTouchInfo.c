/*
 * XREFs of rimExtractTouchInfo @ 0x1C017A04C
 * Callers:
 *     rimExtractPointerDeviceUsages @ 0x1C0179818 (rimExtractPointerDeviceUsages.c)
 * Callees:
 *     rimExtractData @ 0x1C0178F44 (rimExtractData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimExtractTouchInfo(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 v5; // rcx
  int v7; // ebp
  __int64 result; // rax
  int v9; // [rsp+50h] [rbp+8h] BYREF
  int v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0;
  v5 = *(unsigned int *)(a1 + 24);
  v9 = 0;
  v7 = a2;
  if ( (unsigned int)(v5 - 1) > 3 && (_DWORD)v5 != 7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, a2, a3, a4);
  a3[6] = rimExtractData(a1, 13, 72, 1, &v10);
  a3[7] = rimExtractData(a1, 13, 73, 1, &v9);
  if ( v10 == v9 && v9 == 1 )
    a3[41] |= 1u;
  a3[5] = 1;
  if ( (*(_DWORD *)(a1 + 312) & 0x8000) != 0 )
  {
    a3[51] = rimExtractData(a1, 13, 48, 4, a3 + 41);
  }
  else if ( v7 )
  {
    a3[41] |= 4u;
    a3[51] = 512;
  }
  result = rimExtractData(a1, 13, 63, 2, a3 + 41);
  a3[50] = result;
  return result;
}
