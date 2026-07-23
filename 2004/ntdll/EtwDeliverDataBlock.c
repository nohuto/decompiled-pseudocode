/*
 * XREFs of EtwDeliverDataBlock @ 0x1800452A0
 * Callers:
 *     EtwpNotificationThread @ 0x180045160 (EtwpNotificationThread.c)
 *     EtwpSendSessionNotification @ 0x180055E54 (EtwpSendSessionNotification.c)
 * Callees:
 *     EtwReplyNotification @ 0x1800019A0 (EtwReplyNotification.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     EtwpFindGuidEntry @ 0x180043384 (EtwpFindGuidEntry.c)
 *     EtwpGetNextRegistration @ 0x18004562C (EtwpGetNextRegistration.c)
 *     EtwpFindRegistration @ 0x18004571C (EtwpFindRegistration.c)
 *     EtwpProcessNotification @ 0x1800457E0 (EtwpProcessNotification.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180050BF8 (EtwpDereferenceUmGuidEntry.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x180050C80 (EtwpAcquireGuidEntryExclusive.c)
 *     EtwpAllocateUmGuidEntry @ 0x1800835EC (EtwpAllocateUmGuidEntry.c)
 *     EtwpReferenceUmGuidEntry @ 0x180084D20 (EtwpReferenceUmGuidEntry.c)
 */

__int64 __fastcall EtwDeliverDataBlock(PETW_NOTIFICATION_HEADER Notification)
{
  ULONG v2; // r14d
  char v3; // r12
  char v4; // r13
  char v5; // si
  char v6; // r15
  bool v7; // zf
  _RTL_SRWLOCK *Registration; // rax
  __int64 NextRegistration; // rdi
  char v10; // r15
  ULONGLONG v11; // r13
  _QWORD *GuidEntry; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  char v16; // dl
  _BYTE *v17; // rax
  int v18; // r9d
  unsigned int v19; // ecx
  ULONGLONG *v20; // r8
  __int64 v21; // rax
  _BYTE *v22; // rcx
  _QWORD *v23; // r8
  ULONG Timeout; // [rsp+30h] [rbp-18h]
  _QWORD v25[2]; // [rsp+38h] [rbp-10h] BYREF
  char v26; // [rsp+90h] [rbp+48h]
  char v27; // [rsp+98h] [rbp+50h] BYREF
  BOOLEAN ReplyRequested; // [rsp+A0h] [rbp+58h]
  ULONG v29; // [rsp+A8h] [rbp+60h] BYREF

  v25[0] = 0LL;
  v2 = 0;
  v29 = 0;
  v3 = 0;
  v27 = 0;
  v4 = 0;
  v5 = 0;
  ReplyRequested = Notification->ReplyRequested;
  v6 = 0;
  Timeout = Notification->Timeout;
  v7 = Notification->NotificationType == EtwNotificationTypeEnable;
  v26 = 0;
  EtwpReplySend = 0;
  if ( v7 && (Notification[1].NotificationSize & 0x80000000) != 0 )
  {
    v6 = 1;
    LODWORD(Notification->Reserved2) = -1;
  }
  if ( LODWORD(Notification->Reserved2) != -1 )
  {
    Registration = (_RTL_SRWLOCK *)EtwpFindRegistration(&Notification->DestinationGuid, LOWORD(Notification->Reserved2));
    NextRegistration = (__int64)Registration;
    if ( Registration )
    {
      RtlAcquireSRWLockExclusive(Registration + 8);
      v10 = 1;
      *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
      EtwpProcessNotification(NextRegistration, Notification, v25, &v29, &v27);
      v11 = v25[0];
      v2 = v29;
      v3 = v27;
      goto LABEL_7;
    }
    v10 = 0;
LABEL_14:
    LODWORD(GuidEntry) = 0;
LABEL_15:
    v2 = 4201;
    goto LABEL_10;
  }
  LODWORD(GuidEntry) = 0;
  NextRegistration = EtwpGetNextRegistration(0LL);
  if ( !NextRegistration )
  {
LABEL_22:
    if ( v6 )
    {
      if ( PrivateLoggerNotificationEntry )
      {
        v11 = *(_QWORD *)(PrivateLoggerNotificationEntry + 88);
        if ( Notification[1].NotificationType != EtwNotificationTypeLegacyEnable )
        {
          GuidEntry = EtwpFindGuidEntry(&Notification->DestinationGuid.Data1);
          if ( GuidEntry )
            goto LABEL_28;
          if ( Notification[1].NotificationType )
          {
            GuidEntry = (_QWORD *)EtwpAllocateUmGuidEntry(&Notification->DestinationGuid);
            if ( !GuidEntry )
            {
              v10 = v26;
              goto LABEL_14;
            }
LABEL_28:
            EtwpAcquireGuidEntryExclusive(GuidEntry, v15);
            v16 = BYTE2(Notification[1].NotificationSize);
            v17 = (char *)GuidEntry + 78;
            v18 = 0;
            v19 = 0;
            while ( !*(v17 - 2) || *v17 != v16 )
            {
              ++v19;
              v17 += 24;
              if ( v19 >= 4 )
              {
                v20 = 0LL;
                goto LABEL_32;
              }
            }
            v20 = &GuidEntry[2 * v19 + 7 + v19];
LABEL_32:
            if ( !v20 )
            {
              if ( !Notification[1].NotificationType )
                goto LABEL_40;
              v21 = 0LL;
              v22 = (char *)GuidEntry + 76;
              do
              {
                if ( !*v22 )
                {
                  v23 = &GuidEntry[2 * v21 + 7 + v21];
                  goto LABEL_37;
                }
                v21 = (unsigned int)(v21 + 1);
                v22 += 24;
              }
              while ( (unsigned int)v21 < 4 );
              v23 = 0LL;
LABEL_37:
              if ( !v23 )
                goto LABEL_40;
              *((_BYTE *)v23 + 22) = v16;
              EtwpReferenceUmGuidEntry(GuidEntry);
            }
            *v20 = Notification[1].Reserved2;
            v20[1] = *(_QWORD *)&Notification[1].Timeout;
            *((_BYTE *)v20 + 21) = Notification[1].NotificationSize;
            *((_DWORD *)v20 + 4) = Notification[1].Offset;
            *((_BYTE *)v20 + 20) = Notification[1].NotificationType != v18;
LABEL_40:
            if ( HIBYTE(Notification[1].TargetPID) == 1 )
            {
              GuidEntry[19] = *(_QWORD *)&Notification[1].TargetPID;
              *((_DWORD *)GuidEntry + 40) = Notification[1].NotificationType;
            }
            *((_DWORD *)GuidEntry + 12) = v18;
            RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)GuidEntry + 5);
            EtwpDereferenceUmGuidEntry((PRTL_BALANCED_NODE)GuidEntry);
            v10 = v26;
            v5 = 1;
LABEL_7:
            if ( v3 || v5 )
            {
              LODWORD(GuidEntry) = 0;
              goto LABEL_9;
            }
            goto LABEL_14;
          }
        }
      }
    }
    v10 = v26;
    goto LABEL_15;
  }
  do
  {
    v14 = *(_QWORD *)&Notification->DestinationGuid.Data1 - *(_QWORD *)(NextRegistration + 32);
    if ( !v14 )
      v14 = *(_QWORD *)Notification->DestinationGuid.Data4 - *(_QWORD *)(NextRegistration + 40);
    if ( v14 )
      goto LABEL_20;
    if ( *(_DWORD *)(NextRegistration + 80) != LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(NextRegistration + 64));
      v4 = 1;
      *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
    }
    if ( (unsigned __int8)EtwpProcessNotification(NextRegistration, Notification, v25, &v29, &v27) )
      break;
    if ( v4 )
    {
      *(_DWORD *)(NextRegistration + 80) = 0;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(NextRegistration + 64));
      v4 = 0;
    }
LABEL_20:
    NextRegistration = EtwpGetNextRegistration(NextRegistration);
  }
  while ( NextRegistration );
  v3 = v27;
  v2 = v29;
  v26 = v4;
  if ( !v27 )
    goto LABEL_22;
  v11 = v25[0];
  v10 = v26;
LABEL_9:
  if ( ReplyRequested == 1 && !EtwpReplySend )
  {
    if ( v2 )
    {
      Notification->NotificationType = EtwNotificationTypeNoReply;
LABEL_59:
      Notification->NotificationSize = 72;
    }
    else if ( Notification->NotificationType == EtwNotificationTypeEnable )
    {
      goto LABEL_59;
    }
    Notification->Timeout = Timeout;
    Notification->ReplyRequested = 0;
    Notification->Reserved2 = v11;
    v2 = EtwReplyNotification(Notification);
  }
LABEL_10:
  if ( v10 )
  {
    *(_DWORD *)(NextRegistration + 80) = (_DWORD)GuidEntry;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(NextRegistration + 64));
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(NextRegistration + 72));
  }
  return v2;
}
