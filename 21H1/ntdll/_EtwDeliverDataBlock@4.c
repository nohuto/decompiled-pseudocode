/*
 * XREFs of _EtwDeliverDataBlock@4 @ 0x4B2AE4B0
 * Callers:
 *     _EtwpNotificationThread@16 @ 0x4B2AE380 (_EtwpNotificationThread@16.c)
 *     _EtwpSendSessionNotification@12 @ 0x4B2F0314 (_EtwpSendSessionNotification@12.c)
 * Callees:
 *     _EtwpFindGuidEntry@4 @ 0x4B2ADC68 (_EtwpFindGuidEntry@4.c)
 *     _EtwpProcessNotification@20 @ 0x4B2AE63A (_EtwpProcessNotification@20.c)
 *     _EtwpFindRegistration@8 @ 0x4B2AE6F5 (_EtwpFindRegistration@8.c)
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _EtwpDereferenceUmGuidEntry@4 @ 0x4B2EE4C1 (_EtwpDereferenceUmGuidEntry@4.c)
 *     _EtwpGetNextRegistration@4 @ 0x4B2EF857 (_EtwpGetNextRegistration@4.c)
 *     _EtwpAllocateUmGuidEntry@4 @ 0x4B2F2509 (_EtwpAllocateUmGuidEntry@4.c)
 *     _EtwpReferenceUmGuidEntry@4 @ 0x4B2F2700 (_EtwpReferenceUmGuidEntry@4.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 *     _EtwReplyNotification@4 @ 0x4B382400 (_EtwReplyNotification@4.c)
 */

ULONG __stdcall EtwDeliverDataBlock(PETW_NOTIFICATION_HEADER Notification)
{
  char v1; // bh
  char v2; // bl
  bool v3; // zf
  ULONG Timeout; // eax
  _RTL_SRWLOCK *Registration; // eax
  _RTL_SRWLOCK *NextRegistration; // edi
  ULONG v7; // esi
  char v9; // bh
  GUID *p_DestinationGuid; // ecx
  _RTL_SRWLOCK *GuidEntry; // eax
  _RTL_SRWLOCK *v12; // ecx
  _BYTE *v13; // ebx
  char v14; // dl
  unsigned int i; // eax
  _RTL_SRWLOCK *v16; // ebx
  unsigned int v17; // eax
  _RTL_SRWLOCK *v18; // ebx
  int v19; // eax
  size_t v20; // [esp-4h] [ebp-28h]
  __int64 v21; // [esp+Ch] [ebp-18h] BYREF
  ULONG v22; // [esp+14h] [ebp-10h]
  ULONG v23; // [esp+18h] [ebp-Ch] BYREF
  PVOID BaseAddress; // [esp+1Ch] [ebp-8h]
  BOOLEAN ReplyRequested; // [esp+20h] [ebp-4h]
  char v26; // [esp+21h] [ebp-3h]
  char v27; // [esp+22h] [ebp-2h] BYREF
  char v28; // [esp+23h] [ebp-1h]

  v1 = 0;
  v21 = 0LL;
  v2 = 0;
  v3 = Notification->NotificationType == EtwNotificationTypeEnable;
  ReplyRequested = Notification->ReplyRequested;
  Timeout = Notification->Timeout;
  v23 = 0;
  v27 = 0;
  v28 = 0;
  v26 = 0;
  v22 = Timeout;
  EtwpReplySend = 0;
  if ( v3 && (Notification[1].NotificationSize & 0x80000000) != 0 )
  {
    LODWORD(Notification->Reserved2) = -1;
    v1 = 1;
    v26 = 1;
  }
  if ( LODWORD(Notification->Reserved2) != -1 )
  {
    Registration = (_RTL_SRWLOCK *)EtwpFindRegistration(&Notification->DestinationGuid, LOWORD(Notification->Reserved2));
    NextRegistration = Registration;
    if ( Registration )
    {
      RtlAcquireSRWLockExclusive(Registration + 9);
      v28 = 1;
      NextRegistration[11].0 = ($64EDA4DD838E80CF9A7DD220E06F3FD2)NtCurrentTeb()->ClientId.UniqueThread;
      EtwpProcessNotification(NextRegistration, Notification, &v21, &v23, &v27);
      goto LABEL_7;
    }
LABEL_19:
    v7 = 4201;
    goto LABEL_10;
  }
  NextRegistration = (_RTL_SRWLOCK *)EtwpGetNextRegistration(0);
  if ( !NextRegistration )
  {
LABEL_18:
    if ( !v1 )
      goto LABEL_19;
    if ( !PrivateLoggerNotificationEntry )
      goto LABEL_19;
    v3 = Notification[1].NotificationType == EtwNotificationTypeLegacyEnable;
    v21 = *(int *)(PrivateLoggerNotificationEntry + 48);
    if ( v3 )
      goto LABEL_19;
    GuidEntry = (_RTL_SRWLOCK *)EtwpFindGuidEntry(&Notification->DestinationGuid);
    BaseAddress = GuidEntry;
    if ( !GuidEntry )
    {
      if ( !Notification[1].NotificationType )
        goto LABEL_19;
      GuidEntry = (_RTL_SRWLOCK *)EtwpAllocateUmGuidEntry(&Notification->DestinationGuid);
      BaseAddress = GuidEntry;
      if ( !GuidEntry )
        goto LABEL_19;
    }
    RtlAcquireSRWLockExclusive(GuidEntry + 7);
    v12 = (_RTL_SRWLOCK *)BaseAddress;
    *((_DWORD *)BaseAddress + 8) = NtCurrentTeb()->ClientId.UniqueThread;
    v13 = (char *)&v12[15].Value + 2;
    v14 = BYTE2(Notification[1].NotificationSize);
    for ( i = 0; i < 4; ++i )
    {
      if ( *(v13 - 2) && *v13 == v14 )
      {
        v16 = (_RTL_SRWLOCK *)(v13 - 22);
        goto LABEL_36;
      }
      v13 += 24;
    }
    v16 = 0;
LABEL_36:
    if ( !v16 )
    {
      if ( !Notification[1].NotificationType )
        goto LABEL_46;
      v17 = 0;
      v18 = v12;
      while ( v18[15].0 )
      {
        ++v17;
        v18 += 6;
        if ( v17 >= 4 )
        {
          v16 = 0;
          goto LABEL_43;
        }
      }
      v16 = v18 + 10;
LABEL_43:
      if ( !v16 )
        goto LABEL_46;
      BYTE2(v16[5].Value) = v14;
      EtwpReferenceUmGuidEntry(v12);
      v12 = (_RTL_SRWLOCK *)BaseAddress;
    }
    *(_QWORD *)&v16->0 = Notification[1].Reserved2;
    v16[2].0 = ($64EDA4DD838E80CF9A7DD220E06F3FD2)Notification[1].Timeout;
    v16[3].0 = ($64EDA4DD838E80CF9A7DD220E06F3FD2)Notification[1].ReplyCount;
    *((_BYTE *)&v16[5].0 + 1) = Notification[1].NotificationSize;
    v16[4].0 = ($64EDA4DD838E80CF9A7DD220E06F3FD2)Notification[1].Offset;
    *(_BYTE *)&v16[5].0 = Notification[1].NotificationType != 0;
LABEL_46:
    if ( HIBYTE(Notification[1].TargetPID) == 1 )
    {
      v12[34].0 = ($64EDA4DD838E80CF9A7DD220E06F3FD2)Notification[1].TargetPID;
      v12[35].0 = ($64EDA4DD838E80CF9A7DD220E06F3FD2)Notification[1].SourcePID;
      v12[36].0 = ($64EDA4DD838E80CF9A7DD220E06F3FD2)Notification[1].NotificationType;
    }
    v12[8].Value = 0;
    RtlReleaseSRWLockExclusive(v12 + 7);
    EtwpDereferenceUmGuidEntry(BaseAddress);
    v2 = 1;
LABEL_7:
    if ( v27 || v2 )
      goto LABEL_8;
    goto LABEL_19;
  }
  v9 = v28;
  p_DestinationGuid = &Notification->DestinationGuid;
  while ( 1 )
  {
    LODWORD(v20) = 16;
    if ( !memcmp(p_DestinationGuid, &NextRegistration[3], v20) )
      break;
LABEL_16:
    NextRegistration = (_RTL_SRWLOCK *)EtwpGetNextRegistration(NextRegistration);
    p_DestinationGuid = &Notification->DestinationGuid;
    if ( !NextRegistration )
      goto LABEL_17;
  }
  if ( (void *)NextRegistration[11].Value != NtCurrentTeb()->ClientId.UniqueThread )
  {
    RtlAcquireSRWLockExclusive(NextRegistration + 9);
    v9 = 1;
    NextRegistration[11].0 = ($64EDA4DD838E80CF9A7DD220E06F3FD2)NtCurrentTeb()->ClientId.UniqueThread;
  }
  if ( !(unsigned __int8)EtwpProcessNotification(NextRegistration, Notification, &v21, &v23, &v27) )
  {
    if ( v9 )
    {
      NextRegistration[11].Value = 0;
      RtlReleaseSRWLockExclusive(NextRegistration + 9);
      v9 = 0;
    }
    goto LABEL_16;
  }
LABEL_17:
  v28 = v9;
  v1 = v26;
  if ( !v27 )
    goto LABEL_18;
LABEL_8:
  if ( ReplyRequested != 1 || EtwpReplySend )
  {
    v7 = v23;
  }
  else
  {
    if ( v23 )
    {
      Notification->NotificationType = EtwNotificationTypeNoReply;
      goto LABEL_55;
    }
    if ( Notification->NotificationType == EtwNotificationTypeEnable )
LABEL_55:
      Notification->NotificationSize = 72;
    Notification->Timeout = v22;
    LODWORD(Notification->Reserved2) = v21;
    v19 = HIDWORD(v21);
    Notification->ReplyRequested = 0;
    HIDWORD(Notification->Reserved2) = v19;
    v7 = EtwReplyNotification(Notification);
  }
LABEL_10:
  if ( v28 )
  {
    NextRegistration[11].Value = 0;
    RtlReleaseSRWLockExclusive(NextRegistration + 9);
    RtlReleaseSRWLockShared(NextRegistration + 10);
  }
  return v7;
}
