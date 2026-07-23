/*
 * XREFs of PiUEventHandleRegistration @ 0x1406801D8
 * Callers:
 *     PiUEventHandleIoctl @ 0x14068334C (PiUEventHandleIoctl.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x14025ECF0 (PsGetCurrentThreadProcessId.c)
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     PiUEventHashGuidIntoBucket @ 0x1402DEF2C (PiUEventHashGuidIntoBucket.c)
 *     RtlStringCchLengthW @ 0x1402DF438 (RtlStringCchLengthW.c)
 *     PiUEventHashStringIntoBucket @ 0x1402DF6A8 (PiUEventHashStringIntoBucket.c)
 *     SeCaptureSubjectContext @ 0x1405EAF70 (SeCaptureSubjectContext.c)
 *     PiUEventInitClientRegistrationContext @ 0x14067D7C0 (PiUEventInitClientRegistrationContext.c)
 *     PiDmGetObject @ 0x1406A89EC (PiDmGetObject.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406E6538 (PiUEventFreeClientRegistrationContext.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x140759A84 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 */

__int64 __fastcall PiUEventHandleRegistration(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  _WNF_STATE_NAME *inited; // rdi
  NTSTATUS v8; // ebx
  int v9; // ecx
  int v10; // eax
  _QWORD *v11; // r14
  size_t v12; // r11
  int v13; // ecx
  int v14; // ecx
  unsigned int v15; // eax
  char *v16; // rdx
  _WNF_STATE_NAME **v17; // rax
  int v19; // ecx
  int v20; // ecx
  char *v21; // rax
  _WNF_STATE_NAME **v22; // rcx
  int v23; // ecx
  int v24; // ecx
  unsigned int v25; // eax
  char *v26; // rcx
  _WNF_STATE_NAME **v27; // rax
  int Object; // eax
  unsigned int v29; // eax
  char *v30; // rcx
  _WNF_STATE_NAME **v31; // rax
  __int64 v32; // [rsp+20h] [rbp-38h] BYREF
  _WNF_STATE_NAME v33; // [rsp+28h] [rbp-30h] BYREF
  size_t pcchLength; // [rsp+68h] [rbp+10h] BYREF

  v32 = 0LL;
  inited = 0LL;
  v33 = 0LL;
  if ( !a2 || a3 != 936 || a4 != 8 )
  {
    v8 = -1073741811;
    goto LABEL_24;
  }
  inited = PiUEventInitClientRegistrationContext();
  if ( !inited )
  {
    v8 = -1073741670;
LABEL_54:
    *(_QWORD *)(a1 + 32) = 0LL;
    return (unsigned int)v8;
  }
  inited[6] = (_WNF_STATE_NAME)PsGetCurrentThreadProcessId();
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&inited[7]);
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
  inited[16].Data[1] = *(_DWORD *)(a2 + 528);
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
        Object = PiDmGetObject(1LL, a2 + 536, &inited[3]);
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
      v8 = PiDmGetObject(1LL, *(_QWORD *)(v32 + 8), &inited[3]);
      if ( v8 >= 0 )
      {
        inited[4] = v33;
        LOBYTE(inited[5].Data[0]) = 0;
        goto LABEL_17;
      }
      goto LABEL_52;
    }
LABEL_51:
    v8 = -1073741811;
    goto LABEL_52;
  }
  if ( (*(_DWORD *)(a2 + 524) & 1) == 0 )
    *(_OWORD *)inited[3].Data = *(_OWORD *)v11;
LABEL_17:
  *(_WNF_STATE_NAME *)a2 = inited[11];
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
        v31 = (_WNF_STATE_NAME **)*((_QWORD *)v30 + 1);
        if ( *v31 == (_WNF_STATE_NAME *)v30 )
        {
          ++PiUEventDevInstancePropertyClientCount;
          *inited = (_WNF_STATE_NAME)v30;
          inited[1] = (_WNF_STATE_NAME)v31;
          *v31 = inited;
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
        v27 = (_WNF_STATE_NAME **)*((_QWORD *)v26 + 1);
        if ( *v27 == (_WNF_STATE_NAME *)v26 )
        {
          ++PiUEventDevInstanceClientCount;
          *inited = (_WNF_STATE_NAME)v26;
          inited[1] = (_WNF_STATE_NAME)v27;
          *v27 = inited;
          *((_QWORD *)v26 + 1) = inited;
          goto LABEL_22;
        }
      }
    }
    else
    {
      v21 = (char *)&PiUEventDevHandleClientList
          + 16 * (unsigned int)PiUEventHashStringIntoBucket(*(PCWSTR *)(*(_QWORD *)&inited[3] + 16LL));
      v22 = (_WNF_STATE_NAME **)*((_QWORD *)v21 + 1);
      if ( *v22 == (_WNF_STATE_NAME *)v21 )
      {
        ++PiUEventDevHandleClientCount;
        *inited = (_WNF_STATE_NAME)v21;
        inited[1] = (_WNF_STATE_NAME)v22;
        *v22 = inited;
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
  v17 = (_WNF_STATE_NAME **)*((_QWORD *)v16 + 1);
  if ( *v17 != (_WNF_STATE_NAME *)v16 )
    goto LABEL_69;
  ++PiUEventDevInterfaceClientCount;
  *inited = (_WNF_STATE_NAME)v16;
  inited[1] = (_WNF_STATE_NAME)v17;
  *v17 = inited;
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
