/*
 * XREFs of PiUEventHandleRegistration @ 0x14078D764
 * Callers:
 *     PiUEventHandleIoctl @ 0x14078C5BC (PiUEventHandleIoctl.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     PsGetCurrentThreadProcessId @ 0x1402A7BC0 (PsGetCurrentThreadProcessId.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     PiUEventHashGuidIntoBucket @ 0x1402DE1B8 (PiUEventHashGuidIntoBucket.c)
 *     PiUEventHashStringIntoBucket @ 0x1402E08A0 (PiUEventHashStringIntoBucket.c)
 *     RtlStringCchLengthW @ 0x1402E0AC4 (RtlStringCchLengthW.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x1406C9680 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406DD8D0 (PiUEventFreeClientRegistrationContext.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     PiDmGetObject @ 0x14077B0A4 (PiDmGetObject.c)
 *     PiUEventInitClientRegistrationContext @ 0x14078DAB0 (PiUEventInitClientRegistrationContext.c)
 */

__int64 __fastcall PiUEventHandleRegistration(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  char v5; // bp
  __int64 inited; // rdi
  __int64 v9; // rdx
  int v10; // ebx
  int v11; // ecx
  int v12; // eax
  void **v13; // r14
  size_t v14; // r11
  int v15; // ecx
  int v16; // ecx
  unsigned int v17; // eax
  char *v18; // rdx
  __int64 *v19; // rax
  int v21; // ecx
  int v22; // ecx
  char *v23; // rax
  __int64 *v24; // rcx
  int v25; // ecx
  int v26; // ecx
  unsigned int v27; // eax
  char *v28; // rcx
  __int64 *v29; // rax
  int Object; // eax
  unsigned int v31; // eax
  char *v32; // rcx
  __int64 *v33; // rax
  __int64 v34; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v35[6]; // [rsp+28h] [rbp-30h] BYREF
  size_t pcchLength; // [rsp+68h] [rbp+10h] BYREF

  v34 = 0LL;
  v5 = 0;
  v35[0] = 0LL;
  if ( !a2 || a3 != 936 || a4 != 8 )
  {
    v10 = -1073741811;
    goto LABEL_67;
  }
  inited = PiUEventInitClientRegistrationContext();
  if ( !inited )
  {
    v10 = -1073741670;
LABEL_67:
    inited = 0LL;
    goto LABEL_24;
  }
  *(_QWORD *)(inited + 48) = PsGetCurrentThreadProcessId();
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)(inited + 56));
  v10 = RtlStringCchLengthW((STRSAFE_PCNZWCH)a2, 0x104uLL, &pcchLength);
  if ( v10 < 0 )
    goto LABEL_51;
  if ( *(_DWORD *)(a2 + 520) != 416 )
    goto LABEL_51;
  v11 = *(_DWORD *)(a2 + 528);
  if ( v11 >= 4 )
    goto LABEL_51;
  v12 = *(_DWORD *)(a2 + 524);
  if ( (v12 & 0xFFFFFFFC) != 0 || (v12 & 1) != 0 && v11 )
    goto LABEL_51;
  if ( (v12 & 2) != 0 && (unsigned int)(v11 - 2) > 1 )
    goto LABEL_51;
  v13 = (void **)(a2 + 536);
  if ( v11 == 1 && (((unsigned __int64)*v13 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    goto LABEL_51;
  v14 = 200LL;
  if ( v11 == 2 )
  {
    v10 = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a2 + 536), 0xC8uLL, &pcchLength);
    if ( v10 < 0 )
      goto LABEL_51;
  }
  if ( *(_DWORD *)(a2 + 528) == 3 )
  {
    v10 = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a2 + 536), v14, &pcchLength);
    if ( v10 < 0 )
      goto LABEL_51;
  }
  *(_DWORD *)(inited + 132) = *(_DWORD *)(a2 + 528);
  v15 = *(_DWORD *)(a2 + 528);
  if ( !v15 )
  {
    if ( (*(_DWORD *)(a2 + 524) & 1) == 0 )
      *(_OWORD *)(inited + 24) = *(_OWORD *)v13;
    goto LABEL_17;
  }
  v21 = v15 - 1;
  if ( v21 )
  {
    v25 = v21 - 1;
    if ( !v25 || v25 == 1 )
    {
      if ( (*(_DWORD *)(a2 + 524) & 2) == 0 )
      {
        Object = PiDmGetObject(1LL, a2 + 536, (__int64 *)(inited + 24));
        v10 = Object;
        if ( Object < 0 )
          goto LABEL_52;
      }
      goto LABEL_17;
    }
LABEL_51:
    v10 = -1073741811;
    goto LABEL_52;
  }
  if ( (int)PiUEventGetDeviceInstanceIdFromUserHandle(*v13, &v34, v35) < 0 )
    goto LABEL_51;
  v10 = PiDmGetObject(1LL, *(_QWORD *)(v34 + 8), (__int64 *)(inited + 24));
  if ( v10 < 0 )
    goto LABEL_52;
  *(_QWORD *)(inited + 32) = v35[0];
  *(_BYTE *)(inited + 40) = 0;
LABEL_17:
  *(_QWORD *)a2 = *(_QWORD *)(inited + 88);
  *(_QWORD *)(a5 + 8) = 8LL;
  ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
  v16 = *(_DWORD *)(a2 + 528);
  if ( !v16 )
  {
    if ( (*(_DWORD *)(a2 + 524) & 1) != 0 )
      v17 = 13;
    else
      v17 = PiUEventHashGuidIntoBucket((unsigned __int8 *)(a2 + 536));
    v18 = (char *)&PiUEventDevInterfaceClientList + 16 * v17;
    v19 = (__int64 *)*((_QWORD *)v18 + 1);
    if ( (char *)*v19 == v18 )
    {
      ++PiUEventDevInterfaceClientCount;
      *(_QWORD *)inited = v18;
      *(_QWORD *)(inited + 8) = v19;
      *v19 = inited;
      *((_QWORD *)v18 + 1) = inited;
LABEL_22:
      v5 = 1;
      goto LABEL_23;
    }
    goto LABEL_65;
  }
  v22 = v16 - 1;
  if ( !v22 )
  {
    v23 = (char *)&PiUEventDevHandleClientList
        + 16 * (unsigned int)PiUEventHashStringIntoBucket(*(PCWSTR *)(*(_QWORD *)(inited + 24) + 16LL));
    v24 = (__int64 *)*((_QWORD *)v23 + 1);
    if ( (char *)*v24 == v23 )
    {
      ++PiUEventDevHandleClientCount;
      *(_QWORD *)inited = v23;
      *(_QWORD *)(inited + 8) = v24;
      *v24 = inited;
      *((_QWORD *)v23 + 1) = inited;
      goto LABEL_22;
    }
LABEL_65:
    __fastfail(3u);
  }
  v26 = v22 - 1;
  if ( !v26 )
  {
    if ( (*(_DWORD *)(a2 + 524) & 2) != 0 )
      v27 = 13;
    else
      v27 = PiUEventHashStringIntoBucket((PCWSTR)(a2 + 536));
    v28 = (char *)&PiUEventDevInstanceClientList + 16 * v27;
    v29 = (__int64 *)*((_QWORD *)v28 + 1);
    if ( (char *)*v29 == v28 )
    {
      ++PiUEventDevInstanceClientCount;
      *(_QWORD *)inited = v28;
      *(_QWORD *)(inited + 8) = v29;
      *v29 = inited;
      *((_QWORD *)v28 + 1) = inited;
      goto LABEL_22;
    }
    goto LABEL_65;
  }
  if ( v26 == 1 )
  {
    if ( (*(_DWORD *)(a2 + 524) & 2) != 0 )
      v31 = 13;
    else
      v31 = PiUEventHashStringIntoBucket((PCWSTR)(a2 + 536));
    v32 = (char *)&PiUEventDevInstancePropertyClientList + 16 * v31;
    v33 = (__int64 *)*((_QWORD *)v32 + 1);
    if ( (char *)*v33 == v32 )
    {
      ++PiUEventDevInstancePropertyClientCount;
      *(_QWORD *)inited = v32;
      *(_QWORD *)(inited + 8) = v33;
      *v33 = inited;
      *((_QWORD *)v32 + 1) = inited;
      goto LABEL_22;
    }
    goto LABEL_65;
  }
  v10 = -1073741811;
LABEL_23:
  KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  if ( v10 < 0 )
  {
LABEL_52:
    LOBYTE(v9) = v5;
    PiUEventFreeClientRegistrationContext((char *)inited, v9);
    goto LABEL_67;
  }
LABEL_24:
  *(_QWORD *)(a1 + 32) = inited;
  return (unsigned int)v10;
}
