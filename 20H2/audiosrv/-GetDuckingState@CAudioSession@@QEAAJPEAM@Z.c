/*
 * XREFs of ?GetDuckingState@CAudioSession@@QEAAJPEAM@Z @ 0x1800C7AF0
 * Callers:
 *     ?GetDuckingState@CServerAudioSessionControl@@UEAAJPEAM@Z @ 0x1800CB710 (-GetDuckingState@CServerAudioSessionControl@@UEAAJPEAM@Z.c)
 * Callees:
 *     ??9?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@std@@QEBA_NU_Default_sentinel@1@@Z @ 0x18002DD18 (--9-$_Flist_unchecked_const_iterator@V-$_Flist_val@U-$_Flist_simple_types@V-$com_ptr_t@VCPBMStre.c)
 *     ?GainDelta@CPBMStreamClassVolumeGainStage@@QEBAMXZ @ 0x18006DC30 (-GainDelta@CPBMStreamClassVolumeGainStage@@QEBAMXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::GetDuckingState(CAudioSession *this, float *a2)
{
  float v4; // xmm6_4
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 *i; // rbx
  float v7; // xmm0_4
  __int64 *v9; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+48h] [rbp+10h]

  v4 = FLOAT_1_0;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 432);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 432));
  v10 = v5;
  for ( i = (__int64 *)*((_QWORD *)this + 59); ; i = (__int64 *)*i )
  {
    v9 = i;
    if ( !std::_Flist_unchecked_const_iterator<std::_Flist_val<std::_Flist_simple_types<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>>,std::_Iterator_base0>::operator!=(&v9) )
      break;
    v7 = CPBMStreamClassVolumeGainStage::GainDelta((CPBMStreamClassVolumeGainStage *)i[1]);
    if ( v7 <= v4 )
      v4 = v7;
  }
  *a2 = v4;
  if ( v5 )
    LeaveCriticalSection(v5);
  return 0LL;
}
