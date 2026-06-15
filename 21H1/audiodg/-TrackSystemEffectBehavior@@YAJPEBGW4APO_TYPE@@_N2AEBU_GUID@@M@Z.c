/*
 * XREFs of ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x140009E10
 * Callers:
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140006010 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140007AB0 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x140008730 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000BD20 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     _lambda_d6c91c141caa9023ad6869a8fc78e301_::operator() @ 0x14003BDBC (_lambda_d6c91c141caa9023ad6869a8fc78e301_--operator().c)
 *     ?APOTrackAndLogException@@YAXPEBU_tlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEBDJ_N5@Z @ 0x140047DF0 (-APOTrackAndLogException@@YAXPEBU_tlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEBDJ_N5@Z.c)
 *     ?TrackAPOFailureUnhandled@CSystemEffectWrapper@@UEAAJM@Z @ 0x140048BB0 (-TrackAPOFailureUnhandled@CSystemEffectWrapper@@UEAAJM@Z.c)
 * Callees:
 *     ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x14000B060 (-TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@M@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TrackSystemEffectBehavior(__int64 a1, unsigned int a2, unsigned __int8 a3, unsigned __int8 a4)
{
  HRESULT v8; // ebx
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-10h] BYREF

  v8 = 0;
  ppv = 0LL;
  v10 = 0LL;
  if ( (unsigned int)GetClassFromEndpointId(a1) != 3 )
  {
    v8 = CoCreateInstance(
           &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
           0LL,
           0x17u,
           &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
           &ppv);
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, a1, &v10);
      if ( v8 >= 0 )
        v8 = TrackSystemEffectBehavior(v10, a2, a3, a4);
    }
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v8;
}
