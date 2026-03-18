/*
 * XREFs of rimExtractGeometryPoints @ 0x1C01813B4
 * Callers:
 *     rimExtractPointerDeviceUsages @ 0x1C0181948 (rimExtractPointerDeviceUsages.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall rimExtractGeometryPoints(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int16 v9; // r12
  unsigned int v10; // r14d
  unsigned __int8 v11; // bp
  int v12; // r15d
  unsigned int v13; // eax
  __int64 v14; // r9
  unsigned int v15; // r11d
  _BYTE *v16; // r9
  int v17; // edx
  unsigned __int8 v18; // al
  __int64 v19; // r10
  __int64 v20; // rdx
  unsigned int v21; // ecx

  v5 = a5;
  v6 = 0LL;
  v7 = 0LL;
  v9 = a1;
  v10 = a5;
  v11 = 0;
  v12 = a5 & 7;
  if ( (a5 & 7) != 0 )
  {
    a1 = a5 & 7;
    v11 = (1 << v12) - 1;
  }
  LOBYTE(v13) = v9 - 48;
  if ( (unsigned __int16)(v9 - 48) > 1u )
    LOBYTE(v13) = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( a5 > 0x20 )
    LOBYTE(v13) = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( a5 >= 8 )
  {
    do
    {
      if ( (unsigned int)v6 >= 4 )
        break;
      LOBYTE(v13) = *(_BYTE *)(v7 + a4);
      v10 -= 8;
      *(_BYTE *)(v6 + a3) = v13;
      v7 = (unsigned int)(v7 + 1);
      v6 = (unsigned int)(v6 + 1);
    }
    while ( v10 >= 8 );
  }
  if ( v10 && (unsigned int)v6 < 4 )
    *(_BYTE *)(v6 + a3) = v11 & *(_BYTE *)(v7 + a4);
  v14 = 16LL;
  if ( v9 != 49 )
    v14 = 12LL;
  v15 = 0;
  v16 = (_BYTE *)(a2 + v14);
  if ( v10 )
  {
    v17 = *(unsigned __int8 *)(v7 + a4);
    v7 = (unsigned int)(v7 + 1);
    v13 = ~v11;
    *v16 = (int)(v13 & v17) >> v12;
    v5 = v12 + a5 - 8;
  }
  for ( ; v5; v7 = (unsigned int)(v7 + 1) )
  {
    if ( v15 >= 4 || (unsigned int)v7 >= 8 )
      break;
    v18 = *(_BYTE *)(v7 + a4);
    v19 = v15 + 1;
    v20 = v15++;
    if ( (a5 & 7) != 0 )
    {
      v16[v20] |= (v11 & v18) << (8 - v12);
      if ( (unsigned int)v19 < 4 )
        v16[v19] = (*(unsigned __int8 *)(v7 + a4) & ~v11) >> v12;
    }
    else
    {
      v16[v20] = v18;
    }
    v13 = v5;
    v21 = v5 - 8;
    v5 = 0;
    if ( v13 > 8 )
      v5 = v21;
  }
  return v13;
}
