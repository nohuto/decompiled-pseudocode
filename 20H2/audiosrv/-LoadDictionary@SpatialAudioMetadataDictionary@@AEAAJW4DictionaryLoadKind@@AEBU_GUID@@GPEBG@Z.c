/*
 * XREFs of ?LoadDictionary@SpatialAudioMetadataDictionary@@AEAAJW4DictionaryLoadKind@@AEBU_GUID@@GPEBG@Z @ 0x18012CE48
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioMetadataDictionary@@QEAAJW4DictionaryLoadKind@@AEBU_GUID@@GPEBGPEAEI@Z @ 0x18012D1A8 (-RuntimeClassInitialize@SpatialAudioMetadataDictionary@@QEAAJW4DictionaryLoadKind@@AEBU_GUID@@GP.c)
 * Callees:
 *     Create_SpatialAudioDevicePropertyReader @ 0x180029DAC (Create_SpatialAudioDevicePropertyReader.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046308 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A360 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180109668 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_180109668.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialAudioMetadataDictionary::LoadDictionary(
        __int64 a1,
        int a2,
        __int64 a3,
        __int16 a4,
        const unsigned __int16 *a5)
{
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  unsigned __int64 v16; // rcx
  SIZE_T v17; // rax
  LPVOID v18; // rdx
  __int64 v20; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+48h] [rbp-18h] BYREF
  __int64 v22[2]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v23; // [rsp+90h] [rbp+30h] BYREF
  __int64 v24; // [rsp+98h] [rbp+38h] BYREF
  unsigned int v25; // [rsp+A8h] [rbp+48h] BYREF

  LOWORD(v25) = a4;
  v22[1] = -2LL;
  v20 = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  if ( v8 )
    LeaveCriticalSection(v8);
  v21 = 0LL;
  if ( a2 )
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v24) = -2147418113;
      LODWORD(v23) = 202;
      v22[0] = (__int64)"SpatialAudioMetadataDictionary::LoadDictionary";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_18019C480,
        byte_18016C05C,
        v9,
        v10,
        (const CHAR **)v22,
        (__int64)&v23,
        (__int64)&v24);
    }
    v11 = -2147418113;
    goto LABEL_27;
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v21);
  v12 = Create_SpatialAudioDevicePropertyReader(a5, 0LL, &v21);
  v11 = v12;
  if ( v12 < 0 )
  {
    if ( (unsigned int)dword_18019C480 <= 2 )
      goto LABEL_27;
    LODWORD(v23) = 205;
LABEL_26:
    LODWORD(v24) = v12;
    v22[0] = (__int64)"SpatialAudioMetadataDictionary::LoadDictionary";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_18019C480,
      byte_18016C02A,
      v13,
      v14,
      (const CHAR **)v22,
      (__int64)&v23,
      (__int64)&v24);
    goto LABEL_27;
  }
  v15 = v21;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v20);
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v15 + 40LL))(v15, a3, &v20);
  v11 = v12;
  if ( v12 < 0 )
  {
    if ( (unsigned int)dword_18019C480 <= 2 )
      goto LABEL_27;
    LODWORD(v23) = 208;
    goto LABEL_26;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 32LL))(v20, a1 + 120);
  v11 = v12;
  if ( v12 < 0 )
  {
    if ( (unsigned int)dword_18019C480 <= 2 )
      goto LABEL_27;
    LODWORD(v23) = 213;
    goto LABEL_26;
  }
  v25 = 0;
  v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v20 + 40LL))(v20, &v25);
  v11 = v12;
  if ( v12 < 0 )
  {
    if ( (unsigned int)dword_18019C480 <= 2 )
      goto LABEL_27;
    LODWORD(v23) = 217;
    goto LABEL_26;
  }
  v16 = v25 >> 1;
  *(_DWORD *)(a1 + 124) = v16;
  v17 = 2 * v16;
  if ( !is_mul_ok(v16, 2uLL) )
    v17 = -1LL;
  v18 = operator new[](v17, (const struct std::nothrow_t *)&std::nothrow);
  *(_QWORD *)(a1 + 128) = v18;
  if ( !v18 )
  {
    v11 = -2147024882;
    goto LABEL_27;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, LPVOID, _QWORD))(*(_QWORD *)v20 + 48LL))(v20, v18, v25);
  v11 = v12;
  if ( v12 < 0 && (unsigned int)dword_18019C480 > 2 )
  {
    LODWORD(v23) = 224;
    goto LABEL_26;
  }
LABEL_27:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v21);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v20);
  return v11;
}
