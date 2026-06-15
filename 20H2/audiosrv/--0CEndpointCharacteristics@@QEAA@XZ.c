/*
 * XREFs of ??0CEndpointCharacteristics@@QEAA@XZ @ 0x18005AE54
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAH@Z @ 0x1800586EC (--$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 * Callees:
 *     ??0SystemEffectDescriptor@@QEAA@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005B190 (--0SystemEffectDescriptor@@QEAA@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     ??0CSpatialProperties@@QEAA@XZ @ 0x18005B1E0 (--0CSpatialProperties@@QEAA@XZ.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18006A36C (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??$throw_exception@Ufail_fast@gsl@@@details@gsl@@YAX$$QEAUfail_fast@1@@Z @ 0x180118858 (--$throw_exception@Ufail_fast@gsl@@@details@gsl@@YAX$$QEAUfail_fast@1@@Z.c)
 *     ??0fail_fast@gsl@@QEAA@QEBD@Z @ 0x180118928 (--0fail_fast@gsl@@QEAA@QEBD@Z.c)
 */

// Hidden C++ exception states: #wind=42
CEndpointCharacteristics *__fastcall CEndpointCharacteristics::CEndpointCharacteristics(CEndpointCharacteristics *this)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  _BYTE v12[24]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v13[24]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v14[24]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v15[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v16[24]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v17[24]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v18[24]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v19[24]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v20[80]; // [rsp+F0h] [rbp-10h] BYREF

  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IEndpointCharacteristics>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CEndpointCharacteristics::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 8) = 4LL;
  *((_QWORD *)this + 9) = (char *)this + 48;
  if ( this == (CEndpointCharacteristics *)-48LL )
  {
    v3 = gsl::fail_fast::fail_fast(
           (gsl::fail_fast *)v12,
           "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 585");
    gsl::details::throw_exception<gsl::fail_fast>(v3);
  }
  *((_QWORD *)this + 10) = 0LL;
  `eh vector constructor iterator'(
    (char *)this + 88,
    0x10uLL,
    4uLL,
    (void (*)(void *))CAudioSignalProcessingModeArray::CAudioSignalProcessingModeArray,
    (void (*)(void *))ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>);
  *((_QWORD *)this + 19) = 4LL;
  *((_QWORD *)this + 20) = (char *)this + 88;
  if ( this == (CEndpointCharacteristics *)-88LL )
  {
    v4 = gsl::fail_fast::fail_fast(
           (gsl::fail_fast *)v13,
           "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 585");
    gsl::details::throw_exception<gsl::fail_fast>(v4);
  }
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  SystemEffectDescriptor::SystemEffectDescriptor(
    (CEndpointCharacteristics *)((char *)this + 264),
    eHostProcessConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((CEndpointCharacteristics *)((char *)this + 360), eOffloadConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((CEndpointCharacteristics *)((char *)this + 456), eLoopbackConnector);
  SystemEffectDescriptor::SystemEffectDescriptor(
    (CEndpointCharacteristics *)((char *)this + 552),
    eKeywordDetectorConnector);
  SystemEffectDescriptor::SystemEffectDescriptor(
    (CEndpointCharacteristics *)((char *)this + 648),
    eHostProcessConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((CEndpointCharacteristics *)((char *)this + 744), eOffloadConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((CEndpointCharacteristics *)((char *)this + 840), eLoopbackConnector);
  SystemEffectDescriptor::SystemEffectDescriptor(
    (CEndpointCharacteristics *)((char *)this + 936),
    eKeywordDetectorConnector);
  SystemEffectDescriptor::SystemEffectDescriptor(
    (CEndpointCharacteristics *)((char *)this + 1032),
    eHostProcessConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((CEndpointCharacteristics *)((char *)this + 1128), eOffloadConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((CEndpointCharacteristics *)((char *)this + 1224), eLoopbackConnector);
  SystemEffectDescriptor::SystemEffectDescriptor(
    (CEndpointCharacteristics *)((char *)this + 1320),
    eKeywordDetectorConnector);
  `eh vector constructor iterator'(
    (char *)this + 1432,
    0x18uLL,
    4uLL,
    (void (*)(void *))CAudioSignalProcessingModeMap::CAudioSignalProcessingModeMap,
    (void (*)(void *))CAudioSignalProcessingModeMap::~CAudioSignalProcessingModeMap);
  `eh vector constructor iterator'(
    (char *)this + 1528,
    0x10uLL,
    4uLL,
    (void (*)(void *))CAudioSignalProcessingModeArray::CAudioSignalProcessingModeArray,
    (void (*)(void *))ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>);
  `eh vector constructor iterator'(
    (char *)this + 1592,
    0x10uLL,
    4uLL,
    (void (*)(void *))CAudioSignalProcessingModeArray::CAudioSignalProcessingModeArray,
    (void (*)(void *))ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>);
  *((_QWORD *)this + 207) = 4LL;
  *((_QWORD *)this + 208) = (char *)this + 264;
  if ( this == (CEndpointCharacteristics *)-264LL )
  {
    v5 = gsl::fail_fast::fail_fast(
           (gsl::fail_fast *)v14,
           "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 585");
    gsl::details::throw_exception<gsl::fail_fast>(v5);
  }
  *((_QWORD *)this + 209) = 4LL;
  *((_QWORD *)this + 210) = (char *)this + 648;
  if ( this == (CEndpointCharacteristics *)-648LL )
  {
    v6 = gsl::fail_fast::fail_fast(
           (gsl::fail_fast *)v15,
           "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 585");
    gsl::details::throw_exception<gsl::fail_fast>(v6);
  }
  *((_QWORD *)this + 211) = 4LL;
  *((_QWORD *)this + 212) = (char *)this + 1032;
  if ( this == (CEndpointCharacteristics *)-1032LL )
  {
    v7 = gsl::fail_fast::fail_fast(
           (gsl::fail_fast *)v16,
           "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 585");
    gsl::details::throw_exception<gsl::fail_fast>(v7);
  }
  *((_QWORD *)this + 213) = 4LL;
  *((_QWORD *)this + 214) = (char *)this + 1416;
  if ( this == (CEndpointCharacteristics *)-1416LL )
  {
    v8 = gsl::fail_fast::fail_fast(
           (gsl::fail_fast *)v17,
           "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 585");
    gsl::details::throw_exception<gsl::fail_fast>(v8);
  }
  *((_QWORD *)this + 215) = 4LL;
  *((_QWORD *)this + 216) = (char *)this + 1432;
  if ( this == (CEndpointCharacteristics *)-1432LL )
  {
    v9 = gsl::fail_fast::fail_fast(
           (gsl::fail_fast *)v18,
           "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 585");
    gsl::details::throw_exception<gsl::fail_fast>(v9);
  }
  *((_QWORD *)this + 217) = 4LL;
  *((_QWORD *)this + 218) = (char *)this + 1528;
  if ( this == (CEndpointCharacteristics *)-1528LL )
  {
    v10 = gsl::fail_fast::fail_fast(
            (gsl::fail_fast *)v19,
            "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 585");
    gsl::details::throw_exception<gsl::fail_fast>(v10);
  }
  *((_QWORD *)this + 219) = 4LL;
  *((_QWORD *)this + 220) = (char *)this + 1592;
  if ( this == (CEndpointCharacteristics *)-1592LL )
  {
    v11 = gsl::fail_fast::fail_fast(
            (gsl::fail_fast *)v20,
            "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 585");
    gsl::details::throw_exception<gsl::fail_fast>(v11);
  }
  CSpatialProperties::CSpatialProperties((CEndpointCharacteristics *)((char *)this + 1768));
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 8688), 0, 0);
  *((_DWORD *)this + 2182) = 100;
  *((_WORD *)this + 4366) = 0;
  *((_BYTE *)this + 8734) = 0;
  return this;
}
