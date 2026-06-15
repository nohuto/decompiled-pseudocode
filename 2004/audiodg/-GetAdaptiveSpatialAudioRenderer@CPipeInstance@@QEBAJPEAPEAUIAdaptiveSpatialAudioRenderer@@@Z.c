/*
 * XREFs of ?GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z @ 0x14003CCA8
 * Callers:
 *     ?GetSpatialResourcePoolSize@CAudioDeviceGraph@@UEAAJPEAI0PEAH@Z @ 0x14003F570 (-GetSpatialResourcePoolSize@CAudioDeviceGraph@@UEAAJPEAI0PEAH@Z.c)
 *     ?GetSpatialResourceRevocationTime@CAudioDeviceGraph@@UEAAJPEA_J@Z @ 0x14003F640 (-GetSpatialResourceRevocationTime@CAudioDeviceGraph@@UEAAJPEA_J@Z.c)
 *     ?GetSpatialUtilization@CAudioDeviceGraph@@UEAAJPEAI00@Z @ 0x14003F6F0 (-GetSpatialUtilization@CAudioDeviceGraph@@UEAAJPEAI00@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@PEAPEAUIAudioProcessingObject@@@Z @ 0x14003CB40 (-GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionI.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x14003D47C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::GetAdaptiveSpatialAudioRenderer(
        CPipeInstance *this,
        struct IAdaptiveSpatialAudioRenderer **a2)
{
  struct IAudioProcessingObject *v4; // rbx
  unsigned int v5; // edi
  char *v7; // [rsp+28h] [rbp-70h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  struct IAudioProcessingObject *v9; // [rsp+A8h] [rbp+10h] BYREF

  v9 = 0LL;
  *a2 = 0LL;
  CPipeInstance::GetAPONodeAndConnection(this, &GUID_24bdc606_d710_4d62_be35_be665fbc3e00, 0LL, 0LL, &v9);
  v4 = v9;
  if ( v9 )
  {
    v5 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IAdaptiveSpatialAudioRenderer **))v9->lpVtbl->QueryInterface)(
           v9,
           &GUID_24bdc606_d710_4d62_be35_be665fbc3e00,
           a2);
  }
  else if ( *((_DWORD *)this + 28) != 1 || *((_DWORD *)this + 3) || *((_DWORD *)this + 32) )
  {
    v5 = -2147023728;
  }
  else
  {
    LODWORD(v7) = *((_DWORD *)this + 40);
    v5 = -2147023728;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x129F,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
      (const char *)0x80070490LL,
      (int)"Could not find ASAR in device pipe for EndpointId: {%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
      v7,
      *((unsigned __int16 *)this + 82),
      *((unsigned __int16 *)this + 83),
      *((unsigned __int8 *)this + 168),
      *((unsigned __int8 *)this + 169),
      *((unsigned __int8 *)this + 170),
      *((unsigned __int8 *)this + 171),
      *((unsigned __int8 *)this + 172),
      *((unsigned __int8 *)this + 173),
      *((unsigned __int8 *)this + 174),
      *((unsigned __int8 *)this + 175));
  }
  if ( v4 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v4->lpVtbl->Release)(v4);
  return v5;
}
