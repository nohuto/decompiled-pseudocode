/*
 * XREFs of imp_WdfDeviceInitSetFileObjectConfig @ 0x1C0044CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000A0E0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E65C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C002E818 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_D @ 0x1C0039220 (WPP_IFR_SF_D.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00592C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceInitSetFileObjectConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_FILEOBJECT_CONFIG *FileObjectConfig,
        _WDF_OBJECT_ATTRIBUTES *FileObjectAttributes)
{
  _FX_DRIVER_GLOBALS *v7; // rbx
  unsigned __int8 v8; // dl
  _WDF_FILEOBJECT_CLASS FileObjectClass; // esi
  unsigned int _a1; // ecx
  unsigned __int16 v11; // r9
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  v7 = DeviceInit->DriverGlobals;
  if ( !FileObjectConfig )
    FxVerifierNullBugCheck(v7, retaddr);
  if ( FileObjectConfig->Size != 40 )
  {
    WPP_IFR_SF_dd(v7, 2u, 0x12u, 0xBu, WPP_FxDeviceInitApi_cpp_Traceguids, FileObjectConfig->Size, 40);
LABEL_24:
    FxVerifierDbgBreakPoint(v7);
    return;
  }
  if ( (int)FxValidateObjectAttributes(v7, FileObjectAttributes, 7) < 0 )
    goto LABEL_24;
  if ( FileObjectConfig->AutoForwardCleanupClose > (unsigned int)WdfUseDefault )
  {
    WPP_IFR_SF_D(v7, v8, 0x12u, 0xCu, WPP_FxDeviceInitApi_cpp_Traceguids, FileObjectConfig->AutoForwardCleanupClose);
    goto LABEL_24;
  }
  DeviceInit->FileObject.Set = 1;
  DeviceInit->FileObject.AutoForwardCleanupClose = FileObjectConfig->AutoForwardCleanupClose;
  FileObjectClass = FileObjectConfig->FileObjectClass;
  _a1 = FileObjectClass & 0x7FFFFFFF;
  if ( (FileObjectClass & 0x7FFFFFFFu) - 1 > 3 )
  {
    v11 = 13;
    goto LABEL_19;
  }
  if ( v7->IsUserModeDriver && _a1 - 2 <= 1 )
  {
    FileObjectClass = ((FileObjectClass >= WdfFileObjectInvalid) << 31) - 2147483644;
    if ( v7->FxVerboseOn )
      WPP_IFR_SF_dd(v7, 5u, 0x12u, 0xEu, WPP_FxDeviceInitApi_cpp_Traceguids, _a1, 4);
    _a1 = FileObjectClass & 0x7FFFFFFF;
  }
  if ( FileObjectClass < WdfFileObjectInvalid && (_a1 < 2 || _a1 > 4) )
  {
    v11 = 15;
LABEL_19:
    WPP_IFR_SF_d(v7, 2u, 0x12u, v11, WPP_FxDeviceInitApi_cpp_Traceguids, FileObjectClass);
    goto LABEL_24;
  }
  DeviceInit->FileObject.Class = FileObjectClass;
  *(_OWORD *)&DeviceInit->FileObject.Callbacks.Size = *(_OWORD *)&FileObjectConfig->Size;
  *(_OWORD *)&DeviceInit->FileObject.Callbacks.EvtFileClose = *(_OWORD *)&FileObjectConfig->EvtFileClose;
  *(_QWORD *)&DeviceInit->FileObject.Callbacks.AutoForwardCleanupClose = *(_QWORD *)&FileObjectConfig->AutoForwardCleanupClose;
  if ( FileObjectAttributes )
  {
    *(_OWORD *)&DeviceInit->FileObject.Attributes.Size = *(_OWORD *)&FileObjectAttributes->Size;
    *(_OWORD *)&DeviceInit->FileObject.Attributes.EvtDestroyCallback = *(_OWORD *)&FileObjectAttributes->EvtDestroyCallback;
    *(_OWORD *)&DeviceInit->FileObject.Attributes.ParentObject = *(_OWORD *)&FileObjectAttributes->ParentObject;
    DeviceInit->FileObject.Attributes.ContextTypeInfo = FileObjectAttributes->ContextTypeInfo;
  }
}
