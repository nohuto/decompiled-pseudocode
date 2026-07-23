/*
 * XREFs of PopDiagTracePerfTrackData @ 0x1407744D4
 * Callers:
 *     PopIssueActionRequest @ 0x140775BC8 (PopIssueActionRequest.c)
 * Callees:
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     PopReadRegKeyValue @ 0x1403CBAF8 (PopReadRegKeyValue.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PopComputeDerivedHiberStats @ 0x140774A00 (PopComputeDerivedHiberStats.c)
 *     PopQpcTimeInMs @ 0x140991634 (PopQpcTimeInMs.c)
 */

char __fastcall PopDiagTracePerfTrackData(__int16 a1)
{
  char result; // al
  unsigned __int64 v3; // rdi
  int v4; // ecx
  int v5; // eax
  unsigned __int64 v6; // rax
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // ecx
  unsigned __int64 v12; // rax
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // rcx
  __int64 v14; // r8
  __int128 *v15; // rdx
  const EVENT_DESCRIPTOR *v16; // rdx
  unsigned int v17; // r14d
  unsigned __int64 v18; // rcx
  int v19; // eax
  int v20; // ecx
  int v21; // ecx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int16 v24; // cx
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *v25; // rcx
  __int64 v26; // r8
  __int128 *v27; // rdx
  int v28; // [rsp+38h] [rbp-89h] BYREF
  int v29; // [rsp+3Ch] [rbp-85h] BYREF
  int v30; // [rsp+40h] [rbp-81h] BYREF
  int v31; // [rsp+44h] [rbp-7Dh] BYREF
  int v32; // [rsp+48h] [rbp-79h] BYREF
  __int64 v33; // [rsp+50h] [rbp-71h] BYREF
  int v34; // [rsp+58h] [rbp-69h] BYREF
  int v35; // [rsp+5Ch] [rbp-65h] BYREF
  int v36; // [rsp+60h] [rbp-61h] BYREF
  int v37; // [rsp+64h] [rbp-5Dh] BYREF
  __int128 v38; // [rsp+68h] [rbp-59h] BYREF
  __int128 v39; // [rsp+78h] [rbp-49h] BYREF
  __int64 v40; // [rsp+88h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-29h] BYREF
  int *v42; // [rsp+A8h] [rbp-19h]
  __int64 v43; // [rsp+B0h] [rbp-11h]
  int *v44; // [rsp+B8h] [rbp-9h]
  __int64 v45; // [rsp+C0h] [rbp-1h]
  int *v46; // [rsp+C8h] [rbp+7h]
  __int64 v47; // [rsp+D0h] [rbp+Fh]
  int *v48; // [rsp+D8h] [rbp+17h]
  __int64 v49; // [rsp+E0h] [rbp+1Fh]

  result = 0;
  v33 = 0LL;
  v38 = 0LL;
  v40 = 0LL;
  v39 = 0LL;
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_TRANSITIONTIMES);
    if ( result )
    {
      v3 = 1000LL * *(unsigned int *)(KeGetPrcb(0) + 68);
      v35 = PopQpcTimeInMs(&qword_140C23FA0, &qword_140C23FA8);
      v34 = PopQpcTimeInMs(&qword_140C23F90, &qword_140C23F98);
      if ( qword_140C23F88 )
      {
        v33 = 0LL;
        v30 = PopQpcTimeInMs(&v33, &qword_140C23F88);
        v28 = v30 + PopQpcTimeInMs(&qword_140C23F68, &qword_140C23F70);
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&qword_140C24148;
        v42 = &v28;
        v44 = &v30;
        v46 = &v34;
        v48 = &v35;
        v43 = 4LL;
        v45 = 4LL;
        v47 = 4LL;
        v49 = 4LL;
        return EtwWrite(PopDiagHandle, (PCEVENT_DESCRIPTOR)POP_ETW_EVENT_PERFTRACK_STANDBY, 0LL, 5u, &UserData);
      }
      result = dword_140C24190;
      if ( dword_140C24190 )
      {
        v4 = qword_140C23FF8;
        v31 = (4 * dword_140C24190) & 0x3FFFFF;
        v37 = qword_140C23FF8;
        v32 = qword_140C23FD0 / v3;
        result = qword_140C241A0;
        v28 = qword_140C241A0;
        if ( (a1 & 8) != 0 )
        {
          if ( !PopShutdownButtonPressTime )
            return result;
          v29 = PopQpcTimeInMs(&PopShutdownButtonPressTime, &qword_140C23F48) + v4;
          if ( (int)PopReadRegKeyValue(
                      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon",
                      L"LastLogOffEndTimePerfCounter",
                      8uLL,
                      0,
                      &v33) < 0 )
            v5 = 0;
          else
            v5 = PopQpcTimeInMs(&v33, &qword_140C24000);
          v36 = v5;
          *(_QWORD *)&UserData.Size = 4LL;
          UserData.Ptr = (ULONGLONG)&v31;
          v43 = 4LL;
          v42 = &v29;
          v45 = 4LL;
          v44 = &v32;
          v46 = &v36;
          v47 = 4LL;
          EtwWrite(PopDiagHandle, &POP_ETW_EVENT_PERFTRACK_HYBRID_SHUTDOWN, 0LL, 4u, &UserData);
          PopComputeDerivedHiberStats(&qword_140C23FB8, v3, &v38);
          LODWORD(v39) = v28;
          v6 = (unsigned __int64)qword_140C24178 >> 8;
          WORD3(v39) = -1;
          if ( (unsigned __int64)qword_140C24178 >> 8 > 0x7FFF )
            LOWORD(v6) = 0x7FFF;
          WORD2(v39) = v6 & 0x7FFF;
          if ( (unsigned __int64)qword_140C24180 >> 8 <= 0xFFFF )
            WORD3(v39) = (unsigned int)qword_140C24180 >> 8;
          WORD4(v39) = -1;
          if ( qword_140C24018 / v3 <= 0xFFFF )
            WORD4(v39) = qword_140C24018 / v3;
          WORD5(v39) = -1;
          if ( qword_140C24108 / v3 <= 0xFFFF )
            WORD5(v39) = qword_140C24108 / v3;
          WORD6(v39) = -1;
          if ( (unsigned int)qword_140C24008 <= 0xFFFF )
            WORD6(v39) = qword_140C24008;
          HIWORD(v39) = -1;
          if ( (unsigned int)qword_140C24148 <= 0xFFFF )
            HIWORD(v39) = qword_140C24148;
          v7 = DWORD1(v38);
          HIWORD(v40) = -1;
          if ( DWORD1(v38) > 0x3FF )
            v7 = 1023;
          v8 = HIDWORD(v38);
          if ( HIDWORD(v38) > 0x1FF )
            v8 = 511;
          v9 = v7 ^ (v7 ^ (v8 << 10)) & 0x7FC00;
          v10 = (qword_140C24098 - qword_140C240D0) / v3;
          if ( v10 > 0x1FFF )
            LODWORD(v10) = 0x1FFF;
          v11 = ((_DWORD)v10 << 19) | v9 & 0x7FFFF;
          v12 = (unsigned __int64)qword_140C24158 >> 8;
          LODWORD(v40) = v11;
          if ( (unsigned __int64)qword_140C24158 >> 8 > 0x7FFF )
            LOWORD(v12) = 0x7FFF;
          WORD2(v40) = v12 & 0x7FFF;
          if ( (unsigned __int64)qword_140C24160 >> 8 <= 0xFFFF )
            HIWORD(v40) = (unsigned int)qword_140C24160 >> 8;
          p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
          v14 = 6LL;
          v15 = &v39;
          do
          {
            *(_QWORD *)&p_Reserved[-3].Reserved = v15;
            v15 = (__int128 *)((char *)v15 + 4);
            *(_QWORD *)&p_Reserved[-1].Reserved = 4LL;
            p_Reserved += 4;
            --v14;
          }
          while ( v14 );
          v16 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_PERFTRACK_HYBRID_RESUME;
          return EtwWrite(PopDiagHandle, v16, 0LL, 6u, &UserData);
        }
        UserData.Ptr = (ULONGLONG)&v31;
        v42 = &v37;
        *(_QWORD *)&UserData.Size = 4LL;
        v44 = &v32;
        v43 = 4LL;
        v45 = 4LL;
        result = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_PERFTRACK_HIBERNATE, 0LL, 3u, &UserData);
        v17 = qword_140C24008;
        if ( (_DWORD)qword_140C24008 )
        {
          PopComputeDerivedHiberStats(&qword_140C23FB8, v3, &v38);
          LODWORD(v39) = v28;
          v18 = (unsigned __int64)qword_140C24178 >> 8;
          if ( (unsigned __int64)qword_140C24178 >> 8 > 0x7FFF )
            LOWORD(v18) = 0x7FFF;
          WORD2(v39) = (a1 << 10) ^ (v18 ^ (a1 << 10)) & 0x7FFF;
          WORD3(v39) = (unsigned int)qword_140C24180 >> 8;
          if ( (unsigned __int64)qword_140C24180 >> 8 >= 0xFFFF )
            WORD3(v39) = -1;
          WORD4(v39) = qword_140C24018 / v3;
          if ( qword_140C24018 / v3 >= 0xFFFF )
            WORD4(v39) = -1;
          WORD5(v39) = qword_140C24108 / v3;
          if ( qword_140C24108 / v3 >= 0xFFFF )
            WORD5(v39) = -1;
          WORD6(v39) = v17;
          if ( v17 >= 0xFFFF )
            WORD6(v39) = -1;
          HIWORD(v39) = qword_140C24148;
          if ( (unsigned int)qword_140C24148 >= 0xFFFF )
            HIWORD(v39) = -1;
          v19 = DWORD1(v38);
          if ( DWORD1(v38) > 0x3FF )
            v19 = 1023;
          v20 = HIDWORD(v38);
          if ( HIDWORD(v38) > 0x1FF )
            v20 = 511;
          v21 = v19 ^ (v19 ^ (v20 << 10)) & 0x7FC00;
          v22 = (qword_140C24098 - qword_140C240D0) / v3;
          if ( v22 > 0x1FFF )
            LODWORD(v22) = 0x1FFF;
          LODWORD(v40) = v21 & 0x7FFFF | ((_DWORD)v22 << 19);
          v23 = (unsigned __int64)qword_140C24158 >> 8;
          if ( (unsigned __int64)qword_140C24158 >> 8 > 0x7FFF )
            LOWORD(v23) = 0x7FFF;
          if ( PopEnableMinimalHiberFile )
            v24 = 0x8000;
          else
            v24 = 0;
          WORD2(v40) = v24 | v23 & 0x7FFF;
          HIWORD(v40) = (unsigned int)qword_140C24160 >> 8;
          if ( (unsigned __int64)qword_140C24160 >> 8 >= 0xFFFF )
            HIWORD(v40) = -1;
          v25 = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
          v26 = 6LL;
          v27 = &v39;
          do
          {
            *(_QWORD *)&v25[-3].Reserved = v27;
            v27 = (__int128 *)((char *)v27 + 4);
            *(_QWORD *)&v25[-1].Reserved = 4LL;
            v25 += 4;
            --v26;
          }
          while ( v26 );
          v16 = &POP_ETW_EVENT_PERFTRACK_RESUME_FROM_HIBERNATE;
          return EtwWrite(PopDiagHandle, v16, 0LL, 6u, &UserData);
        }
      }
    }
  }
  return result;
}
