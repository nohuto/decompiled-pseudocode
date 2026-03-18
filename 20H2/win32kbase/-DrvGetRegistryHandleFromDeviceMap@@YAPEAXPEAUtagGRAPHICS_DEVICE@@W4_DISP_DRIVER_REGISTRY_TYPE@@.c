/*
 * XREFs of ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0056EB4
 * Callers:
 *     DrvGetDisplayDriverParameters @ 0x1C000F8C0 (DrvGetDisplayDriverParameters.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C00100D4 (DrvUpdateDisplayDriverParameters.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C0012E00 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0015424 (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0015544 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C0016734 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00521C8 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C00522D0 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C0052FA0 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     DrvEnumDisplayDevices @ 0x1C0055B20 (DrvEnumDisplayDevices.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00CA1A0 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     DrvSetPruneFlag @ 0x1C0149330 (DrvSetPruneFlag.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003C5B0 (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     UserIsCurrentProcessDwm @ 0x1C0060F80 (UserIsCurrentProcessDwm.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C008FD68 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0097A34 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00B6A58 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     wcschr @ 0x1C00CBC90 (wcschr.c)
 *     wcsstr @ 0x1C00CBD98 (wcsstr.c)
 *     toupper @ 0x1C00CC024 (toupper.c)
 *     _wcsnicmp @ 0x1C00CC08C (_wcsnicmp.c)
 *     memset @ 0x1C00D3740 (memset.c)
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
  WCHAR *v9; // r14
  WCHAR *v10; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // esi
  WCHAR *v18; // rax
  NTSTATUS v19; // ebx
  WCHAR *v20; // rax
  const WCHAR *v21; // rdx
  __int64 v22; // rdx
  unsigned __int16 *v23; // rsi
  unsigned __int16 v24; // ax
  wchar_t *v25; // rsi
  __int64 v26; // r8
  ULONG v27; // r15d
  __int64 v28; // rax
  int v30; // eax
  int v31; // ecx
  wchar_t *v32; // rax
  wchar_t *v33; // rdi
  NTSTATUS v34; // eax
  const WCHAR *v35; // rdx
  int v36; // r12d
  __int64 v37; // rcx
  int v38; // ebx
  __int64 v39; // r13
  unsigned __int16 *v40; // rax
  unsigned __int16 *v41; // r15
  unsigned __int64 v42; // rbx
  unsigned __int16 *i; // rcx
  __int64 v44; // rbx
  char *v45; // rcx
  __int64 v46; // rdx
  char *v47; // r8
  __int16 v48; // ax
  char *v49; // rax
  __int64 v50; // rax
  unsigned __int16 *v51; // rcx
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int64 v59; // rax
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int64 v62; // rax
  unsigned __int16 *v63; // rbx
  unsigned __int16 v64; // cx
  int v65; // r13d
  wchar_t *v66; // rcx
  char *v67; // rbx
  wchar_t *v68; // r15
  wchar_t v69; // ax
  __int64 v70; // rcx
  __int64 v71; // rax
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t *Str1; // [rsp+60h] [rbp-A0h]
  void *KeyHandle; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+70h] [rbp-90h] BYREF
  ULONG ResultLength; // [rsp+80h] [rbp-80h] BYREF
  ULONG v79; // [rsp+84h] [rbp-7Ch] BYREF
  HANDLE v80; // [rsp+88h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  ULONG Length[2]; // [rsp+C0h] [rbp-40h]
  wchar_t *v83; // [rsp+C8h] [rbp-38h]
  size_t Size; // [rsp+D0h] [rbp-30h]
  unsigned __int16 *v85; // [rsp+D8h] [rbp-28h]
  WCHAR *v86; // [rsp+E0h] [rbp-20h]
  unsigned int *v87; // [rsp+E8h] [rbp-18h]
  NTSTATUS *v88; // [rsp+F0h] [rbp-10h]
  unsigned __int16 v89[160]; // [rsp+100h] [rbp+0h] BYREF

  v6 = a2;
  v88 = a6;
  v87 = a3;
  Handle = 0LL;
  KeyHandle = 0LL;
  ResultLength = 0;
  v83 = a4;
  v9 = 0LL;
  v10 = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v89, 0, 0x138uLL);
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12);
  v14[3] = a1;
  v14[4] = v6;
  v14[5] = a3;
  WdLogEvent5_WdTrace(v14);
  if ( a4 && !a5 )
  {
    v19 = -1073741811;
    goto LABEL_29;
  }
  if ( dword_1C024B240
    && (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu
    && Object
    && (PVOID)PsGetCurrentProcess(65533LL, v15) != gpepCSRSS
    && !(unsigned int)UserIsCurrentProcessDwm()
    && (*((_DWORD *)a1 + 40) & 0x4000000) != 0 )
  {
    v50 = 2LL;
    v51 = v89;
    do
    {
      v52 = *((_OWORD *)a1 + 1);
      *(_OWORD *)v51 = *(_OWORD *)a1;
      v53 = *((_OWORD *)a1 + 2);
      *((_OWORD *)v51 + 1) = v52;
      v54 = *((_OWORD *)a1 + 3);
      *((_OWORD *)v51 + 2) = v53;
      v55 = *((_OWORD *)a1 + 4);
      *((_OWORD *)v51 + 3) = v54;
      v56 = *((_OWORD *)a1 + 5);
      *((_OWORD *)v51 + 4) = v55;
      v57 = *((_OWORD *)a1 + 6);
      *((_OWORD *)v51 + 5) = v56;
      v58 = *((_OWORD *)a1 + 7);
      a1 += 64;
      *((_OWORD *)v51 + 6) = v57;
      v51 += 64;
      *((_OWORD *)v51 - 1) = v58;
      --v50;
    }
    while ( v50 );
    v59 = *((_QWORD *)a1 + 6);
    v60 = *((_OWORD *)a1 + 1);
    *(_OWORD *)v51 = *(_OWORD *)a1;
    v61 = *((_OWORD *)a1 + 2);
    a1 = v89;
    *((_OWORD *)v51 + 1) = v60;
    *((_OWORD *)v51 + 2) = v61;
    *((_QWORD *)v51 + 6) = v59;
    StringCchCopyW(v89, 0x20uLL, &Dest);
    *(_DWORD *)&v89[80] &= ~0x4000000u;
  }
  v17 = *((_DWORD *)a1 + 40) & 8;
  v18 = (WCHAR *)Win32AllocPool(512LL, 0x706D7447u);
  v86 = v18;
  v10 = v18;
  if ( v18 )
    memset(v18, 0, 0x200uLL);
  if ( !v10 )
    goto LABEL_95;
  if ( (*((_DWORD *)a1 + 40) & 0x4000000) == 0 || v17 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Hardware\\DeviceMap\\Video");
  }
  else
  {
    if ( (unsigned int)(a2 - 1) <= 1 )
    {
      v19 = -1073741766;
      goto LABEL_29;
    }
    DestinationString.Buffer = v10;
    *(_DWORD *)&DestinationString.Length = 33423360;
    RtlAppendUnicodeToString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Terminal Server\\Video\\");
    v35 = L"vgastub";
    if ( qword_1C024B228 )
      v35 = qword_1C024B228;
    RtlAppendUnicodeToString(&DestinationString, v35);
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v19 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v19 < 0 )
    goto LABEL_119;
  v20 = (WCHAR *)Win32AllocPool(1024LL, 0x706D7447u);
  v9 = v20;
  if ( v20 )
    memset(v20, 0, 0x400uLL);
  if ( !v9 )
  {
LABEL_95:
    v19 = -1073741670;
    goto LABEL_29;
  }
  if ( (*((_DWORD *)a1 + 40) & 0x4000000) == 0 || (v21 = L"\\Device\\Video0", v17) )
    v21 = a1;
  RtlInitUnicodeString(&DestinationString, v21);
  v19 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, v9, 0x200u, &ResultLength);
  if ( v19 < 0 )
  {
LABEL_28:
    ZwClose(KeyHandle);
    if ( v19 >= 0 )
      goto LABEL_29;
LABEL_119:
    v71 = WdLogNewEntry5_WdTrace(v16, v15);
    *(_QWORD *)(v71 + 24) = v19;
    WdLogEvent5_WdTrace(v71);
    goto LABEL_29;
  }
  v22 = *((unsigned int *)v9 + 2);
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v23 = (WCHAR *)((char *)v9 + v22);
  if ( a2 != 3 )
  {
    v24 = *v23;
    if ( *v23 )
    {
      do
      {
        *v23++ = toupper(v24);
        v24 = *v23;
      }
      while ( *v23 );
      LODWORD(v22) = *((_DWORD *)v9 + 2);
    }
    v25 = wcsstr((WCHAR *)((char *)v9 + (unsigned int)v22), L"\\CONTROL\\");
    if ( !v25 )
      v25 = wcsstr((WCHAR *)((char *)v9 + *((unsigned int *)v9 + 2)), L"\\SERVICES");
    v26 = -1LL;
    if ( a4 )
    {
      v36 = a5 - 1;
      Str1 = a4;
      v80 = 0LL;
      v37 = -1LL;
      if ( a5 - 1 > 0x1F )
        v36 = 31;
      do
        ++v37;
      while ( *(WCHAR *)((char *)&v9[v37] + *((unsigned int *)v9 + 2)) );
      v38 = 102;
      v39 = (int)v37;
      *(_QWORD *)Length = 102LL;
      if ( (unsigned __int64)(2LL * (int)v37 + 12) > 0x66 )
      {
        v38 = 2 * v37 + 12;
        *(_QWORD *)Length = (unsigned int)v38;
      }
      v40 = (unsigned __int16 *)PALLOCMEM2((unsigned int)v38, 1936876615LL, 1);
      v85 = v40;
      v41 = v40;
      if ( v40 )
      {
        Size = v38;
        memset(v40, 0, v38);
        v42 = (unsigned __int64)v38 >> 1;
        StringCchCopyW(v41, v42, (WCHAR *)((char *)v9 + *((unsigned int *)v9 + 2)));
        for ( i = &v41[v39 - 1]; i > v41; --i )
        {
          if ( *i == 92 )
            goto LABEL_75;
        }
        if ( *i != 92 )
          goto LABEL_84;
LABEL_75:
        v44 = v42 - v39;
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
        RtlInitUnicodeString(&DestinationString, v41);
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&v80, 0x20019u, &ObjectAttributes) >= 0 )
        {
          v79 = 0;
          RtlInitUnicodeString(&DestinationString, L"Service");
          memset(v41, 0, Size);
          if ( ZwQueryValueKey(v80, &DestinationString, KeyValueFullInformation, v41, Length[0], &v79) >= 0 )
          {
            v62 = *((unsigned int *)v41 + 2);
            v63 = (unsigned __int16 *)((char *)v41 + v62);
            v64 = *(unsigned __int16 *)((char *)v41 + v62);
            if ( v64 )
            {
              do
              {
                *v63++ = toupper(v64);
                v64 = *v63;
              }
              while ( *v63 );
              LODWORD(v62) = *((_DWORD *)v41 + 2);
            }
            v65 = v36;
            if ( v36 )
            {
              v66 = Str1;
              v67 = (char *)v41 + (unsigned int)v62 - (_QWORD)v83;
              v68 = Str1;
              do
              {
                v69 = *(wchar_t *)((char *)v66 + (_QWORD)v67);
                --v36;
                if ( !v69 )
                  break;
                *v66++ = v69;
                Str1 = v66;
                if ( v36 == v65 - 3 )
                {
                  if ( !wcsnicmp(v68, L"VGA", 3uLL) )
                    break;
                  v66 = Str1;
                }
              }
              while ( v36 );
              v41 = v85;
            }
          }
          ZwClose(v80);
        }
LABEL_84:
        Win32FreePool(v41);
      }
      v10 = v86;
      v26 = -1LL;
      *Str1 = 0;
    }
    if ( v87 )
    {
      v70 = -1LL;
      do
        ++v70;
      while ( v25[v70] );
      do
        ++v26;
      while ( v25[v26] );
      StringCchPrintfW(&v25[v26], 512 - ((unsigned int)(v25 - v9) >> 1) - (unsigned int)v70, L"\\Mon%08X", *v87);
    }
    *(_DWORD *)&Destination.Length = 33423360;
    Destination.Buffer = v9 + 256;
    RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\System\\CurrentControlSet");
    if ( (unsigned int)(a2 - 1) <= 1 )
    {
      if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 )
      {
        RtlAppendUnicodeToString(&Destination, L"\\Control\\UnitedVideo");
        if ( (unsigned __int8)RtlIsStateSeparationEnabled() )
        {
          v27 = 1;
LABEL_25:
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &Destination;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( a2 == 2 )
          {
            v19 = ZwCreateKey(&Handle, 0, &ObjectAttributes, 0, 0LL, v27, 0LL);
            if ( v19 < 0 )
              goto LABEL_118;
            while ( 1 )
            {
              v32 = wcschr(v25 + 1, 0x5Cu);
              v33 = v32;
              if ( v32 )
                *v32 = 0;
              RtlAppendUnicodeToString(&Destination, v25);
              if ( Handle )
                ZwClose(Handle);
              v34 = ZwCreateKey(&Handle, 0, &ObjectAttributes, 0, 0LL, v27, 0LL);
              v19 = v34;
              if ( v34 < 0 )
                break;
              if ( !v33 )
                goto LABEL_56;
              v25 = v33;
              *v33 = 92;
            }
            Handle = 0LL;
LABEL_56:
            if ( v34 < 0 )
LABEL_118:
              Handle = 0LL;
          }
          else
          {
            RtlAppendUnicodeToString(&Destination, v25);
            v19 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
            if ( v19 < 0 )
              v19 = -1073741438;
          }
          goto LABEL_28;
        }
      }
      else
      {
        RtlAppendUnicodeToString(&Destination, L"\\Hardware Profiles\\Current\\System\\CurrentControlSet");
      }
    }
    v27 = 0;
    goto LABEL_25;
  }
  if ( a4 )
  {
    v30 = StringCchCopyNW(a4, a5, v23, 0x7FuLL);
    if ( (int)(v30 + 0x80000000) >= 0 )
    {
      v31 = v19;
      if ( v30 != -2147024774 )
        v31 = -1073741811;
      v19 = v31;
    }
  }
  ZwClose(KeyHandle);
LABEL_29:
  if ( v88 )
    *v88 = v19;
  if ( v10 )
    Win32FreePool(v10);
  if ( v9 )
    Win32FreePool(v9);
  v28 = WdLogNewEntry5_WdTrace(v16, v15);
  *(_QWORD *)(v28 + 24) = v19;
  WdLogEvent5_WdTrace(v28);
  return Handle;
}
