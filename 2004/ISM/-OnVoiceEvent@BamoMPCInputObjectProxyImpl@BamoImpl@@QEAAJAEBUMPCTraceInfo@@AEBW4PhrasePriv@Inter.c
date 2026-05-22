/*
 * XREFs of ?OnVoiceEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJAEBUMPCTraceInfo@@AEBW4PhrasePriv@Internal@Spatial@Input@UI@Windows@@AEBUPoseDataMsg@56789@AEBUHitObjectMsg@56789@@Z @ 0x1800E9924
 * Callers:
 *     ?OnVoiceEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@AEBW4PhrasePriv@Internal@Spatial@Input@UI@Windows@@AEBUPoseDataMsg@45678@AEBUHitObjectMsg@45678@@Z @ 0x1800E98A0 (-OnVoiceEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@AEBW4PhrasePriv@Internal@Spatial@I.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180038FA0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoMPCInputObjectProxyImpl::OnVoiceEvent(
        BamoImpl::BamoMPCInputObjectProxyImpl *this,
        const struct MPCTraceInfo *a2,
        const enum Windows::UI::Input::Spatial::Internal::PhrasePriv *a3,
        const struct Windows::UI::Input::Spatial::Internal::PoseDataMsg *a4,
        const struct Windows::UI::Input::Spatial::Internal::HitObjectMsg *a5)
{
  char *v5; // rdi
  int v11; // eax
  unsigned int v12; // esi
  struct IMessageCallSendHost *v13; // rcx
  __int64 v14; // rdx
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  char *v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int16 v31; // [rsp+20h] [rbp-E0h]
  unsigned int v32[4]; // [rsp+50h] [rbp-B0h] BYREF
  struct IMessageCallSendHost *v33; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v34[3]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v35; // [rsp+80h] [rbp-80h]
  __int128 v36; // [rsp+90h] [rbp-70h]
  __int128 v37; // [rsp+A0h] [rbp-60h]
  char v38; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+148h]
  unsigned int v40; // [rsp+250h] [rbp+150h] BYREF

  v5 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL) + 56LL) )
  {
    v11 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v33, &v40, v32);
    v12 = v11;
    if ( v11 >= 0 )
    {
      v13 = v33;
      if ( *((_BYTE *)this + 31) )
      {
        if ( v33 )
          v5 = (char *)v33 - 16;
        v5[72] = 1;
      }
      v14 = 2LL;
      v15 = *((_OWORD *)a5 + 1);
      v35 = *(_OWORD *)a5;
      v16 = *((_OWORD *)a5 + 2);
      v17 = &v38;
      v36 = v15;
      v37 = v16;
      do
      {
        v18 = *((_OWORD *)a4 + 1);
        *(_OWORD *)v17 = *(_OWORD *)a4;
        v19 = *((_OWORD *)a4 + 2);
        *((_OWORD *)v17 + 1) = v18;
        v20 = *((_OWORD *)a4 + 3);
        *((_OWORD *)v17 + 2) = v19;
        v21 = *((_OWORD *)a4 + 4);
        *((_OWORD *)v17 + 3) = v20;
        v22 = *((_OWORD *)a4 + 5);
        *((_OWORD *)v17 + 4) = v21;
        v23 = *((_OWORD *)a4 + 6);
        *((_OWORD *)v17 + 5) = v22;
        v24 = *((_OWORD *)a4 + 7);
        a4 = (const struct Windows::UI::Input::Spatial::Internal::PoseDataMsg *)((char *)a4 + 128);
        *((_OWORD *)v17 + 6) = v23;
        v17 += 128;
        *((_OWORD *)v17 - 1) = v24;
        --v14;
      }
      while ( v14 );
      v25 = *((_OWORD *)a4 + 1);
      *(_OWORD *)v17 = *(_OWORD *)a4;
      v26 = *((_OWORD *)a4 + 2);
      *((_OWORD *)v17 + 1) = v25;
      v27 = *((_OWORD *)a4 + 3);
      *((_OWORD *)v17 + 2) = v26;
      v28 = *((_OWORD *)a4 + 4);
      *((_OWORD *)v17 + 3) = v27;
      v29 = *((_OWORD *)a4 + 5);
      *((_OWORD *)v17 + 4) = v28;
      v30 = *((_OWORD *)a4 + 6);
      *((_OWORD *)v17 + 5) = v29;
      *((_OWORD *)v17 + 6) = v30;
      v32[2] = *(_DWORD *)a3;
      LODWORD(v33) = *(_DWORD *)a2;
      v34[0] = v40;
      v34[1] = v32[0];
      v31 = 1;
      return CoreUICallSend(v13, v34, 2LL, 46LL, v31, &unk_1801BF267, (unsigned int)&v33);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAAA7,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)(unsigned int)v11);
      return v12;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAAA0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
