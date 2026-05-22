/*
 * XREFs of ?IsHighLatencyInterface@PenIdentity@@YA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180132424
 * Callers:
 *     ??0PenDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@PEAX1@Z @ 0x180131354 (--0PenDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@PEAX1@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18003D2A4 (--_U@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall PenIdentity::IsHighLatencyInterface(const WCHAR *pszDeviceInterface)
{
  LPCWSTR v1; // rdi
  BYTE *v2; // rbx
  const struct std::nothrow_t *v3; // rdx
  char v4; // di
  ULONG PropertyBufferSize; // [rsp+60h] [rbp+20h] BYREF
  DEVPROPTYPE PropertyType; // [rsp+68h] [rbp+28h] BYREF
  DEVNODE pdnDevInst; // [rsp+70h] [rbp+30h] BYREF
  DEVNODE dnDevInst; // [rsp+78h] [rbp+38h] BYREF

  v1 = pszDeviceInterface;
  PropertyType = 0;
  PropertyBufferSize = 0;
  v2 = 0LL;
  if ( *((_QWORD *)pszDeviceInterface + 3) >= 8uLL )
    pszDeviceInterface = *(const WCHAR **)pszDeviceInterface;
  if ( CM_Get_Device_Interface_PropertyW(
         pszDeviceInterface,
         &DEVPKEY_Device_InstanceId,
         &PropertyType,
         0LL,
         &PropertyBufferSize,
         0) )
  {
    goto LABEL_11;
  }
  v2 = (BYTE *)operator new[](saturated_mul(PropertyBufferSize, 2uLL));
  if ( *((_QWORD *)v1 + 3) >= 8uLL )
    v1 = *(LPCWSTR *)v1;
  if ( CM_Get_Device_Interface_PropertyW(v1, &DEVPKEY_Device_InstanceId, &PropertyType, v2, &PropertyBufferSize, 0)
    || CM_Locate_DevNodeW(&pdnDevInst, (DEVINSTID_W)v2, 0)
    || CM_Get_Parent(&dnDevInst, pdnDevInst, 0)
    || (PropertyBufferSize = 0,
        CM_Get_DevNode_PropertyW(
          dnDevInst,
          &DEVPKEY_Bluetooth_DeviceAddress,
          &PropertyType,
          0LL,
          &PropertyBufferSize,
          0)) )
  {
LABEL_11:
    v4 = 0;
  }
  else
  {
    v4 = 1;
  }
  if ( v2 )
    operator delete(v2, v3);
  return v4;
}
