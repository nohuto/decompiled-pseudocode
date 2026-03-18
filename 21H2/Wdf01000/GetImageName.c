/*
 * XREFs of GetImageName @ 0x1C0026FBC
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C0027650 (imp_WdfDriverCreate.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     RtlUnicodeStringCopy @ 0x1C00270F0 (RtlUnicodeStringCopy.c)
 *     ?RtlUShortAdd@@YAJGGPEAG@Z @ 0x1C00274C0 (-RtlUShortAdd@@YAJGGPEAG@Z.c)
 *     GetNameFromPath @ 0x1C00275B8 (GetNameFromPath.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_D @ 0x1C005B340 (WPP_IFR_SF_D.c)
 */

__int64 __fastcall GetImageName(_FX_DRIVER_GLOBALS *DriverGlobals, _UNICODE_STRING *ImageName)
{
  _DRIVER_OBJECT *m_DriverObject; // rcx
  int _a1; // eax
  unsigned int v6; // edi
  wchar_t *Buffer; // r14
  unsigned __int8 v8; // dl
  signed int v9; // eax
  unsigned __int8 v10; // dl
  unsigned __int16 v11; // di
  ULONG Tag; // ecx
  void *v13; // rax
  FX_POOL **v14; // rax
  unsigned __int8 v15; // dl
  _UNICODE_STRING imagePath; // [rsp+30h] [rbp-30h] BYREF
  _UNICODE_STRING Name; // [rsp+40h] [rbp-20h] BYREF
  __m128i v19; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+78h] [rbp+18h]
  unsigned __int16 size; // [rsp+80h] [rbp+20h] BYREF

  *ImageName = 0LL;
  m_DriverObject = DriverGlobals->DriverObject.m_DriverObject;
  imagePath = 0LL;
  size = 0;
  Name = 0LL;
  _a1 = IoQueryFullDriverPath(m_DriverObject, &imagePath);
  v6 = _a1;
  if ( _a1 < 0 )
  {
    WPP_IFR_SF_d(DriverGlobals, 2u, 0x11u, 0x14u, WPP_FxTelemetryKm_cpp_Traceguids, _a1);
  }
  else
  {
    Buffer = imagePath.Buffer;
    GetNameFromPath(&imagePath, &Name);
    if ( Name.Length )
    {
      v9 = RtlUShortAdd(Name.Length, 2u, &size);
      v6 = v9;
      if ( v9 < 0 )
      {
        WPP_IFR_SF_D(DriverGlobals, v10, 0x11u, 0x16u, WPP_FxTelemetryKm_cpp_Traceguids, v9);
      }
      else
      {
        v11 = size;
        Tag = DriverGlobals->Tag;
        v13 = retaddr;
        v19.m128i_i64[0] = 0LL;
        v19.m128i_i64[1] = 256LL;
        if ( !DriverGlobals->FxPoolTrackingOn )
          v13 = 0LL;
        v14 = FxPoolAllocator(DriverGlobals, &DriverGlobals->FxPoolFrameworks, &v19, size, Tag, v13);
        ImageName->Buffer = (wchar_t *)v14;
        if ( v14 )
        {
          ImageName->Length = 0;
          ImageName->MaximumLength = v11;
          v6 = RtlUnicodeStringCopy(ImageName, &Name);
        }
        else
        {
          v6 = -1073741670;
          WPP_IFR_SF_D(DriverGlobals, v15, 0x11u, 0x17u, WPP_FxTelemetryKm_cpp_Traceguids, 0xC000009A);
        }
      }
    }
    else
    {
      v6 = -1073741811;
      WPP_IFR_SF_D(DriverGlobals, v8, 0x11u, 0x15u, WPP_FxTelemetryKm_cpp_Traceguids, 0xC000000D);
    }
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0);
  }
  return v6;
}
