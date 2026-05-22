/*
 * XREFs of ?AddSpatialObjectDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEB_W@Z @ 0x1800D69E4
 * Callers:
 *     ?OnSpatialObjectDeviceAdded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@EEAAXPEAUISpatialObjectDeviceWatcher@Holographic@34@PEB_W@Z @ 0x1800D7DC0 (-OnSpatialObjectDeviceAdded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Interna.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateSpatialInteractionObjectDevices@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@SAJPEAUISpatialInteractionSourceDeviceCollectionInternal@234@PEAUISpatialObjectDDIClientFactory@Holographic@34@PEB_WV?$function@$$A6AJPEAVSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@Z@std@@@Z @ 0x1800D6CB0 (-CreateSpatialInteractionObjectDevices@SpatialInteractionObjectDevice@SpatialInteractions@Intern.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AddSpatialObjectDevice(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        const wchar_t *a2)
{
  int SpatialInteractionObjectDevices; // eax
  const char *v3; // r9
  unsigned int v4; // ebx
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-58h]
  __int64 (__fastcall **v7)(); // [rsp+30h] [rbp-48h] BYREF
  __int128 v8; // [rsp+38h] [rbp-40h]
  __int64 (__fastcall ***v9)(); // [rsp+68h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  const wchar_t *v11; // [rsp+88h] [rbp+10h] BYREF

  v11 = a2;
  *(_QWORD *)&v6 = this;
  *((_QWORD *)&v6 + 1) = &v11;
  v7 = off_1801B0C70;
  v8 = v6;
  v9 = &v7;
  try
  {
    SpatialInteractionObjectDevices = Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::CreateSpatialInteractionObjectDevices();
    v4 = SpatialInteractionObjectDevices;
    if ( SpatialInteractionObjectDevices >= 0 )
    {
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x184,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
        (const char *)(unsigned int)SpatialInteractionObjectDevices);
      result = v4;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x187,
                           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteracti"
                                    "onobjectdevice.cpp",
                           v3);
  }
  return result;
}
