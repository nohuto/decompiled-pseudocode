/*
 * XREFs of xxxUpdatePerUserAccessPackSettings @ 0x1C0012D90
 * Callers:
 *     <none>
 * Callees:
 *     FastGetProfileIntW @ 0x1C0013EC0 (FastGetProfileIntW.c)
 *     OpenCacheKeyEx @ 0x1C0014290 (OpenCacheKeyEx.c)
 *     GetProcessLuid @ 0x1C00147D0 (GetProcessLuid.c)
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C0014950 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1C0014980 (-AccessTimeOutReset@@YAXXZ.c)
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1C00149C0 (-MKHideMouseCursor@@YAXXZ.c)
 *     ?CalculateMouseTable@@YAXXZ @ 0x1C00149E0 (-CalculateMouseTable@@YAXXZ.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0069980 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C008F360 (Win32AllocPoolWithQuota.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ?MKShowMouseCursor@@YAXXZ @ 0x1C0189A30 (-MKShowMouseCursor@@YAXXZ.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C018B770 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 */

void __fastcall xxxUpdatePerUserAccessPackSettings(__int64 a1)
{
  int v2; // ebx
  ULONG v3; // esi
  ULONG v4; // r14d
  ULONG v5; // r15d
  ULONG v6; // r12d
  ULONG v7; // r13d
  ULONG v8; // r8d
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // eax
  ULONG v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  ULONG v21; // eax
  int v22; // eax
  void *v23; // rsi
  __int64 v24; // rbx
  NTSTATUS v25; // eax
  int v26; // r14d
  int v27; // ecx
  unsigned int v28; // ecx
  int v29; // edx
  int v30; // edx
  int v31; // edx
  int v32; // eax
  ULONG Value; // [rsp+30h] [rbp-D0h] BYREF
  int v34; // [rsp+34h] [rbp-CCh] BYREF
  ULONG Length; // [rsp+38h] [rbp-C8h] BYREF
  BOOL v36; // [rsp+3Ch] [rbp-C4h]
  struct _LUID AuthenticationId; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 v39[128]; // [rsp+60h] [rbp-A0h] BYREF

  AuthenticationId = 0LL;
  Value = 0;
  GetProcessLuid(0LL, &AuthenticationId);
  if ( AuthenticationId.LowPart != 999 || (v2 = 1, AuthenticationId.HighPart) )
    v2 = 0;
  FastGetProfileIntW(a1, 15, (int)L"Flags", 0, &Value, 0);
  v3 = Value & 1;
  FastGetProfileIntW(a1, 14, (int)L"Flags", 0, &Value, 0);
  v4 = Value & 1;
  FastGetProfileIntW(a1, 16, (int)L"Flags", 0, &Value, 0);
  v5 = Value & 1;
  FastGetProfileIntW(a1, 17, (int)L"Flags", 0, &Value, 0);
  v6 = Value & 1;
  FastGetProfileIntW(a1, 27, (int)L"On", 0, &Value, 0);
  Length = Value != 0;
  FastGetProfileIntW(a1, 28, (int)L"On", 0, &Value, 0);
  v36 = Value != 0;
  FastGetProfileIntW(a1, 18, (int)L"Flags", 0, &Value, 0);
  v7 = Value & 1;
  FastGetProfileIntW(a1, 29, (int)L"Flags", 0, &Value, 0);
  v8 = Value & 1;
  v34 = v8;
  if ( v2 )
  {
    if ( v3 )
    {
      LODWORD(xmmword_1C0251BCC) = xmmword_1C0251BCC | 1;
      v9 = gdwPUDFlags | 1;
    }
    else
    {
      LODWORD(xmmword_1C0251BCC) = xmmword_1C0251BCC & 0xFFFFFFFE;
      v9 = gdwPUDFlags & 0xFFFFFFFE;
    }
    gdwPUDFlags = v9;
    if ( (dword_1C0251BC4 & 1) != 0 && !v3 )
    {
      xxxTurnOffStickyKeys();
      v8 = v34;
    }
    if ( v4 )
    {
      dword_1C0251BC4 |= 1u;
      v10 = gdwPUDFlags | 2;
    }
    else
    {
      dword_1C0251BC4 &= ~1u;
      v10 = gdwPUDFlags & 0xFFFFFFFD;
    }
    if ( v5 )
    {
      dword_1C0251BA4 |= 1u;
      v11 = v10 | 4;
    }
    else
    {
      dword_1C0251BA4 &= ~1u;
      v11 = v10 & 0xFFFFFFFB;
    }
    if ( v6 )
    {
      dword_1C0251B8C |= 1u;
      v12 = v11 | 8;
    }
    else
    {
      dword_1C0251B8C &= ~1u;
      v12 = v11 & 0xFFFFFFF7;
    }
    if ( v7 )
    {
      LODWORD(qword_1C0251B94) = qword_1C0251B94 | 1;
      v13 = v12 | 0x10;
    }
    else
    {
      LODWORD(qword_1C0251B94) = qword_1C0251B94 & 0xFFFFFFFE;
      v13 = v12 & 0xFFFFFFEF;
    }
    if ( Length )
    {
      gdwPUDFlags = v13 | 0x20020;
      _InterlockedOr((volatile signed __int32 *)gpsi, 0x80u);
    }
    else
    {
      gdwPUDFlags = v13 & 0xFFFDFFDF;
      _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFFF7F);
    }
    if ( v36 )
      v14 = gdwPUDFlags | 0x40040;
    else
      v14 = gdwPUDFlags & 0xFFFBFFBF;
    if ( v8 )
    {
      dword_1C0251B7C |= 1u;
      v15 = v14 | 0x80;
    }
    else
    {
      dword_1C0251B7C &= ~1u;
      v15 = v14 & 0xFFFFFF7F;
    }
    gdwPUDFlags = v15;
    goto LABEL_22;
  }
  if ( (((unsigned __int8)gdwPUDFlags ^ (unsigned __int8)xmmword_1C0251BCC) & 1) == 0 )
  {
    if ( v3 )
      v27 = xmmword_1C0251BCC | 1;
    else
      v27 = xmmword_1C0251BCC & 0xFFFFFFFE;
    LODWORD(xmmword_1C0251BCC) = v27;
  }
  if ( (dword_1C0251BC4 & 1) == (((unsigned int)gdwPUDFlags >> 1) & 1) )
  {
    if ( (dword_1C0251BC4 & 1) != 0 )
    {
      if ( v4 )
        goto LABEL_109;
      xxxTurnOffStickyKeys();
      v8 = v34;
    }
    if ( !v4 )
    {
      dword_1C0251BC4 &= ~1u;
      goto LABEL_65;
    }
LABEL_109:
    dword_1C0251BC4 |= 1u;
  }
LABEL_65:
  v28 = gdwPUDFlags;
  if ( (((unsigned __int8)dword_1C0251BA4 ^ (unsigned __int8)((unsigned int)gdwPUDFlags >> 2)) & 1) == 0 )
  {
    if ( v5 )
      v29 = dword_1C0251BA4 | 1;
    else
      v29 = dword_1C0251BA4 & 0xFFFFFFFE;
    dword_1C0251BA4 = v29;
  }
  if ( (((unsigned __int8)dword_1C0251B8C ^ (unsigned __int8)((unsigned int)gdwPUDFlags >> 3)) & 1) == 0 )
  {
    if ( v6 )
      v30 = dword_1C0251B8C | 1;
    else
      v30 = dword_1C0251B8C & 0xFFFFFFFE;
    dword_1C0251B8C = v30;
  }
  if ( (((unsigned __int8)qword_1C0251B94 ^ (unsigned __int8)((unsigned int)gdwPUDFlags >> 4)) & 1) == 0 )
  {
    if ( v7 )
      v31 = qword_1C0251B94 | 1;
    else
      v31 = qword_1C0251B94 & 0xFFFFFFFE;
    LODWORD(qword_1C0251B94) = v31;
  }
  if ( (((unsigned __int8)gdwPUDFlags ^ (unsigned __int8)((unsigned int)gdwPUDFlags >> 12)) & 0x20) == 0 )
  {
    if ( Length )
      v28 = gdwPUDFlags | 0x20000;
    else
      v28 = gdwPUDFlags & 0xFFFDFFFF;
    gdwPUDFlags = v28;
  }
  if ( (((unsigned __int8)v28 ^ (unsigned __int8)(v28 >> 12)) & 0x40) == 0 )
  {
    if ( v36 )
      v28 |= 0x40000u;
    else
      v28 &= ~0x40000u;
    gdwPUDFlags = v28;
  }
  if ( (((unsigned __int8)dword_1C0251B7C ^ (unsigned __int8)(v28 >> 7)) & 1) == 0 )
  {
    if ( v8 )
      v32 = dword_1C0251B7C | 1;
    else
      v32 = dword_1C0251B7C & 0xFFFFFFFE;
    dword_1C0251B7C = v32;
  }
LABEL_22:
  FastGetProfileIntW(a1, 15, (int)L"Flags", 82, &Value, 0);
  if ( (xmmword_1C0251BCC & 1) != 0 )
    v16 = Value | 1;
  else
    v16 = Value & 0xFFFFFFFE;
  Value = v16;
  LODWORD(xmmword_1C0251BCC) = v16;
  FastGetProfileIntW(a1, 15, (int)L"DelayBeforeAcceptance", 1000, (PULONG)&xmmword_1C0251BCC + 1, 0);
  FastGetProfileIntW(a1, 15, (int)L"AutoRepeatRate", 500, (PULONG)&xmmword_1C0251BCC + 3, 0);
  FastGetProfileIntW(a1, 15, (int)L"AutoRepeatDelay", 1000, (PULONG)&xmmword_1C0251BCC + 2, 0);
  FastGetProfileIntW(a1, 15, (int)L"BounceTime", 0, &::Value, 0);
  FastGetProfileIntW(a1, 19, (int)L"Flags", 2, &dword_1C0254DB4, 0);
  FastGetProfileIntW(a1, 19, (int)L"FSTextEffect", 0, &dword_1C0254DB8, 0);
  FastGetProfileIntW(a1, 19, (int)L"WindowsEffect", 0, &dword_1C0254DD0, 0);
  FastGetProfileIntW(a1, 20, (int)L"On", 0, &Value, 0);
  if ( Value )
    v17 = gdwPUDFlags | 0x8000;
  else
    v17 = gdwPUDFlags & 0xFFFF7FFF;
  gdwPUDFlags = v17;
  *((_DWORD *)gpsi + 544) = (v17 >> 15) & 1;
  FastGetProfileIntW(a1, 14, (int)L"Flags", 466, &Value, 0);
  if ( (dword_1C0251BC4 & 1) != 0 )
    v18 = Value | 1;
  else
    v18 = Value & 0xFFFFFFFE;
  Value = v18;
  dword_1C0251BC4 = v18;
  FastGetProfileIntW(a1, 16, (int)L"Flags", 18, &Value, 0);
  if ( (dword_1C0251BA4 & 1) != 0 )
    v19 = Value | 1;
  else
    v19 = Value & 0xFFFFFFFE;
  Value = v19;
  dword_1C0251BA4 = v19;
  FastGetProfileIntW(a1, 16, (int)L"MaximumSpeed", 40, &dword_1C0251BA8, 0);
  FastGetProfileIntW(a1, 16, (int)L"TimeToMaximumSpeed", 3000, &dword_1C0251BAC, 0);
  if ( dword_1C0251BA8 - 10 > 0x15E )
    dword_1C0251BA8 = 40;
  if ( dword_1C0251BAC - 1000 > 0xFA0 )
    dword_1C0251BAC = 3000;
  CalculateMouseTable();
  gbMKMouseMode = ((dword_1C0251BA4 & 0x80) != 0) ^ (((unsigned __int8)(1 << (2 * (gNumLockVk & 3) + 1)) & *((_BYTE *)&gafAsyncKeyState + ((unsigned __int64)(unsigned __int8)gNumLockVk >> 2))) != 0);
  if ( (dword_1C0251BA4 & 1) != 0 )
    MKShowMouseCursor();
  else
    MKHideMouseCursor();
  FastGetProfileIntW(a1, 17, (int)L"Flags", 18, &Value, 0);
  if ( (dword_1C0251B8C & 1) != 0 )
    v20 = Value | 1;
  else
    v20 = Value & 0xFFFFFFFE;
  Value = v20;
  dword_1C0251B8C = v20;
  FastGetProfileIntW(a1, 18, (int)L"Flags", 2, &Value, 0);
  if ( (qword_1C0251B94 & 1) != 0 )
    v21 = Value | 1;
  else
    v21 = Value & 0xFFFFFFFE;
  Value = v21;
  LODWORD(qword_1C0251B94) = v21;
  if ( gpKbdNlsTbl )
  {
    if ( *(_DWORD *)(gpKbdNlsTbl + 16) == 16 && *(_QWORD *)(gpKbdNlsTbl + 24) )
      gpusMouseVKey = *(_QWORD *)(gpKbdNlsTbl + 24);
    if ( (*(_BYTE *)(gpKbdNlsTbl + 2) & 2) != 0 )
    {
      gNumLockVk = 36;
      gOemScrollVk = 21;
    }
  }
  FastGetProfileIntW(a1, 18, (int)L"TimeToWait", 300000, (PULONG)&qword_1C0251B94 + 1, 0);
  FastGetProfileIntW(a1, 29, (int)L"Flags", 82, &Value, 0);
  if ( (dword_1C0251B7C & 1) != 0 )
    v22 = Value | 1;
  else
    v22 = Value & 0xFFFFFFFE;
  Value = v22;
  dword_1C0251B7C = v22;
  v34 = gdwPolicyFlags;
  DestinationString = 0LL;
  v23 = (void *)OpenCacheKeyEx(a1, 29LL, 131097LL, &v34);
  if ( v23 )
  {
    while ( 1 )
    {
      Length = 268;
      v24 = Win32AllocPoolWithQuota(268LL, 1919972181LL);
      if ( !v24 )
        goto LABEL_50;
      RtlInitUnicodeString(&DestinationString, L"High Contrast Scheme");
      v25 = ZwQueryValueKey(v23, &DestinationString, KeyValuePartialInformation, (PVOID)v24, Length, &Length);
      if ( v25 == -2147483643 )
        v25 = 0;
      if ( v25 >= 0 )
        break;
      if ( !v34 )
      {
        Win32FreePool(v24);
LABEL_50:
        if ( v23 )
          ZwClose(v23);
        goto LABEL_52;
      }
      Win32FreePool(v24);
      ZwClose(v23);
      v23 = (void *)OpenCacheKeyEx(a1, 29LL, 131097LL, &v34);
      if ( !v23 )
        goto LABEL_50;
    }
    v26 = 128;
    if ( *(_DWORD *)(v24 + 8) >> 1 < 0x80u )
      v26 = *(_DWORD *)(v24 + 8) >> 1;
    if ( *(_DWORD *)(v24 + 8) < 2u )
    {
      v39[0] = 0;
    }
    else
    {
      *(_WORD *)(v24 + 2LL * (unsigned int)(v26 - 1) + 12) = 0;
      RtlStringCchCopyW(v39, 0x80uLL, (const unsigned __int16 *)(v24 + 12));
    }
    Win32FreePool(v24);
    ZwClose(v23);
  }
  else
  {
LABEL_52:
    v26 = 0;
  }
  if ( v26 )
    RtlStringCchCopyW(&gHighContrastDefaultScheme, 0x80uLL, v39);
  gAudioDescription = 12;
  FastGetProfileIntW(a1, 48, (int)L"On", 0, &dword_1C0251B6C, 0);
  FastGetProfileIntW(a1, 48, (int)L"Locale", 0, &dword_1C0251B70, 0);
  AccessTimeOutReset();
  SetAccessEnabledFlag();
}
