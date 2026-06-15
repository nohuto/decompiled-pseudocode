/*
 * XREFs of ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800D7DDC
 * Callers:
 *     ?Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z @ 0x1800C5DE0 (-Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z.c)
 *     ?OnPropertyValueChanged@AudioEffectsWatcher@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x1800C6150 (-OnPropertyValueChanged@AudioEffectsWatcher@@UEAAJPEBGU_tagpropertykey@@@Z.c)
 *     ?IsExclusiveModeDisabled@@YAHPEBG@Z @ 0x1800DCB50 (-IsExclusiveModeDisabled@@YAHPEBG@Z.c)
 * Callees:
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180044700 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARI.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F1C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::GetPropertyStoreProperty(
        const unsigned __int16 *a1,
        unsigned int a2,
        const struct _tagpropertykey *a3,
        struct tagPROPVARIANT *a4)
{
  int PropertyStoreProperty; // ebx
  struct IMMDevice *v9; // [rsp+20h] [rbp-18h] BYREF

  v9 = 0LL;
  PropertyStoreProperty = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
                            *(_QWORD *)&g_DeviceEnumerator,
                            a1,
                            &v9);
  if ( PropertyStoreProperty < 0
    || (PropertyStoreProperty = CPolicyConfig::GetPropertyStoreProperty((struct IUnknown *)v9, a2, a3, a4),
        PropertyStoreProperty < 0) )
  {
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetPropertyStoreProperty", 2773, PropertyStoreProperty);
  }
  if ( v9 )
    ((void (__fastcall *)(struct IMMDevice *))v9->lpVtbl->Release)(v9);
  return (unsigned int)PropertyStoreProperty;
}
