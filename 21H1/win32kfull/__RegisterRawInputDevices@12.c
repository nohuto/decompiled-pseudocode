/*
 * XREFs of __RegisterRawInputDevices@12 @ 0xC9866
 * Callers:
 *     _NtUserRegisterRawInputDevices@12 @ 0xC95A2 (_NtUserRegisterRawInputDevices@12.c)
 *     _RegisterModernAppThreadForRawKeyboard@4 @ 0x14438A (_RegisterModernAppThreadForRawKeyboard@4.c)
 *     _UnregisterModernAppThreadForRawKeyboard@4 @ 0x14441B (_UnregisterModernAppThreadForRawKeyboard@4.c)
 *     ?RegisterTabletButtonHandler@@YGXXZ @ 0x146FC0 (-RegisterTabletButtonHandler@@YGXXZ.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _AllocateProcessHidTable@0 @ 0xC9520 (_AllocateProcessHidTable@0.c)
 *     ?CleanupFreedTLCInfo@@YGXXZ @ 0xC977A (-CleanupFreedTLCInfo@@YGXXZ.c)
 *     ?HidRequestValidityCheck@@YGHQAUtagRAWINPUTDEVICE@@PBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0xC999E (-HidRequestValidityCheck@@YGHQAUtagRAWINPUTDEVICE@@PBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_INPU.c)
 *     ?SetProcDeviceRequest@@YGHPAUtagPROCESSINFO@@PAUtagRAWINPUTDEVICE@@PAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0xC9ACA (-SetProcDeviceRequest@@YGHPAUtagPROCESSINFO@@PAUtagRAWINPUTDEVICE@@PAUtagPROCESS_HID_REQUEST@@KW.c)
 *     ?IsLegacyDevice@@YGHGG@Z @ 0xC9DAA (-IsLegacyDevice@@YGHGG@Z.c)
 *     ?SearchProcessHidRequest@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESSINFO@@GGPAK@Z @ 0xC9DCE (-SearchProcessHidRequest@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESSINFO@@GGPAK@Z.c)
 *     ?AdjustLegacyDeviceFlags@@YGXPAUtagPROCESSINFO@@@Z @ 0xC9E3A (-AdjustLegacyDeviceFlags@@YGXPAUtagPROCESSINFO@@@Z.c)
 *     _FreeHidProcessRequest@12 @ 0xD2AF8 (_FreeHidProcessRequest@12.c)
 *     ?SearchProcessHidRequestUsagePage@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@G@Z @ 0xEBB92 (-SearchProcessHidRequestUsagePage@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@G@Z.c)
 */

int __fastcall _RegisterRawInputDevices(int a1, unsigned int a2, int a3)
{
  int v4; // esi
  int CurrentProcessWin32Process; // ebx
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  _DWORD *ProcessHidTable; // eax
  unsigned int i; // edi
  struct tagPROCESS_HID_REQUEST *v11; // eax
  _DWORD *v12; // ebx
  _DWORD *j; // esi
  int v15; // edi
  struct tagPROCESSINFO *v16; // [esp+0h] [ebp-2Ch]
  struct tagPROCESS_HID_TABLE *v17; // [esp+0h] [ebp-2Ch]
  unsigned int *v18; // [esp+4h] [ebp-28h]
  _DWORD v19[3]; // [esp+10h] [ebp-1Ch] BYREF
  int v20; // [esp+1Ch] [ebp-10h]
  int v21; // [esp+20h] [ebp-Ch]
  unsigned int v22; // [esp+24h] [ebp-8h]
  unsigned __int16 v23[2]; // [esp+28h] [ebp-4h] BYREF
  int v24; // [esp+34h] [ebp+8h]

  v4 = a1;
  v22 = a2;
  v20 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  v6 = *(_DWORD *)(CurrentProcessWin32Process + 472);
  if ( v6 )
  {
    *(_DWORD *)(v6 + 44) = 0;
    *(_DWORD *)(v6 + 48) = 0;
    v6 = *(_DWORD *)(CurrentProcessWin32Process + 472);
  }
  *(_DWORD *)v23 = 0;
  if ( a2 )
  {
    v7 = (_DWORD *)v4;
    v21 = v4;
    while ( 1 )
    {
      v8 = *(_DWORD *)(CurrentProcessWin32Process + 472);
      v19[0] = *v7;
      v19[1] = v7[1];
      v19[2] = v7[2];
      if ( !HidRequestValidityCheck(v19, v8, a3) )
        goto LABEL_20;
      v7 = (_DWORD *)(v21 + 12);
      ++*(_DWORD *)v23;
      v21 += 12;
      if ( *(_DWORD *)v23 >= v22 )
      {
        v6 = *(_DWORD *)(CurrentProcessWin32Process + 472);
        v4 = v20;
        break;
      }
    }
  }
  if ( !v6 )
  {
    ProcessHidTable = AllocateProcessHidTable();
    *(_DWORD *)(CurrentProcessWin32Process + 472) = ProcessHidTable;
    if ( !ProcessHidTable )
    {
      UserSetLastError((struct _NT_TIB *)8);
LABEL_20:
      v24 = 0;
      goto LABEL_15;
    }
  }
  for ( i = 0; i < v22; v4 += 12 )
  {
    *(_DWORD *)v23 = 0;
    v11 = SearchProcessHidRequest(
            (struct tagPROCESSINFO *)*(unsigned __int16 *)(v4 + 2),
            (unsigned __int16)v23,
            (unsigned __int16)v16,
            v18);
    if ( (*(_BYTE *)(v4 + 4) & 1) != 0 )
    {
      if ( v11 )
        FreeHidProcessRequest(v11, *(_DWORD *)v23, *(_DWORD *)(CurrentProcessWin32Process + 472));
    }
    else if ( !SetProcDeviceRequest(CurrentProcessWin32Process, v4, v11, *(_DWORD *)v23, a3) )
    {
      goto LABEL_20;
    }
    ++i;
  }
  v24 = 1;
LABEL_15:
  if ( *(_DWORD *)(CurrentProcessWin32Process + 472) )
  {
    AdjustLegacyDeviceFlags(v16);
    v20 = *(_DWORD *)(CurrentProcessWin32Process + 472);
    v12 = (_DWORD *)(v20 + 24);
    for ( j = *(_DWORD **)(v20 + 24); j != v12; j = (_DWORD *)*j )
    {
      if ( !IsLegacyDevice((unsigned __int16)v17, (unsigned __int16)v18) )
      {
        v15 = (int)(j[3] << 28) >> 31;
        if ( SearchProcessHidRequestUsagePage(v17, (unsigned __int16)v18) )
        {
          if ( v15 )
          {
            --*(_DWORD *)(j[4] + 32);
            j[3] &= ~8u;
          }
        }
        else if ( !v15 )
        {
          ++*(_DWORD *)(j[4] + 32);
          j[3] |= 8u;
        }
      }
    }
    CleanupFreedTLCInfo();
    CHidInput::HandleDirectStartStopDeviceReadRequest(_gpHidInput);
  }
  return v24;
}
