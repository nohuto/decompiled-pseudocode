/*
 * XREFs of _RegisterRawInputDevices @ 0x1C00FF680
 * Callers:
 *     NtUserRegisterRawInputDevices @ 0x1C00FF080 (NtUserRegisterRawInputDevices.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x1C01D5020 (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01D50CC (UnregisterModernAppThreadForRawKeyboard.c)
 *     ?RegisterTabletButtonHandler@@YAXXZ @ 0x1C01D8778 (-RegisterTabletButtonHandler@@YAXXZ.c)
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     AllocateProcessHidTable @ 0x1C00FEF1C (AllocateProcessHidTable.c)
 *     FreeHidProcessRequest @ 0x1C00FEFBC (FreeHidProcessRequest.c)
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x1C00FF2B4 (-CleanupFreedTLCInfo@@YAXXZ.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00FF340 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C00FF820 (-HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_IN.c)
 *     ?SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z @ 0x1C00FF9EC (-SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z.c)
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C00FFA88 (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 *     ?IsLegacyDevice@@YAHGG@Z @ 0x1C00FFF14 (-IsLegacyDevice@@YAHGG@Z.c)
 */

__int64 __fastcall RegisterRawInputDevices(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r15d
  unsigned int v4; // ebp
  __int64 CurrentProcessWin32Process; // rbx
  __int64 v7; // rax
  unsigned int v8; // edi
  __int128 *v9; // rsi
  __int64 v10; // rdx
  unsigned int v11; // esi
  _DWORD *v12; // rdi
  unsigned __int16 v13; // r8
  unsigned __int16 v14; // dx
  struct tagPROCESS_HID_REQUEST *v15; // rax
  unsigned int v16; // edi
  __int64 v17; // rbx
  __int64 v18; // r10
  __int64 i; // r9
  __int64 ProcessHidTable; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 *v24; // r9
  __int16 v25; // r11
  __int64 *j; // rax
  __int128 v27; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v28; // [rsp+78h] [rbp+10h] BYREF

  v3 = a3;
  v4 = a2;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3);
  v7 = *(_QWORD *)(CurrentProcessWin32Process + 832);
  if ( v7 )
  {
    *(_QWORD *)(v7 + 88) = 0LL;
    *(_DWORD *)(v7 + 96) = 0;
    v7 = *(_QWORD *)(CurrentProcessWin32Process + 832);
  }
  v8 = 0;
  if ( v4 )
  {
    v9 = (__int128 *)a1;
    while ( 1 )
    {
      v10 = *(_QWORD *)(CurrentProcessWin32Process + 832);
      v27 = *v9;
      if ( !(unsigned int)HidRequestValidityCheck(&v27, v10, v3) )
        goto LABEL_24;
      ++v8;
      ++v9;
      if ( v8 >= v4 )
      {
        v7 = *(_QWORD *)(CurrentProcessWin32Process + 832);
        break;
      }
    }
  }
  if ( !v7 )
  {
    ProcessHidTable = AllocateProcessHidTable();
    *(_QWORD *)(CurrentProcessWin32Process + 832) = ProcessHidTable;
    if ( !ProcessHidTable )
    {
      UserSetLastError(8LL, v22, v23);
LABEL_24:
      v16 = 0;
      goto LABEL_15;
    }
  }
  v11 = 0;
  if ( v4 )
  {
    v12 = (_DWORD *)(a1 + 4);
    do
    {
      v13 = *((_WORD *)v12 - 1);
      v14 = *((_WORD *)v12 - 2);
      v28 = 0;
      v15 = SearchProcessHidRequest((struct tagPROCESSINFO *)CurrentProcessWin32Process, v14, v13, &v28);
      if ( (*v12 & 1) != 0 )
      {
        if ( v15 )
          FreeHidProcessRequest(v15, v28, *(struct tagPROCESS_HID_TABLE **)(CurrentProcessWin32Process + 832));
      }
      else if ( !(unsigned int)SetProcDeviceRequest(CurrentProcessWin32Process, a1 + 16LL * v11, v15, v28, v3) )
      {
        goto LABEL_24;
      }
      ++v11;
      v12 += 4;
    }
    while ( v11 < v4 );
  }
  v16 = 1;
LABEL_15:
  if ( *(_QWORD *)(CurrentProcessWin32Process + 832) )
  {
    AdjustLegacyDeviceFlags((struct tagPROCESSINFO *)CurrentProcessWin32Process);
    v17 = *(_QWORD *)(CurrentProcessWin32Process + 832);
    v18 = v17 + 48;
    for ( i = *(_QWORD *)(v17 + 48); i != v18; i = *v24 )
    {
      if ( !(unsigned int)IsLegacyDevice(*(_WORD *)(i + 16), *(_WORD *)(i + 18)) )
      {
        for ( j = *(__int64 **)(v17 + 32); j != (__int64 *)(v17 + 32); j = (__int64 *)*j )
        {
          if ( *((_WORD *)j + 8) == v25 )
            goto LABEL_31;
        }
        j = 0LL;
LABEL_31:
        if ( j )
        {
          if ( __CFSHR__(*((_DWORD *)v24 + 5), 4) )
          {
            --*(_DWORD *)(v24[3] + 40);
            *((_DWORD *)v24 + 5) &= ~8u;
          }
        }
        else if ( !__CFSHR__(*((_DWORD *)v24 + 5), 4) )
        {
          ++*(_DWORD *)(v24[3] + 40);
          *((_DWORD *)v24 + 5) |= 8u;
        }
      }
    }
    CleanupFreedTLCInfo();
    CHidInput::HandleDirectStartStopDeviceReadRequest(gpHidInput);
  }
  return v16;
}
