/*
 * XREFs of PiUEventHandleRegistration @ 0x1406B9390
 * Callers:
 *     PiUEventHandleIoctl @ 0x1406B8F3C (PiUEventHandleIoctl.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x140252F04 (RtlStringCchLengthW.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     PiUEventHashGuidIntoBucket @ 0x14029E888 (PiUEventHashGuidIntoBucket.c)
 *     PsGetCurrentThreadProcessId @ 0x14029E930 (PsGetCurrentThreadProcessId.c)
 *     PiUEventHashStringIntoBucket @ 0x1402F91D4 (PiUEventHashStringIntoBucket.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     PiDmGetObject @ 0x14062B87C (PiDmGetObject.c)
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406B8888 (PiUEventFreeClientRegistrationContext.c)
 *     PiUEventInitClientRegistrationContext @ 0x1406BBC8C (PiUEventInitClientRegistrationContext.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x14076E41C (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 */

__int64 __fastcall PiUEventHandleRegistration(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 inited; // rdi
  char v6; // bp
  int v9; // ebx
  int v10; // ecx
  int v11; // eax
  _QWORD *v12; // r14
  size_t v13; // r11
  int v14; // ecx
  int v15; // ecx
  unsigned int v16; // eax
  char *v17; // rdx
  __int64 *v18; // rax
  int v20; // ecx
  int v21; // ecx
  char *v22; // rax
  __int64 *v23; // rcx
  int v24; // ecx
  int v25; // ecx
  unsigned int v26; // eax
  char *v27; // rcx
  __int64 *v28; // rax
  int Object; // eax
  unsigned int v30; // eax
  char *v31; // rcx
  __int64 *v32; // rax
  __int64 v33; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v34[6]; // [rsp+28h] [rbp-30h] BYREF
  size_t pcchLength; // [rsp+68h] [rbp+10h] BYREF

  v33 = 0LL;
  inited = 0LL;
  v34[0] = 0LL;
  v6 = 0;
  if ( !a2 || a3 != 936 || a4 != 8 )
  {
    v9 = -1073741811;
    goto LABEL_25;
  }
  inited = PiUEventInitClientRegistrationContext();
  if ( !inited )
  {
    v9 = -1073741670;
LABEL_55:
    *(_QWORD *)(a1 + 32) = 0LL;
    return (unsigned int)v9;
  }
  *(_QWORD *)(inited + 48) = PsGetCurrentThreadProcessId();
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)(inited + 56));
  v9 = RtlStringCchLengthW((STRSAFE_PCNZWCH)a2, 0x104uLL, &pcchLength);
  if ( v9 < 0 )
    goto LABEL_52;
  if ( *(_DWORD *)(a2 + 520) != 416 )
    goto LABEL_52;
  v10 = *(_DWORD *)(a2 + 528);
  if ( v10 >= 4 )
    goto LABEL_52;
  v11 = *(_DWORD *)(a2 + 524);
  if ( (v11 & 0xFFFFFFFC) != 0 || (v11 & 1) != 0 && v10 )
    goto LABEL_52;
  if ( (v11 & 2) != 0 && (unsigned int)(v10 - 2) > 1 )
    goto LABEL_52;
  v12 = (_QWORD *)(a2 + 536);
  if ( v10 == 1 && ((*v12 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    goto LABEL_52;
  v13 = 200LL;
  if ( v10 == 2 )
  {
    v9 = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a2 + 536), 0xC8uLL, &pcchLength);
    if ( v9 < 0 )
      goto LABEL_52;
  }
  if ( *(_DWORD *)(a2 + 528) == 3 )
  {
    v9 = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a2 + 536), v13, &pcchLength);
    if ( v9 < 0 )
      goto LABEL_52;
  }
  *(_DWORD *)(inited + 132) = *(_DWORD *)(a2 + 528);
  v14 = *(_DWORD *)(a2 + 528);
  if ( v14 )
  {
    v20 = v14 - 1;
    if ( v20 )
    {
      v24 = v20 - 1;
      if ( !v24 || v24 == 1 )
      {
        if ( (*(_DWORD *)(a2 + 524) & 2) != 0 )
          goto LABEL_17;
        Object = PiDmGetObject(1LL, a2 + 536, (__int64 *)(inited + 24));
        v9 = Object;
        if ( Object >= 0 )
          goto LABEL_17;
LABEL_53:
        if ( inited )
          PiUEventFreeClientRegistrationContext((char *)inited, v6);
        goto LABEL_55;
      }
    }
    else if ( (int)PiUEventGetDeviceInstanceIdFromUserHandle(*v12, &v33, v34) >= 0 )
    {
      v9 = PiDmGetObject(1LL, *(_QWORD *)(v33 + 8), (__int64 *)(inited + 24));
      if ( v9 >= 0 )
      {
        *(_QWORD *)(inited + 32) = v34[0];
        *(_BYTE *)(inited + 40) = 0;
        goto LABEL_17;
      }
      goto LABEL_53;
    }
LABEL_52:
    v9 = -1073741811;
    goto LABEL_53;
  }
  if ( (*(_DWORD *)(a2 + 524) & 1) == 0 )
    *(_OWORD *)(inited + 24) = *(_OWORD *)v12;
LABEL_17:
  *(_QWORD *)a2 = *(_QWORD *)(inited + 88);
  *(_QWORD *)(a5 + 8) = 8LL;
  ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
  v15 = *(_DWORD *)(a2 + 528);
  if ( v15 )
  {
    v21 = v15 - 1;
    if ( v21 )
    {
      v25 = v21 - 1;
      if ( v25 )
      {
        if ( v25 != 1 )
        {
          v9 = -1073741811;
          goto LABEL_23;
        }
        if ( (*(_DWORD *)(a2 + 524) & 2) != 0 )
          v30 = 13;
        else
          v30 = PiUEventHashStringIntoBucket((PCWSTR)(a2 + 536));
        v31 = (char *)&PiUEventDevInstancePropertyClientList + 16 * v30;
        v32 = (__int64 *)*((_QWORD *)v31 + 1);
        if ( (char *)*v32 == v31 )
        {
          ++PiUEventDevInstancePropertyClientCount;
          *(_QWORD *)inited = v31;
          *(_QWORD *)(inited + 8) = v32;
          *v32 = inited;
          *((_QWORD *)v31 + 1) = inited;
          goto LABEL_22;
        }
      }
      else
      {
        if ( (*(_DWORD *)(a2 + 524) & 2) != 0 )
          v26 = 13;
        else
          v26 = PiUEventHashStringIntoBucket((PCWSTR)(a2 + 536));
        v27 = (char *)&PiUEventDevInstanceClientList + 16 * v26;
        v28 = (__int64 *)*((_QWORD *)v27 + 1);
        if ( (char *)*v28 == v27 )
        {
          ++PiUEventDevInstanceClientCount;
          *(_QWORD *)inited = v27;
          *(_QWORD *)(inited + 8) = v28;
          *v28 = inited;
          *((_QWORD *)v27 + 1) = inited;
          goto LABEL_22;
        }
      }
    }
    else
    {
      v22 = (char *)&PiUEventDevHandleClientList
          + 16 * (unsigned int)PiUEventHashStringIntoBucket(*(PCWSTR *)(*(_QWORD *)(inited + 24) + 16LL));
      v23 = (__int64 *)*((_QWORD *)v22 + 1);
      if ( (char *)*v23 == v22 )
      {
        ++PiUEventDevHandleClientCount;
        *(_QWORD *)inited = v22;
        *(_QWORD *)(inited + 8) = v23;
        *v23 = inited;
        *((_QWORD *)v22 + 1) = inited;
        goto LABEL_22;
      }
    }
LABEL_70:
    __fastfail(3u);
  }
  if ( (*(_DWORD *)(a2 + 524) & 1) != 0 )
    v16 = 13;
  else
    v16 = PiUEventHashGuidIntoBucket((unsigned __int8 *)(a2 + 536));
  v17 = (char *)&PiUEventDevInterfaceClientList + 16 * v16;
  v18 = (__int64 *)*((_QWORD *)v17 + 1);
  if ( (char *)*v18 != v17 )
    goto LABEL_70;
  ++PiUEventDevInterfaceClientCount;
  *(_QWORD *)inited = v17;
  *(_QWORD *)(inited + 8) = v18;
  *v18 = inited;
  *((_QWORD *)v17 + 1) = inited;
LABEL_22:
  v6 = 1;
LABEL_23:
  KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  if ( v9 < 0 )
    goto LABEL_53;
  *(_QWORD *)(a1 + 32) = inited;
LABEL_25:
  if ( v9 < 0 )
    goto LABEL_53;
  return (unsigned int)v9;
}
