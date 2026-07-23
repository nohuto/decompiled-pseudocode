/*
 * XREFs of PopDiagTraceIrpFinishTelemetry @ 0x14037A87C
 * Callers:
 *     PopDiagTraceIrpFinish @ 0x14037A6C4 (PopDiagTraceIrpFinish.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x1402709CC (_tlgCreate1Sz_wchar_t.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     IoFindDeviceThatFailedIrp @ 0x14037A944 (IoFindDeviceThatFailedIrp.c)
 *     PopDiagGetDriverName @ 0x1403890CC (PopDiagGetDriverName.c)
 *     PopComputeWatchdogTimeout @ 0x1403986FC (PopComputeWatchdogTimeout.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceIrpFinishTelemetry(__int64 a1)
{
  const size_t *v1; // rsi
  __int64 v2; // rbx
  int v3; // r14d
  unsigned __int128 v4; // rax
  __int64 v5; // r11
  __int64 v6; // rcx
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 DeviceThatFailedIrp; // rax
  int DriverName; // eax
  const size_t *v11; // rcx
  int v12; // r10d
  int v13; // r11d
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+3Ch] [rbp-C4h] BYREF
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+60h] [rbp-A0h] BYREF
  int *v24; // [rsp+80h] [rbp-80h]
  int v25; // [rsp+88h] [rbp-78h]
  int v26; // [rsp+8Ch] [rbp-74h]
  __int64 *v27; // [rsp+90h] [rbp-70h]
  int v28; // [rsp+98h] [rbp-68h]
  int v29; // [rsp+9Ch] [rbp-64h]
  __int64 *v30; // [rsp+A0h] [rbp-60h]
  int v31; // [rsp+A8h] [rbp-58h]
  int v32; // [rsp+ACh] [rbp-54h]
  char v33[16]; // [rsp+B0h] [rbp-50h] BYREF
  int *v34; // [rsp+C0h] [rbp-40h]
  int v35; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+CCh] [rbp-34h]
  int *v37; // [rsp+D0h] [rbp-30h]
  int v38; // [rsp+D8h] [rbp-28h]
  int v39; // [rsp+DCh] [rbp-24h]
  int *v40; // [rsp+E0h] [rbp-20h]
  int v41; // [rsp+E8h] [rbp-18h]
  int v42; // [rsp+ECh] [rbp-14h]
  int *v43; // [rsp+F0h] [rbp-10h]
  int v44; // [rsp+F8h] [rbp-8h]
  int v45; // [rsp+FCh] [rbp-4h]
  __int64 *v46; // [rsp+100h] [rbp+0h]
  int v47; // [rsp+108h] [rbp+8h]
  int v48; // [rsp+10Ch] [rbp+Ch]
  _BYTE v49[128]; // [rsp+110h] [rbp+10h] BYREF

  v1 = &cchOriginalDestLength;
  v2 = *(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200);
  v3 = *(_DWORD *)(a1 + 48);
  *(_QWORD *)&v4 = KiQueryUnbiasedInterruptTime();
  v6 = *(_QWORD *)(v2 + 48);
  v7 = v4;
  if ( v6 )
  {
    if ( *(_BYTE *)(v2 + 196) )
    {
      v4 = (unsigned __int64)(v4 - v6) * (unsigned __int128)0x346DC5D63886594BuLL;
      v8 = *((_QWORD *)&v4 + 1) >> 11;
      if ( (unsigned int)(*((_QWORD *)&v4 + 1) >> 11) >= 0x1388 )
      {
        if ( v3 < 0 && !*(_DWORD *)(v2 + 188) )
        {
          DeviceThatFailedIrp = IoFindDeviceThatFailedIrp(v5);
          DriverName = PopDiagGetDriverName(DeviceThatFailedIrp, v49);
          v11 = (const size_t *)v49;
          if ( DriverName < 0 )
            v11 = &cchOriginalDestLength;
          v1 = v11;
        }
        LOBYTE(v4) = PopComputeWatchdogTimeout(v2);
        if ( (unsigned int)dword_140C02228 > 5 )
        {
          LOBYTE(v4) = tlgKeywordOn((__int64)&dword_140C02228, 0x400000000000LL);
          if ( (_BYTE)v4 )
          {
            v26 = 0;
            v29 = 0;
            v32 = 0;
            v24 = &v15;
            v20 = *(_QWORD *)(v2 + 48);
            v27 = &v20;
            v15 = v8;
            v30 = &v21;
            v25 = 4;
            v28 = 8;
            v21 = v7;
            v31 = 8;
            tlgCreate1Sz_wchar_t((__int64)v33, v1);
            v36 = 0;
            v39 = 0;
            v42 = 0;
            v45 = 0;
            v48 = 0;
            v34 = &v16;
            v17 = *(_DWORD *)(v2 + 188);
            v37 = &v17;
            v40 = &v18;
            v43 = &v19;
            v46 = &v22;
            v16 = v12;
            v35 = 4;
            v38 = 4;
            v18 = v13;
            v41 = 4;
            v19 = v3;
            v44 = 4;
            v22 = 0x1000000LL;
            v47 = 8;
            LOBYTE(v4) = tlgWriteTransfer_EtwWriteTransfer(
                           (__int64)&dword_140C02228,
                           (unsigned __int8 *)byte_140028E85,
                           0LL,
                           0LL,
                           0xBu,
                           &v23);
          }
        }
      }
    }
  }
  return v4;
}
