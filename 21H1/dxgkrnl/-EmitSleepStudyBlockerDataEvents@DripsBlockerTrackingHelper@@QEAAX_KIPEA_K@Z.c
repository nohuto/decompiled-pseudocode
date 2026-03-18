/*
 * XREFs of ?EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAX_KIPEA_K@Z @ 0x1C02BB7BC
 * Callers:
 *     ?FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ @ 0x1C02BA890 (-FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     McTemplateK0ujqzr2jxx_EtwWriteTransfer @ 0x1C004CF64 (McTemplateK0ujqzr2jxx_EtwWriteTransfer.c)
 *     ?EmitSleepStudyBlockerActivationTelemetry@DripsBlockerTrackingHelper@@IEAAX_KAEB_KPEAGII@Z @ 0x1C02BB65C (-EmitSleepStudyBlockerActivationTelemetry@DripsBlockerTrackingHelper@@IEAAX_KAEB_KPEAGII@Z.c)
 *     ?EmitSleepStudyBlockerMetadataEvent@DripsBlockerTrackingHelper@@IEAAX_KPEAGI0PEAX@Z @ 0x1C02BBC6C (-EmitSleepStudyBlockerMetadataEvent@DripsBlockerTrackingHelper@@IEAAX_KPEAGI0PEAX@Z.c)
 *     ?EmitSleepStudyBlockerTelemetry@DripsBlockerTrackingHelper@@IEAAX_KAEB_KPEAU_UNICODE_STRING@@I@Z @ 0x1C02BBE04 (-EmitSleepStudyBlockerTelemetry@DripsBlockerTrackingHelper@@IEAAX_KAEB_KPEAU_UNICODE_STRING@@I@Z.c)
 *     ?EmitSleepStudyTotalTimeModernStandbyTelemetry@DripsBlockerTrackingHelper@@IEAAX_K@Z @ 0x1C02BBF6C (-EmitSleepStudyTotalTimeModernStandbyTelemetry@DripsBlockerTrackingHelper@@IEAAX_K@Z.c)
 *     ?EtwProfilerTypeName@DripsBlockerTrackingHelper@@KAPEAGW4_DXGKETW_PROFILER_TYPE@@PEAI@Z @ 0x1C02BC358 (-EtwProfilerTypeName@DripsBlockerTrackingHelper@@KAPEAGW4_DXGKETW_PROFILER_TYPE@@PEAI@Z.c)
 */

void __fastcall DripsBlockerTrackingHelper::EmitSleepStudyBlockerDataEvents(
        DripsBlockerTrackingHelper *this,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  unsigned int v4; // ebx
  DripsBlockerTrackingHelper *v6; // r15
  unsigned __int64 *v7; // r13
  const char *v8; // rsi
  unsigned int v9; // r12d
  char *v10; // rdi
  __int64 v11; // rcx
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rax
  ULONGLONG Value; // rax
  DripsBlockerTrackingHelper *v19; // rcx
  unsigned __int64 v20; // r8
  ULONGLONG v21; // rax
  __int64 v22; // r15
  __int64 v23; // rax
  DripsBlockerTrackingHelper *v24; // rcx
  __int64 v25; // r8
  unsigned __int16 *v26; // r13
  ULONGLONG v27; // rax
  __int64 v28; // r8
  ULONGLONG v29; // rax
  ULONGLONG v30; // rax
  unsigned __int64 v32; // [rsp+58h] [rbp-A8h] BYREF
  DripsBlockerTrackingHelper *v33; // [rsp+60h] [rbp-A0h]
  struct _UNICODE_STRING v34; // [rsp+68h] [rbp-98h] BYREF
  const char *v35; // [rsp+78h] [rbp-88h]
  unsigned __int64 v36; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 *v37; // [rsp+88h] [rbp-78h]
  struct _STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  GUID ActivityId; // [rsp+A0h] [rbp-60h] BYREF
  GUID v40; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v41; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v42[80]; // [rsp+D0h] [rbp-30h] BYREF

  v4 = a3;
  v33 = this;
  v37 = a4;
  v6 = this;
  v7 = a4;
  memset(v42, 0, 0x42uLL);
  *(_QWORD *)&v34.Length = 4325376LL;
  v34.Buffer = (wchar_t *)v42;
  v40 = 0LL;
  ActivityId = 0LL;
  v41 = 0LL;
  DripsBlockerTrackingHelper::EmitSleepStudyTotalTimeModernStandbyTelemetry(v6, a2);
  v8 = (char *)v6 + 8;
  v9 = 0;
  v35 = (char *)v6 + 8;
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
            goto LABEL_36;
        }
        DestinationString = 0LL;
        RtlInitAnsiString(&DestinationString, v8);
        v12 = RtlAnsiStringToUnicodeString(&v34, &DestinationString, 0);
        v16 = v12;
        if ( v12 >= 0 )
        {
          *(_QWORD *)&v41 = *((_QWORD *)v10 - 8);
          *(_QWORD *)ActivityId.Data4 = (v9 << 6) + v41 + 1;
          if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
            McTemplateK0ujqzr2jxx_EtwWriteTransfer(
              (v34.Length >> 1) + 1,
              v13,
              v15,
              a2,
              (__int64)&v41,
              (v34.Length >> 1) + 1,
              (__int64)v34.Buffer,
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
          v19 = (DripsBlockerTrackingHelper *)*((_QWORD *)v10 - 2);
          if ( (unsigned __int64)v19 >= 0x2710 )
            DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
              v19,
              a2,
              L"GPU Total Time(ms)",
              0x13u,
              (unsigned __int64)v19 / 0x2710,
              &ActivityId);
          v20 = *((_QWORD *)v10 + 1);
          if ( v20 >= 0x2710 || *((_QWORD *)v10 + 2) >= 0x2710uLL )
            DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
              (DripsBlockerTrackingHelper *)(v20 / 0x2710 + *((_QWORD *)v10 + 2) / 0x2710uLL),
              a2,
              L"D0 Total Lag Time(ms)",
              0x16u,
              v20 / 0x2710 + *((_QWORD *)v10 + 2) / 0x2710uLL,
              &ActivityId);
          v21 = *((unsigned int *)v10 + 6);
          if ( (_DWORD)v21 )
            DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
              (DripsBlockerTrackingHelper *)&ActivityId,
              a2,
              L"Count of D3 wake ups",
              0x15u,
              v21,
              &ActivityId);
          v32 = *(_QWORD *)ActivityId.Data4;
          DripsBlockerTrackingHelper::EmitSleepStudyBlockerTelemetry(v6, a2, &v32, &v34, v9);
          v22 = 0LL;
          if ( *((_DWORD *)v10 - 5) )
          {
            do
            {
              LODWORD(v32) = 0;
              v23 = DripsBlockerTrackingHelper::EtwProfilerTypeName(*(unsigned int *)&v10[72 * v22 + 108], &v32);
              v26 = (unsigned __int16 *)v23;
              *(_QWORD *)v40.Data4 = (unsigned int)v22 + *(_QWORD *)ActivityId.Data4 + 1LL;
              if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
                McTemplateK0ujqzr2jxx_EtwWriteTransfer(
                  *(_QWORD *)&v10[72 * v22 + 64]
                + *(_QWORD *)&v10[72 * v22 + 72]
                + *(_QWORD *)&v10[72 * v22 + 88]
                + *(_QWORD *)&v10[72 * v22 + 96],
                  (unsigned int)v22 + *(_QWORD *)ActivityId.Data4 + 1LL,
                  v25,
                  a2,
                  (__int64)&ActivityId,
                  v32,
                  v23,
                  (__int64)&v40,
                  v10[72 * v22 + 64] + v10[72 * v22 + 72] + v10[72 * v22 + 88] + v10[72 * v22 + 96],
                  a2);
              v27 = *(unsigned int *)&v10[72 * v22 + 84];
              if ( (_DWORD)v27 )
                DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
                  (DripsBlockerTrackingHelper *)&v40,
                  a2,
                  L"Count of core access locks",
                  0x1Bu,
                  v27,
                  &v40);
              v28 = *(_QWORD *)&v10[72 * v22 + 88] / 10000LL;
              if ( v28 > 0 || *(_QWORD *)&v10[72 * v22 + 96] / 10000LL > 0 )
                DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
                  v24,
                  a2,
                  L"D0 Lag Time(ms)",
                  0x10u,
                  v28 + *(_QWORD *)&v10[72 * v22 + 96] / 10000LL,
                  &v40);
              v29 = *(unsigned int *)&v10[72 * v22 + 104];
              if ( (_DWORD)v29 )
                DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
                  (DripsBlockerTrackingHelper *)&v40,
                  a2,
                  L"Count of D3 wake ups",
                  0x15u,
                  v29,
                  &v40);
              v30 = *(unsigned int *)&v10[72 * v22 + 112];
              if ( (_DWORD)v30 )
                DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
                  (DripsBlockerTrackingHelper *)&v40,
                  a2,
                  L"Count of DFx blocks",
                  0x14u,
                  v30,
                  &v40);
              v36 = *(_QWORD *)ActivityId.Data4;
              DripsBlockerTrackingHelper::EmitSleepStudyBlockerActivationTelemetry(v33, a2, &v36, v26, v9, v22);
              v22 = (unsigned int)(v22 + 1);
            }
            while ( (unsigned int)v22 < *((_DWORD *)v10 - 5) );
            v8 = v35;
            v7 = v37;
          }
          v6 = v33;
        }
        else
        {
          v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
          *(_QWORD *)(v17 + 24) = v16;
          WdLogEvent5_WdWarning(v17);
        }
        v4 = a3;
      }
    }
LABEL_36:
    v8 += 4720;
    ++v9;
    v10 += 4720;
    v35 = v8;
  }
  while ( v9 < 0x40 );
}
