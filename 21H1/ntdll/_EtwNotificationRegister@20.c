/*
 * XREFs of _EtwNotificationRegister@20 @ 0x4B2C1950
 * Callers:
 *     _EtwEventRegister@16 @ 0x4B2AE0A0 (_EtwEventRegister@16.c)
 *     _EtwRegisterTraceGuidsW@32 @ 0x4B2E43A0 (_EtwRegisterTraceGuidsW@32.c)
 * Callees:
 *     _EtwpCheckForPrivatePreEnable@4 @ 0x4B2ADC20 (_EtwpCheckForPrivatePreEnable@4.c)
 *     _EtwpRegisterProvider@12 @ 0x4B2B0C39 (_EtwpRegisterProvider@12.c)
 *     _EtwpRegistrationCompare@8 @ 0x4B2C1ADC (_EtwpRegistrationCompare@8.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlRbInsertNodeEx@16 @ 0x4B2CEB50 (_RtlRbInsertNodeEx@16.c)
 *     _EtwpFreeRegistration@4 @ 0x4B2D9A81 (_EtwpFreeRegistration@4.c)
 *     _RtlSetLastWin32Error@4 @ 0x4B2DAB00 (_RtlSetLastWin32Error@4.c)
 *     _EtwpAllocateRegistration@16 @ 0x4B2E1B6C (_EtwpAllocateRegistration@16.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

ULONG __stdcall EtwNotificationRegister(void *Buf1, int a2, int a3, int a4, int *a5)
{
  ULONG v5; // esi
  int Registration; // eax
  int v7; // ebx
  unsigned int v8; // edi
  unsigned int v9; // eax
  int v10; // eax
  int v12; // [esp-4h] [ebp-24h]
  char v13; // [esp+10h] [ebp-10h]
  int v14; // [esp+14h] [ebp-Ch]
  int v15; // [esp+18h] [ebp-8h] BYREF
  __int16 v16; // [esp+1Ch] [ebp-4h]

  if ( !Buf1 || !a5 )
  {
    v5 = 87;
    goto LABEL_25;
  }
  if ( !memcmp(Buf1, &PrivateLoggerNotificationGuid, 0x10u) && PrivateLoggerNotificationEntry )
  {
    v12 = 87;
LABEL_32:
    v5 = v12;
LABEL_30:
    RtlSetLastWin32Error(v5);
    return v5;
  }
  *a5 = 0;
  v5 = 0;
  a5[1] = 0;
  Registration = EtwpAllocateRegistration(a4, a2);
  v7 = Registration;
  if ( !Registration )
  {
    v12 = 14;
    goto LABEL_32;
  }
  RtlAcquireSRWLockExclusive(Registration + 36);
  *(_DWORD *)(v7 + 44) = NtCurrentTeb()->ClientId.UniqueThread;
  if ( a2 != 10 )
  {
    v5 = EtwpRegisterProvider(v7, a3, a2);
    if ( v5 )
    {
      *(_DWORD *)(v7 + 44) = 0;
      RtlReleaseSRWLockExclusive(v7 + 36);
      EtwpFreeRegistration(v7);
      goto LABEL_25;
    }
  }
  v15 = v7 + 12;
  v16 = *(_WORD *)(v7 + 52);
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  v8 = EtwpRegistrationTable;
  if ( (dword_4B3A68B0 & 1) != 0 && EtwpRegistrationTable )
    v8 = (unsigned int)&EtwpRegistrationTable ^ EtwpRegistrationTable;
  v13 = 0;
  v14 = dword_4B3A68B0 & 1;
  if ( !v8 )
    goto LABEL_23;
  while ( (int)EtwpRegistrationCompare(&v15, v8) < 0 )
  {
    v9 = *(_DWORD *)v8;
    if ( v14 )
    {
      if ( !v9 )
        goto LABEL_21;
      v9 ^= v8;
    }
    if ( !v9 )
    {
LABEL_21:
      RtlRbInsertNodeEx(&EtwpRegistrationTable, v8, 0, v7);
      goto LABEL_24;
    }
LABEL_16:
    v8 = v9;
  }
  v9 = *(_DWORD *)(v8 + 4);
  if ( v14 )
  {
    if ( !v9 )
      goto LABEL_22;
    v9 ^= v8;
  }
  if ( v9 )
    goto LABEL_16;
LABEL_22:
  v13 = 1;
LABEL_23:
  RtlRbInsertNodeEx(&EtwpRegistrationTable, v8, v13, v7);
LABEL_24:
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  EtwpCheckForPrivatePreEnable(v7);
  *(_DWORD *)(v7 + 44) = 0;
  RtlReleaseSRWLockExclusive(v7 + 36);
  v10 = *(unsigned __int16 *)(v7 + 52);
  *a5 = v7;
  a5[1] = v10;
LABEL_25:
  if ( v5 )
    goto LABEL_30;
  return v5;
}
