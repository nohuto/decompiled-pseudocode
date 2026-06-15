/*
 * XREFs of ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_tlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x18002D9A0
 * Callers:
 *     ?GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z @ 0x180002CA4 (-GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x18002D620 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?CapturePolicyVolumeState@CAudioStream@@QEAAXXZ @ 0x1800D2704 (-CapturePolicyVolumeState@CAudioStream@@QEAAXXZ.c)
 * Callees:
 *     ??9?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@std@@QEBA_NU_Default_sentinel@1@@Z @ 0x18002E398 (--9-$_Flist_unchecked_const_iterator@V-$_Flist_val@U-$_Flist_simple_types@V-$com_ptr_t@VCPBMStre.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006DF3C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     _tlgKeywordOn @ 0x1800B7ADC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@55555555555@Z @ 0x180115BD4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3.c)
 */

// Hidden C++ exception states: #wind=2
ULONG __fastcall GetPolicyVolumeForAudioStream(__int64 a1, __int64 a2, __int64 a3, float *a4, __int64 *a5, int a6)
{
  struct IAudioPolicyManager *v9; // r15
  float v10; // xmm6_4
  int v11; // eax
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  __int64 *v17; // rdi
  __int64 v18; // rbx
  unsigned int v19; // eax
  float v20; // xmm0_4
  __int64 v21; // rdi
  unsigned int v22; // ebx
  __int64 v23; // rax
  float v24; // xmm0_4
  __int64 v25; // rbx
  unsigned int v26; // eax
  __int64 *v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rax
  float v30; // xmm0_4
  __int64 v31; // rbx
  unsigned int v32; // eax
  __int64 *v33; // rbx
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rcx
  float v37; // xmm6_4
  float v38; // xmm0_4
  ULONG result; // eax
  float v40; // xmm0_4
  int v41; // ebx
  __int64 v42; // rsi
  __int64 *v43; // rdi
  _WORD *v44; // rbx
  _WORD *v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rcx
  int v48; // r8d
  int v49; // ecx
  int v50; // ebx
  __int64 v51; // rsi
  __int64 *v52; // rdi
  int UserDataCount; // [rsp+28h] [rbp-100h]
  __int64 *v54; // [rsp+A8h] [rbp-80h] BYREF
  int v55; // [rsp+B0h] [rbp-78h]
  __int64 v56; // [rsp+B4h] [rbp-74h]
  int v57; // [rsp+BCh] [rbp-6Ch]
  int v58; // [rsp+C0h] [rbp-68h]
  int v59; // [rsp+C4h] [rbp-64h]
  float v60; // [rsp+C8h] [rbp-60h] BYREF
  int v61; // [rsp+CCh] [rbp-5Ch]
  float v62; // [rsp+D0h] [rbp-58h]
  __int64 v63; // [rsp+D8h] [rbp-50h] BYREF
  __int64 v64; // [rsp+E0h] [rbp-48h] BYREF
  __int64 v65; // [rsp+E8h] [rbp-40h] BYREF
  unsigned int v66; // [rsp+F0h] [rbp-38h] BYREF
  int v67; // [rsp+F4h] [rbp-34h] BYREF
  int v68; // [rsp+F8h] [rbp-30h] BYREF
  float v69; // [rsp+FCh] [rbp-2Ch] BYREF
  int v70; // [rsp+100h] [rbp-28h] BYREF
  int v71; // [rsp+104h] [rbp-24h] BYREF
  float v72; // [rsp+108h] [rbp-20h] BYREF
  int v73; // [rsp+10Ch] [rbp-1Ch] BYREF
  int v74; // [rsp+110h] [rbp-18h] BYREF
  int v75; // [rsp+114h] [rbp-14h] BYREF
  int v76; // [rsp+118h] [rbp-10h] BYREF
  int v77; // [rsp+11Ch] [rbp-Ch] BYREF
  __int64 v78; // [rsp+120h] [rbp-8h] BYREF
  int v79; // [rsp+128h] [rbp+0h] BYREF
  float v80; // [rsp+12Ch] [rbp+4h] BYREF
  int v81; // [rsp+130h] [rbp+8h] BYREF
  int v82; // [rsp+134h] [rbp+Ch] BYREF
  int v83; // [rsp+138h] [rbp+10h] BYREF
  int v84; // [rsp+13Ch] [rbp+14h] BYREF
  int v85; // [rsp+140h] [rbp+18h] BYREF
  int v86; // [rsp+144h] [rbp+1Ch] BYREF
  int v87; // [rsp+148h] [rbp+20h] BYREF
  _DWORD v88[3]; // [rsp+14Ch] [rbp+24h] BYREF
  __int64 v89; // [rsp+158h] [rbp+30h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+160h] [rbp+38h] BYREF
  char v91[4]; // [rsp+170h] [rbp+48h] BYREF
  float v92; // [rsp+174h] [rbp+4Ch]
  char v93; // [rsp+178h] [rbp+50h]
  float v94; // [rsp+17Ch] [rbp+54h]
  __int64 v95; // [rsp+180h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+188h] [rbp+60h] BYREF
  void *v97; // [rsp+198h] [rbp+70h]
  int v98; // [rsp+1A0h] [rbp+78h]
  int v99; // [rsp+1A4h] [rbp+7Ch]
  _DWORD *v100; // [rsp+1A8h] [rbp+80h]
  __int64 v101; // [rsp+1B0h] [rbp+88h]
  _WORD *v102; // [rsp+1B8h] [rbp+90h]
  int v103; // [rsp+1C0h] [rbp+98h]
  int v104; // [rsp+1C4h] [rbp+9Ch]
  _WORD *v105; // [rsp+1C8h] [rbp+A0h]
  int v106; // [rsp+1D0h] [rbp+A8h]
  int v107; // [rsp+1D4h] [rbp+ACh]
  int *v108; // [rsp+1D8h] [rbp+B0h]
  __int64 v109; // [rsp+1E0h] [rbp+B8h]
  int *v110; // [rsp+1E8h] [rbp+C0h]
  __int64 v111; // [rsp+1F0h] [rbp+C8h]
  int *v112; // [rsp+1F8h] [rbp+D0h]
  __int64 v113; // [rsp+200h] [rbp+D8h]
  float *v114; // [rsp+208h] [rbp+E0h]
  __int64 v115; // [rsp+210h] [rbp+E8h]
  int *v116; // [rsp+218h] [rbp+F0h]
  __int64 v117; // [rsp+220h] [rbp+F8h]
  int *v118; // [rsp+228h] [rbp+100h]
  __int64 v119; // [rsp+230h] [rbp+108h]
  float *v120; // [rsp+238h] [rbp+110h]
  __int64 v121; // [rsp+240h] [rbp+118h]
  int *v122; // [rsp+248h] [rbp+120h]
  __int64 v123; // [rsp+250h] [rbp+128h]
  int *v124; // [rsp+258h] [rbp+130h]
  __int64 v125; // [rsp+260h] [rbp+138h]
  int *v126; // [rsp+268h] [rbp+140h]
  __int64 v127; // [rsp+270h] [rbp+148h]
  int *v128; // [rsp+278h] [rbp+150h]
  __int64 v129; // [rsp+280h] [rbp+158h]
  int *v130; // [rsp+288h] [rbp+160h]
  __int64 v131; // [rsp+290h] [rbp+168h]
  wil::details::in1diag3 *retaddr; // [rsp+310h] [rbp+1E8h]

  v9 = g_PolicyManager;
  LODWORD(v65) = 1065353216;
  v61 = 1065353216;
  v59 = 1065353216;
  v10 = FLOAT_1_0;
  v56 = LODWORD(FLOAT_1_0) | 0x3F80000000000000LL;
  v58 = 1065353216;
  v57 = 1065353216;
  v60 = 1.0;
  v62 = 1.0;
  v55 = 1065353216;
  *a4 = 1.0;
  v54 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)a2 + 24LL))(a2, &v54);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x20,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\policyvolumehelpers\\policyvolumehelpers.cpp",
      (const char *)(unsigned int)v11,
      UserDataCount);
  v63 = 0LL;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, &v63);
  if ( (*(unsigned int (__fastcall **)(__int64 *))(*v54 + 120))(v54) )
    v12 = 0.0;
  else
    v12 = FLOAT_1_0;
  *(float *)&v64 = v12;
  v13 = v12 * *a4;
  *a4 = v13;
  if ( v13 > 0.0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2) != 2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2) )
      v14 = FLOAT_1_0;
    else
      v14 = (*(float (__fastcall **)(__int64 *))(*v54 + 200))(v54);
    v61 = LODWORD(v14);
    *a4 = v14 * *a4;
    if ( (unsigned __int8)std::_Flist_unchecked_const_iterator<std::_Flist_val<std::_Flist_simple_types<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>>,std::_Iterator_base0>::operator!=(&v63)
      && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2)
      && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2) )
    {
      (*(void (__fastcall **)(__int64, float *, __int64 *))(*(_QWORD *)v63 + 88LL))(v63, &v60, a5);
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2)
      && (*(unsigned int (__fastcall **)(__int64 *))(*v54 + 464))(v54)
      || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2)
      && (*(unsigned int (__fastcall **)(__int64 *))(*v54 + 472))(v54) )
    {
      *a4 = *a4 * 0.0;
    }
  }
  if ( *a4 > 0.0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) != 21 )
  {
    v15 = (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)v9 + 280LL))(v9)
       && dword_1801741F0[(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2)]
        ? 0.0
        : FLOAT_1_0;
    v59 = LODWORD(v15);
    v16 = v15 * *a4;
    *a4 = v16;
    v17 = v54;
    v18 = *(_QWORD *)v9;
    v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
    if ( (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, __int64 *, _QWORD))(v18 + 72))(v9, v17, v19) )
      (*(void (__fastcall **)(__int64 *))(*v54 + 208))(v54);
    else
      v16 = FLOAT_1_0;
    v58 = LODWORD(v16);
    *a4 = v16 * *a4;
    LODWORD(v65) = (*(float (__fastcall **)(struct IAudioPolicyManager *, __int64))(*(_QWORD *)v9 + 288LL))(v9, a2);
    v20 = *(float *)&v65 * *a4;
    *a4 = v20;
    if ( v20 > 0.0 )
    {
      if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2) )
      {
        v21 = *(_QWORD *)v9;
        v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
        v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
        v62 = (*(float (__fastcall **)(struct IAudioPolicyManager *, __int64, _QWORD))(v21 + 360))(v9, v23, v22);
        v24 = v62 * *a4;
        *a4 = v24;
        v25 = *(_QWORD *)v9;
        v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
        if ( (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(v25 + 80))(v9, v26) )
        {
          v24 = FLOAT_1_0;
        }
        else
        {
          v27 = v54;
          v28 = *v54;
          v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
          (*(void (__fastcall **)(__int64 *, __int64))(v28 + 216))(v27, v29);
        }
        v57 = LODWORD(v24);
        v30 = v24 * *a4;
        *a4 = v30;
        v31 = *(_QWORD *)v9;
        v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
        if ( (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(v31 + 96))(v9, v32) )
        {
          v33 = v54;
          v34 = *v54;
          v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
          (*(void (__fastcall **)(__int64 *, __int64))(v34 + 224))(v33, v35);
        }
        else
        {
          v30 = FLOAT_1_0;
        }
        *((float *)&v56 + 1) = v30;
        *a4 = v30 * *a4;
        (*(void (__fastcall **)(struct IAudioPolicyManager *, __int64, char *))(*(_QWORD *)v9 + 64LL))(v9, a2, v91);
        if ( ((*(unsigned int (__fastcall **)(__int64 *))(*v54 + 88))(v54)
           || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2))
          && ((*(unsigned int (__fastcall **)(__int64 *))(*v54 + 184))(v54)
           || (unsigned __int8)std::_Flist_unchecked_const_iterator<std::_Flist_val<std::_Flist_simple_types<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>>,std::_Iterator_base0>::operator!=(&v63)
           && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v63 + 128LL))(v63)) )
        {
          v10 = v91[0] ? 0.0 : v92;
          *(float *)&v56 = v10;
          if ( a5 )
          {
            v36 = v95;
            if ( *a5 > v95 )
              v36 = *a5;
            *a5 = v36;
          }
        }
        v37 = fminf(v10, v60) * *a4;
        if ( v93 )
          v38 = 0.0;
        else
          v38 = v94;
        v55 = LODWORD(v38);
        *a4 = v37 * v38;
      }
    }
  }
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
  if ( (_BYTE)result )
  {
    v40 = *a4;
    if ( *a4 != 0.0 )
      v40 = FLOAT_1_0;
    *a4 = v40;
  }
  if ( a3 )
  {
    result = *(_DWORD *)a3;
    if ( a6 == 2 )
    {
      if ( result > 4 )
      {
        result = tlgKeywordOn(a3, 3LL);
        if ( (_BYTE)result )
        {
          v50 = (*(__int64 (__fastcall **)(__int64 *))(*v54 + 40))(v54);
          v51 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 80LL))(a2);
          v52 = v54;
          v76 = v50;
          v77 = v55;
          v78 = v56;
          v79 = v57;
          v80 = v62;
          v81 = v58;
          v82 = v59;
          *(float *)v88 = v60;
          v84 = v61;
          v85 = v64;
          v66 = v65;
          v65 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
          v64 = (*(__int64 (__fastcall **)(__int64 *))(*v52 + 72))(v52);
          v89 = v51;
          result = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     a3,
                     (int)&dword_18016ABA9,
                     (__int64)&v89,
                     (__int64)&v64,
                     (__int64)&v65,
                     (__int64)&v66,
                     (__int64)&v85,
                     (__int64)&v84,
                     (__int64)v88,
                     (__int64)&v82,
                     (__int64)&v81,
                     (__int64)&v80,
                     (__int64)&v79,
                     (__int64)&v78 + 4,
                     (__int64)&v78,
                     (__int64)&v77,
                     (__int64)&v76);
        }
      }
    }
    else if ( result > 4 )
    {
      v41 = (*(__int64 (__fastcall **)(__int64 *))(*v54 + 40))(v54);
      v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 80LL))(a2);
      v43 = v54;
      v83 = v41;
      v86 = v55;
      v67 = HIDWORD(v56);
      v87 = v56;
      v68 = v57;
      v69 = v62;
      v70 = v58;
      v71 = v59;
      v72 = v60;
      v73 = v61;
      v74 = v64;
      v75 = v65;
      v44 = (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
      v45 = (_WORD *)(*(__int64 (__fastcall **)(__int64 *))(*v43 + 72))(v43);
      *(_QWORD *)&v88[1] = v42;
      v130 = &v83;
      v131 = 4LL;
      v128 = &v86;
      v129 = 4LL;
      v126 = &v87;
      v127 = 4LL;
      v124 = &v67;
      v125 = 4LL;
      v122 = &v68;
      v123 = 4LL;
      v120 = &v69;
      v121 = 4LL;
      v118 = &v70;
      v119 = 4LL;
      v116 = &v71;
      v117 = 4LL;
      v114 = &v72;
      v115 = 4LL;
      v112 = &v73;
      v113 = 4LL;
      v110 = &v74;
      v111 = 4LL;
      v108 = &v75;
      v109 = 4LL;
      v46 = -1LL;
      if ( v44 )
      {
        v47 = -1LL;
        do
          ++v47;
        while ( v44[v47] );
        v48 = 2 * v47 + 2;
      }
      else
      {
        v44 = &unk_18015D734;
        v48 = 2;
      }
      v105 = v44;
      v106 = v48;
      v107 = 0;
      if ( v45 )
      {
        do
          ++v46;
        while ( v45[v46] );
        v49 = 2 * v46 + 2;
      }
      else
      {
        v45 = &unk_18015D734;
        v49 = 2;
      }
      v102 = v45;
      v103 = v49;
      v104 = 0;
      v100 = &v88[1];
      v101 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 4;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = *(_QWORD *)(a3 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v97 = &unk_18016AA72;
      v98 = 310;
      v99 = 1;
      v66 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      result = EventWriteTransfer(*(_QWORD *)(a3 + 32), &EventDescriptor, 0LL, 0LL, 0x11u, &UserData);
    }
  }
  if ( v63 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
  if ( v54 )
    return (*(__int64 (__fastcall **)(__int64 *))(*v54 + 16))(v54);
  return result;
}
