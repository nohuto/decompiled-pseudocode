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

ULONG __cdecl EtwNotificationRegister(
        LPCGUID Guid,
        ULONG Type,
        PETW_NOTIFICATION_CALLBACK Callback,
        PVOID Context,
        PREGHANDLE RegHandle)
{
  ULONG v5; // esi
  _RTL_SRWLOCK *Registration; // eax
  int v7; // ebx
  _RTL_BALANCED_NODE *Root; // edi
  _RTL_BALANCED_NODE *v9; // eax
  int v10; // eax
  size_t v12; // [esp-4h] [ebp-24h]
  int v13; // [esp-4h] [ebp-24h]
  BOOLEAN Right; // [esp+10h] [ebp-10h]
  int v15; // [esp+14h] [ebp-Ch]
  int v16; // [esp+18h] [ebp-8h] BYREF
  __int16 v17; // [esp+1Ch] [ebp-4h]

  if ( !Guid || !RegHandle )
  {
    v5 = 87;
    goto LABEL_25;
  }
  LODWORD(v12) = 16;
  if ( !memcmp(Guid, &PrivateLoggerNotificationGuid, v12) && PrivateLoggerNotificationEntry )
  {
    v13 = 87;
LABEL_32:
    v5 = v13;
LABEL_30:
    RtlSetLastWin32Error(v5);
    return v5;
  }
  *(_DWORD *)RegHandle = 0;
  v5 = 0;
  *((_DWORD *)RegHandle + 1) = 0;
  Registration = (_RTL_SRWLOCK *)EtwpAllocateRegistration(Context, Type);
  v7 = (int)Registration;
  if ( !Registration )
  {
    v13 = 14;
    goto LABEL_32;
  }
  RtlAcquireSRWLockExclusive(Registration + 9);
  *(_DWORD *)(v7 + 44) = NtCurrentTeb()->ClientId.UniqueThread;
  if ( Type != 10 )
  {
    v5 = EtwpRegisterProvider(v7, (int)Callback, Type);
    if ( v5 )
    {
      *(_DWORD *)(v7 + 44) = 0;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v7 + 36));
      EtwpFreeRegistration(v7);
      goto LABEL_25;
    }
  }
  v16 = v7 + 12;
  v17 = *(_WORD *)(v7 + 52);
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  Root = EtwpRegistrationTable.Root;
  if ( (*(_BYTE *)&EtwpRegistrationTable.0 & 1) != 0 && EtwpRegistrationTable.Root )
    Root = (_RTL_BALANCED_NODE *)((unsigned int)&EtwpRegistrationTable ^ (unsigned int)EtwpRegistrationTable.Root);
  Right = 0;
  v15 = *(_BYTE *)&EtwpRegistrationTable.0 & 1;
  if ( !Root )
    goto LABEL_23;
  while ( (int)EtwpRegistrationCompare(&v16, Root) < 0 )
  {
    v9 = Root->Children[0];
    if ( v15 )
    {
      if ( !v9 )
        goto LABEL_21;
      v9 = (_RTL_BALANCED_NODE *)((unsigned int)Root ^ (unsigned int)v9);
    }
    if ( !v9 )
    {
LABEL_21:
      RtlRbInsertNodeEx(&EtwpRegistrationTable, Root, 0, (PRTL_BALANCED_NODE)v7);
      goto LABEL_24;
    }
LABEL_16:
    Root = v9;
  }
  v9 = Root->Children[1];
  if ( v15 )
  {
    if ( !v9 )
      goto LABEL_22;
    v9 = (_RTL_BALANCED_NODE *)((unsigned int)Root ^ (unsigned int)v9);
  }
  if ( v9 )
    goto LABEL_16;
LABEL_22:
  Right = 1;
LABEL_23:
  RtlRbInsertNodeEx(&EtwpRegistrationTable, Root, Right, (PRTL_BALANCED_NODE)v7);
LABEL_24:
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  EtwpCheckForPrivatePreEnable(v7);
  *(_DWORD *)(v7 + 44) = 0;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v7 + 36));
  v10 = *(unsigned __int16 *)(v7 + 52);
  *(_DWORD *)RegHandle = v7;
  *((_DWORD *)RegHandle + 1) = v10;
LABEL_25:
  if ( v5 )
    goto LABEL_30;
  return v5;
}
