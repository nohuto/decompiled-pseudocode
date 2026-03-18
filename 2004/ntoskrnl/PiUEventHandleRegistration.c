/*
 * XREFs of PiUEventHandleRegistration @ 0x1406F35B0
 * Callers:
 *     PiUEventHandleIoctl @ 0x140646C6C (PiUEventHandleIoctl.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x140205DD0 (PsGetCurrentThreadProcessId.c)
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     RtlStringCchLengthW @ 0x140272AD8 (RtlStringCchLengthW.c)
 *     PiUEventHashStringIntoBucket @ 0x140272B3C (PiUEventHashStringIntoBucket.c)
 *     PiUEventHashGuidIntoBucket @ 0x14034A858 (PiUEventHashGuidIntoBucket.c)
 *     PiDmGetObject @ 0x1405DA3BC (PiDmGetObject.c)
 *     SeCaptureSubjectContext @ 0x1406944B0 (SeCaptureSubjectContext.c)
 *     PiUEventInitClientRegistrationContext @ 0x1406F3904 (PiUEventInitClientRegistrationContext.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14070A3A8 (PiUEventFreeClientRegistrationContext.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x14075B884 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 */

__int64 __fastcall PiUEventHandleRegistration(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  char **inited; // rdi
  int v8; // ebx
  int v9; // ecx
  int v10; // eax
  _QWORD *v11; // r14
  size_t v12; // r11
  int v13; // ecx
  int v14; // ecx
  unsigned int v15; // eax
  char *v16; // rdx
  char **v17; // rax
  int v19; // ecx
  int v20; // ecx
  char *v21; // rax
  char **v22; // rcx
  int v23; // ecx
  int v24; // ecx
  unsigned int v25; // eax
  char *v26; // rcx
  char **v27; // rax
  int Object; // eax
  unsigned int v29; // eax
  char *v30; // rcx
  char **v31; // rax
  __int64 v32; // [rsp+20h] [rbp-38h] BYREF
  char *v33; // [rsp+28h] [rbp-30h] BYREF
  size_t pcchLength; // [rsp+68h] [rbp+10h] BYREF

  v32 = 0LL;
  inited = 0LL;
  v33 = 0LL;
  if ( !a2 || a3 != 936 || a4 != 8 )
  {
    v8 = -1073741811;
    goto LABEL_24;
  }
  inited = (char **)PiUEventInitClientRegistrationContext();
  if ( !inited )
  {
    v8 = -1073741670;
LABEL_54:
    *(_QWORD *)(a1 + 32) = 0LL;
    return (unsigned int)v8;
  }
  inited[6] = (char *)PsGetCurrentThreadProcessId();
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)(inited + 7));
  v8 = RtlStringCchLengthW((STRSAFE_PCNZWCH)a2, 0x104uLL, &pcchLength);
  if ( v8 < 0 )
    goto LABEL_51;
  if ( *(_DWORD *)(a2 + 520) != 416 )
    goto LABEL_51;
  v9 = *(_DWORD *)(a2 + 528);
  if ( v9 >= 4 )
    goto LABEL_51;
  v10 = *(_DWORD *)(a2 + 524);
  if ( (v10 & 0xFFFFFFFC) != 0 || (v10 & 1) != 0 && v9 )
    goto LABEL_51;
  if ( (v10 & 2) != 0 && (unsigned int)(v9 - 2) > 1 )
    goto LABEL_51;
  v11 = (_QWORD *)(a2 + 536);
  if ( v9 == 1 && ((*v11 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    goto LABEL_51;
  v12 = 200LL;
  if ( v9 == 2 )
  {
    v8 = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a2 + 536), 0xC8uLL, &pcchLength);
    if ( v8 < 0 )
      goto LABEL_51;
  }
  if ( *(_DWORD *)(a2 + 528) == 3 )
  {
    v8 = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a2 + 536), v12, &pcchLength);
    if ( v8 < 0 )
      goto LABEL_51;
  }
  *((_DWORD *)inited + 33) = *(_DWORD *)(a2 + 528);
  v13 = *(_DWORD *)(a2 + 528);
  if ( v13 )
  {
    v19 = v13 - 1;
    if ( v19 )
    {
      v23 = v19 - 1;
      if ( !v23 || v23 == 1 )
      {
        if ( (*(_DWORD *)(a2 + 524) & 2) != 0 )
          goto LABEL_17;
        Object = PiDmGetObject(1LL, a2 + 536, (__int64 *)inited + 3);
        v8 = Object;
        if ( Object >= 0 )
          goto LABEL_17;
LABEL_52:
        if ( inited )
          PiUEventFreeClientRegistrationContext(inited);
        goto LABEL_54;
      }
    }
    else if ( (int)PiUEventGetDeviceInstanceIdFromUserHandle(*v11, &v32, &v33) >= 0 )
    {
      v8 = PiDmGetObject(1LL, *(_QWORD *)(v32 + 8), (__int64 *)inited + 3);
      if ( v8 >= 0 )
      {
        inited[4] = v33;
        *((_BYTE *)inited + 40) = 0;
        goto LABEL_17;
      }
      goto LABEL_52;
    }
LABEL_51:
    v8 = -1073741811;
    goto LABEL_52;
  }
  if ( (*(_DWORD *)(a2 + 524) & 1) == 0 )
    *(_OWORD *)(inited + 3) = *(_OWORD *)v11;
LABEL_17:
  *(_QWORD *)a2 = inited[11];
  *(_QWORD *)(a5 + 8) = 8LL;
  ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
  v14 = *(_DWORD *)(a2 + 528);
  if ( v14 )
  {
    v20 = v14 - 1;
    if ( v20 )
    {
      v24 = v20 - 1;
      if ( v24 )
      {
        if ( v24 != 1 )
        {
          v8 = -1073741811;
          goto LABEL_22;
        }
        if ( (*(_DWORD *)(a2 + 524) & 2) != 0 )
          v29 = 13;
        else
          v29 = PiUEventHashStringIntoBucket((PCWSTR)(a2 + 536));
        v30 = (char *)&PiUEventDevInstancePropertyClientList + 16 * v29;
        v31 = (char **)*((_QWORD *)v30 + 1);
        if ( *v31 == v30 )
        {
          ++PiUEventDevInstancePropertyClientCount;
          *inited = v30;
          inited[1] = (char *)v31;
          *v31 = (char *)inited;
          *((_QWORD *)v30 + 1) = inited;
          goto LABEL_22;
        }
      }
      else
      {
        if ( (*(_DWORD *)(a2 + 524) & 2) != 0 )
          v25 = 13;
        else
          v25 = PiUEventHashStringIntoBucket((PCWSTR)(a2 + 536));
        v26 = (char *)&PiUEventDevInstanceClientList + 16 * v25;
        v27 = (char **)*((_QWORD *)v26 + 1);
        if ( *v27 == v26 )
        {
          ++PiUEventDevInstanceClientCount;
          *inited = v26;
          inited[1] = (char *)v27;
          *v27 = (char *)inited;
          *((_QWORD *)v26 + 1) = inited;
          goto LABEL_22;
        }
      }
    }
    else
    {
      v21 = (char *)&PiUEventDevHandleClientList
          + 16 * (unsigned int)PiUEventHashStringIntoBucket(*((PCWSTR *)inited[3] + 2));
      v22 = (char **)*((_QWORD *)v21 + 1);
      if ( *v22 == v21 )
      {
        ++PiUEventDevHandleClientCount;
        *inited = v21;
        inited[1] = (char *)v22;
        *v22 = (char *)inited;
        *((_QWORD *)v21 + 1) = inited;
        goto LABEL_22;
      }
    }
LABEL_69:
    __fastfail(3u);
  }
  if ( (*(_DWORD *)(a2 + 524) & 1) != 0 )
    v15 = 13;
  else
    v15 = PiUEventHashGuidIntoBucket((unsigned __int8 *)(a2 + 536));
  v16 = (char *)&PiUEventDevInterfaceClientList + 16 * v15;
  v17 = (char **)*((_QWORD *)v16 + 1);
  if ( *v17 != v16 )
    goto LABEL_69;
  ++PiUEventDevInterfaceClientCount;
  *inited = v16;
  inited[1] = (char *)v17;
  *v17 = (char *)inited;
  *((_QWORD *)v16 + 1) = inited;
LABEL_22:
  KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  if ( v8 < 0 )
    goto LABEL_52;
  *(_QWORD *)(a1 + 32) = inited;
LABEL_24:
  if ( v8 < 0 )
    goto LABEL_52;
  return (unsigned int)v8;
}
