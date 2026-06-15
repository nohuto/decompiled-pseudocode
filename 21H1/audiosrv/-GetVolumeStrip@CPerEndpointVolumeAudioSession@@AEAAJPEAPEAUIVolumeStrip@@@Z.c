/*
 * XREFs of ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x1800C9058
 * Callers:
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x1800C7420 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x1800C9CA0 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?Reused@CPerEndpointVolumeAudioSession@@EEAAJXZ @ 0x1800CB150 (-Reused@CPerEndpointVolumeAudioSession@@EEAAJXZ.c)
 *     ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x1800CB950 (-UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 * Callees:
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x180003298 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180058174 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800BE26C (WPP_SF_q.c)
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z @ 0x1800C95BC (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z.c)
 *     WPP_SF_qqq @ 0x1800CC0B0 (WPP_SF_qqq.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPerEndpointVolumeAudioSession::GetVolumeStrip(
        CPerEndpointVolumeAudioSession *this,
        struct IVolumeStrip **a2)
{
  int EndpointVolumeInformation; // ebx
  struct _RTL_CRITICAL_SECTION *v5; // rbp
  _QWORD *v6; // rsi
  CAudioSessionManager **v7; // rdx
  struct IUnknown *v8; // rcx
  struct IVolumeProvider *v9; // r14
  __int64 v10; // rbx
  const unsigned __int16 *Buffer; // rax
  void (*Release)(void); // rax
  struct IUnknown *v13; // rbx
  const unsigned __int16 *v14; // rdx
  struct IUnknown *v15; // rcx
  struct IUnknown *v17; // [rsp+60h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+70h] [rbp+18h]

  EndpointVolumeInformation = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 992);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 992));
  v18 = v5;
  v6 = (_QWORD *)((char *)this + 1032);
  v7 = &WPP_GLOBAL_Control;
  if ( *((_QWORD *)this + 129) )
    goto LABEL_26;
  v8 = 0LL;
  v17 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x20u,
      (__int64)&WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids,
      this);
    v8 = v17;
  }
  v9 = g_pVolumeProvider;
  if ( g_pVolumeProvider )
  {
    v10 = *(_QWORD *)g_pVolumeProvider;
    Buffer = CAudioEndpointId::GetBuffer((CPerEndpointVolumeAudioSession *)((char *)this + 656));
    EndpointVolumeInformation = (*(__int64 (__fastcall **)(struct IVolumeProvider *, const unsigned __int16 *, struct IUnknown **))(v10 + 48))(
                                  v9,
                                  Buffer,
                                  &v17);
    if ( EndpointVolumeInformation < 0 )
    {
      if ( !v17 )
        goto LABEL_34;
      Release = (void (*)(void))v17->lpVtbl->Release;
      goto LABEL_12;
    }
    v13 = v17;
    CAudioEndpointId::GetBuffer((CPerEndpointVolumeAudioSession *)((char *)this + 656));
    EndpointVolumeInformation = CPerEndpointVolumeAudioSession::LoadEndpointVolumeInformation(
                                  this,
                                  v14,
                                  (struct IVolumeStrip *)v13);
    if ( EndpointVolumeInformation < 0 )
      goto LABEL_14;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x21u,
        (__int64)&WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids,
        this);
    }
    EndpointVolumeInformation = ((__int64 (__fastcall *)(struct IUnknown *, char *))v17->lpVtbl[9].Release)(
                                  v17,
                                  (char *)this + 984);
    if ( EndpointVolumeInformation < 0 )
    {
LABEL_14:
      if ( v17 )
      {
        Release = (void (*)(void))v17->lpVtbl->Release;
LABEL_12:
        Release();
      }
LABEL_34:
      if ( EndpointVolumeInformation >= 0 )
        goto LABEL_36;
      goto LABEL_35;
    }
    v15 = v17;
    if ( (struct IUnknown *)*v6 != v17 )
    {
      ATL::AtlComPtrAssign((struct IUnknown **)this + 129, v17);
      v15 = v17;
    }
    if ( v15 )
      ((void (__fastcall *)(struct IUnknown *))v15->lpVtbl->Release)(v15);
    v7 = &WPP_GLOBAL_Control;
LABEL_26:
    if ( a2 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qqq(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          34LL,
          &WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids,
          this,
          *v6,
          a2);
      }
      *a2 = (struct IVolumeStrip *)*v6;
      if ( *v6 )
        (*(void (__fastcall **)(_QWORD, CAudioSessionManager **))(*(_QWORD *)*v6 + 8LL))(*v6, v7);
      EndpointVolumeInformation = 0;
    }
    goto LABEL_34;
  }
  EndpointVolumeInformation = -2147418113;
  if ( v8 )
    ((void (__fastcall *)(struct IUnknown *, CAudioSessionManager **))v8->lpVtbl->Release)(v8, v7);
LABEL_35:
  AudSrvTraceLoggingErrorHelper("CPerEndpointVolumeAudioSession::GetVolumeStrip", 1744, EndpointVolumeInformation);
LABEL_36:
  if ( v5 )
    LeaveCriticalSection(v5);
  return (unsigned int)EndpointVolumeInformation;
}
