/*
 * XREFs of ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C008CFC0
 * Callers:
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C004D734 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     DrvEnumDisplayDevices @ 0x1C0091330 (DrvEnumDisplayDevices.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C0093390 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C0094060 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00942F0 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C0097074 (DrvUpdateDisplayDriverParameters.c)
 *     DrvGetDisplayDriverParameters @ 0x1C00AC8E8 (DrvGetDisplayDriverParameters.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00AE078 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00AE208 (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C00AF4CC (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00CAA50 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     DrvSetPruneFlag @ 0x1C0151B50 (DrvSetPruneFlag.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C002EAC0 (UserIsCurrentProcessDwm.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0049078 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0054C98 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00C0A20 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     wcschr @ 0x1C00CC1D0 (wcschr.c)
 *     wcsstr @ 0x1C00CC2D8 (wcsstr.c)
 *     toupper @ 0x1C00CC564 (toupper.c)
 *     _wcsnicmp @ 0x1C00CC5CC (_wcsnicmp.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 */

HANDLE __fastcall DrvGetRegistryHandleFromDeviceMap(
        unsigned __int16 *a1,
        int a2,
        unsigned int *a3,
        wchar_t *a4,
        unsigned int a5,
        NTSTATUS *a6)
{
  __int64 v6; // rbx
  __int64 v9; // r14
  WCHAR *v10; // r13
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // esi
  WCHAR *v16; // rax
  NTSTATUS v17; // ebx
  void *v18; // rax
  const WCHAR *v19; // rdx
  __int64 v20; // rdx
  char *v21; // rsi
  unsigned __int16 v22; // ax
  wchar_t *v23; // rsi
  __int64 v24; // r8
  ULONG v25; // r15d
  __int64 v26; // rax
  int v28; // eax
  int v29; // ecx
  wchar_t *v30; // rax
  wchar_t *v31; // rdi
  NTSTATUS v32; // eax
  const WCHAR *v33; // rdx
  int v34; // r12d
  __int64 v35; // rcx
  int v36; // ebx
  __int64 v37; // r13
  void *v38; // rax
  unsigned __int64 v39; // r15
  unsigned __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // r8
  _WORD *i; // rcx
  __int64 v44; // rbx
  char *v45; // rcx
  __int64 v46; // rdx
  char *v47; // r8
  __int16 v48; // ax
  char *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  unsigned __int16 *v53; // rcx
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int64 v61; // rax
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int64 v64; // rax
  unsigned __int16 *v65; // rbx
  unsigned __int16 v66; // cx
  int v67; // r13d
  wchar_t *v68; // rcx
  unsigned __int64 v69; // rbx
  wchar_t *v70; // r15
  wchar_t v71; // ax
  __int64 v72; // rcx
  __int64 v73; // rax
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t *Str1; // [rsp+60h] [rbp-A0h]
  void *KeyHandle; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+70h] [rbp-90h] BYREF
  ULONG ResultLength; // [rsp+80h] [rbp-80h] BYREF
  ULONG v81; // [rsp+84h] [rbp-7Ch] BYREF
  HANDLE v82; // [rsp+88h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  ULONG Length[2]; // [rsp+C0h] [rbp-40h]
  wchar_t *v85; // [rsp+C8h] [rbp-38h]
  size_t Size; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v87; // [rsp+D8h] [rbp-28h]
  WCHAR *v88; // [rsp+E0h] [rbp-20h]
  unsigned int *v89; // [rsp+E8h] [rbp-18h]
  NTSTATUS *v90; // [rsp+F0h] [rbp-10h]
  unsigned __int16 v91[160]; // [rsp+100h] [rbp+0h] BYREF

  v6 = a2;
  v90 = a6;
  v89 = a3;
  Handle = 0LL;
  KeyHandle = 0LL;
  ResultLength = 0;
  v85 = a4;
  v9 = 0LL;
  v10 = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v91, 0, 0x138uLL);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v12[3] = a1;
  v12[4] = v6;
  v12[5] = a3;
  WdLogEvent5_WdTrace(v12);
  if ( a4 && !a5 )
  {
    v17 = -1073741811;
    goto LABEL_29;
  }
  if ( dword_1C0253240
    && (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu
    && qword_1C0253250
    && (PVOID)PsGetCurrentProcess(65533LL, v13) != gpepCSRSS
    && !UserIsCurrentProcessDwm(v51, v50)
    && (*((_DWORD *)a1 + 40) & 0x4000000) != 0 )
  {
    v52 = 2LL;
    v53 = v91;
    do
    {
      v54 = *((_OWORD *)a1 + 1);
      *(_OWORD *)v53 = *(_OWORD *)a1;
      v55 = *((_OWORD *)a1 + 2);
      *((_OWORD *)v53 + 1) = v54;
      v56 = *((_OWORD *)a1 + 3);
      *((_OWORD *)v53 + 2) = v55;
      v57 = *((_OWORD *)a1 + 4);
      *((_OWORD *)v53 + 3) = v56;
      v58 = *((_OWORD *)a1 + 5);
      *((_OWORD *)v53 + 4) = v57;
      v59 = *((_OWORD *)a1 + 6);
      *((_OWORD *)v53 + 5) = v58;
      v60 = *((_OWORD *)a1 + 7);
      a1 += 64;
      *((_OWORD *)v53 + 6) = v59;
      v53 += 64;
      *((_OWORD *)v53 - 1) = v60;
      --v52;
    }
    while ( v52 );
    v61 = *((_QWORD *)a1 + 6);
    v62 = *((_OWORD *)a1 + 1);
    *(_OWORD *)v53 = *(_OWORD *)a1;
    v63 = *((_OWORD *)a1 + 2);
    a1 = v91;
    *((_OWORD *)v53 + 1) = v62;
    *((_OWORD *)v53 + 2) = v63;
    *((_QWORD *)v53 + 6) = v61;
    StringCchCopyW(v91, 0x20uLL, &Dest);
    *(_DWORD *)&v91[80] &= ~0x4000000u;
  }
  v15 = *((_DWORD *)a1 + 40) & 8;
  v16 = (WCHAR *)Win32AllocPool(512LL, 1886221383LL);
  v88 = v16;
  v10 = v16;
  if ( v16 )
    memset(v16, 0, 0x200uLL);
  if ( !v10 )
    goto LABEL_95;
  if ( (*((_DWORD *)a1 + 40) & 0x4000000) == 0 || v15 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Hardware\\DeviceMap\\Video");
  }
  else
  {
    if ( (unsigned int)(a2 - 1) <= 1 )
    {
      v17 = -1073741766;
      goto LABEL_29;
    }
    DestinationString.Buffer = v10;
    *(_DWORD *)&DestinationString.Length = 33423360;
    RtlAppendUnicodeToString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Terminal Server\\Video\\");
    v33 = L"vgastub";
    if ( qword_1C0253228 )
      v33 = qword_1C0253228;
    RtlAppendUnicodeToString(&DestinationString, v33);
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v17 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v17 < 0 )
    goto LABEL_119;
  v18 = (void *)Win32AllocPool(1024LL, 1886221383LL);
  v9 = (__int64)v18;
  if ( v18 )
    memset(v18, 0, 0x400uLL);
  if ( !v9 )
  {
LABEL_95:
    v17 = -1073741670;
    goto LABEL_29;
  }
  if ( (*((_DWORD *)a1 + 40) & 0x4000000) == 0 || (v19 = L"\\Device\\Video0", v15) )
    v19 = a1;
  RtlInitUnicodeString(&DestinationString, v19);
  v17 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, (PVOID)v9, 0x200u, &ResultLength);
  if ( v17 < 0 )
  {
LABEL_28:
    ZwClose(KeyHandle);
    if ( v17 >= 0 )
      goto LABEL_29;
LABEL_119:
    v73 = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(v73 + 24) = v17;
    WdLogEvent5_WdTrace(v73);
    goto LABEL_29;
  }
  v20 = *(unsigned int *)(v9 + 8);
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v21 = (char *)(v9 + v20);
  if ( a2 != 3 )
  {
    v22 = *(_WORD *)v21;
    if ( *(_WORD *)v21 )
    {
      do
      {
        *(_WORD *)v21 = toupper(v22);
        v21 += 2;
        v22 = *(_WORD *)v21;
      }
      while ( *(_WORD *)v21 );
      LODWORD(v20) = *(_DWORD *)(v9 + 8);
    }
    v23 = wcsstr((const wchar_t *)(v9 + (unsigned int)v20), L"\\CONTROL\\");
    if ( !v23 )
      v23 = wcsstr((const wchar_t *)(v9 + *(unsigned int *)(v9 + 8)), L"\\SERVICES");
    v24 = -1LL;
    if ( a4 )
    {
      v34 = a5 - 1;
      Str1 = a4;
      v82 = 0LL;
      v35 = -1LL;
      if ( a5 - 1 > 0x1F )
        v34 = 31;
      do
        ++v35;
      while ( *(_WORD *)(v9 + *(unsigned int *)(v9 + 8) + 2 * v35) );
      v36 = 102;
      v37 = (int)v35;
      *(_QWORD *)Length = 102LL;
      if ( (unsigned __int64)(2LL * (int)v35 + 12) > 0x66 )
      {
        v36 = 2 * v35 + 12;
        *(_QWORD *)Length = (unsigned int)v36;
      }
      v38 = (void *)PALLOCMEM2((unsigned int)v36);
      v87 = (unsigned __int64)v38;
      v39 = (unsigned __int64)v38;
      if ( v38 )
      {
        Size = v36;
        memset(v38, 0, v36);
        v40 = (unsigned __int64)v36 >> 1;
        StringCchCopyW((unsigned __int16 *)v39, v40, (const unsigned __int16 *)(v9 + *(unsigned int *)(v9 + 8)));
        for ( i = (_WORD *)(v39 + 2 * (v37 - 1)); (unsigned __int64)i > v39; --i )
        {
          if ( *i == 92 )
            goto LABEL_75;
        }
        if ( *i != 92 )
          goto LABEL_84;
LABEL_75:
        v44 = v40 - v37;
        v45 = (char *)(i + 1);
        if ( (unsigned __int64)(v44 - 1) > 0x7FFFFFFE )
        {
          if ( v44 )
            *(_WORD *)v45 = 0;
        }
        else
        {
          v46 = 2147483646 - v44;
          v47 = (char *)((char *)L"Video" - v45);
          do
          {
            if ( !(v44 + v46) )
              break;
            v48 = *(_WORD *)&v47[(_QWORD)v45];
            if ( !v48 )
              break;
            *(_WORD *)v45 = v48;
            v45 += 2;
            --v44;
          }
          while ( v44 );
          v49 = v45 - 2;
          if ( v44 )
            v49 = v45;
          *(_WORD *)v49 = 0;
        }
        RtlInitUnicodeString(&DestinationString, (PCWSTR)v39);
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&v82, 0x20019u, &ObjectAttributes) >= 0 )
        {
          v81 = 0;
          RtlInitUnicodeString(&DestinationString, L"Service");
          memset((void *)v39, 0, Size);
          if ( ZwQueryValueKey(v82, &DestinationString, KeyValueFullInformation, (PVOID)v39, Length[0], &v81) >= 0 )
          {
            v64 = *(unsigned int *)(v39 + 8);
            v65 = (unsigned __int16 *)(v39 + v64);
            v66 = *(_WORD *)(v39 + v64);
            if ( v66 )
            {
              do
              {
                *v65++ = toupper(v66);
                v66 = *v65;
              }
              while ( *v65 );
              LODWORD(v64) = *(_DWORD *)(v39 + 8);
            }
            v67 = v34;
            if ( v34 )
            {
              v68 = Str1;
              v69 = v39 + (unsigned int)v64 - (_QWORD)v85;
              v70 = Str1;
              do
              {
                v71 = *(wchar_t *)((char *)v68 + v69);
                --v34;
                if ( !v71 )
                  break;
                *v68++ = v71;
                Str1 = v68;
                if ( v34 == v67 - 3 )
                {
                  if ( !wcsnicmp(v70, L"VGA", 3uLL) )
                    break;
                  v68 = Str1;
                }
              }
              while ( v34 );
              v39 = v87;
            }
          }
          ZwClose(v82);
        }
LABEL_84:
        Win32FreePool(v39, v41, v42);
      }
      v10 = v88;
      v24 = -1LL;
      *Str1 = 0;
    }
    if ( v89 )
    {
      v72 = -1LL;
      do
        ++v72;
      while ( v23[v72] );
      do
        ++v24;
      while ( v23[v24] );
      StringCchPrintfW(
        &v23[v24],
        512 - ((unsigned int)(((__int64)v23 - v9) >> 1) >> 1) - (unsigned int)v72,
        L"\\Mon%08X",
        *v89);
    }
    *(_DWORD *)&Destination.Length = 33423360;
    Destination.Buffer = (PWSTR)(v9 + 512);
    RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\System\\CurrentControlSet");
    if ( (unsigned int)(a2 - 1) <= 1 )
    {
      if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 )
      {
        RtlAppendUnicodeToString(&Destination, L"\\Control\\UnitedVideo");
        if ( (unsigned __int8)RtlIsStateSeparationEnabled() )
        {
          v25 = 1;
LABEL_25:
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &Destination;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( a2 == 2 )
          {
            v17 = ZwCreateKey(&Handle, 0, &ObjectAttributes, 0, 0LL, v25, 0LL);
            if ( v17 < 0 )
              goto LABEL_118;
            while ( 1 )
            {
              v30 = wcschr(v23 + 1, 0x5Cu);
              v31 = v30;
              if ( v30 )
                *v30 = 0;
              RtlAppendUnicodeToString(&Destination, v23);
              if ( Handle )
                ZwClose(Handle);
              v32 = ZwCreateKey(&Handle, 0, &ObjectAttributes, 0, 0LL, v25, 0LL);
              v17 = v32;
              if ( v32 < 0 )
                break;
              if ( !v31 )
                goto LABEL_56;
              v23 = v31;
              *v31 = 92;
            }
            Handle = 0LL;
LABEL_56:
            if ( v32 < 0 )
LABEL_118:
              Handle = 0LL;
          }
          else
          {
            RtlAppendUnicodeToString(&Destination, v23);
            v17 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
            if ( v17 < 0 )
              v17 = -1073741438;
          }
          goto LABEL_28;
        }
      }
      else
      {
        RtlAppendUnicodeToString(&Destination, L"\\Hardware Profiles\\Current\\System\\CurrentControlSet");
      }
    }
    v25 = 0;
    goto LABEL_25;
  }
  if ( a4 )
  {
    v28 = StringCchCopyNW((char *)a4, a5, v21, 0x7FuLL);
    if ( (int)(v28 + 0x80000000) >= 0 )
    {
      v29 = v17;
      if ( v28 != -2147024774 )
        v29 = -1073741811;
      v17 = v29;
    }
  }
  ZwClose(KeyHandle);
LABEL_29:
  if ( v90 )
    *v90 = v17;
  if ( v10 )
    Win32FreePool((__int64)v10, v13, v14);
  if ( v9 )
    Win32FreePool(v9, v13, v14);
  v26 = WdLogNewEntry5_WdTrace();
  *(_QWORD *)(v26 + 24) = v17;
  WdLogEvent5_WdTrace(v26);
  return Handle;
}
