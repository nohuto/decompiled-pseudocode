/*
 * XREFs of RIMIDECreateDeviceInstancePath @ 0x1C0169620
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1C016A2F4 (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C016A5C0 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     isChildPartition @ 0x1C0070954 (isChildPartition.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ @ 0x1C016913C (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ.c)
 */

__int64 __fastcall RIMIDECreateDeviceInstancePath(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // edx
  unsigned __int16 v4; // r8
  struct _UNICODE_STRING *v5; // r10
  int v6; // r11d
  int v7; // r9d
  __int64 v8; // r9
  __int64 v9; // r8
  const unsigned __int16 *v10; // rdx
  int v11; // eax
  int v12; // edx

  v2 = -1073741823;
  if ( !isChildPartition(a1, a2) )
  {
    if ( v6 )
    {
      if ( v6 != 1 )
      {
        if ( v6 != 2 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return v2;
          v7 = 16;
          goto LABEL_7;
        }
        v8 = v4;
        v9 = (unsigned __int16)v3;
        v10 = L"\\??\\Microsoft HID RID\\%04X_%04X\\%u";
        goto LABEL_9;
      }
      v11 = RtlUnicodeStringPrintf(v5, L"\\??\\Microsoft Keyboard RID\\%u", (unsigned int)dword_1C0254500);
    }
    else
    {
      v11 = RtlUnicodeStringPrintf(v5, L"\\??\\Microsoft Mouse RID\\%u", (unsigned int)dword_1C0254500);
    }
LABEL_20:
    v2 = v11;
    if ( v11 >= 0 )
    {
      ++dword_1C0254500;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_d((_DWORD)gRimLog, v12, 1, 17, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids, v11);
    }
    return v2;
  }
  switch ( v6 )
  {
    case 0:
      v11 = RtlUnicodeStringPrintf(v5, L"\\??\\Microsoft Mouse RID\\c\\%u", (unsigned int)dword_1C0254500);
      goto LABEL_20;
    case 1:
      v11 = RtlUnicodeStringPrintf(v5, L"\\??\\Microsoft Keyboard RID\\c\\%u", (unsigned int)dword_1C0254500);
      goto LABEL_20;
    case 2:
      v8 = v4;
      v9 = (unsigned __int16)v3;
      v10 = L"\\??\\Microsoft HID RID\\c\\%04X_%04X\\%u";
LABEL_9:
      v11 = RtlUnicodeStringPrintf(v5, v10, v9, v8, dword_1C0254500);
      goto LABEL_20;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = 15;
LABEL_7:
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v3, 1, v7, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids, v6);
  }
  return v2;
}
