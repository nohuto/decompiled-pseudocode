/*
 * XREFs of ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG@Z @ 0x180125728
 * Callers:
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@@Z @ 0x1800484E0 (-SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMA.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18004C394 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18004C694 (-SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18005D6C0 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFOR.c)
 * Callees:
 *     BlockSpatialAudioRegistryGates @ 0x18001049C (BlockSpatialAudioRegistryGates.c)
 *     ?InitSpatialTechList@CSpatialProperties@@AEAAJXZ @ 0x18004C220 (-InitSpatialTechList@CSpatialProperties@@AEAAJXZ.c)
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     _tlgKeywordOn @ 0x1800B6E6C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801251A8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSpatialProperties::ClearSpatialAudioSettings(
        struct _RTL_CRITICAL_SECTION *this,
        const unsigned __int16 *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 DebugInfo; // rcx
  int RecursionCount_low; // [rsp+70h] [rbp+20h] BYREF
  __int64 v8; // [rsp+80h] [rbp+30h] BYREF
  void *v9; // [rsp+88h] [rbp+38h] BYREF

  EnterCriticalSection(this);
  if ( (unsigned int)dword_18019C448 > 4 && tlgKeywordOn((__int64)&dword_18019C448, 16LL) )
  {
    DebugInfo = (__int64)this[1].DebugInfo;
    RecursionCount_low = LOBYTE(this[171].RecursionCount);
    v8 = DebugInfo;
    v9 = (void *)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      DebugInfo,
      byte_18016BEDD,
      v4,
      v5,
      &v9,
      (__int64)&v8,
      (__int64)&RecursionCount_low);
  }
  if ( this[1].DebugInfo )
  {
    if ( !LOBYTE(this[171].RecursionCount)
      || (*(int (__fastcall **)(_QWORD))(**(_QWORD **)&this[1].LockCount + 24LL))(*(_QWORD *)&this[1].LockCount) < 0
      || (LODWORD(v9) = 0,
          LODWORD(v8) = 0,
          RecursionCount_low = 0,
          (*(int (__fastcall **)(_QWORD, int *))(**(_QWORD **)&this[1].LockCount + 112LL))(
            *(_QWORD *)&this[1].LockCount,
            &RecursionCount_low) < 0)
      || RecursionCount_low
      || (*(int (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)&this[1].LockCount + 128LL))(
           *(_QWORD *)&this[1].LockCount,
           &v8) < 0
      || (_DWORD)v8
      || (*(int (__fastcall **)(_QWORD, void **))(**(_QWORD **)&this[1].LockCount + 184LL))(
           *(_QWORD *)&this[1].LockCount,
           &v9) < 0
      || (_DWORD)v9 )
    {
      LODWORD(this[2].DebugInfo) = 0;
      memset_0(&this[2].LockSemaphore, 0, 0x48uLL);
      this[4].LockCount = BlockSpatialAudioRegistryGates();
      LODWORD(this[4].OwningThread) = 0;
      memset_0((char *)&this[4].OwningThread + 4, 0, 0x1A10uLL);
      (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG, HANDLE *, _QWORD, _QWORD))(*(_QWORD *)this[1].DebugInfo + 48LL))(
        this[1].DebugInfo,
        &this[2].LockSemaphore,
        0LL,
        0LL);
      LOBYTE(this[171].RecursionCount) = 1;
      CSpatialProperties::InitSpatialTechList((CSpatialProperties *)this);
    }
  }
  LeaveCriticalSection(this);
}
