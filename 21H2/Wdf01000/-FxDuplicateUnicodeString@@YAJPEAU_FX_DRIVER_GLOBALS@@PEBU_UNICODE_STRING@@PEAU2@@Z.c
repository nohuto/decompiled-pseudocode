/*
 * XREFs of ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00273A8
 * Callers:
 *     imp_WdfDeviceCreateDeviceInterface @ 0x1C001E730 (imp_WdfDeviceCreateDeviceInterface.c)
 *     ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x1C001F4E4 (-_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x1C0027270 (imp_WdfPdoInitAddCompatibleID.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C002CAD0 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     imp_WdfRegistryQueryString @ 0x1C002CF70 (imp_WdfRegistryQueryString.c)
 *     ?Assign@FxString@@QEAAJPEBG@Z @ 0x1C002D548 (-Assign@FxString@@QEAAJPEBG@Z.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x1C002F4B0 (imp_WdfPdoInitAddHardwareID.c)
 *     imp_WdfStringCreate @ 0x1C002F6E0 (imp_WdfStringCreate.c)
 *     ?AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0030870 (-AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfPdoInitAssignInstanceID @ 0x1C0030930 (imp_WdfPdoInitAssignInstanceID.c)
 *     imp_WdfPdoInitAssignDeviceID @ 0x1C0030A30 (imp_WdfPdoInitAssignDeviceID.c)
 *     imp_WdfDeviceInitAssignSDDLString @ 0x1C00312A0 (imp_WdfDeviceInitAssignSDDLString.c)
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0031464 (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C00320D0 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     imp_WdfDeviceAssignMofResourceName @ 0x1C00323A0 (imp_WdfDeviceAssignMofResourceName.c)
 *     imp_WdfDeviceRetrieveDeviceName @ 0x1C0034160 (imp_WdfDeviceRetrieveDeviceName.c)
 *     imp_WdfPdoInitAssignContainerID @ 0x1C00348A0 (imp_WdfPdoInitAssignContainerID.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?RtlUShortAdd@@YAJGGPEAG@Z @ 0x1C00274C0 (-RtlUShortAdd@@YAJGGPEAG@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     memmove @ 0x1C0036E00 (memmove.c)
 */

__int64 __fastcall FxDuplicateUnicodeString(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *Source,
        _UNICODE_STRING *Destination)
{
  size_t Length; // rbp
  int _a1; // eax
  unsigned __int16 v8; // r9
  unsigned int v9; // esi
  unsigned __int64 v10; // rsi
  wchar_t *v11; // rcx
  ULONG Tag; // ecx
  void *v13; // rax
  FX_POOL **v14; // rax
  wchar_t *Buffer; // rax
  __m128i v17; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int16 srcCbLengthAndNull; // [rsp+68h] [rbp+10h] BYREF

  Length = Source->Length;
  srcCbLengthAndNull = 0;
  _a1 = RtlUShortAdd(Length, 2u, &srcCbLengthAndNull);
  v9 = _a1;
  if ( _a1 < 0 )
  {
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 2u, 0xAu, WPP_stringutil_cpp_Traceguids, _a1);
    return v9;
  }
  else
  {
    v10 = srcCbLengthAndNull;
    if ( v8 >= srcCbLengthAndNull )
    {
LABEL_9:
      memmove(Destination->Buffer, Source->Buffer, Length);
      Buffer = Destination->Buffer;
      Destination->Length = Length;
      Buffer[Length >> 1] = 0;
      return 0LL;
    }
    v11 = Destination->Buffer;
    if ( v11 )
    {
      FxPoolFree((FX_POOL_TRACKER *)v11);
      *Destination = 0LL;
    }
    Tag = FxDriverGlobals->Tag;
    v13 = retaddr;
    v17.m128i_i64[0] = 0LL;
    v17.m128i_i64[1] = 256LL;
    if ( !FxDriverGlobals->FxPoolTrackingOn )
      v13 = 0LL;
    v14 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, &v17, v10, Tag, v13);
    Destination->Buffer = (wchar_t *)v14;
    if ( v14 )
    {
      Destination->MaximumLength = v10;
      goto LABEL_9;
    }
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 2u, 0xBu, WPP_stringutil_cpp_Traceguids, -1073741670);
    return 3221225626LL;
  }
}
