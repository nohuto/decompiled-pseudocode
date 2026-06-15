/*
 * XREFs of ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x1800C9EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z @ 0x18002EE10 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800340C0 (--3@YAXPEAX@Z.c)
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180046EE0 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006ABC0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_ @ 0x1800BBF40 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1800BE26C (WPP_SF_q.c)
 *     WPP_SF_q_guid_ @ 0x1800BF598 (WPP_SF_q_guid_.c)
 *     WPP_SF_qdgg @ 0x1800C3074 (WPP_SF_qdgg.c)
 *     WPP_SF_q_guid__guid_ @ 0x1800CBEB4 (WPP_SF_q_guid__guid_.c)
 *     WPP_SF_qdd @ 0x1800CBF28 (WPP_SF_qdd.c)
 *     WPP_SF_qgg_HEX__HEX_ @ 0x1800CBF88 (WPP_SF_qgg_HEX__HEX_.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::OnNotify(
        CPerEndpointVolumeAudioSession *this,
        struct AUDIO_VOLUME_NOTIFICATION_DATA *a2,
        int a3)
{
  char v3; // r13
  char v4; // r14
  CAudioSessionManager *v7; // rcx
  char *v8; // rdx
  __int64 v9; // rax
  struct _RTL_CRITICAL_SECTION *v10; // rbp
  int v11; // edx
  int v12; // r8d
  CAudioSessionManager *v13; // rcx
  float *p_fMasterVolume; // r15
  __m128 fMasterVolume_low; // xmm0
  _DWORD *v16; // r12
  __m128 v17; // xmm1
  unsigned int v18; // eax
  SIZE_T v19; // rax
  unsigned __int64 v20; // kr00_8
  float *v21; // rax
  __int64 v22; // rsi
  float *v23; // r12
  float v24; // xmm0_4
  __int64 v25; // rax
  int v26; // esi
  int v27; // r14d
  int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rdx
  float v31; // xmm1_4
  int *v33; // [rsp+20h] [rbp-98h]
  float *v34; // [rsp+40h] [rbp-78h] BYREF
  __int16 v35; // [rsp+48h] [rbp-70h]
  char *v36; // [rsp+50h] [rbp-68h] BYREF
  __int16 v37; // [rsp+58h] [rbp-60h]
  char v38; // [rsp+C0h] [rbp+8h]
  float *v39; // [rsp+C8h] [rbp+10h]

  v3 = 0;
  v4 = 0;
  v38 = 0;
  v39 = 0LL;
  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q_guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x53u,
      (__int64)&WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids,
      (char *)this - 984,
      a2);
    v7 = WPP_GLOBAL_Control;
  }
  v8 = (char *)this - 648;
  v9 = *(_QWORD *)&a2->guidEventContext.Data1 - *((_QWORD *)this - 81);
  if ( *(_QWORD *)&a2->guidEventContext.Data1 == *((_QWORD *)this - 81) )
    v9 = *(_QWORD *)a2->guidEventContext.Data4 - *((_QWORD *)v8 + 1);
  if ( v9 )
  {
    if ( v7 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)v7 + 28) & 0x40) != 0
      && *((_BYTE *)v7 + 25) >= 4u )
    {
      WPP_SF_q_guid__guid_(*((_QWORD *)v7 + 2), (_DWORD)v8, a3, (_DWORD)this - 984, (__int64)a2, (__int64)this - 648);
    }
    v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 176);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this - 176));
    v12 = *((_DWORD *)this - 33);
    if ( a2->bMuted == v12 )
    {
      v13 = WPP_GLOBAL_Control;
    }
    else
    {
      v13 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qdd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          86LL,
          &WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids,
          (char *)this - 984,
          v12,
          a2->bMuted);
        v13 = WPP_GLOBAL_Control;
      }
      v3 = 1;
    }
    p_fMasterVolume = &a2->fMasterVolume;
    fMasterVolume_low = (__m128)LODWORD(a2->fMasterVolume);
    v16 = (_DWORD *)((char *)this - 136);
    if ( fMasterVolume_low.m128_f32[0] != *((float *)this - 34) )
    {
      if ( v13 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v13 + 28) & 0x40) != 0
        && *((_BYTE *)v13 + 25) >= 4u )
      {
        v17 = (__m128)(unsigned int)*v16;
        v34 = &a2->fMasterVolume;
        v35 = 4;
        v36 = (char *)this - 136;
        v37 = 4;
        WPP_SF_qgg_HEX__HEX_(
          *((_QWORD *)v13 + 2),
          v11,
          v12,
          (_DWORD)this - 984,
          *(_OWORD *)&_mm_cvtps_pd(v17),
          *(_OWORD *)&_mm_cvtps_pd(fMasterVolume_low),
          (__int64)&v36,
          (__int64)&v34);
        v13 = WPP_GLOBAL_Control;
      }
      v38 = 1;
    }
    v18 = *((_DWORD *)this - 6);
    if ( a2->nChannels == v18 )
    {
      v20 = v18;
      v19 = 4LL * v18;
      if ( !is_mul_ok(v20, 4uLL) )
        v19 = -1LL;
      v21 = (float *)operator new[](v19, (const struct std::nothrow_t *)&std::nothrow);
      v39 = v21;
      if ( v21 && (v22 = 0LL, *((_DWORD *)this - 6)) )
      {
        v23 = v21;
        do
        {
          if ( *p_fMasterVolume == 0.0 )
            v24 = FLOAT_1_0;
          else
            v24 = a2->afChannelVolumes[v22] / *p_fMasterVolume;
          v23[v22] = v24;
          v25 = *((_QWORD *)this - 2);
          if ( v24 == *(float *)(v25 + 4 * v22) )
          {
            v13 = WPP_GLOBAL_Control;
          }
          else
          {
            v13 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              LODWORD(v33) = v22;
              WPP_SF_qdgg(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x58u,
                (__int64)&WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids,
                (char *)this - 984,
                v33,
                *(float *)(v25 + 4 * v22),
                v24);
              v13 = WPP_GLOBAL_Control;
            }
            v4 = 1;
          }
          v22 = (unsigned int)(v22 + 1);
        }
        while ( (unsigned int)v22 < *((_DWORD *)this - 6) );
        v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 176);
        v16 = (_DWORD *)((char *)this - 136);
      }
      else
      {
        v13 = WPP_GLOBAL_Control;
      }
    }
    if ( v10 )
    {
      LeaveCriticalSection(v10);
      v13 = WPP_GLOBAL_Control;
    }
    if ( v3 || v38 || v4 )
    {
      if ( v13 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v13 + 28) & 0x40) != 0
        && *((_BYTE *)v13 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v13 + 2), 0x59u, (__int64)&WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids);
        v13 = WPP_GLOBAL_Control;
      }
      if ( v4 )
      {
        v26 = 0;
        v27 = 0;
        if ( v13 != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)v13 + 28) & 0x40) != 0
          && *((_BYTE *)v13 + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)v13 + 2), 0x5Au, (__int64)&WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids);
        }
        EnterCriticalSection(v10);
        v28 = *((_DWORD *)this - 6);
        if ( a2->nChannels == v28 )
        {
          v29 = 0LL;
          if ( v28 )
          {
            v30 = *((_QWORD *)this - 2);
            do
            {
              v31 = v39[v29];
              if ( *(float *)(v30 + 4 * v29) != v31 )
              {
                *(float *)(v30 + 4 * v29) = v31;
                v27 = v29;
              }
              v29 = (unsigned int)(v29 + 1);
            }
            while ( (unsigned int)v29 < *((_DWORD *)this - 6) );
          }
          v26 = 1;
        }
        if ( v10 )
          LeaveCriticalSection(v10);
        if ( v26 )
          CAudioSession::RecalculateSessionVolume((__int64)this - 968, 1, (__int64)a2, v27, 1);
        v13 = WPP_GLOBAL_Control;
      }
      if ( v3 )
      {
        CAudioSession::SetMute(
          (CPerEndpointVolumeAudioSession *)((char *)this - 984),
          a2->bMuted,
          &EVENTCONTEXT_AUDIOSUBSYSTEM,
          1,
          0LL);
        v13 = WPP_GLOBAL_Control;
      }
      if ( v38 )
      {
        if ( v13 != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)v13 + 28) & 0x40) != 0
          && *((_BYTE *)v13 + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)v13 + 2), 0x5Bu, (__int64)&WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids);
        }
        EnterCriticalSection(v10);
        *v16 = *(_DWORD *)p_fMasterVolume;
        if ( v10 )
          LeaveCriticalSection(v10);
        CAudioSession::RecalculateSessionVolume((__int64)this - 968, 0, (__int64)a2, 0, 1);
      }
    }
    operator delete(v39);
  }
  else if ( v7 != (CAudioSessionManager *)&WPP_GLOBAL_Control
         && (*((_BYTE *)v7 + 28) & 0x40) != 0
         && *((_BYTE *)v7 + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)v7 + 2), 0x54u, (__int64)&WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids, (char *)this - 984);
  }
  return 0LL;
}
