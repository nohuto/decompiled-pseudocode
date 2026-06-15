/*
 * XREFs of ??1CEndpointCharacteristics@@MEAA@XZ @ 0x18011993C
 * Callers:
 *     ??_ECEndpointCharacteristics@@MEAAPEAXI@Z @ 0x18011A930 (--_ECEndpointCharacteristics@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180038CE4 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x18004C2A4 (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18006A760 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ??_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z @ 0x18011A888 (--_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z.c)
 *     ??1CSpatialProperties@@QEAA@XZ @ 0x18012632C (--1CSpatialProperties@@QEAA@XZ.c)
 */

void __fastcall CEndpointCharacteristics::~CEndpointCharacteristics(CEndpointCharacteristics *this)
{
  signed int i; // edi
  __int64 v3; // rcx
  unsigned int v4; // edx
  CConnectorProcessingModeCharacteristics *v5; // rcx
  signed int j; // edi
  __int64 v7; // rcx
  unsigned int v8; // edx
  CConnectorProcessingModeCharacteristics *v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  void *v14; // rcx
  __int64 v15; // rcx

  *(_QWORD *)this = &CEndpointCharacteristics::`vftable';
  if ( *((_QWORD *)this + 28) )
  {
    for ( i = 0; ; ++i )
    {
      v3 = *((_QWORD *)this + 28);
      if ( i >= *(_DWORD *)(v3 + 8) )
        break;
      v5 = *(CConnectorProcessingModeCharacteristics **)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                                                          v3,
                                                          i);
      if ( v5 )
        CConnectorProcessingModeCharacteristics::`scalar deleting destructor'(v5, v4);
    }
  }
  if ( *((_QWORD *)this + 29) )
  {
    for ( j = 0; ; ++j )
    {
      v7 = *((_QWORD *)this + 29);
      if ( j >= *(_DWORD *)(v7 + 8) )
        break;
      v9 = *(CConnectorProcessingModeCharacteristics **)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                                                          v7,
                                                          j);
      if ( v9 )
        CConnectorProcessingModeCharacteristics::`scalar deleting destructor'(v9, v8);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 8688));
  CSpatialProperties::~CSpatialProperties((CEndpointCharacteristics *)((char *)this + 1768));
  `eh vector destructor iterator'(
    (char *)this + 1592,
    16LL,
    4LL,
    (void (*)(void *))ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>);
  `eh vector destructor iterator'(
    (char *)this + 1528,
    16LL,
    4LL,
    (void (*)(void *))ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>);
  `eh vector destructor iterator'(
    (char *)this + 1432,
    24LL,
    4LL,
    (void (*)(void *))CAudioSignalProcessingModeMap::~CAudioSignalProcessingModeMap);
  `eh vector destructor iterator'(
    (char *)this + 1032,
    96LL,
    4LL,
    (void (*)(void *))SystemEffectDescriptor::~SystemEffectDescriptor);
  `eh vector destructor iterator'(
    (char *)this + 648,
    96LL,
    4LL,
    (void (*)(void *))SystemEffectDescriptor::~SystemEffectDescriptor);
  `eh vector destructor iterator'(
    (char *)this + 264,
    96LL,
    4LL,
    (void (*)(void *))SystemEffectDescriptor::~SystemEffectDescriptor);
  v10 = *((_QWORD *)this + 29);
  if ( v10 )
  {
    if ( *(_QWORD *)v10 )
    {
      free(*(void **)v10);
      *(_QWORD *)v10 = 0LL;
    }
    *(_DWORD *)(v10 + 8) = 0;
    *(_DWORD *)(v10 + 12) = 0;
    operator delete((void *)v10, (const struct std::nothrow_t *)0x10);
  }
  *((_QWORD *)this + 29) = 0LL;
  v11 = *((_QWORD *)this + 28);
  if ( v11 )
  {
    if ( *(_QWORD *)v11 )
    {
      free(*(void **)v11);
      *(_QWORD *)v11 = 0LL;
    }
    *(_DWORD *)(v11 + 8) = 0;
    *(_DWORD *)(v11 + 12) = 0;
    operator delete((void *)v11, (const struct std::nothrow_t *)0x10);
  }
  *((_QWORD *)this + 28) = 0LL;
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)this + 168);
  `eh vector destructor iterator'(
    (char *)this + 88,
    16LL,
    4LL,
    (void (*)(void *))ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>);
  v12 = *((_QWORD *)this + 10);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = *((_QWORD *)this + 5);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = (void *)*((_QWORD *)this + 3);
  if ( v14 )
    CoTaskMemFree(v14);
  v15 = *((_QWORD *)this + 2);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  *((_DWORD *)this + 3) = -1073741823;
}
