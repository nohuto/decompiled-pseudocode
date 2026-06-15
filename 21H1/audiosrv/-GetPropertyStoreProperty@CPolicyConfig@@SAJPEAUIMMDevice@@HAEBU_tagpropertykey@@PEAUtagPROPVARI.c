/*
 * XREFs of ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180044710
 * Callers:
 *     ?IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z @ 0x180044600 (-IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z @ 0x180044688 (-IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800D7D1C (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 *     ?GetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800D7DD0 (-GetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 *     ?GetShareMode@CPolicyConfig@@UEAAJPEBGPEAW4_DeviceShareMode@@@Z @ 0x1800D7EB0 (-GetShareMode@CPolicyConfig@@UEAAJPEBGPEAW4_DeviceShareMode@@@Z.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002C164 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPolicyConfig::GetPropertyStoreProperty(
        struct IUnknown *a1,
        __int64 a2,
        const struct _tagpropertykey *a3,
        struct tagPROPVARIANT *a4)
{
  int v6; // ebx
  __int64 v7; // rcx
  struct IUnknown *v9; // rax
  __int64 v10; // [rsp+20h] [rbp-10h] BYREF
  struct IUnknown *v11; // [rsp+28h] [rbp-8h] BYREF

  v10 = 0LL;
  v6 = 0;
  if ( !(_DWORD)a2 )
  {
    v6 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, __int64 *))a1->lpVtbl[1].AddRef)(a1, a2, &v10);
LABEL_3:
    if ( v6 < 0 )
      AudSrvTraceLoggingErrorHelper("TryGetDevicePropertyStore", 0x8C1u, v6);
    v7 = v10;
    goto LABEL_6;
  }
  v9 = 0LL;
  v11 = 0LL;
  if ( a1 )
  {
    ATL::AtlComQIPtrAssign(&v11, a1, &GUID_c537ee8d_5574_454a_9354_aaa4e421d31e);
    v9 = v11;
    if ( v11 )
    {
      v6 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, __int64 *))v11->lpVtbl[1].Release)(v11, 0LL, &v10);
      if ( v11 )
        ((void (__fastcall *)(struct IUnknown *))v11->lpVtbl->Release)(v11);
      goto LABEL_3;
    }
  }
  v7 = 0LL;
  v10 = 0LL;
  if ( v9 )
  {
    ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
    v6 = 0;
    v7 = v10;
LABEL_7:
    if ( v7 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)v7 + 40LL))(
             v7,
             a3,
             a4);
      v7 = v10;
    }
    else
    {
      *(_OWORD *)&a4->vt = 0LL;
      a4->bstrblobVal.pData = 0LL;
    }
    if ( v6 >= 0 )
      goto LABEL_10;
    goto LABEL_20;
  }
LABEL_6:
  if ( v6 >= 0 )
    goto LABEL_7;
LABEL_20:
  AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetPropertyStoreProperty", 0xB00u, v6);
  v7 = v10;
LABEL_10:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v6;
}
