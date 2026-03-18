/*
 * XREFs of rimExtractGeometryPoints @ 0x1C017B6B4
 * Callers:
 *     rimExtractPointerDeviceUsages @ 0x1C017BC48 (rimExtractPointerDeviceUsages.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall rimExtractGeometryPoints(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int16 v9; // r12
  unsigned int v10; // r14d
  unsigned __int8 v11; // bp
  __int64 v12; // rdx
  int v13; // r15d
  unsigned int v14; // eax
  __int64 v15; // r9
  unsigned int v16; // r11d
  _BYTE *v17; // r9
  int v18; // edx
  unsigned __int8 v19; // al
  __int64 v20; // r10
  __int64 v21; // rdx
  unsigned int v22; // ecx

  v5 = a5;
  v6 = 0LL;
  v7 = 0LL;
  v9 = a1;
  v10 = a5;
  v11 = 0;
  v12 = 1LL;
  v13 = a5 & 7;
  if ( (a5 & 7) != 0 )
  {
    a1 = a5 & 7;
    v11 = (1 << v13) - 1;
  }
  LOBYTE(v14) = v9 - 48;
  if ( (unsigned __int16)(v9 - 48) > 1u )
    LOBYTE(v14) = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, 1LL, a3, a4);
  if ( a5 > 0x20 )
    LOBYTE(v14) = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v12, a3, a4);
  if ( a5 >= 8 )
  {
    do
    {
      if ( (unsigned int)v6 >= 4 )
        break;
      LOBYTE(v14) = *(_BYTE *)(v7 + a4);
      v10 -= 8;
      *(_BYTE *)(v6 + a3) = v14;
      v7 = (unsigned int)(v7 + 1);
      v6 = (unsigned int)(v6 + 1);
    }
    while ( v10 >= 8 );
  }
  if ( v10 && (unsigned int)v6 < 4 )
    *(_BYTE *)(v6 + a3) = v11 & *(_BYTE *)(v7 + a4);
  v15 = 16LL;
  if ( v9 != 49 )
    v15 = 12LL;
  v16 = 0;
  v17 = (_BYTE *)(a2 + v15);
  if ( v10 )
  {
    v18 = *(unsigned __int8 *)(v7 + a4);
    v7 = (unsigned int)(v7 + 1);
    v14 = ~v11;
    *v17 = (int)(v14 & v18) >> v13;
    v5 = v13 + a5 - 8;
  }
  for ( ; v5; v7 = (unsigned int)(v7 + 1) )
  {
    if ( v16 >= 4 || (unsigned int)v7 >= 8 )
      break;
    v19 = *(_BYTE *)(v7 + a4);
    v20 = v16 + 1;
    v21 = v16++;
    if ( (a5 & 7) != 0 )
    {
      v17[v21] |= (v11 & v19) << (8 - v13);
      if ( (unsigned int)v20 < 4 )
        v17[v20] = (*(unsigned __int8 *)(v7 + a4) & ~v11) >> v13;
    }
    else
    {
      v17[v21] = v19;
    }
    v14 = v5;
    v22 = v5 - 8;
    v5 = 0;
    if ( v14 > 8 )
      v5 = v22;
  }
  return v14;
}
