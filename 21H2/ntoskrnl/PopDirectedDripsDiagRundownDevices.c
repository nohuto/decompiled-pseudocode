/*
 * XREFs of PopDirectedDripsDiagRundownDevices @ 0x1408F7924
 * Callers:
 *     PopDirectedDripsDiagNotifySessionStop @ 0x1408F7304 (PopDirectedDripsDiagNotifySessionStop.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PopDirectedDripsDiagCreateBlockerEntryBoolean @ 0x1408F6EBC (PopDirectedDripsDiagCreateBlockerEntryBoolean.c)
 *     PopDirectedDripsDiagCreateBlockerEntryULong @ 0x1408F6F28 (PopDirectedDripsDiagCreateBlockerEntryULong.c)
 *     PopDirectedDripsDiagFreeDeviceDiagnostic @ 0x1408F7168 (PopDirectedDripsDiagFreeDeviceDiagnostic.c)
 *     PopDirectedDripsDiagSanitizeHardwareId @ 0x1408F80C4 (PopDirectedDripsDiagSanitizeHardwareId.c)
 */

void PopDirectedDripsDiagRundownDevices()
{
  char *v0; // rbx
  __int64 v1; // rax
  unsigned int v2; // edi
  unsigned int v3; // ecx
  unsigned int v4; // r8d
  unsigned int v5; // r8d
  int *v6; // r14
  int v7; // esi
  int v8; // edx
  UNICODE_STRING *v9; // rax
  UNICODE_STRING *v10; // r13
  char v11; // r9
  UNICODE_STRING *v12; // r12
  UNICODE_STRING *v13; // r15
  unsigned __int16 *v14; // rax
  __int64 v15; // rcx
  unsigned __int16 *v16; // rcx
  REGHANDLE v17; // rsi
  int Length; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  unsigned int v22; // r10d
  _QWORD *v23; // r9
  int v24; // r8d
  _DWORD *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  ULONGLONG v28; // rax
  __int64 v29; // rcx
  ULONGLONG v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  _BYTE v35[4]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v36; // [rsp+3Ch] [rbp-CCh] BYREF
  int v37; // [rsp+40h] [rbp-C8h] BYREF
  int v38; // [rsp+44h] [rbp-C4h] BYREF
  int v39; // [rsp+48h] [rbp-C0h] BYREF
  int v40; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v41; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING *v42; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+60h] [rbp-A8h] BYREF
  int v44; // [rsp+68h] [rbp-A0h] BYREF
  int v45; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v46; // [rsp+70h] [rbp-98h] BYREF
  int v47; // [rsp+74h] [rbp-94h] BYREF
  UNICODE_STRING *v48; // [rsp+78h] [rbp-90h]
  __int64 v49; // [rsp+80h] [rbp-88h] BYREF
  __int64 v50; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+98h] [rbp-70h] BYREF
  int *v52; // [rsp+B8h] [rbp-50h]
  __int64 v53; // [rsp+C0h] [rbp-48h]
  _DWORD *v54; // [rsp+C8h] [rbp-40h]
  __int64 v55; // [rsp+D0h] [rbp-38h]
  wchar_t *Buffer; // [rsp+D8h] [rbp-30h]
  _DWORD v57[2]; // [rsp+E0h] [rbp-28h] BYREF
  _DWORD *v58; // [rsp+E8h] [rbp-20h]
  __int64 v59; // [rsp+F0h] [rbp-18h]
  __int64 v60; // [rsp+F8h] [rbp-10h]
  _DWORD v61[2]; // [rsp+100h] [rbp-8h] BYREF
  _DWORD *v62; // [rsp+108h] [rbp+0h]
  __int64 v63; // [rsp+110h] [rbp+8h]
  wchar_t *v64; // [rsp+118h] [rbp+10h]
  _DWORD v65[2]; // [rsp+120h] [rbp+18h] BYREF
  _DWORD *v66; // [rsp+128h] [rbp+20h]
  __int64 v67; // [rsp+130h] [rbp+28h]
  wchar_t *v68; // [rsp+138h] [rbp+30h]
  _DWORD v69[2]; // [rsp+140h] [rbp+38h] BYREF
  int *v70; // [rsp+148h] [rbp+40h]
  __int64 v71; // [rsp+150h] [rbp+48h]
  int *v72; // [rsp+158h] [rbp+50h]
  __int64 v73; // [rsp+160h] [rbp+58h]
  int *v74; // [rsp+168h] [rbp+60h]
  __int64 v75; // [rsp+170h] [rbp+68h]
  int *v76; // [rsp+178h] [rbp+70h]
  __int64 v77; // [rsp+180h] [rbp+78h]
  _DWORD *v78; // [rsp+188h] [rbp+80h]
  __int64 v79; // [rsp+190h] [rbp+88h]
  wchar_t *v80; // [rsp+198h] [rbp+90h]
  _DWORD v81[2]; // [rsp+1A0h] [rbp+98h] BYREF
  __int64 *v82; // [rsp+1A8h] [rbp+A0h]
  __int64 v83; // [rsp+1B0h] [rbp+A8h]
  UNICODE_STRING **v84; // [rsp+1B8h] [rbp+B0h]
  __int64 v85; // [rsp+1C0h] [rbp+B8h]
  _DWORD *v86; // [rsp+1C8h] [rbp+C0h]
  __int64 v87; // [rsp+1D0h] [rbp+C8h]
  __int64 v88; // [rsp+1D8h] [rbp+D0h]
  _DWORD v89[2]; // [rsp+1E0h] [rbp+D8h] BYREF
  __int64 *v90; // [rsp+1E8h] [rbp+E0h]
  __int64 v91; // [rsp+1F0h] [rbp+E8h]
  _QWORD v92[28]; // [rsp+1F8h] [rbp+F0h] BYREF

  v36 = 0;
  v40 = 0;
  LODWORD(v41) = 0;
  v38 = 0;
  v39 = 0;
  v35[0] = PopWnfCsEnterScenarioId;
  v49 = PopWnfCsEnterScenarioId;
  while ( 1 )
  {
    v0 = (char *)qword_140C1E9D0;
    if ( qword_140C1E9D0 == &qword_140C1E9D0 )
      break;
    if ( *((PVOID **)qword_140C1E9D0 + 1) != &qword_140C1E9D0
      || (v1 = *(_QWORD *)qword_140C1E9D0, *(PVOID *)(*(_QWORD *)qword_140C1E9D0 + 8LL) != qword_140C1E9D0) )
    {
      __fastfail(3u);
    }
    qword_140C1E9D0 = *(PVOID *)qword_140C1E9D0;
    v2 = 0;
    *(_QWORD *)(v1 + 8) = &qword_140C1E9D0;
    v3 = 0;
    v36 = 0;
    v4 = *((_DWORD *)v0 + 39);
    if ( v4 )
    {
      PopDirectedDripsDiagCreateBlockerEntryULong((__int64)v92, (__int64)L"DFX Transition Count", v4);
      v2 = v36 + 1;
      v36 = v2;
      v3 = v2;
    }
    v5 = *((_DWORD *)v0 + 40);
    if ( v5 )
    {
      PopDirectedDripsDiagCreateBlockerEntryULong((__int64)&v92[7 * v3], (__int64)L"PS4 Transition Count", v5);
      v2 = v36 + 1;
      v36 = v2;
      v3 = v2;
    }
    v6 = (int *)(v0 + 152);
    v7 = *((_DWORD *)v0 + 38);
    v8 = v7;
    if ( (_WORD)v7 )
    {
      PopDirectedDripsDiagCreateBlockerEntryBoolean((__int64)&v92[7 * v3], (__int64)L"Problem Device");
      v2 = v36 + 1;
      v36 = v2;
      v3 = v2;
      v7 = *v6;
      v8 = *v6;
    }
    if ( (v8 & 0x10000) != 0 )
    {
      PopDirectedDripsDiagCreateBlockerEntryBoolean((__int64)&v92[7 * v3], (__int64)L"Initiated PS4 Transition");
      v2 = ++v36;
      v7 = *v6;
      v8 = *v6;
    }
    if ( (v8 & 0x40000) != 0 )
    {
      v9 = &PopDirectedDripsDiagEmptyString;
      v10 = &PopDirectedDripsDiagEmptyString;
      if ( *((_QWORD *)v0 + 7) )
        v10 = (UNICODE_STRING *)(v0 + 48);
      v11 = 0;
      if ( *((_QWORD *)v0 + 9) )
      {
        v48 = (UNICODE_STRING *)(v0 + 64);
        v9 = &PopDirectedDripsDiagEmptyString;
      }
      else
      {
        v48 = &PopDirectedDripsDiagEmptyString;
      }
      v12 = &PopDirectedDripsDiagEmptyString;
      if ( *((_QWORD *)v0 + 11) )
        v12 = (UNICODE_STRING *)(v0 + 80);
      v13 = &PopDirectedDripsDiagEmptyString;
      if ( *((_QWORD *)v0 + 13) )
        v13 = (UNICODE_STRING *)(v0 + 96);
      if ( *((_QWORD *)v0 + 15) )
      {
        v42 = (UNICODE_STRING *)(v0 + 112);
        v9 = &PopDirectedDripsDiagEmptyString;
      }
      else
      {
        v42 = &PopDirectedDripsDiagEmptyString;
      }
      if ( *((_QWORD *)v0 + 17) )
        v9 = (UNICODE_STRING *)(v0 + 128);
      v43 = (__int64)v9;
      if ( (unsigned int)dword_140D2D900 > 5 && tlgKeywordOn((__int64)&dword_140D2D900, 0x400000000000LL) )
      {
        LOBYTE(v37) = v35[0];
        v53 = 1LL;
        v52 = &v37;
        v54 = v57;
        Buffer = v10->Buffer;
        v57[0] = v10->Length;
        v55 = 2LL;
        v57[1] = 0;
        v14 = (unsigned __int16 *)PopDirectedDripsDiagSanitizeHardwareId(v0 + 64);
        v59 = 2LL;
        v58 = v61;
        v61[1] = 0;
        v15 = *((_QWORD *)v14 + 1);
        v61[0] = *v14;
        v62 = v65;
        v64 = v12->Buffer;
        v65[0] = v12->Length;
        v66 = v69;
        v68 = v13->Buffer;
        v69[0] = v13->Length;
        v44 = *((_DWORD *)v0 + 37);
        v70 = &v44;
        v45 = *((_DWORD *)v0 + 39);
        v72 = &v45;
        v46 = *((_DWORD *)v0 + 40);
        v74 = &v46;
        v76 = &v47;
        v78 = v81;
        v60 = v15;
        v63 = 2LL;
        v65[1] = 0;
        v67 = 2LL;
        v80 = v42->Buffer;
        v81[0] = v42->Length;
        v50 = v49;
        v82 = &v50;
        LODWORD(v42) = *((_DWORD *)v0 + 6);
        v84 = &v42;
        v86 = v89;
        v69[1] = 0;
        v71 = 4LL;
        v73 = 4LL;
        v75 = 4LL;
        v47 = v7;
        v77 = 4LL;
        v79 = 2LL;
        v81[1] = 0;
        v83 = 8LL;
        v85 = 4LL;
        v87 = 2LL;
        v16 = (unsigned __int16 *)v43;
        v89[1] = 0;
        v43 = 0x1000000LL;
        v91 = 8LL;
        v88 = *((_QWORD *)v16 + 1);
        v89[0] = *v16;
        v90 = &v43;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140D2D900,
          (unsigned __int8 *)byte_140029E95,
          0LL,
          0LL,
          0x16u,
          &v51);
        v2 = v36;
        v11 = 0;
      }
      if ( PopDiagHandleRegistered != v11 )
      {
        v17 = PopDiagHandle;
        if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_DEVICE_STATS) )
        {
          PopDirectedDripsDiagEventData.Ptr = (ULONGLONG)v35;
          *(_QWORD *)&PopDirectedDripsDiagEventData.Size = 1LL;
          qword_140C1EC10 = (__int64)(v0 + 16);
          qword_140C1EC18 = 8LL;
          v38 = v10->Length >> 1;
          qword_140C1EC20 = (__int64)&v38;
          qword_140C1EC28 = 4LL;
          Length = v10->Length;
          qword_140C1EC30 = (__int64)v10->Buffer;
          dword_140C1EC38 = Length;
          dword_140C1EC3C = 0;
          v39 = v48->Length >> 1;
          qword_140C1EC40 = (__int64)&v39;
          qword_140C1EC48 = 4LL;
          v19 = v48->Length;
          qword_140C1EC50 = (__int64)v48->Buffer;
          dword_140C1EC58 = v19;
          dword_140C1EC5C = 0;
          v40 = v12->Length >> 1;
          qword_140C1EC60 = (__int64)&v40;
          qword_140C1EC68 = 4LL;
          v20 = v12->Length;
          qword_140C1EC70 = (__int64)v12->Buffer;
          dword_140C1EC78 = v20;
          dword_140C1EC7C = 0;
          LODWORD(v41) = v13->Length >> 1;
          qword_140C1EC80 = (__int64)&v41;
          qword_140C1EC88 = 4LL;
          v21 = v13->Length;
          qword_140C1EC90 = (__int64)v13->Buffer;
          qword_140C1ECA0 = (__int64)(v0 + 148);
          qword_140C1ECB0 = (__int64)(v0 + 156);
          qword_140C1ECD0 = (__int64)(v0 + 152);
          dword_140C1EC98 = v21;
          qword_140C1ECC0 = (__int64)(v0 + 160);
          dword_140C1EC9C = 0;
          qword_140C1ECA8 = 4LL;
          qword_140C1ECB8 = 4LL;
          qword_140C1ECC8 = 4LL;
          qword_140C1ECD8 = 4LL;
          EtwWrite(v17, &POP_ETW_EVENT_DIRECTED_DRIPS_DEVICE_STATS, 0LL, 0xEu, &PopDirectedDripsDiagEventData);
          v2 = v36;
        }
      }
    }
    if ( PopDiagSleepStudyHandleRegistered && v2 )
    {
      v22 = 0;
      v23 = v92;
      do
      {
        v24 = 5 * v22++;
        v25 = v23 + 2;
        v26 = 2LL * (unsigned int)(v24 + 2);
        v27 = 2LL * (unsigned int)(v24 + 3);
        *(&PopDirectedDripsDiagEventData.Ptr + v26) = (ULONGLONG)(v0 + 32);
        *((_QWORD *)&PopDirectedDripsDiagEventData.Size + v26) = 16LL;
        v28 = v23[1];
        *(&PopDirectedDripsDiagEventData.Ptr + v27) = (ULONGLONG)v23;
        *((_QWORD *)&PopDirectedDripsDiagEventData.Size + v27) = 4LL;
        v29 = 2LL * (unsigned int)(v24 + 4);
        *(&PopDirectedDripsDiagEventData.Ptr + v29) = v28;
        LODWORD(v28) = *(_DWORD *)v23;
        *(&PopDirectedDripsDiagEventData.Reserved + 2 * v29) = 0;
        *(&PopDirectedDripsDiagEventData.Size + 2 * v29) = 2 * v28;
        v30 = (ULONGLONG)v23 + 20;
        v23 += 7;
        v31 = 2LL * (unsigned int)(v24 + 5);
        *(&PopDirectedDripsDiagEventData.Ptr + v31) = (ULONGLONG)v25;
        *((_QWORD *)&PopDirectedDripsDiagEventData.Size + v31) = 4LL;
        v32 = 2LL * (unsigned int)(v24 + 6);
        *(&PopDirectedDripsDiagEventData.Ptr + v32) = v30;
        *((_QWORD *)&PopDirectedDripsDiagEventData.Size + v32) = (unsigned int)(2 * *v25);
      }
      while ( v22 < v2 );
      *(_QWORD *)&PopDirectedDripsDiagEventData.Size = 1LL;
      PopDirectedDripsDiagEventData.Ptr = (ULONGLONG)v35;
      v33 = 2LL * (unsigned int)(v24 + 7);
      qword_140C1EC18 = 4LL;
      qword_140C1EC10 = (__int64)&v36;
      *(&PopDirectedDripsDiagEventData.Ptr + v33) = (ULONGLONG)&v49;
      *((_QWORD *)&PopDirectedDripsDiagEventData.Size + v33) = 8LL;
      EtwWrite(
        PopDiagSleepStudyHandle,
        &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA,
        0LL,
        v2 + 4 * v2 + 3,
        &PopDirectedDripsDiagEventData);
    }
    v34 = *((_QWORD *)v0 + 2);
    if ( v34 )
    {
      *(_QWORD *)(v34 + 776) = 0LL;
      *((_QWORD *)v0 + 2) = 0LL;
    }
    PopDirectedDripsDiagFreeDeviceDiagnostic(v0);
  }
}
