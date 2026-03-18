/*
 * XREFs of RIMRetrieveNormalizationRange @ 0x1C0187AF4
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0164C98 (RIMCreatePointerDeviceInfo.c)
 *     RIMPopulatePointerDevice @ 0x1C016A764 (RIMPopulatePointerDevice.c)
 * Callees:
 *     RIMRetrieveRealAngularPhysicalValues @ 0x1C0187C30 (RIMRetrieveRealAngularPhysicalValues.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRetrieveNormalizationRange(__int64 a1, __int16 *a2, _QWORD *a3)
{
  unsigned int v3; // esi
  unsigned __int16 v6; // di
  int v7; // r9d
  _WORD *v8; // rdx
  int v9; // ecx
  __int64 v10; // r8
  __int16 v11; // r10
  __int128 v12; // xmm1
  __int64 v13; // xmm0_8
  __int128 v14; // xmm1
  __int128 v15; // xmm1
  __int64 v16; // xmm0_8
  __int128 v17; // xmm1
  __int128 v19; // [rsp+20h] [rbp-50h] BYREF
  __int128 v20; // [rsp+30h] [rbp-40h]
  __int128 v21; // [rsp+40h] [rbp-30h]
  __int128 v22; // [rsp+50h] [rbp-20h]
  __int64 v23; // [rsp+60h] [rbp-10h]
  int v24; // [rsp+98h] [rbp+28h] BYREF
  int v25; // [rsp+A0h] [rbp+30h] BYREF

  v3 = 0;
  v6 = a1;
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v7 = *((_DWORD *)a2 + 12);
  v8 = &unk_1C0250942;
  v9 = *((_DWORD *)a2 + 13);
  v10 = 0LL;
  v11 = *a2;
  v24 = v7;
  v25 = v9;
  while ( *(v8 - 1) != v11 || *v8 != a2[28] )
  {
    v10 = (unsigned int)(v10 + 1);
    v8 += 6;
    if ( (unsigned int)v10 >= 5 )
      return v3;
  }
  v3 = 1;
  *a3 = *(_QWORD *)((char *)&unk_1C0250944 + 12 * v10);
  if ( v6 >= 0x1D3Du && (v6 <= 0x1D3Eu || v6 == 7489 || v6 == 19775) && v9 - v7 > 0 )
  {
    v12 = *((_OWORD *)a2 + 1);
    v19 = *(_OWORD *)a2;
    v21 = *((_OWORD *)a2 + 2);
    v13 = *((_QWORD *)a2 + 8);
    v20 = v12;
    v14 = *((_OWORD *)a2 + 3);
    v23 = v13;
    v22 = v14;
    RIMRetrieveRealAngularPhysicalValues(&v19, &v24);
    v15 = *((_OWORD *)a2 + 1);
    v19 = *(_OWORD *)a2;
    v21 = *((_OWORD *)a2 + 2);
    v16 = *((_QWORD *)a2 + 8);
    v20 = v15;
    v17 = *((_OWORD *)a2 + 3);
    v23 = v16;
    v22 = v17;
    RIMRetrieveRealAngularPhysicalValues(&v19, &v25);
  }
  return v3;
}
