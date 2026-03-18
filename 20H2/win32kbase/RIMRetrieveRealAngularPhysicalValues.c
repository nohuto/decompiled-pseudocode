/*
 * XREFs of RIMRetrieveRealAngularPhysicalValues @ 0x1C017FB00
 * Callers:
 *     RIMRetrieveNormalizationRange @ 0x1C017F9C4 (RIMRetrieveNormalizationRange.c)
 * Callees:
 *     RIMComputePower @ 0x1C017F890 (RIMComputePower.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRetrieveRealAngularPhysicalValues(__int64 a1, int *a2, __int64 a3)
{
  unsigned int v3; // ebx
  char v4; // r13
  int *v5; // r9
  unsigned int v7; // r15d
  __int16 v8; // r14
  int v9; // ebp
  int v10; // esi
  __int64 v12; // r12
  _BYTE *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int *v17; // r9
  unsigned int v18; // r15d
  int v19; // ecx
  int v20; // ecx
  __int64 v21; // rax
  unsigned int v22; // eax
  unsigned int v23; // [rsp+60h] [rbp+8h]

  v3 = 0;
  v4 = *(_BYTE *)(a1 + 32) & 0xF;
  v23 = 62831;
  v5 = a2;
  v7 = 0;
  v8 = 0;
  v9 = -4;
  if ( !a2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, 0LL, a3, 0LL);
    v5 = 0LL;
  }
  v10 = *v5;
  if ( !*v5 )
    return 1LL;
  v12 = *(_DWORD *)(a1 + 36) & 0xF;
  if ( (*(_DWORD *)(a1 + 36) & 0xF) != 0 )
  {
    v13 = word_1C021FE68;
    do
    {
      if ( *v13 == v4 )
        break;
      ++v7;
      v13 += 4;
    }
    while ( v7 < 0xB );
    if ( v7 < 0xB )
      v8 = word_1C021FE68[2 * v7 + 1];
    v18 = RIMComputePower(v8);
    if ( !v18 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16, v17);
      v17 = (unsigned int *)a2;
    }
    if ( v10 < 0 )
      v10 = -v10;
    if ( (unsigned int)v12 < 5 )
    {
      v19 = dword_1C021FE40[v12];
      if ( v19 == 4 )
      {
        if ( v8 > -4 || !(v10 / v18) )
          return v3;
        if ( v8 < -4 )
        {
          v20 = 62831;
          do
          {
            if ( v9 <= -8 )
              break;
            v21 = v3;
            --v9;
            ++v3;
            v20 = dword_1C021FE58[v21] + 10 * v20;
          }
          while ( v9 > v8 );
          v23 = v20;
        }
        v22 = 360 * v10 / v23;
      }
      else
      {
        if ( v19 != 3 || v8 > -2 )
          return v3;
        v22 = v10 / v18;
      }
      v3 = 1;
      *v17 = v22;
    }
  }
  return v3;
}
