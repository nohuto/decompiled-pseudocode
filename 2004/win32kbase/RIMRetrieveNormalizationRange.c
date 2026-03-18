/*
 * XREFs of RIMRetrieveNormalizationRange @ 0x1C0181DF4
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C015E948 (RIMCreatePointerDeviceInfo.c)
 *     RIMPopulatePointerDevice @ 0x1C0164414 (RIMPopulatePointerDevice.c)
 * Callees:
 *     RIMRetrieveRealAngularPhysicalValues @ 0x1C0181F30 (RIMRetrieveRealAngularPhysicalValues.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRetrieveNormalizationRange(__int64 a1, __int16 *a2, _QWORD *a3, __int64 a4)
{
  unsigned int v4; // esi
  unsigned __int16 v7; // di
  int v8; // r9d
  _WORD *v9; // rdx
  int v10; // ecx
  __int64 v11; // r8
  __int16 v12; // r10
  __int128 v13; // xmm1
  __int64 v14; // xmm0_8
  __int128 v15; // xmm1
  __int128 v16; // xmm1
  __int64 v17; // xmm0_8
  __int128 v18; // xmm1
  __int128 v20; // [rsp+20h] [rbp-50h] BYREF
  __int128 v21; // [rsp+30h] [rbp-40h]
  __int128 v22; // [rsp+40h] [rbp-30h]
  __int128 v23; // [rsp+50h] [rbp-20h]
  __int64 v24; // [rsp+60h] [rbp-10h]
  int v25; // [rsp+98h] [rbp+28h] BYREF
  int v26; // [rsp+A0h] [rbp+30h] BYREF

  v4 = 0;
  v7 = a1;
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, 0LL, a4);
  v8 = *((_DWORD *)a2 + 12);
  v9 = &unk_1C024A942;
  v10 = *((_DWORD *)a2 + 13);
  v11 = 0LL;
  v12 = *a2;
  v25 = v8;
  v26 = v10;
  while ( *(v9 - 1) != v12 || *v9 != a2[28] )
  {
    v11 = (unsigned int)(v11 + 1);
    v9 += 6;
    if ( (unsigned int)v11 >= 5 )
      return v4;
  }
  v4 = 1;
  *a3 = *(_QWORD *)((char *)&unk_1C024A944 + 12 * v11);
  if ( v7 >= 0x1D3Du && (v7 <= 0x1D3Eu || v7 == 7489 || v7 == 19775) && v10 - v8 > 0 )
  {
    v13 = *((_OWORD *)a2 + 1);
    v20 = *(_OWORD *)a2;
    v22 = *((_OWORD *)a2 + 2);
    v14 = *((_QWORD *)a2 + 8);
    v21 = v13;
    v15 = *((_OWORD *)a2 + 3);
    v24 = v14;
    v23 = v15;
    RIMRetrieveRealAngularPhysicalValues(&v20, &v25);
    v16 = *((_OWORD *)a2 + 1);
    v20 = *(_OWORD *)a2;
    v22 = *((_OWORD *)a2 + 2);
    v17 = *((_QWORD *)a2 + 8);
    v21 = v16;
    v18 = *((_OWORD *)a2 + 3);
    v24 = v17;
    v23 = v18;
    RIMRetrieveRealAngularPhysicalValues(&v20, &v26);
  }
  return v4;
}
