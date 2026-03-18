/*
 * XREFs of ?SetProcDeviceRequest@@YGHPAUtagPROCESSINFO@@PAUtagRAWINPUTDEVICE@@PAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0xC9ACA
 * Callers:
 *     __RegisterRawInputDevices@12 @ 0xC9866 (__RegisterRawInputDevices@12.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?SetLegacyDeviceFlags@@YGXPAUtagPROCESS_HID_TABLE@@PBUtagRAWINPUTDEVICE@@@Z @ 0xC4D14 (-SetLegacyDeviceFlags@@YGXPAUtagPROCESS_HID_TABLE@@PBUtagRAWINPUTDEVICE@@@Z.c)
 *     ?InsertProcRequest@@YGHPAUtagPROCESSINFO@@PBUtagRAWINPUTDEVICE@@PAUtagPROCESS_HID_REQUEST@@KHPAUtagWND@@H@Z @ 0xC9B90 (-InsertProcRequest@@YGHPAUtagPROCESSINFO@@PBUtagRAWINPUTDEVICE@@PAUtagPROCESS_HID_REQUEST@@KHPAU.c)
 *     ?AllocateHidProcessRequest@@YGPAUtagPROCESS_HID_REQUEST@@GG@Z @ 0xC9D3C (-AllocateHidProcessRequest@@YGPAUtagPROCESS_HID_REQUEST@@GG@Z.c)
 *     ?GetOperationMode@@YGKPBUtagRAWINPUTDEVICE@@H@Z @ 0xC9D76 (-GetOperationMode@@YGKPBUtagRAWINPUTDEVICE@@H@Z.c)
 *     ?IsLegacyDevice@@YGHGG@Z @ 0xC9DAA (-IsLegacyDevice@@YGHGG@Z.c)
 *     ?RemoveProcRequest@@YGXPAUtagPROCESSINFO@@PAUtagPROCESS_HID_REQUEST@@KH@Z @ 0x143E01 (-RemoveProcRequest@@YGXPAUtagPROCESSINFO@@PAUtagPROCESS_HID_REQUEST@@KH@Z.c)
 */

int __fastcall SetProcDeviceRequest(int a1, int a2, struct tagPROCESSINFO *a3, struct tagPROCESSINFO *a4, int a5)
{
  struct tagPROCESS_HID_REQUEST *HidProcessRequest; // edi
  unsigned int v7; // ebx
  int v8; // ecx
  unsigned __int16 v10; // [esp+0h] [ebp-1Ch]
  const struct tagRAWINPUTDEVICE *v11; // [esp+0h] [ebp-1Ch]
  struct tagWND *v12; // [esp+0h] [ebp-1Ch]
  unsigned __int16 v13; // [esp+4h] [ebp-18h]
  int v14; // [esp+4h] [ebp-18h]
  int v15; // [esp+4h] [ebp-18h]
  struct tagRAWINPUTDEVICE *OperationMode; // [esp+Ch] [ebp-10h]
  struct tagPROCESS_HID_REQUEST *v17; // [esp+10h] [ebp-Ch]
  int v18; // [esp+14h] [ebp-8h]
  int v20; // [esp+2Ch] [ebp+10h]

  HidProcessRequest = a3;
  v17 = (struct tagPROCESS_HID_REQUEST *)IsLegacyDevice(v10, v13);
  v7 = 0;
  if ( a5 == 1 )
  {
    v18 = 1;
    v20 = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a2 + 8) = 0;
  }
  else
  {
    v8 = *(_DWORD *)(a2 + 8);
    v18 = 0;
    v20 = 0;
    if ( v8 )
    {
      v7 = ValidateHwnd(v8);
      if ( !v7 )
        return 0;
    }
  }
  OperationMode = (struct tagRAWINPUTDEVICE *)GetOperationMode(v11, v14);
  if ( !a3 )
  {
    HidProcessRequest = AllocateHidProcessRequest((unsigned __int16)v12, v15);
    if ( !HidProcessRequest )
    {
      UserSetLastError((struct _NT_TIB *)8);
      return 0;
    }
  }
  if ( v20 )
    *((_DWORD *)HidProcessRequest + 6) = v20;
  if ( a3 )
  {
    RemoveProcRequest(a4, v17, (unsigned int)v12, v15);
    HidProcessRequest = a3;
  }
  if ( !InsertProcRequest(HidProcessRequest, OperationMode, v17, v7, v18, v12, v15) )
  {
    if ( HidProcessRequest )
      Win32FreePool(HidProcessRequest);
    return 0;
  }
  if ( v17 )
    SetLegacyDeviceFlags(*(_DWORD *)(a1 + 472), a2);
  return 1;
}
