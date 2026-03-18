/*
 * XREFs of RIMRetrieveRealAngularPhysicalValues @ 0x1C0187C30
 * Callers:
 *     RIMRetrieveNormalizationRange @ 0x1C0187AF4 (RIMRetrieveNormalizationRange.c)
 * Callees:
 *     RIMComputePower @ 0x1C01879C0 (RIMComputePower.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRetrieveRealAngularPhysicalValues(__int64 a1, int *a2)
{
  unsigned int v2; // ebx
  char v3; // r13
  int *v4; // r9
  unsigned int v6; // r15d
  __int16 v7; // r14
  int v8; // ebp
  int v9; // esi
  __int64 v11; // r12
  _BYTE *v12; // rax
  __int64 v13; // rcx
  unsigned int *v14; // r9
  unsigned int v15; // r15d
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // rax
  unsigned int v19; // eax
  unsigned int v20; // [rsp+60h] [rbp+8h]

  v2 = 0;
  v3 = *(_BYTE *)(a1 + 32) & 0xF;
  v20 = 62831;
  v4 = a2;
  v6 = 0;
  v7 = 0;
  v8 = -4;
  if ( !a2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    v4 = 0LL;
  }
  v9 = *v4;
  if ( !*v4 )
    return 1LL;
  v11 = *(_DWORD *)(a1 + 36) & 0xF;
  if ( (*(_DWORD *)(a1 + 36) & 0xF) != 0 )
  {
    v12 = word_1C0227D50;
    do
    {
      if ( *v12 == v3 )
        break;
      ++v6;
      v12 += 4;
    }
    while ( v6 < 0xB );
    if ( v6 < 0xB )
      v7 = word_1C0227D50[2 * v6 + 1];
    v15 = RIMComputePower(v7);
    if ( !v15 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
      v14 = (unsigned int *)a2;
    }
    if ( v9 < 0 )
      v9 = -v9;
    if ( (unsigned int)v11 < 5 )
    {
      v16 = dword_1C0227D28[v11];
      if ( v16 == 4 )
      {
        if ( v7 > -4 || !(v9 / v15) )
          return v2;
        if ( v7 < -4 )
        {
          v17 = 62831;
          do
          {
            if ( v8 <= -8 )
              break;
            v18 = v2;
            --v8;
            ++v2;
            v17 = dword_1C0227D40[v18] + 10 * v17;
          }
          while ( v8 > v7 );
          v20 = v17;
        }
        v19 = 360 * v9 / v20;
      }
      else
      {
        if ( v16 != 3 || v7 > -2 )
          return v2;
        v19 = v9 / v15;
      }
      v2 = 1;
      *v14 = v19;
    }
  }
  return v2;
}
