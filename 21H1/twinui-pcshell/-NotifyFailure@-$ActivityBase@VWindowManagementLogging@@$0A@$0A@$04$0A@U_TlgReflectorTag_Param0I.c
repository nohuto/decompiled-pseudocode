/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180057210
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180057710 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x180113D80 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        __int64 a1,
        int *a2)
{
  __int64 v3; // rsi
  RTL_SRWLOCK *v4; // rdi
  PSRWLOCK *p_SRWLock; // rax
  char v6; // bl
  RTL_SRWLOCK *v7; // rdi
  _DWORD *v8; // rcx
  int v9; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  int v15; // r10d
  int v16; // r11d
  const wchar_t *v17; // rbx
  const WCHAR *v18; // rdi
  const wchar_t *v19; // rsi
  const WCHAR *v20; // r14
  const wchar_t *v21; // r15
  const wchar_t *v22; // r8
  const WCHAR *v23; // r9
  const wchar_t *v24; // r10
  const wchar_t *v25; // r13
  __int64 v26; // r11
  __int64 v27; // rdx
  __int64 v28; // rax
  int v29; // ecx
  __int64 v30; // rax
  int v31; // ecx
  __int64 v32; // rax
  int v33; // ecx
  __int64 v34; // rax
  int v35; // ecx
  __int64 v36; // rax
  int v37; // ecx
  __int64 v38; // rax
  int v39; // ecx
  __int64 v40; // rax
  int v41; // ecx
  __int64 v42; // rax
  int v43; // ecx
  int v44; // eax
  __int64 v45; // rcx
  void (*v46)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v47; // [rsp+38h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+3Ch] [rbp-CCh] BYREF
  int v49; // [rsp+40h] [rbp-C8h] BYREF
  int v50; // [rsp+44h] [rbp-C4h] BYREF
  int v51; // [rsp+48h] [rbp-C0h] BYREF
  int v52; // [rsp+4Ch] [rbp-BCh] BYREF
  int v53; // [rsp+50h] [rbp-B8h] BYREF
  int v54; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v55; // [rsp+58h] [rbp-B0h] BYREF
  LPVOID Context; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v57; // [rsp+68h] [rbp-A0h]
  __int64 v58; // [rsp+70h] [rbp-98h]
  __int64 v59; // [rsp+78h] [rbp-90h] BYREF
  PSRWLOCK v60; // [rsp+80h] [rbp-88h] BYREF
  PSRWLOCK SRWLock; // [rsp+88h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+90h] [rbp-78h] BYREF
  __int64 v63; // [rsp+A0h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-60h] BYREF
  void *v65; // [rsp+B8h] [rbp-50h]
  int v66; // [rsp+C0h] [rbp-48h]
  int v67; // [rsp+C4h] [rbp-44h]
  __int64 *v68; // [rsp+C8h] [rbp-40h]
  __int64 v69; // [rsp+D0h] [rbp-38h]
  int *v70; // [rsp+D8h] [rbp-30h]
  __int64 v71; // [rsp+E0h] [rbp-28h]
  const wchar_t *v72; // [rsp+E8h] [rbp-20h]
  int v73; // [rsp+F0h] [rbp-18h]
  int v74; // [rsp+F4h] [rbp-14h]
  __int64 *v75; // [rsp+F8h] [rbp-10h]
  __int64 v76; // [rsp+100h] [rbp-8h]
  const wchar_t *v77; // [rsp+108h] [rbp+0h]
  int v78; // [rsp+110h] [rbp+8h]
  int v79; // [rsp+114h] [rbp+Ch]
  int *v80; // [rsp+118h] [rbp+10h]
  __int64 v81; // [rsp+120h] [rbp+18h]
  const WCHAR *v82; // [rsp+128h] [rbp+20h]
  int v83; // [rsp+130h] [rbp+28h]
  int v84; // [rsp+134h] [rbp+2Ch]
  int *v85; // [rsp+138h] [rbp+30h]
  __int64 v86; // [rsp+140h] [rbp+38h]
  const wchar_t *v87; // [rsp+148h] [rbp+40h]
  int v88; // [rsp+150h] [rbp+48h]
  int v89; // [rsp+154h] [rbp+4Ch]
  int *v90; // [rsp+158h] [rbp+50h]
  __int64 v91; // [rsp+160h] [rbp+58h]
  const wchar_t *v92; // [rsp+168h] [rbp+60h]
  int v93; // [rsp+170h] [rbp+68h]
  int v94; // [rsp+174h] [rbp+6Ch]
  const WCHAR *v95; // [rsp+178h] [rbp+70h]
  int v96; // [rsp+180h] [rbp+78h]
  int v97; // [rsp+184h] [rbp+7Ch]
  int *v98; // [rsp+188h] [rbp+80h]
  __int64 v99; // [rsp+190h] [rbp+88h]
  const wchar_t *v100; // [rsp+198h] [rbp+90h]
  int v101; // [rsp+1A0h] [rbp+98h]
  int v102; // [rsp+1A4h] [rbp+9Ch]
  const WCHAR *v103; // [rsp+1A8h] [rbp+A0h]
  int v104; // [rsp+1B0h] [rbp+A8h]
  int v105; // [rsp+1B4h] [rbp+ACh]
  int *v106; // [rsp+1B8h] [rbp+B0h]
  __int64 v107; // [rsp+1C0h] [rbp+B8h]
  int *v108; // [rsp+1C8h] [rbp+C0h]
  __int64 v109; // [rsp+1D0h] [rbp+C8h]
  const wchar_t *v110; // [rsp+1D8h] [rbp+D0h]
  int v111; // [rsp+1E0h] [rbp+D8h]
  int v112; // [rsp+1E4h] [rbp+DCh]

  v63 = -2LL;
  v3 = a1;
  v58 = a1;
  v47 = 0;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18059FF68;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_18059FF68);
    qword_18059FF68 = &ImmersiveIconsLogging::`vftable';
    qword_18059FF80 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18059FF68, qword_18059FF80, v46);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18059FF68);
  }
  v57 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v57 > 2u )
  {
    v11 = a2[2];
    v12 = a2[24];
    v13 = a2[18];
    v14 = a2[6];
    v15 = *a2;
    v16 = a2[1];
    v17 = (const wchar_t *)*((_QWORD *)a2 + 5);
    v49 = a2[15];
    v50 = v11;
    v18 = (const WCHAR *)*((_QWORD *)a2 + 14);
    v19 = (const wchar_t *)*((_QWORD *)a2 + 13);
    v51 = v12;
    v20 = (const WCHAR *)*((_QWORD *)a2 + 11);
    v21 = (const wchar_t *)*((_QWORD *)a2 + 10);
    v52 = v13;
    v22 = (const wchar_t *)*((_QWORD *)a2 + 8);
    v53 = v14;
    v23 = (const WCHAR *)*((_QWORD *)a2 + 2);
    v54 = v15;
    v24 = (const wchar_t *)*((_QWORD *)a2 + 15);
    LODWORD(v55) = a2[14];
    v25 = (const wchar_t *)*((_QWORD *)a2 + 6);
    v47 = v16;
    v59 = 0x1000000LL;
    v26 = *(_QWORD *)(v58 + 48);
    v27 = -1LL;
    if ( v17 )
    {
      v28 = -1LL;
      do
        ++v28;
      while ( *((_BYTE *)v17 + v28) );
      v29 = v28 + 1;
    }
    else
    {
      v17 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v29 = 1;
    }
    v110 = v17;
    v111 = v29;
    v112 = 0;
    v108 = &v49;
    v109 = 4LL;
    v106 = &v50;
    v107 = 4LL;
    if ( v18 )
    {
      v30 = -1LL;
      do
        ++v30;
      while ( v18[v30] );
      v31 = 2 * v30 + 2;
    }
    else
    {
      v18 = &word_1804BE2A8;
      v31 = 2;
    }
    v103 = v18;
    v104 = v31;
    v105 = 0;
    if ( v19 )
    {
      v32 = -1LL;
      do
        ++v32;
      while ( *((_BYTE *)v19 + v32) );
      v33 = v32 + 1;
    }
    else
    {
      v19 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v33 = 1;
    }
    v100 = v19;
    v101 = v33;
    v102 = 0;
    v98 = &v51;
    v99 = 4LL;
    if ( v20 )
    {
      v34 = -1LL;
      do
        ++v34;
      while ( v20[v34] );
      v35 = 2 * v34 + 2;
    }
    else
    {
      v20 = &word_1804BE2A8;
      v35 = 2;
    }
    v95 = v20;
    v96 = v35;
    v97 = 0;
    if ( v21 )
    {
      v36 = -1LL;
      do
        ++v36;
      while ( *((_BYTE *)v21 + v36) );
      v37 = v36 + 1;
    }
    else
    {
      v21 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v37 = 1;
    }
    v92 = v21;
    v93 = v37;
    v94 = 0;
    v90 = &v52;
    v91 = 4LL;
    if ( v22 )
    {
      v38 = -1LL;
      do
        ++v38;
      while ( *((_BYTE *)v22 + v38) );
      v39 = v38 + 1;
    }
    else
    {
      v22 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v39 = 1;
    }
    v87 = v22;
    v88 = v39;
    v89 = 0;
    v85 = &v53;
    v86 = 4LL;
    if ( v23 )
    {
      v40 = -1LL;
      do
        ++v40;
      while ( v23[v40] );
      v41 = 2 * v40 + 2;
    }
    else
    {
      v23 = &word_1804BE2A8;
      v41 = 2;
    }
    v82 = v23;
    v83 = v41;
    v84 = 0;
    v80 = &v54;
    v81 = 4LL;
    if ( v24 )
    {
      v42 = -1LL;
      do
        ++v42;
      while ( *((_BYTE *)v24 + v42) );
      v43 = v42 + 1;
    }
    else
    {
      v24 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v43 = 1;
    }
    v77 = v24;
    v78 = v43;
    v79 = 0;
    v75 = &v55;
    v76 = 4LL;
    if ( v25 )
    {
      do
        ++v27;
      while ( *((_BYTE *)v25 + v27) );
      v44 = v27 + 1;
    }
    else
    {
      v25 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
      v44 = 1;
    }
    v72 = v25;
    v73 = v44;
    v74 = 0;
    v70 = &v47;
    v71 = 4LL;
    v68 = &v59;
    v69 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 2;
    EventDescriptor.Keyword = 0LL;
    v45 = v57;
    UserData.Ptr = *(_QWORD *)(v57 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v65 = &unk_1804D166D;
    v66 = 300;
    v67 = 1;
    LODWORD(v57) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v45 + 32), &EventDescriptor, (LPCGUID)(v26 + 8), 0LL, 0x14u, &UserData);
    v3 = v58;
  }
  v4 = *(RTL_SRWLOCK **)(v3 + 304);
  if ( v4 )
  {
    v7 = v4 + 31;
    AcquireSRWLockExclusive(v7);
    p_SRWLock = &SRWLock;
    v6 = 1;
  }
  else
  {
    p_SRWLock = &v60;
    v6 = 2;
    v7 = 0LL;
  }
  *p_SRWLock = 0LL;
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    if ( v60 )
      ReleaseSRWLockExclusive(v60);
  }
  if ( (v6 & 1) != 0 && SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v8 = *(_DWORD **)(v3 + 48);
  v9 = a2[1];
  if ( v9 != v8[21] && (v9 != v8[19] || (int)v8[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v8 + 20), (const struct wil::FailureInfo *)a2);
  if ( v7 )
    ReleaseSRWLockExclusive(v7);
  return 1;
}
