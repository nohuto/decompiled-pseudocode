/*
 * XREFs of _pLoadAdditinalMode @ 0x1C01DC608
 * Callers:
 *     _pGetAdditionalTiming @ 0x1C01DC484 (_pGetAdditionalTiming.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C001CBB4 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?IsAnalogueVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0027054 (-IsAnalogueVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _pPopulateProgressiveTimingList @ 0x1C03B4B78 (_pPopulateProgressiveTimingList.c)
 *     _pReadDetailTimingFromReg @ 0x1C03B4C68 (_pReadDetailTimingFromReg.c)
 */

__int64 __fastcall pLoadAdditinalMode(int a1)
{
  __int64 v1; // rdi
  const WCHAR *v2; // rdx
  NTSTATUS appended; // eax
  __int64 v4; // rbx
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  HANDLE v8; // rcx
  NTSTATUS v9; // eax
  __int64 v10; // r9
  int v11; // r13d
  _QWORD *v12; // rsi
  __int64 v13; // r9
  void *v14; // rax
  ULONG v15; // r12d
  NTSTATUS v16; // eax
  NTSTATUS v17; // eax
  _QWORD *v18; // rax
  HANDLE KeyHandle; // [rsp+38h] [rbp-39h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-31h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+48h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-19h] BYREF
  void *v23; // [rsp+60h] [rbp-11h]
  __int128 KeyInformation; // [rsp+68h] [rbp-9h] BYREF
  __int128 v25; // [rsp+78h] [rbp+7h]
  __int128 v26; // [rsp+88h] [rbp+17h]

  v1 = a1;
  WdLogSingleEntry1(7LL, a1);
  if ( (_DWORD)v1 == -2 )
    WdLogSingleEntry0(1LL);
  *(_QWORD *)&Destination.Length = 15859712LL;
  Destination.Buffer = (wchar_t *)&unk_1C0130EF0;
  if ( RtlAppendUnicodeToString(
         &Destination,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\AdditionalModeLists\\") < 0 )
    WdLogSingleEntry0(1LL);
  if ( (unsigned int)v1 <= 8 )
  {
    if ( (_DWORD)v1 == 8 )
    {
      v2 = L"D_JPN";
    }
    else if ( (_DWORD)v1 )
    {
      switch ( (_DWORD)v1 )
      {
        case 1:
          v2 = L"SVIDEO";
          break;
        case 2:
          v2 = L"COMPOSITE";
          break;
        case 3:
          v2 = L"COMPONENT";
          break;
        case 4:
          v2 = L"DVI";
          break;
        case 5:
          v2 = L"HDTV";
          break;
        case 6:
          v2 = L"LVDS";
          break;
        default:
          goto LABEL_39;
      }
    }
    else
    {
      v2 = L"HD15";
    }
  }
  else
  {
    if ( (_DWORD)v1 == 9 )
    {
      v2 = L"SDI";
      goto LABEL_9;
    }
    if ( (unsigned int)v1 > 0xB )
    {
      if ( (unsigned int)v1 <= 0xD )
      {
        v2 = L"UDI";
        goto LABEL_9;
      }
      if ( (_DWORD)v1 == 14 )
      {
        v2 = L"SDTVDONGLE";
        goto LABEL_9;
      }
      if ( (_DWORD)v1 != 18 )
      {
        if ( (_DWORD)v1 == 0x80000000 )
        {
          v2 = L"INTERNAL";
          goto LABEL_9;
        }
        if ( (_DWORD)v1 == -1 )
        {
          v2 = L"OTHER";
          goto LABEL_9;
        }
LABEL_39:
        WdLogSingleEntry1(7LL, v1);
        return 3221226021LL;
      }
    }
    v2 = L"DISPLAYPORT";
  }
LABEL_9:
  appended = RtlAppendUnicodeToString(&Destination, v2);
  v4 = appended;
  if ( appended < 0 )
  {
    if ( appended != -1073741789 )
      WdLogSingleEntry0(1LL);
    v6 = 2LL;
    goto LABEL_12;
  }
  KeyHandle = 0LL;
  v5 = DxgkOpenRegistrySubkey(&KeyHandle, 0x20019u, 0LL, &Destination);
  v4 = v5;
  if ( v5 < 0 )
  {
    v6 = 7LL;
LABEL_12:
    WdLogSingleEntry2(v6, v1, v4);
    return (unsigned int)v4;
  }
  v8 = KeyHandle;
  if ( !KeyHandle )
  {
    WdLogSingleEntry0(1LL);
    v8 = KeyHandle;
  }
  ResultLength = 0;
  KeyInformation = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v9 = ZwQueryKey(v8, KeyFullInformation, &KeyInformation, 0x30u, &ResultLength);
  LODWORD(v4) = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry2(3LL, v1, v9);
    goto LABEL_75;
  }
  if ( !DWORD1(v25) )
  {
    WdLogSingleEntry1(7LL, v1);
    LODWORD(v4) = -1073741275;
    goto LABEL_75;
  }
  v11 = 0;
  v12 = (_QWORD *)operator new[]((unsigned int)(28 * (DWORD1(v25) - 1) + 48), 0x4D677844u, 256LL, v10);
  if ( !v12 )
  {
    WdLogSingleEntry0(6LL);
    ZwClose(KeyHandle);
    return 3221225495LL;
  }
  v14 = (void *)operator new[](0x96uLL, 0x4D677844u, 256LL, v13);
  v23 = v14;
  if ( !v14 )
  {
    WdLogSingleEntry0(6LL);
    operator delete[](v12);
    LODWORD(v4) = -1073741801;
    goto LABEL_75;
  }
  v15 = 0;
  if ( !DWORD1(v25) )
    goto LABEL_71;
  while ( 1 )
  {
    v16 = ZwEnumerateKey(KeyHandle, v15, KeyBasicInformation, v14, 0x96u, &ResultLength);
    v4 = v16;
    if ( v16 == -2147483643 || v16 == -1073741789 )
    {
      WdLogSingleEntry2(3LL, v1, v15);
      goto LABEL_63;
    }
    if ( v16 == -2147483622 )
      break;
    if ( v16 < 0
      || (Handle = 0LL,
          Destination.MaximumLength = *((_WORD *)v23 + 6),
          Destination.Length = Destination.MaximumLength,
          Destination.Buffer = (wchar_t *)((char *)v23 + 16),
          v17 = DxgkOpenRegistrySubkey(&Handle, 0x20019u, KeyHandle, &Destination),
          v4 = v17,
          v17 < 0) )
    {
      WdLogSingleEntry3(3LL, v1, v15, v4);
    }
    else
    {
      LODWORD(v4) = pReadDetailTimingFromReg(Handle);
      if ( (int)v4 >= 0 )
        ++v11;
      ZwClose(Handle);
    }
LABEL_63:
    if ( ++v15 >= DWORD1(v25) )
      goto LABEL_66;
    v14 = v23;
  }
  WdLogSingleEntry1(3LL, v1);
LABEL_66:
  if ( !v11 )
  {
LABEL_71:
    operator delete[](v12);
    goto LABEL_72;
  }
  *v12 = qword_1C0131EA0;
  *((_DWORD *)v12 + 2) = v1;
  *((_DWORD *)v12 + 4) = v11;
  *((_BYTE *)v12 + 12) = 0;
  qword_1C0131EA0 = v12;
  if ( !IsAnalogueVideoOutput(v1) )
  {
    v18 = (_QWORD *)pPopulateProgressiveTimingList(v12);
    if ( v18 )
    {
      *v18 = qword_1C0131EA0;
      qword_1C0131EA0 = v18;
    }
  }
  LODWORD(v4) = 0;
LABEL_72:
  operator delete[](v23);
LABEL_75:
  ZwClose(KeyHandle);
  return (unsigned int)v4;
}
