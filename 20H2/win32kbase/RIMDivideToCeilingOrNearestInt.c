/*
 * XREFs of RIMDivideToCeilingOrNearestInt @ 0x1C017728C
 * Callers:
 *     rimExtractScantime @ 0x1C0179CF8 (rimExtractScantime.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDivideToCeilingOrNearestInt(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rdi
  int v8; // ebp
  unsigned int v9; // r8d
  unsigned __int64 v10; // rax
  int v11; // edx

  v4 = 0;
  v5 = (unsigned int)a2;
  v6 = (unsigned int)a1;
  v8 = a3;
  if ( !(_DWORD)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( v8 )
  {
    if ( (_DWORD)v6 )
    {
      v9 = 0;
      *a4 = ((int)v6 - 1) / (unsigned int)v5 + 1;
    }
    else
    {
      v9 = -2147024362;
    }
  }
  else
  {
    v10 = (v5 + 2 * v6) / (unsigned __int64)(2 * v5);
    v11 = -1;
    if ( v10 <= 0xFFFFFFFF )
      v11 = (v5 + 2 * v6) / (unsigned __int64)(2 * v5);
    *a4 = v11;
    v9 = v10 > 0xFFFFFFFF ? 0x80070216 : 0;
  }
  LOBYTE(v4) = v9 == 0;
  return v4;
}
