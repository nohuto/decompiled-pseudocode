/*
 * XREFs of ?GetDuckingManagerGain@CAudioSession@@MEAAXPEAMPEA_J@Z @ 0x1800381A0
 * Callers:
 *     <none>
 * Callees:
 *     ??9?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@std@@QEBA_NU_Default_sentinel@1@@Z @ 0x18002E398 (--9-$_Flist_unchecked_const_iterator@V-$_Flist_val@U-$_Flist_simple_types@V-$com_ptr_t@VCPBMStre.c)
 *     ?GainDelay@CPBMStreamClassVolumeGainStage@@QEBA?B_JXZ @ 0x18006E6D8 (-GainDelay@CPBMStreamClassVolumeGainStage@@QEBA-B_JXZ.c)
 *     ?GainDelta@CPBMStreamClassVolumeGainStage@@QEBAMXZ @ 0x18006E6F0 (-GainDelta@CPBMStreamClassVolumeGainStage@@QEBAMXZ.c)
 */

void __fastcall CAudioSession::GetDuckingManagerGain(CAudioSession *this, float *a2, __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  __int64 *i; // rbx
  __int64 v8; // rbp
  __int64 *v9; // [rsp+40h] [rbp+8h] BYREF

  if ( a3 )
    *a3 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 432);
  *a2 = 1.0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 432));
  for ( i = (__int64 *)*((_QWORD *)this + 59); ; i = (__int64 *)*i )
  {
    v9 = i;
    if ( !std::_Flist_unchecked_const_iterator<std::_Flist_val<std::_Flist_simple_types<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>>,std::_Iterator_base0>::operator!=(&v9) )
      break;
    *a2 = fminf(*a2, CPBMStreamClassVolumeGainStage::GainDelta((CPBMStreamClassVolumeGainStage *)i[1]));
    if ( a3 )
    {
      v8 = *a3;
      if ( v8 <= CPBMStreamClassVolumeGainStage::GainDelay((CPBMStreamClassVolumeGainStage *)i[1]) )
        v8 = CPBMStreamClassVolumeGainStage::GainDelay((CPBMStreamClassVolumeGainStage *)i[1]);
      *a3 = v8;
    }
  }
  if ( v6 )
    LeaveCriticalSection(v6);
}
