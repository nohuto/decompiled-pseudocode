/*
 * XREFs of ?EnsureSpatialSettingsAreInitialized@CSpatialProperties@@QEAAXPEBG@Z @ 0x18005B718
 * Callers:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18000E990 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCha.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy_________lambda_b1bf813238bea76d99dc89795d1a2868___ @ 0x18005B6B0 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_wil--com_ptr_t_CEndpoint.c)
 * Callees:
 *     BlockSpatialAudioRegistryGates @ 0x18001049C (BlockSpatialAudioRegistryGates.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006C65C (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     _tlgKeywordOn @ 0x1800B6E6C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x180123C18 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U3@U3@@-$_tlgWrite.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSpatialProperties::EnsureSpatialSettingsAreInitialized(
        LPCRITICAL_SECTION lpCriticalSection,
        const unsigned __int16 *a2)
{
  bool v4; // bl
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  int v10; // [rsp+50h] [rbp+7h] BYREF
  int v11; // [rsp+54h] [rbp+Bh] BYREF
  int v12; // [rsp+58h] [rbp+Fh] BYREF
  int v13; // [rsp+5Ch] [rbp+13h] BYREF
  int v14; // [rsp+60h] [rbp+17h] BYREF
  const unsigned __int16 *v15; // [rsp+68h] [rbp+1Fh] BYREF
  GUID *v16; // [rsp+70h] [rbp+27h] BYREF
  GUID v17; // [rsp+78h] [rbp+2Fh] BYREF

  v10 = 0;
  v17 = GUID_00000000_0000_0000_0000_000000000000;
  v11 = 0;
  if ( !LOBYTE(lpCriticalSection[1].SpinCount) )
  {
    v4 = (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(lpCriticalSection)
      && (int)GetDefaultSpatialSettingsForEndpoint(a2, &v10, &v17, &v11) >= 0;
    EnterCriticalSection(lpCriticalSection);
    v15 = (const unsigned __int16 *)lpCriticalSection;
    if ( v4
      && !LOBYTE(lpCriticalSection[1].SpinCount)
      && (*(int (__fastcall **)(_QWORD, int *))(**(_QWORD **)&lpCriticalSection[1].LockCount + 112LL))(
           *(_QWORD *)&lpCriticalSection[1].LockCount,
           &v10) < 0 )
    {
      BlockSpatialAudioRegistryGates();
      LOBYTE(lpCriticalSection[171].RecursionCount) = 1;
      memset_0(&lpCriticalSection[2].LockSemaphore, 0, 0x48uLL);
      memset_0((char *)&lpCriticalSection[4].OwningThread + 4, 0, 0x1A10uLL);
      LODWORD(lpCriticalSection[4].OwningThread) = 0;
      v5 = v10;
      LODWORD(lpCriticalSection[2].LockSemaphore) = v10;
      HIDWORD(lpCriticalSection[4].DebugInfo) = v5;
      *(GUID *)((char *)&lpCriticalSection[2].SpinCount + 4) = v17;
      v6 = v11;
      lpCriticalSection[4].RecursionCount = v11 != 0;
      LODWORD(lpCriticalSection[2].SpinCount) = v6;
      (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG, HANDLE *, _QWORD, _QWORD))(*(_QWORD *)lpCriticalSection[1].DebugInfo
                                                                                    + 48LL))(
        lpCriticalSection[1].DebugInfo,
        &lpCriticalSection[2].LockSemaphore,
        0LL,
        0LL);
      if ( (unsigned int)dword_18019C448 > 4 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_18019C448, 16LL) )
        {
          v12 = v9;
          v13 = v11;
          v14 = v10;
          v16 = &v17;
          v15 = a2;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v7,
            (unsigned int)&unk_18016BF39,
            v8,
            v9,
            (__int64)&v15,
            (__int64)&v16,
            (__int64)&v14,
            (__int64)&v13,
            (__int64)&v12);
        }
      }
    }
    LOBYTE(lpCriticalSection[1].SpinCount) = 1;
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
  }
}
