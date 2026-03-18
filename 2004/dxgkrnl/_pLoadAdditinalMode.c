/*
 * XREFs of _pLoadAdditinalMode @ 0x1C0194250
 * Callers:
 *     _pGetAdditionalTiming @ 0x1C01940AC (_pGetAdditionalTiming.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsAnalogueVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0009BB8 (-IsAnalogueVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     _pReadDetailTimingFromReg @ 0x1C01945B8 (_pReadDetailTimingFromReg.c)
 *     _pPopulateProgressiveTimingList @ 0x1C02F8430 (_pPopulateProgressiveTimingList.c)
 */

__int64 __fastcall pLoadAdditinalMode(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  ULONG v8; // r15d
  const WCHAR *v9; // rdx
  NTSTATUS appended; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  void *v17; // rcx
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // r12d
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rsi
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int16 *v32; // r13
  NTSTATUS v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  NTSTATUS v38; // eax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  void *KeyHandle; // [rsp+38h] [rbp-59h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-51h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+48h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-31h] BYREF
  __int128 KeyInformation; // [rsp+90h] [rbp-1h] BYREF
  __int128 v60; // [rsp+A0h] [rbp+Fh]
  __int128 v61; // [rsp+B0h] [rbp+1Fh]

  v2 = (int)a1;
  v3 = WdLogNewEntry5_WdDmmEvent(a1, a2);
  *(_QWORD *)(v3 + 24) = v2;
  WdLogEvent5_WdDmmEvent(v3);
  if ( (_DWORD)v2 == -2 )
  {
    v40 = WdLogNewEntry5_WdAssertion(v5, v4);
    WdLogEvent5_WdAssertion(v40);
  }
  *(_QWORD *)&Destination.Length = 15859712LL;
  Destination.Buffer = (wchar_t *)&unk_1C00B2EB0;
  v8 = 0;
  if ( RtlAppendUnicodeToString(
         &Destination,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\AdditionalModeLists\\") < 0 )
  {
    v41 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v41);
  }
  if ( (int)v2 > 5 )
  {
    switch ( (_DWORD)v2 )
    {
      case 6:
        v9 = L"LVDS";
        goto LABEL_11;
      case 8:
        v9 = L"D_JPN";
        goto LABEL_11;
      case 9:
        v9 = L"SDI";
        goto LABEL_11;
    }
    if ( (int)v2 > 9 )
    {
      if ( (int)v2 <= 11 )
      {
        v9 = L"DISPLAYPORT";
        goto LABEL_11;
      }
      if ( (int)v2 <= 13 )
      {
        v9 = L"UDI";
        goto LABEL_11;
      }
      if ( (_DWORD)v2 == 14 )
      {
        v9 = L"SDTVDONGLE";
        goto LABEL_11;
      }
    }
    goto LABEL_56;
  }
  switch ( (_DWORD)v2 )
  {
    case 5:
      v9 = L"HDTV";
      goto LABEL_11;
    case 0x80000000:
      v9 = L"INTERNAL";
      goto LABEL_11;
    case 0xFFFFFFFF:
      v9 = L"OTHER";
      goto LABEL_11;
  }
  if ( (_DWORD)v2 )
  {
    switch ( (_DWORD)v2 )
    {
      case 1:
        v9 = L"SVIDEO";
        goto LABEL_11;
      case 2:
        v9 = L"COMPOSITE";
        goto LABEL_11;
      case 3:
        v9 = L"COMPONENT";
        goto LABEL_11;
      case 4:
        v9 = L"DVI";
        goto LABEL_11;
    }
LABEL_56:
    v42 = WdLogNewEntry5_WdDmmEvent(v7, v6);
    *(_QWORD *)(v42 + 24) = v2;
    WdLogEvent5_WdDmmEvent(v42);
    return 3221226021LL;
  }
  v9 = L"HD15";
LABEL_11:
  appended = RtlAppendUnicodeToString(&Destination, v9);
  v13 = appended;
  if ( appended < 0 )
  {
    if ( appended != -1073741789 )
    {
      v43 = WdLogNewEntry5_WdAssertion(v12, v11);
      WdLogEvent5_WdAssertion(v43);
    }
    v44 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v44 + 24) = v2;
    *(_QWORD *)(v44 + 32) = v13;
    WdLogEvent5_WdError(v44);
    return (unsigned int)v13;
  }
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &Destination;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v14 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v13 = v14;
  if ( v14 < 0 )
  {
    v45 = WdLogNewEntry5_WdDmmEvent(v16, v15);
    *(_QWORD *)(v45 + 24) = v2;
    *(_QWORD *)(v45 + 32) = v13;
    WdLogEvent5_WdDmmEvent(v45);
    return (unsigned int)v13;
  }
  v17 = KeyHandle;
  if ( !KeyHandle )
  {
    v46 = WdLogNewEntry5_WdAssertion(0LL, v15);
    WdLogEvent5_WdAssertion(v46);
    v17 = KeyHandle;
  }
  ResultLength = 0;
  KeyInformation = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v18 = ZwQueryKey(v17, KeyFullInformation, &KeyInformation, 0x30u, &ResultLength);
  v13 = v18;
  if ( v18 < 0 )
  {
    v53 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(_QWORD *)(v53 + 24) = v2;
    *(_QWORD *)(v53 + 32) = v13;
    WdLogEvent5_WdWarning(v53);
    goto LABEL_33;
  }
  if ( !DWORD1(v60) )
  {
    v52 = WdLogNewEntry5_WdDmmEvent(0LL, v19);
    *(_QWORD *)(v52 + 24) = v2;
    WdLogEvent5_WdDmmEvent(v52);
    LODWORD(v13) = -1073741275;
    goto LABEL_33;
  }
  v22 = 0;
  v25 = operator new[]((unsigned int)(28 * (DWORD1(v60) - 1) + 48), 0x4D677844u, PagedPool);
  if ( !v25 )
  {
    v47 = WdLogNewEntry5_WdLowResource(v24, v23, v26, v27);
    WdLogEvent5_WdLowResource(v47);
    ZwClose(KeyHandle);
    return 3221225495LL;
  }
  v32 = (unsigned __int16 *)operator new[](0x96uLL, 0x4D677844u, PagedPool);
  if ( !v32 )
  {
    v48 = WdLogNewEntry5_WdLowResource(v29, v28, v30, v31);
    WdLogEvent5_WdLowResource(v48);
    operator delete[](v25);
    LODWORD(v13) = -1073741801;
    goto LABEL_33;
  }
  if ( !DWORD1(v60) )
    goto LABEL_72;
  while ( 1 )
  {
    v33 = ZwEnumerateKey(KeyHandle, v8, KeyBasicInformation, v32, 0x96u, &ResultLength);
    v13 = v33;
    if ( v33 == -2147483643 || v33 == -1073741789 )
    {
      v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v34, v36);
      goto LABEL_68;
    }
    if ( v33 == -2147483622 )
      break;
    v37 = 0LL;
    if ( v33 >= 0 )
    {
      Destination.MaximumLength = v32[6];
      Destination.Length = Destination.MaximumLength;
      Handle = 0LL;
      Destination.Buffer = v32 + 8;
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.ObjectName = &Destination;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v38 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      v13 = v38;
      if ( v38 >= 0 )
      {
        LODWORD(v13) = pReadDetailTimingFromReg(Handle);
        if ( (int)v13 >= 0 )
          ++v22;
        ZwClose(Handle);
        goto LABEL_28;
      }
    }
    v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v34, v36);
    v49[5] = v13;
LABEL_68:
    v49[4] = v8;
    v49[3] = v2;
    WdLogEvent5_WdWarning(v49);
LABEL_28:
    if ( ++v8 >= DWORD1(v60) )
      goto LABEL_29;
  }
  v50 = WdLogNewEntry5_WdWarning(v35, v34, v36);
  *(_QWORD *)(v50 + 24) = v2;
  WdLogEvent5_WdWarning(v50);
LABEL_29:
  if ( !v22 )
  {
LABEL_72:
    operator delete[](v25);
    goto LABEL_32;
  }
  *v25 = qword_1C00B2208;
  *((_DWORD *)v25 + 2) = v2;
  *((_DWORD *)v25 + 4) = v22;
  *((_BYTE *)v25 + 12) = 0;
  qword_1C00B2208 = v25;
  if ( !IsAnalogueVideoOutput(v2) )
  {
    v51 = (_QWORD *)pPopulateProgressiveTimingList(v25);
    if ( v51 )
    {
      *v51 = qword_1C00B2208;
      qword_1C00B2208 = v51;
    }
  }
  LODWORD(v13) = 0;
LABEL_32:
  operator delete[](v32);
LABEL_33:
  ZwClose(KeyHandle);
  return (unsigned int)v13;
}
