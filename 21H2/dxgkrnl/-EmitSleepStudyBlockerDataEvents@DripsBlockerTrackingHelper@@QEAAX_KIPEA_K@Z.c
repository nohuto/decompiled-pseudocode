/*
 * XREFs of ?EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAX_KIPEA_K@Z @ 0x1C02FB27C
 * Callers:
 *     ?FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ @ 0x1C02E3220 (-FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     McTemplateK0ujqzr2jxx_EtwWriteTransfer @ 0x1C004FB98 (McTemplateK0ujqzr2jxx_EtwWriteTransfer.c)
 *     ?EmitSleepStudyBlockerActivationTelemetry@DripsBlockerTrackingHelper@@IEAAX_KAEB_KPEAGII@Z @ 0x1C02FB11C (-EmitSleepStudyBlockerActivationTelemetry@DripsBlockerTrackingHelper@@IEAAX_KAEB_KPEAGII@Z.c)
 *     ?EmitSleepStudyBlockerMetadataEvent@DripsBlockerTrackingHelper@@IEAAX_KPEAGI0PEAX@Z @ 0x1C02FB720 (-EmitSleepStudyBlockerMetadataEvent@DripsBlockerTrackingHelper@@IEAAX_KPEAGI0PEAX@Z.c)
 *     ?EmitSleepStudyBlockerTelemetry@DripsBlockerTrackingHelper@@IEAAX_KAEB_KPEAU_UNICODE_STRING@@I@Z @ 0x1C02FB8AC (-EmitSleepStudyBlockerTelemetry@DripsBlockerTrackingHelper@@IEAAX_KAEB_KPEAU_UNICODE_STRING@@I@Z.c)
 *     ?EmitSleepStudyTotalTimeModernStandbyTelemetry@DripsBlockerTrackingHelper@@IEAAX_K@Z @ 0x1C02FBA14 (-EmitSleepStudyTotalTimeModernStandbyTelemetry@DripsBlockerTrackingHelper@@IEAAX_K@Z.c)
 *     ?EtwProfilerTypeName@DripsBlockerTrackingHelper@@KAPEAGW4_DXGKETW_PROFILER_TYPE@@PEAI@Z @ 0x1C02FBDF0 (-EtwProfilerTypeName@DripsBlockerTrackingHelper@@KAPEAGW4_DXGKETW_PROFILER_TYPE@@PEAI@Z.c)
 */

void __fastcall DripsBlockerTrackingHelper::EmitSleepStudyBlockerDataEvents(
        DripsBlockerTrackingHelper *this,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  unsigned int v4; // r15d
  DripsBlockerTrackingHelper *v6; // rsi
  unsigned __int64 *v7; // r13
  const char *v8; // rbx
  unsigned int v9; // r12d
  char *v10; // rdi
  __int64 v11; // rcx
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  ULONGLONG Value; // rax
  DripsBlockerTrackingHelper *v16; // rcx
  unsigned __int64 v17; // r8
  ULONGLONG v18; // rax
  __int64 v19; // r15
  __int64 v20; // rax
  DripsBlockerTrackingHelper *v21; // rcx
  __int64 v22; // r8
  unsigned __int16 *v23; // r13
  ULONGLONG v24; // rax
  __int64 v25; // r8
  ULONGLONG v26; // rax
  ULONGLONG v27; // rax
  unsigned __int64 v29; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING v30; // [rsp+60h] [rbp-A0h] BYREF
  const char *v31; // [rsp+70h] [rbp-90h]
  unsigned __int64 v32; // [rsp+78h] [rbp-88h] BYREF
  DripsBlockerTrackingHelper *v33; // [rsp+80h] [rbp-80h]
  unsigned __int64 *v34; // [rsp+88h] [rbp-78h]
  struct _STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  GUID ActivityId; // [rsp+A0h] [rbp-60h] BYREF
  GUID v37; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v38; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v39[80]; // [rsp+D0h] [rbp-30h] BYREF

  v4 = a3;
  v33 = this;
  v6 = this;
  v34 = a4;
  v7 = a4;
  memset(v39, 0, 0x42uLL);
  *(_QWORD *)&v30.Length = 4325376LL;
  v30.Buffer = (wchar_t *)v39;
  v37 = 0LL;
  ActivityId = 0LL;
  v38 = 0LL;
  DripsBlockerTrackingHelper::EmitSleepStudyTotalTimeModernStandbyTelemetry(v6, a2);
  v8 = (char *)v6 + 8;
  v9 = 0;
  v31 = (char *)v6 + 8;
  v10 = (char *)v6 + 64;
  do
  {
    if ( v10[40] )
    {
      v11 = 0LL;
      if ( v4 )
      {
        while ( v7[v11] != *((_QWORD *)v10 - 8) )
        {
          v11 = (unsigned int)(v11 + 1);
          if ( (unsigned int)v11 >= v4 )
            goto LABEL_35;
        }
        DestinationString = 0LL;
        RtlInitAnsiString(&DestinationString, v8);
        v12 = RtlAnsiStringToUnicodeString(&v30, &DestinationString, 0);
        if ( v12 >= 0 )
        {
          *(_QWORD *)&v38 = *((_QWORD *)v10 - 8);
          *(_QWORD *)ActivityId.Data4 = (v9 << 6) + v38 + 1;
          if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
            McTemplateK0ujqzr2jxx_EtwWriteTransfer(
              (v30.Length >> 1) + 1,
              v13,
              v14,
              a2,
              (__int64)&v38,
              (v30.Length >> 1) + 1,
              (__int64)v30.Buffer,
              (__int64)&ActivityId,
              *v10 + v10[8] + *(v10 - 8) + v10[16],
              a2);
          Value = *((unsigned int *)v10 + 7);
          if ( (_DWORD)Value )
            DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
              (DripsBlockerTrackingHelper *)&ActivityId,
              a2,
              L"Count of core access locks",
              0x1Bu,
              Value,
              &ActivityId);
          v16 = (DripsBlockerTrackingHelper *)*((_QWORD *)v10 - 2);
          if ( (unsigned __int64)v16 >= 0x2710 )
            DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
              v16,
              a2,
              L"GPU Total Time(ms)",
              0x13u,
              (unsigned __int64)v16 / 0x2710,
              &ActivityId);
          v17 = *((_QWORD *)v10 + 1);
          if ( v17 >= 0x2710 || *((_QWORD *)v10 + 2) >= 0x2710uLL )
            DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
              (DripsBlockerTrackingHelper *)(v17 / 0x2710 + *((_QWORD *)v10 + 2) / 0x2710uLL),
              a2,
              L"D0 Total Lag Time(ms)",
              0x16u,
              v17 / 0x2710 + *((_QWORD *)v10 + 2) / 0x2710uLL,
              &ActivityId);
          v18 = *((unsigned int *)v10 + 6);
          if ( (_DWORD)v18 )
            DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
              (DripsBlockerTrackingHelper *)&ActivityId,
              a2,
              L"Count of D3 wake ups",
              0x15u,
              v18,
              &ActivityId);
          v29 = *(_QWORD *)ActivityId.Data4;
          DripsBlockerTrackingHelper::EmitSleepStudyBlockerTelemetry(v6, a2, &v29, &v30, v9);
          v19 = 0LL;
          if ( *((_DWORD *)v10 - 5) )
          {
            do
            {
              LODWORD(v29) = 0;
              v20 = DripsBlockerTrackingHelper::EtwProfilerTypeName(*(unsigned int *)&v10[72 * v19 + 108], &v29);
              v23 = (unsigned __int16 *)v20;
              *(_QWORD *)v37.Data4 = (unsigned int)v19 + *(_QWORD *)ActivityId.Data4 + 1LL;
              if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
                McTemplateK0ujqzr2jxx_EtwWriteTransfer(
                  *(_QWORD *)&v10[72 * v19 + 64]
                + *(_QWORD *)&v10[72 * v19 + 72]
                + *(_QWORD *)&v10[72 * v19 + 88]
                + *(_QWORD *)&v10[72 * v19 + 96],
                  (unsigned int)v19 + *(_QWORD *)ActivityId.Data4 + 1LL,
                  v22,
                  a2,
                  (__int64)&ActivityId,
                  v29,
                  v20,
                  (__int64)&v37,
                  v10[72 * v19 + 64] + v10[72 * v19 + 72] + v10[72 * v19 + 88] + v10[72 * v19 + 96],
                  a2);
              v24 = *(unsigned int *)&v10[72 * v19 + 84];
              if ( (_DWORD)v24 )
                DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
                  (DripsBlockerTrackingHelper *)&v37,
                  a2,
                  L"Count of core access locks",
                  0x1Bu,
                  v24,
                  &v37);
              v25 = *(_QWORD *)&v10[72 * v19 + 88] / 10000LL;
              if ( v25 > 0 || *(_QWORD *)&v10[72 * v19 + 96] / 10000LL > 0 )
                DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
                  v21,
                  a2,
                  L"D0 Lag Time(ms)",
                  0x10u,
                  v25 + *(_QWORD *)&v10[72 * v19 + 96] / 10000LL,
                  &v37);
              v26 = *(unsigned int *)&v10[72 * v19 + 104];
              if ( (_DWORD)v26 )
                DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
                  (DripsBlockerTrackingHelper *)&v37,
                  a2,
                  L"Count of D3 wake ups",
                  0x15u,
                  v26,
                  &v37);
              v27 = *(unsigned int *)&v10[72 * v19 + 112];
              if ( (_DWORD)v27 )
                DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
                  (DripsBlockerTrackingHelper *)&v37,
                  a2,
                  L"Count of DFx blocks",
                  0x14u,
                  v27,
                  &v37);
              v6 = v33;
              v32 = *(_QWORD *)ActivityId.Data4;
              DripsBlockerTrackingHelper::EmitSleepStudyBlockerActivationTelemetry(v33, a2, &v32, v23, v9, v19);
              v19 = (unsigned int)(v19 + 1);
            }
            while ( (unsigned int)v19 < *((_DWORD *)v10 - 5) );
            v8 = v31;
            v7 = v34;
          }
          v4 = a3;
        }
        else
        {
          WdLogSingleEntry1(3LL, v12);
        }
      }
    }
LABEL_35:
    v8 += 4720;
    ++v9;
    v10 += 4720;
    v31 = v8;
  }
  while ( v9 < 0x40 );
}
