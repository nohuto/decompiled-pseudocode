/*
 * XREFs of ?ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z @ 0x140002D08
 * Callers:
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x1400029A0 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x1400430D0 (-Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphC.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400072D0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ?GetAggregatedGfxSettings@CSystemAudioDeviceCollection@@SAHPEAVCSystemAudioDeviceBase@@@Z @ 0x140041BE0 (-GetAggregatedGfxSettings@CSystemAudioDeviceCollection@@SAHPEAVCSystemAudioDeviceBase@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSystemAudioDeviceBase::ApplyFxStateSettings(
        CSystemAudioDeviceBase *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        int a3)
{
  HRESULT v6; // ebx
  LPVOID v7; // rcx
  _QWORD *v9; // r15
  _QWORD *v10; // r14
  _QWORD *v11; // rsi
  unsigned int AggregatedGfxSettings; // eax
  LPVOID ppv; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  v7 = 0LL;
  ppv = 0LL;
  if ( *((_DWORD *)this + 60) )
  {
    *((_DWORD *)this + 61) = *((_DWORD *)a2 + 36);
    v6 = CoCreateInstance(
           &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
           0LL,
           0x17u,
           &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
           &ppv);
    if ( v6 < 0 )
      goto LABEL_19;
    v9 = (_QWORD *)((char *)this + 288);
    v6 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, char *))(*(_QWORD *)ppv + 40LL))(
           ppv,
           *((_QWORD *)a2 + 7),
           (char *)this + 288);
    if ( v6 < 0 )
      goto LABEL_19;
    v10 = (_QWORD *)((char *)this + 264);
    v6 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*v9 + 24LL))(
           *v9,
           &GUID_eddce3e4_f3c1_453a_b461_223563cbd886,
           1LL);
    if ( v6 < 0 )
      goto LABEL_19;
    if ( a3 || *((_DWORD *)a2 + 25) != 1 )
    {
      v11 = (_QWORD *)((char *)this + 272);
      if ( *((_QWORD *)this + 34) )
        ATL::AtlComPtrAssign((struct IUnknown **)this + 34, 0LL);
    }
    else
    {
      v11 = (_QWORD *)((char *)this + 272);
      v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 29))(
             *((_QWORD *)this + 29),
             &GUID_076a6922_d802_4f83_baf6_409d9ca11bfe,
             (char *)this + 272);
      if ( v6 < 0 )
      {
LABEL_19:
        v7 = ppv;
        goto LABEL_2;
      }
    }
    if ( !*v10
      || (AggregatedGfxSettings = CSystemAudioDeviceCollection::GetAggregatedGfxSettings(this),
          v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v10 + 48LL))(
                 *v10,
                 *v9,
                 AggregatedGfxSettings),
          v6 >= 0) )
    {
      if ( !a3 && *v11 )
        v6 = (*(__int64 (__fastcall **)(_QWORD, bool))(*(_QWORD *)*v11 + 24LL))(*v11, *((_DWORD *)this + 61) == 0);
    }
    goto LABEL_19;
  }
LABEL_2:
  if ( v7 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v6;
}
