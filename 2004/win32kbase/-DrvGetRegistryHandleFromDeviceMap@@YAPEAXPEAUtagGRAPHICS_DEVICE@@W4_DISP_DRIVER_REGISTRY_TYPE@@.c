/*
 * XREFs of ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C00963C8
 * Callers:
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00343D4 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C005B1A4 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     DrvEnumDisplayDevices @ 0x1C0094400 (DrvEnumDisplayDevices.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C00B38E8 (DrvUpdateDisplayDriverParameters.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C00B4AA0 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C00B5770 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C00B6F3C (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00B8BD4 (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00B8CF4 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvGetDisplayDriverParameters @ 0x1C00BB948 (DrvGetDisplayDriverParameters.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00CB1E0 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     DrvSetPruneFlag @ 0x1C014B800 (DrvSetPruneFlag.c)
 * Callees:
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0024CE0 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0056EF8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     PALLOCMEM2 @ 0x1C0080D68 (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     UserIsCurrentProcessDwm @ 0x1C009D410 (UserIsCurrentProcessDwm.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00A7BB0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     wcschr @ 0x1C00CCA80 (wcschr.c)
 *     wcsstr @ 0x1C00CCB88 (wcsstr.c)
 *     toupper @ 0x1C00CCE14 (toupper.c)
 *     _wcsnicmp @ 0x1C00CCE7C (_wcsnicmp.c)
 *     memset @ 0x1C00D3880 (memset.c)
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
  _QWORD *v12; // rax
  __int64 v13; // rdx
  int v14; // esi
  WCHAR *v15; // rax
  NTSTATUS v16; // ebx
  WCHAR *v17; // rax
  const WCHAR *v18; // rdx
  __int64 v19; // rdx
  char *v20; // rsi
  unsigned __int16 v21; // ax
  wchar_t *v22; // rsi
  __int64 v23; // r8
  ULONG v24; // r15d
  __int64 v25; // rax
  int v27; // eax
  int v28; // ecx
  wchar_t *v29; // rax
  wchar_t *v30; // rdi
  NTSTATUS v31; // eax
  const WCHAR *v32; // rdx
  int v33; // r12d
  __int64 v34; // rcx
  int v35; // ebx
  __int64 v36; // r13
  unsigned __int16 *v37; // rax
  unsigned __int16 *v38; // r15
  unsigned __int64 v39; // rbx
  unsigned __int16 *i; // rcx
  __int64 v41; // rbx
  char *v42; // rcx
  __int64 v43; // rdx
  char *v44; // r8
  __int16 v45; // ax
  char *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  unsigned __int16 *v49; // rcx
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int64 v57; // rax
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int64 v60; // rax
  unsigned __int16 *v61; // rbx
  unsigned __int16 v62; // cx
  int v63; // r13d
  wchar_t *v64; // rcx
  char *v65; // rbx
  wchar_t *v66; // r15
  wchar_t v67; // ax
  __int64 v68; // rcx
  __int64 v69; // rax
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t *Str1; // [rsp+60h] [rbp-A0h]
  void *KeyHandle; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+70h] [rbp-90h] BYREF
  ULONG ResultLength; // [rsp+80h] [rbp-80h] BYREF
  ULONG v77; // [rsp+84h] [rbp-7Ch] BYREF
  HANDLE v78; // [rsp+88h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  ULONG Length[2]; // [rsp+C0h] [rbp-40h]
  wchar_t *v81; // [rsp+C8h] [rbp-38h]
  size_t Size; // [rsp+D0h] [rbp-30h]
  unsigned __int16 *v83; // [rsp+D8h] [rbp-28h]
  WCHAR *v84; // [rsp+E0h] [rbp-20h]
  unsigned int *v85; // [rsp+E8h] [rbp-18h]
  NTSTATUS *v86; // [rsp+F0h] [rbp-10h]
  unsigned __int16 v87[160]; // [rsp+100h] [rbp+0h] BYREF

  v6 = a2;
  v86 = a6;
  v85 = a3;
  Handle = 0LL;
  KeyHandle = 0LL;
  ResultLength = 0;
  v81 = a4;
  v9 = 0LL;
  v10 = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v87, 0, 0x138uLL);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v12[3] = a1;
  v12[4] = v6;
  v12[5] = a3;
  WdLogEvent5_WdTrace(v12);
  if ( a4 && !a5 )
  {
    v16 = -1073741811;
    goto LABEL_29;
  }
  if ( dword_1C024D230
    && (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu
    && qword_1C024D240
    && (PVOID)PsGetCurrentProcess(65533LL, v13) != gpepCSRSS
    && !(unsigned int)UserIsCurrentProcessDwm(v47)
    && (*((_DWORD *)a1 + 40) & 0x4000000) != 0 )
  {
    v48 = 2LL;
    v49 = v87;
    do
    {
      v50 = *((_OWORD *)a1 + 1);
      *(_OWORD *)v49 = *(_OWORD *)a1;
      v51 = *((_OWORD *)a1 + 2);
      *((_OWORD *)v49 + 1) = v50;
      v52 = *((_OWORD *)a1 + 3);
      *((_OWORD *)v49 + 2) = v51;
      v53 = *((_OWORD *)a1 + 4);
      *((_OWORD *)v49 + 3) = v52;
      v54 = *((_OWORD *)a1 + 5);
      *((_OWORD *)v49 + 4) = v53;
      v55 = *((_OWORD *)a1 + 6);
      *((_OWORD *)v49 + 5) = v54;
      v56 = *((_OWORD *)a1 + 7);
      a1 += 64;
      *((_OWORD *)v49 + 6) = v55;
      v49 += 64;
      *((_OWORD *)v49 - 1) = v56;
      --v48;
    }
    while ( v48 );
    v57 = *((_QWORD *)a1 + 6);
    v58 = *((_OWORD *)a1 + 1);
    *(_OWORD *)v49 = *(_OWORD *)a1;
    v59 = *((_OWORD *)a1 + 2);
    a1 = v87;
    *((_OWORD *)v49 + 1) = v58;
    *((_OWORD *)v49 + 2) = v59;
    *((_QWORD *)v49 + 6) = v57;
    StringCchCopyW(v87, 0x20uLL, &Dest);
    *(_DWORD *)&v87[80] &= ~0x4000000u;
  }
  v14 = *((_DWORD *)a1 + 40) & 8;
  v15 = (WCHAR *)Win32AllocPool(512LL, 0x706D7447u);
  v84 = v15;
  v10 = v15;
  if ( v15 )
    memset(v15, 0, 0x200uLL);
  if ( !v10 )
    goto LABEL_95;
  if ( (*((_DWORD *)a1 + 40) & 0x4000000) == 0 || v14 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Hardware\\DeviceMap\\Video");
  }
  else
  {
    if ( (unsigned int)(a2 - 1) <= 1 )
    {
      v16 = -1073741766;
      goto LABEL_29;
    }
    DestinationString.Buffer = v10;
    *(_DWORD *)&DestinationString.Length = 33423360;
    RtlAppendUnicodeToString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Terminal Server\\Video\\");
    v32 = L"vgastub";
    if ( qword_1C024D218 )
      v32 = qword_1C024D218;
    RtlAppendUnicodeToString(&DestinationString, v32);
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v16 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v16 < 0 )
    goto LABEL_119;
  v17 = (WCHAR *)Win32AllocPool(1024LL, 0x706D7447u);
  v9 = v17;
  if ( v17 )
    memset(v17, 0, 0x400uLL);
  if ( !v9 )
  {
LABEL_95:
    v16 = -1073741670;
    goto LABEL_29;
  }
  if ( (*((_DWORD *)a1 + 40) & 0x4000000) == 0 || (v18 = L"\\Device\\Video0", v14) )
    v18 = a1;
  RtlInitUnicodeString(&DestinationString, v18);
  v16 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, v9, 0x200u, &ResultLength);
  if ( v16 < 0 )
  {
LABEL_28:
    ZwClose(KeyHandle);
    if ( v16 >= 0 )
      goto LABEL_29;
LABEL_119:
    v69 = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(v69 + 24) = v16;
    WdLogEvent5_WdTrace(v69);
    goto LABEL_29;
  }
  v19 = *((unsigned int *)v9 + 2);
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v20 = (char *)v9 + v19;
  if ( a2 != 3 )
  {
    v21 = *(_WORD *)v20;
    if ( *(_WORD *)v20 )
    {
      do
      {
        *(_WORD *)v20 = toupper(v21);
        v20 += 2;
        v21 = *(_WORD *)v20;
      }
      while ( *(_WORD *)v20 );
      LODWORD(v19) = *((_DWORD *)v9 + 2);
    }
    v22 = wcsstr((WCHAR *)((char *)v9 + (unsigned int)v19), L"\\CONTROL\\");
    if ( !v22 )
      v22 = wcsstr((WCHAR *)((char *)v9 + *((unsigned int *)v9 + 2)), L"\\SERVICES");
    v23 = -1LL;
    if ( a4 )
    {
      v33 = a5 - 1;
      Str1 = a4;
      v78 = 0LL;
      v34 = -1LL;
      if ( a5 - 1 > 0x1F )
        v33 = 31;
      do
        ++v34;
      while ( *(WCHAR *)((char *)&v9[v34] + *((unsigned int *)v9 + 2)) );
      v35 = 102;
      v36 = (int)v34;
      *(_QWORD *)Length = 102LL;
      if ( (unsigned __int64)(2LL * (int)v34 + 12) > 0x66 )
      {
        v35 = 2 * v34 + 12;
        *(_QWORD *)Length = (unsigned int)v35;
      }
      v37 = (unsigned __int16 *)PALLOCMEM2((unsigned int)v35, 0x73726447u, 1);
      v83 = v37;
      v38 = v37;
      if ( v37 )
      {
        Size = v35;
        memset(v37, 0, v35);
        v39 = (unsigned __int64)v35 >> 1;
        StringCchCopyW(v38, v39, (WCHAR *)((char *)v9 + *((unsigned int *)v9 + 2)));
        for ( i = &v38[v36 - 1]; i > v38; --i )
        {
          if ( *i == 92 )
            goto LABEL_75;
        }
        if ( *i != 92 )
          goto LABEL_84;
LABEL_75:
        v41 = v39 - v36;
        v42 = (char *)(i + 1);
        if ( (unsigned __int64)(v41 - 1) > 0x7FFFFFFE )
        {
          if ( v41 )
            *(_WORD *)v42 = 0;
        }
        else
        {
          v43 = 2147483646 - v41;
          v44 = (char *)((char *)L"Video" - v42);
          do
          {
            if ( !(v41 + v43) )
              break;
            v45 = *(_WORD *)&v44[(_QWORD)v42];
            if ( !v45 )
              break;
            *(_WORD *)v42 = v45;
            v42 += 2;
            --v41;
          }
          while ( v41 );
          v46 = v42 - 2;
          if ( v41 )
            v46 = v42;
          *(_WORD *)v46 = 0;
        }
        RtlInitUnicodeString(&DestinationString, v38);
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&v78, 0x20019u, &ObjectAttributes) >= 0 )
        {
          v77 = 0;
          RtlInitUnicodeString(&DestinationString, L"Service");
          memset(v38, 0, Size);
          if ( ZwQueryValueKey(v78, &DestinationString, KeyValueFullInformation, v38, Length[0], &v77) >= 0 )
          {
            v60 = *((unsigned int *)v38 + 2);
            v61 = (unsigned __int16 *)((char *)v38 + v60);
            v62 = *(unsigned __int16 *)((char *)v38 + v60);
            if ( v62 )
            {
              do
              {
                *v61++ = toupper(v62);
                v62 = *v61;
              }
              while ( *v61 );
              LODWORD(v60) = *((_DWORD *)v38 + 2);
            }
            v63 = v33;
            if ( v33 )
            {
              v64 = Str1;
              v65 = (char *)v38 + (unsigned int)v60 - (_QWORD)v81;
              v66 = Str1;
              do
              {
                v67 = *(wchar_t *)((char *)v64 + (_QWORD)v65);
                --v33;
                if ( !v67 )
                  break;
                *v64++ = v67;
                Str1 = v64;
                if ( v33 == v63 - 3 )
                {
                  if ( !wcsnicmp(v66, L"VGA", 3uLL) )
                    break;
                  v64 = Str1;
                }
              }
              while ( v33 );
              v38 = v83;
            }
          }
          ZwClose(v78);
        }
LABEL_84:
        Win32FreePool(v38);
      }
      v10 = v84;
      v23 = -1LL;
      *Str1 = 0;
    }
    if ( v85 )
    {
      v68 = -1LL;
      do
        ++v68;
      while ( v22[v68] );
      do
        ++v23;
      while ( v22[v23] );
      StringCchPrintfW(&v22[v23], 512 - ((unsigned int)(v22 - v9) >> 1) - (unsigned int)v68, L"\\Mon%08X", *v85);
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
          v24 = 1;
LABEL_25:
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &Destination;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( a2 == 2 )
          {
            v16 = ZwCreateKey(&Handle, 0, &ObjectAttributes, 0, 0LL, v24, 0LL);
            if ( v16 < 0 )
              goto LABEL_118;
            while ( 1 )
            {
              v29 = wcschr(v22 + 1, 0x5Cu);
              v30 = v29;
              if ( v29 )
                *v29 = 0;
              RtlAppendUnicodeToString(&Destination, v22);
              if ( Handle )
                ZwClose(Handle);
              v31 = ZwCreateKey(&Handle, 0, &ObjectAttributes, 0, 0LL, v24, 0LL);
              v16 = v31;
              if ( v31 < 0 )
                break;
              if ( !v30 )
                goto LABEL_56;
              v22 = v30;
              *v30 = 92;
            }
            Handle = 0LL;
LABEL_56:
            if ( v31 < 0 )
LABEL_118:
              Handle = 0LL;
          }
          else
          {
            RtlAppendUnicodeToString(&Destination, v22);
            v16 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
            if ( v16 < 0 )
              v16 = -1073741438;
          }
          goto LABEL_28;
        }
      }
      else
      {
        RtlAppendUnicodeToString(&Destination, L"\\Hardware Profiles\\Current\\System\\CurrentControlSet");
      }
    }
    v24 = 0;
    goto LABEL_25;
  }
  if ( a4 )
  {
    v27 = StringCchCopyNW((char *)a4, a5, v20, 0x7FuLL);
    if ( (int)(v27 + 0x80000000) >= 0 )
    {
      v28 = v16;
      if ( v27 != -2147024774 )
        v28 = -1073741811;
      v16 = v28;
    }
  }
  ZwClose(KeyHandle);
LABEL_29:
  if ( v86 )
    *v86 = v16;
  if ( v10 )
    Win32FreePool(v10);
  if ( v9 )
    Win32FreePool(v9);
  v25 = WdLogNewEntry5_WdTrace();
  *(_QWORD *)(v25 + 24) = v16;
  WdLogEvent5_WdTrace(v25);
  return Handle;
}
