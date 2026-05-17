/*
 * XREFs of EtwDeliverDataBlock @ 0x1800452F0
 * Callers:
 *     EtwpNotificationThread @ 0x1800451B0 (EtwpNotificationThread.c)
 *     EtwpSendSessionNotification @ 0x180055EA4 (EtwpSendSessionNotification.c)
 * Callees:
 *     EtwReplyNotification @ 0x1800019A0 (EtwReplyNotification.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     EtwpFindGuidEntry @ 0x1800433D4 (EtwpFindGuidEntry.c)
 *     EtwpGetNextRegistration @ 0x18004567C (EtwpGetNextRegistration.c)
 *     EtwpFindRegistration @ 0x18004576C (EtwpFindRegistration.c)
 *     EtwpProcessNotification @ 0x180045830 (EtwpProcessNotification.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180050C48 (EtwpDereferenceUmGuidEntry.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x180050CD0 (EtwpAcquireGuidEntryExclusive.c)
 *     EtwpAllocateUmGuidEntry @ 0x1800836EC (EtwpAllocateUmGuidEntry.c)
 *     EtwpReferenceUmGuidEntry @ 0x180084E20 (EtwpReferenceUmGuidEntry.c)
 */

__int64 __fastcall EtwDeliverDataBlock(__int64 a1)
{
  unsigned int v2; // r14d
  char v3; // r12
  char v4; // r13
  char v5; // si
  char v6; // r15
  bool v7; // zf
  __int64 Registration; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int64 NextRegistration; // rdi
  char v13; // r15
  __int64 v14; // r13
  _QWORD *GuidEntry; // rsi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  char v22; // dl
  _BYTE *v23; // rax
  int v24; // r9d
  unsigned int v25; // ecx
  _QWORD *v26; // r8
  __int64 v27; // rax
  _BYTE *v28; // rcx
  _QWORD *v29; // r8
  int v30; // [rsp+30h] [rbp-18h]
  _QWORD v31[2]; // [rsp+38h] [rbp-10h] BYREF
  char v32; // [rsp+90h] [rbp+48h]
  char v33; // [rsp+98h] [rbp+50h] BYREF
  char v34; // [rsp+A0h] [rbp+58h]
  unsigned int v35; // [rsp+A8h] [rbp+60h] BYREF

  v31[0] = 0LL;
  v2 = 0;
  v35 = 0;
  v3 = 0;
  v33 = 0;
  v4 = 0;
  v5 = 0;
  v34 = *(_BYTE *)(a1 + 12);
  v6 = 0;
  v30 = *(_DWORD *)(a1 + 16);
  v7 = *(_DWORD *)a1 == 3;
  v32 = 0;
  EtwpReplySend = 0;
  if ( v7 && *(__int16 *)(a1 + 78) < 0 )
  {
    v6 = 1;
    *(_DWORD *)(a1 + 24) = -1;
  }
  if ( *(_DWORD *)(a1 + 24) != -1 )
  {
    Registration = EtwpFindRegistration(a1 + 40, *(unsigned __int16 *)(a1 + 24));
    NextRegistration = Registration;
    if ( Registration )
    {
      RtlAcquireSRWLockExclusive(Registration + 64, v9, v10, v11);
      v13 = 1;
      *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
      EtwpProcessNotification(NextRegistration, a1, v31, &v35, &v33);
      v14 = v31[0];
      v2 = v35;
      v3 = v33;
      goto LABEL_7;
    }
    v13 = 0;
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
        v14 = *(_QWORD *)(PrivateLoggerNotificationEntry + 88);
        if ( *(_DWORD *)(a1 + 72) != 2 )
        {
          GuidEntry = EtwpFindGuidEntry((_QWORD *)(a1 + 40), v17, v18, v19);
          if ( GuidEntry )
            goto LABEL_28;
          if ( *(_DWORD *)(a1 + 72) )
          {
            GuidEntry = (_QWORD *)EtwpAllocateUmGuidEntry(a1 + 40);
            if ( !GuidEntry )
            {
              v13 = v32;
              goto LABEL_14;
            }
LABEL_28:
            EtwpAcquireGuidEntryExclusive(GuidEntry, v21);
            v22 = *(_BYTE *)(a1 + 78);
            v23 = (char *)GuidEntry + 78;
            v24 = 0;
            v25 = 0;
            while ( !*(v23 - 2) || *v23 != v22 )
            {
              ++v25;
              v23 += 24;
              if ( v25 >= 4 )
              {
                v26 = 0LL;
                goto LABEL_32;
              }
            }
            v26 = &GuidEntry[2 * v25 + 7 + v25];
LABEL_32:
            if ( !v26 )
            {
              if ( !*(_DWORD *)(a1 + 72) )
                goto LABEL_40;
              v27 = 0LL;
              v28 = (char *)GuidEntry + 76;
              do
              {
                if ( !*v28 )
                {
                  v29 = &GuidEntry[2 * v27 + 7 + v27];
                  goto LABEL_37;
                }
                v27 = (unsigned int)(v27 + 1);
                v28 += 24;
              }
              while ( (unsigned int)v27 < 4 );
              v29 = 0LL;
LABEL_37:
              if ( !v29 )
                goto LABEL_40;
              *((_BYTE *)v29 + 22) = v22;
              EtwpReferenceUmGuidEntry(GuidEntry);
            }
            *v26 = *(_QWORD *)(a1 + 96);
            v26[1] = *(_QWORD *)(a1 + 88);
            *((_BYTE *)v26 + 21) = *(_BYTE *)(a1 + 76);
            *((_DWORD *)v26 + 4) = *(_DWORD *)(a1 + 80);
            *((_BYTE *)v26 + 20) = *(_DWORD *)(a1 + 72) != v24;
LABEL_40:
            if ( *(_BYTE *)(a1 + 107) == 1 )
            {
              GuidEntry[19] = *(_QWORD *)(a1 + 104);
              *((_DWORD *)GuidEntry + 40) = *(_DWORD *)(a1 + 72);
            }
            *((_DWORD *)GuidEntry + 12) = v24;
            RtlReleaseSRWLockExclusive(GuidEntry + 5);
            EtwpDereferenceUmGuidEntry(GuidEntry);
            v13 = v32;
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
    v13 = v32;
    goto LABEL_15;
  }
  do
  {
    v20 = *(_QWORD *)(a1 + 40) - *(_QWORD *)(NextRegistration + 32);
    if ( !v20 )
      v20 = *(_QWORD *)(a1 + 48) - *(_QWORD *)(NextRegistration + 40);
    if ( v20 )
      goto LABEL_20;
    if ( *(_DWORD *)(NextRegistration + 80) != LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    {
      RtlAcquireSRWLockExclusive(NextRegistration + 64, v17, v18, v19);
      v4 = 1;
      *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
    }
    if ( (unsigned __int8)EtwpProcessNotification(NextRegistration, a1, v31, &v35, &v33) )
      break;
    if ( v4 )
    {
      *(_DWORD *)(NextRegistration + 80) = 0;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(NextRegistration + 64));
      v4 = 0;
    }
LABEL_20:
    NextRegistration = EtwpGetNextRegistration(NextRegistration);
  }
  while ( NextRegistration );
  v3 = v33;
  v2 = v35;
  v32 = v4;
  if ( !v33 )
    goto LABEL_22;
  v14 = v31[0];
  v13 = v32;
LABEL_9:
  if ( v34 == 1 && !EtwpReplySend )
  {
    if ( v2 )
    {
      *(_DWORD *)a1 = 1;
LABEL_59:
      *(_DWORD *)(a1 + 4) = 72;
    }
    else if ( *(_DWORD *)a1 == 3 )
    {
      goto LABEL_59;
    }
    *(_DWORD *)(a1 + 16) = v30;
    *(_BYTE *)(a1 + 12) = 0;
    *(_QWORD *)(a1 + 24) = v14;
    v2 = EtwReplyNotification(a1);
  }
LABEL_10:
  if ( v13 )
  {
    *(_DWORD *)(NextRegistration + 80) = (_DWORD)GuidEntry;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(NextRegistration + 64));
    RtlReleaseSRWLockShared((volatile signed __int64 *)(NextRegistration + 72));
  }
  return v2;
}
