/*
 * XREFs of ?PersistVolumeState@CVolumeSoftware@@AEAAXXZ @ 0x1800C13D8
 * Callers:
 *     ?OnPersistState@CVolumeSoftware@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800C1380 (-OnPersistState@CVolumeSoftware@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ @ 0x1800C1740 (-ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ.c)
 * Callees:
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18005D048 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18005D96C (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800BBFB0 (WPP_SF_S.c)
 *     WPP_SF_Sdg @ 0x1800C2E98 (WPP_SF_Sdg.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CVolumeSoftware::PersistVolumeState(const wchar_t **this)
{
  unsigned int i; // esi
  CVolumeUnit *v3; // rax
  const wchar_t *v4; // rbx
  CVolumeUnit *v5; // rax
  double DB; // xmm2_8
  PROPVARIANT pvar[2]; // [rsp+30h] [rbp-20h] BYREF
  float *v8; // [rsp+40h] [rbp-10h]
  __int64 v9; // [rsp+80h] [rbp+30h] BYREF
  __int64 v10; // [rsp+88h] [rbp+38h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Bu,
      (__int64)&WPP_0837af417b5438e10b8c3569af41ec07_Traceguids,
      this[8]);
  }
  if ( (*(int (__fastcall **)(_QWORD, const wchar_t *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         this[8],
         &v10) >= 0
    && (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v10 + 32LL))(v10, 1LL, &v9) >= 0 )
  {
    *(_OWORD *)pvar = 0LL;
    v8 = 0LL;
    LOWORD(pvar[0]) = 65;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Cu,
        (__int64)&WPP_0837af417b5438e10b8c3569af41ec07_Traceguids,
        this[8]);
    }
    LODWORD(pvar[1]) = 4 * *((_DWORD *)this + 31);
    v8 = (float *)CoTaskMemAlloc(LODWORD(pvar[1]));
    if ( v8 )
    {
      for ( i = 0; i < *((_DWORD *)this + 31); ++i )
      {
        v3 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](this + 11, i);
        v8[i] = CVolumeUnit::GetDB(v3);
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v4 = this[8];
          v5 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](this + 11, i);
          DB = CVolumeUnit::GetDB(v5);
          WPP_SF_Sdg(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            45,
            (unsigned int)&WPP_0837af417b5438e10b8c3569af41ec07_Traceguids,
            (_DWORD)v4,
            i,
            DB,
            pvar[0]);
        }
      }
      (*(void (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v9 + 48LL))(
        v9,
        &PKEY_APO_MasterVolumeLevel,
        pvar);
      PropVariantClear(pvar);
      *((_BYTE *)this + 300) = 0;
    }
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
}
