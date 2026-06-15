/*
 * XREFs of ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x18004CEF8
 * Callers:
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18004CE34 (-SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoin.c)
 * Callees:
 *     BlockSpatialAudioRegistryGates @ 0x1800109DC (BlockSpatialAudioRegistryGates.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x18005C024 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18005DE60 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFOR.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     _tlgKeywordOn @ 0x1800B7ADC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x1801251B0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@4@Z @ 0x180125260 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@66@Z @ 0x180125784 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CSpatialProperties::SetSpatialAudioSettings(
        LPCRITICAL_SECTION lpCriticalSection,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        struct tWAVEFORMATEX *a5,
        __int64 a6)
{
  int v6; // r13d
  __int64 v7; // r12
  __int16 v9; // r14
  PRTL_CRITICAL_SECTION_DEBUG v10; // rcx
  int SpinCount; // eax
  char v12; // al
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // r9d
  int v19; // ecx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // r8
  int SpinCount_low; // r9d
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  int v25; // ecx
  int v26; // r8d
  _WORD v27[2]; // [rsp+50h] [rbp-99h] BYREF
  int RecursionCount_low; // [rsp+54h] [rbp-95h] BYREF
  __int64 v29; // [rsp+58h] [rbp-91h] BYREF
  int v30; // [rsp+60h] [rbp-89h] BYREF
  int v31; // [rsp+64h] [rbp-85h] BYREF
  int v32[2]; // [rsp+68h] [rbp-81h] BYREF
  LPCRITICAL_SECTION v33; // [rsp+70h] [rbp-79h]
  PRTL_CRITICAL_SECTION_DEBUG v34; // [rsp+78h] [rbp-71h] BYREF
  struct tWAVEFORMATEX *v35; // [rsp+80h] [rbp-69h]
  __int64 v36; // [rsp+88h] [rbp-61h]
  _BYTE v37[64]; // [rsp+90h] [rbp-59h] BYREF
  __int64 v38[2]; // [rsp+D0h] [rbp-19h] BYREF
  __int128 v39; // [rsp+E0h] [rbp-9h]
  __int64 v40; // [rsp+F0h] [rbp+7h]

  *(_QWORD *)v32 = a4;
  v6 = a3;
  v7 = a2;
  v35 = a5;
  v36 = a6;
  v9 = 0;
  if ( a4 )
  {
    EnterCriticalSection(lpCriticalSection);
    v33 = lpCriticalSection;
    if ( (unsigned int)dword_18019D478 > 4
      && (byte_18019D488 & 0x10) != 0
      && (qword_18019D490 & 0x10) == qword_18019D490 )
    {
      v19 = BYTE1(lpCriticalSection[1].SpinCount);
      DebugInfo = lpCriticalSection[1].DebugInfo;
      SpinCount_low = LOWORD(lpCriticalSection[171].SpinCount);
      RecursionCount_low = LOBYTE(lpCriticalSection[171].RecursionCount);
      v30 = v19;
      v31 = v6;
      v34 = DebugInfo;
      v27[0] = SpinCount_low;
      v29 = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v19,
        (unsigned int)&unk_18016D08F,
        (_DWORD)DebugInfo,
        SpinCount_low,
        (__int64)&v29,
        (__int64)v27,
        (__int64)&v34,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&RecursionCount_low);
    }
    v10 = lpCriticalSection[1].DebugInfo;
    if ( v10 && (LOBYTE(lpCriticalSection[171].RecursionCount) || (_BYTE)v6) )
    {
      if ( BYTE1(lpCriticalSection[1].SpinCount) )
      {
        (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&v10->Type + 32LL))(v10);
        BYTE1(lpCriticalSection[1].SpinCount) = 0;
      }
      else
      {
        SpinCount = lpCriticalSection[171].SpinCount;
        if ( SpinCount )
        {
          if ( SpinCount == 1 )
            LODWORD(lpCriticalSection[171].SpinCount) = 3;
        }
        else
        {
          LODWORD(lpCriticalSection[171].SpinCount) = 1;
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          while ( 1 )
          {
            *(_OWORD *)v38 = 0LL;
            v39 = 0LL;
            v40 = 0LL;
            if ( v9 == 3 && (unsigned int)dword_18019D478 > 2 && (unsigned __int8)tlgKeywordOn(&dword_18019D478, 16LL) )
            {
              v27[0] = lpCriticalSection[171].SpinCount;
              v29 = v7;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>>(
                v22,
                (unsigned int)&unk_18016D129,
                v23,
                v24,
                (__int64)&v29,
                (__int64)v27);
            }
            v12 = BlockSpatialAudioRegistryGates();
            if ( !(_BYTE)v6 && v12 < 0 )
              break;
            LOBYTE(v6) = 0;
            v17 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                    v37,
                    a6);
            CSpatialProperties::SetSpatialAudioSettingsInternal(
              (int)lpCriticalSection,
              v7,
              0,
              v32[0],
              v35,
              v17,
              (__int64)v38);
            EnterCriticalSection(lpCriticalSection);
            v33 = lpCriticalSection;
            v18 = lpCriticalSection[171].SpinCount;
            if ( v18 <= 1 )
            {
              LODWORD(lpCriticalSection[171].SpinCount) = 0;
              goto LABEL_16;
            }
            if ( (unsigned int)dword_18019D478 > 4 && (unsigned __int8)tlgKeywordOn(&dword_18019D478, 16LL) )
            {
              v27[0] = v18;
              LOWORD(RecursionCount_low) = v9;
              v29 = v7;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
                v25,
                (unsigned int)&unk_18016CFDA,
                v26,
                v18,
                (__int64)&v29,
                (__int64)&RecursionCount_low,
                (__int64)v27);
              v18 = lpCriticalSection[171].SpinCount;
            }
            if ( v18 != 3 )
            {
              LODWORD(lpCriticalSection[171].SpinCount) = 0;
              (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)lpCriticalSection[1].DebugInfo + 32LL))(lpCriticalSection[1].DebugInfo);
              goto LABEL_16;
            }
            LODWORD(lpCriticalSection[171].SpinCount) = 1;
            if ( lpCriticalSection )
              LeaveCriticalSection(lpCriticalSection);
            if ( (unsigned __int16)++v9 >= 5u )
              goto LABEL_18;
          }
          if ( (unsigned int)dword_18019D478 > 4
            && (byte_18019D488 & 0x10) != 0
            && (qword_18019D490 & 0x10) == qword_18019D490 )
          {
            LOWORD(RecursionCount_low) = lpCriticalSection[171].SpinCount;
            *(_QWORD *)v32 = v7;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>>(
              v13,
              (unsigned int)&unk_18016D03C,
              v14,
              v15,
              (__int64)v32,
              (__int64)&RecursionCount_low);
          }
          EnterCriticalSection(lpCriticalSection);
          LODWORD(lpCriticalSection[171].SpinCount) = 0;
        }
      }
    }
LABEL_16:
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
  }
LABEL_18:
  v16 = *(_QWORD *)(a6 + 56);
  if ( v16 )
  {
    LOBYTE(a2) = v16 != a6;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 32LL))(v16, a2);
    *(_QWORD *)(a6 + 56) = 0LL;
  }
}
