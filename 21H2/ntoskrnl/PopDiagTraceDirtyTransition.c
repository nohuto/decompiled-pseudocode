/*
 * XREFs of PopDiagTraceDirtyTransition @ 0x140A94168
 * Callers:
 *     PopCheckShutdownMarker @ 0x140A3A2E4 (PopCheckShutdownMarker.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     PopReadRegKeyValue @ 0x1403CBAF8 (PopReadRegKeyValue.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceDirtyTransition(
        __int64 a1,
        int a2,
        int a3,
        char a4,
        char a5,
        char a6,
        int a7,
        char a8,
        char a9,
        char a10)
{
  BOOLEAN result; // al
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int64 v22; // rax
  __int128 *v23; // rcx
  char *v24; // rax
  __int64 v25; // rdx
  char v26; // [rsp+48h] [rbp-C0h] BYREF
  char v27; // [rsp+49h] [rbp-BFh] BYREF
  char v28; // [rsp+4Ah] [rbp-BEh] BYREF
  int v29; // [rsp+4Ch] [rbp-BCh] BYREF
  int v30; // [rsp+50h] [rbp-B8h] BYREF
  int v31; // [rsp+54h] [rbp-B4h] BYREF
  int v32; // [rsp+58h] [rbp-B0h] BYREF
  BOOL v33; // [rsp+60h] [rbp-A8h] BYREF
  BOOL v34; // [rsp+64h] [rbp-A4h] BYREF
  __int128 v35; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v36; // [rsp+78h] [rbp-90h]
  __int128 v37; // [rsp+88h] [rbp-80h]
  __int128 v38; // [rsp+98h] [rbp-70h] BYREF
  __int128 v39; // [rsp+A8h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B8h] [rbp-50h] BYREF
  char v41; // [rsp+D4h] [rbp-34h] BYREF
  int *v42; // [rsp+108h] [rbp+0h]
  __int64 v43; // [rsp+110h] [rbp+8h]
  char *v44; // [rsp+118h] [rbp+10h]
  __int64 v45; // [rsp+120h] [rbp+18h]
  int *v46; // [rsp+128h] [rbp+20h]
  __int64 v47; // [rsp+130h] [rbp+28h]
  char *v48; // [rsp+138h] [rbp+30h]
  __int64 v49; // [rsp+140h] [rbp+38h]
  BOOL *v50; // [rsp+148h] [rbp+40h]
  __int64 v51; // [rsp+150h] [rbp+48h]
  int *v52; // [rsp+158h] [rbp+50h]
  __int64 v53; // [rsp+160h] [rbp+58h]
  char *v54; // [rsp+168h] [rbp+60h]
  __int64 v55; // [rsp+170h] [rbp+68h]
  int *v56; // [rsp+178h] [rbp+70h]
  __int64 v57; // [rsp+180h] [rbp+78h]
  char *v58; // [rsp+188h] [rbp+80h]
  __int64 v59; // [rsp+190h] [rbp+88h]
  char *v60; // [rsp+198h] [rbp+90h]
  __int64 v61; // [rsp+1A0h] [rbp+98h]
  BOOL *v62; // [rsp+1A8h] [rbp+A0h]
  __int64 v63; // [rsp+1B0h] [rbp+A8h]
  _OWORD SourceString[9]; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v65; // [rsp+248h] [rbp+140h]
  int v66; // [rsp+250h] [rbp+148h]
  int v67; // [rsp+298h] [rbp+190h] BYREF

  v67 = a3;
  result = ExBootAppFailureStatus;
  v32 = ExBootAppFailureStatus;
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRTY_TRANSITION);
    if ( result )
    {
      v14 = *(_QWORD *)(a1 + 240);
      v29 = 0;
      v30 = 0;
      v33 = a4 != 0;
      v34 = a10 != 0;
      v26 = a8;
      v28 = a9;
      v38 = 0LL;
      v39 = 0LL;
      if ( !v14
        || (v15 = *(_QWORD *)(v14 + 280)) == 0
        || (v29 = *(_DWORD *)(v15 + 56), v38 = *(_OWORD *)(v15 + 64), v39 = *(_OWORD *)(v15 + 80), !v29) )
      {
        v16 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\LastCrashdump";
        v35 = 0LL;
        v36 = 0LL;
        v37 = 0LL;
        SourceString[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\LastCrashdump";
        v17 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\CrashControl\\LastCrashdump";
        SourceString[1] = v16;
        v18 = *(_OWORD *)L"\\CurrentControlSet\\Control\\CrashControl\\LastCrashdump";
        SourceString[2] = v17;
        v19 = *(_OWORD *)L"ControlSet\\Control\\CrashControl\\LastCrashdump";
        SourceString[3] = v18;
        v20 = *(_OWORD *)L"et\\Control\\CrashControl\\LastCrashdump";
        SourceString[4] = v19;
        v21 = *(_OWORD *)L"ol\\CrashControl\\LastCrashdump";
        SourceString[5] = v20;
        SourceString[6] = v21;
        SourceString[7] = *(_OWORD *)L"Control\\LastCrashdump";
        v22 = *(_QWORD *)L"hdump";
        SourceString[8] = *(_OWORD *)L"LastCrashdump";
        v65 = v22;
        v66 = *(_DWORD *)L"p";
        if ( (int)PopReadRegKeyValue((PCWSTR)SourceString, L"Info", 0x30uLL, 0, &v35) >= 0 )
        {
          v29 = DWORD2(v35);
          *(_QWORD *)&v38 = v36;
          v30 = 1;
        }
      }
      v31 = a2;
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&v29;
      v23 = &v38;
      v24 = &v41;
      v25 = 4LL;
      do
      {
        *(_QWORD *)(v24 - 12) = v23;
        v23 = (__int128 *)((char *)v23 + 8);
        *(_QWORD *)(v24 - 4) = 8LL;
        v24 += 16;
        --v25;
      }
      while ( v25 );
      v42 = &v31;
      v43 = 4LL;
      v44 = &a6;
      v46 = &v32;
      v48 = &v26;
      v50 = &v33;
      v52 = &v67;
      v27 = a5;
      v54 = &v27;
      v56 = &v30;
      v58 = &v28;
      v60 = &a5;
      v62 = &v34;
      v45 = 8LL;
      v47 = 4LL;
      v51 = 4LL;
      v53 = 4LL;
      v57 = 4LL;
      v61 = 8LL;
      v63 = 4LL;
      v49 = 1LL;
      v55 = 1LL;
      v59 = 1LL;
      return EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_DIRTY_TRANSITION, 0LL, 0, 0LL, 0LL, 0x10u, &UserData);
    }
  }
  return result;
}
