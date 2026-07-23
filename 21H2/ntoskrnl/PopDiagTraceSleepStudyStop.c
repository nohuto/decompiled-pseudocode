/*
 * XREFs of PopDiagTraceSleepStudyStop @ 0x1408EB530
 * Callers:
 *     PopSleepstudyScenarioStopWorker @ 0x1408FA490 (PopSleepstudyScenarioStopWorker.c)
 * Callees:
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void PopDiagTraceSleepStudyStop()
{
  REGHANDLE v0; // rbx
  int v1; // [rsp+30h] [rbp-D0h] BYREF
  int v2; // [rsp+34h] [rbp-CCh] BYREF
  int v3; // [rsp+38h] [rbp-C8h] BYREF
  int v4; // [rsp+3Ch] [rbp-C4h] BYREF
  int v5; // [rsp+40h] [rbp-C0h] BYREF
  int v6; // [rsp+44h] [rbp-BCh] BYREF
  int v7; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  void *v9; // [rsp+60h] [rbp-A0h]
  __int64 v10; // [rsp+68h] [rbp-98h]
  int *v11; // [rsp+70h] [rbp-90h]
  __int64 v12; // [rsp+78h] [rbp-88h]
  void *v13; // [rsp+80h] [rbp-80h]
  __int64 v14; // [rsp+88h] [rbp-78h]
  void *v15; // [rsp+90h] [rbp-70h]
  __int64 v16; // [rsp+98h] [rbp-68h]
  void *v17; // [rsp+A0h] [rbp-60h]
  __int64 v18; // [rsp+A8h] [rbp-58h]
  void *v19; // [rsp+B0h] [rbp-50h]
  __int64 v20; // [rsp+B8h] [rbp-48h]
  void *v21; // [rsp+C0h] [rbp-40h]
  __int64 v22; // [rsp+C8h] [rbp-38h]
  void *v23; // [rsp+D0h] [rbp-30h]
  __int64 v24; // [rsp+D8h] [rbp-28h]
  void *v25; // [rsp+E0h] [rbp-20h]
  __int64 v26; // [rsp+E8h] [rbp-18h]
  void *v27; // [rsp+F0h] [rbp-10h]
  __int64 v28; // [rsp+F8h] [rbp-8h]
  void *v29; // [rsp+100h] [rbp+0h]
  __int64 v30; // [rsp+108h] [rbp+8h]
  void *v31; // [rsp+110h] [rbp+10h]
  __int64 v32; // [rsp+118h] [rbp+18h]
  int *v33; // [rsp+120h] [rbp+20h]
  __int64 v34; // [rsp+128h] [rbp+28h]
  int *v35; // [rsp+130h] [rbp+30h]
  __int64 v36; // [rsp+138h] [rbp+38h]
  void *v37; // [rsp+140h] [rbp+40h]
  __int64 v38; // [rsp+148h] [rbp+48h]
  int *v39; // [rsp+150h] [rbp+50h]
  __int64 v40; // [rsp+158h] [rbp+58h]
  void *v41; // [rsp+160h] [rbp+60h]
  __int64 v42; // [rsp+168h] [rbp+68h]
  void *v43; // [rsp+170h] [rbp+70h]
  __int64 v44; // [rsp+178h] [rbp+78h]
  void *v45; // [rsp+180h] [rbp+80h]
  __int64 v46; // [rsp+188h] [rbp+88h]
  void *v47; // [rsp+190h] [rbp+90h]
  __int64 v48; // [rsp+198h] [rbp+98h]
  void *v49; // [rsp+1A0h] [rbp+A0h]
  __int64 v50; // [rsp+1A8h] [rbp+A8h]
  void *v51; // [rsp+1B0h] [rbp+B0h]
  __int64 v52; // [rsp+1B8h] [rbp+B8h]
  void *v53; // [rsp+1C0h] [rbp+C0h]
  __int64 v54; // [rsp+1C8h] [rbp+C8h]
  void *v55; // [rsp+1D0h] [rbp+D0h]
  __int64 v56; // [rsp+1D8h] [rbp+D8h]
  int *v57; // [rsp+1E0h] [rbp+E0h]
  __int64 v58; // [rsp+1E8h] [rbp+E8h]
  void *v59; // [rsp+1F0h] [rbp+F0h]
  __int64 v60; // [rsp+1F8h] [rbp+F8h]
  void *v61; // [rsp+200h] [rbp+100h]
  __int64 v62; // [rsp+208h] [rbp+108h]
  int *v63; // [rsp+210h] [rbp+110h]
  __int64 v64; // [rsp+218h] [rbp+118h]
  int *v65; // [rsp+220h] [rbp+120h]
  __int64 v66; // [rsp+228h] [rbp+128h]

  if ( PopDiagHandleRegistered )
  {
    v0 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SPM_SCENARIO_STOP) )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      v1 = byte_140C22CBC & 1;
      v10 = 8LL;
      v3 = byte_140C22CBD & 1;
      v2 = ((unsigned __int8)byte_140C22CBD >> 1) & 1;
      v7 = (unsigned __int8)byte_140C22D0D;
      v5 = (unsigned __int8)byte_140C22D0C;
      v6 = (unsigned __int8)byte_140C22CEC;
      UserData.Ptr = (ULONGLONG)&PopWdiScenarioStopEventData;
      v9 = &unk_140C22C68;
      v11 = &v1;
      v13 = &unk_140C22CC0;
      v15 = &unk_140C22CC8;
      v17 = &unk_140C22CD0;
      v19 = &unk_140C22C60;
      v21 = &unk_140C22C5C;
      v23 = &unk_140C22CA0;
      v25 = &unk_140C22CE0;
      v27 = &unk_140C22C58;
      v29 = &unk_140C22C98;
      v31 = &unk_140C22CB8;
      v33 = &v2;
      v35 = &v3;
      v37 = &unk_140C22CA8;
      v39 = &v4;
      v41 = &unk_140C22CE4;
      v43 = &unk_140C22CE8;
      v45 = &unk_140C22CF0;
      v4 = ((unsigned __int8)byte_140C22CBD >> 2) & 1;
      v12 = 4LL;
      v14 = 8LL;
      v16 = 8LL;
      v18 = 8LL;
      v20 = 8LL;
      v22 = 4LL;
      v24 = 8LL;
      v26 = 1LL;
      v28 = 4LL;
      v30 = 8LL;
      v32 = 4LL;
      v34 = 4LL;
      v36 = 4LL;
      v38 = 8LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 4LL;
      v47 = &unk_140C22CF4;
      v50 = 4LL;
      v49 = &unk_140C22CF8;
      v52 = 4LL;
      v51 = &unk_140C22C48;
      v54 = 8LL;
      v53 = &unk_140C22C50;
      v56 = 4LL;
      v55 = &unk_140C22D08;
      v57 = &v5;
      v59 = &unk_140C22D10;
      v61 = &unk_140C22D14;
      v63 = &v6;
      v65 = &v7;
      v58 = 4LL;
      v60 = 4LL;
      v62 = 4LL;
      v64 = 4LL;
      v66 = 4LL;
      EtwWrite(v0, &POP_ETW_EVENT_SPM_SCENARIO_STOP, &PopDiagActivityId, 0x1Eu, &UserData);
    }
  }
}
