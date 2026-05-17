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

int __stdcall EtwDeliverDataBlock(int a1)
{
  char v1; // bh
  char v2; // bl
  bool v3; // zf
  int v4; // eax
  int Registration; // eax
  int NextRegistration; // edi
  int v7; // esi
  char v9; // bh
  const void *v10; // ecx
  _DWORD *GuidEntry; // eax
  _DWORD *v12; // ecx
  _BYTE *v13; // ebx
  char v14; // dl
  unsigned int i; // eax
  _BYTE *v16; // ebx
  unsigned int v17; // eax
  _DWORD *v18; // ebx
  int v19; // eax
  __int64 v20; // [esp+Ch] [ebp-18h] BYREF
  int v21; // [esp+14h] [ebp-10h]
  int v22; // [esp+18h] [ebp-Ch] BYREF
  _DWORD *v23; // [esp+1Ch] [ebp-8h]
  char v24; // [esp+20h] [ebp-4h]
  char v25; // [esp+21h] [ebp-3h]
  char v26; // [esp+22h] [ebp-2h] BYREF
  char v27; // [esp+23h] [ebp-1h]

  v1 = 0;
  v20 = 0LL;
  v2 = 0;
  v3 = *(_DWORD *)a1 == 3;
  v24 = *(_BYTE *)(a1 + 12);
  v4 = *(_DWORD *)(a1 + 16);
  v22 = 0;
  v26 = 0;
  v27 = 0;
  v25 = 0;
  v21 = v4;
  EtwpReplySend = 0;
  if ( v3 && *(__int16 *)(a1 + 78) < 0 )
  {
    *(_DWORD *)(a1 + 24) = -1;
    v1 = 1;
    v25 = 1;
  }
  if ( *(_DWORD *)(a1 + 24) != -1 )
  {
    Registration = EtwpFindRegistration(a1 + 40, *(_WORD *)(a1 + 24));
    NextRegistration = Registration;
    if ( Registration )
    {
      RtlAcquireSRWLockExclusive(Registration + 36);
      v27 = 1;
      *(_DWORD *)(NextRegistration + 44) = NtCurrentTeb()->ClientId.UniqueThread;
      EtwpProcessNotification(NextRegistration, a1, &v20, &v22, &v26);
      goto LABEL_7;
    }
LABEL_19:
    v7 = 4201;
    goto LABEL_10;
  }
  NextRegistration = EtwpGetNextRegistration(0);
  if ( !NextRegistration )
  {
LABEL_18:
    if ( !v1 )
      goto LABEL_19;
    if ( !PrivateLoggerNotificationEntry )
      goto LABEL_19;
    v3 = *(_DWORD *)(a1 + 72) == 2;
    v20 = *(int *)(PrivateLoggerNotificationEntry + 48);
    if ( v3 )
      goto LABEL_19;
    GuidEntry = EtwpFindGuidEntry((void *)(a1 + 40));
    v23 = GuidEntry;
    if ( !GuidEntry )
    {
      if ( !*(_DWORD *)(a1 + 72) )
        goto LABEL_19;
      GuidEntry = (_DWORD *)EtwpAllocateUmGuidEntry(a1 + 40);
      v23 = GuidEntry;
      if ( !GuidEntry )
        goto LABEL_19;
    }
    RtlAcquireSRWLockExclusive(GuidEntry + 7);
    v12 = v23;
    v23[8] = NtCurrentTeb()->ClientId.UniqueThread;
    v13 = (char *)v12 + 62;
    v14 = *(_BYTE *)(a1 + 78);
    for ( i = 0; i < 4; ++i )
    {
      if ( *(v13 - 2) && *v13 == v14 )
      {
        v16 = v13 - 22;
        goto LABEL_36;
      }
      v13 += 24;
    }
    v16 = 0;
LABEL_36:
    if ( !v16 )
    {
      if ( !*(_DWORD *)(a1 + 72) )
        goto LABEL_46;
      v17 = 0;
      v18 = v12;
      while ( *((_BYTE *)v18 + 60) )
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
      v16[22] = v14;
      EtwpReferenceUmGuidEntry(v12);
      v12 = v23;
    }
    *(_DWORD *)v16 = *(_DWORD *)(a1 + 96);
    *((_DWORD *)v16 + 1) = *(_DWORD *)(a1 + 100);
    *((_DWORD *)v16 + 2) = *(_DWORD *)(a1 + 88);
    *((_DWORD *)v16 + 3) = *(_DWORD *)(a1 + 92);
    v16[21] = *(_BYTE *)(a1 + 76);
    *((_DWORD *)v16 + 4) = *(_DWORD *)(a1 + 80);
    v16[20] = *(_DWORD *)(a1 + 72) != 0;
LABEL_46:
    if ( *(_BYTE *)(a1 + 107) == 1 )
    {
      v12[34] = *(_DWORD *)(a1 + 104);
      v12[35] = *(_DWORD *)(a1 + 108);
      v12[36] = *(_DWORD *)(a1 + 72);
    }
    v12[8] = 0;
    RtlReleaseSRWLockExclusive(v12 + 7);
    EtwpDereferenceUmGuidEntry(v23);
    v2 = 1;
LABEL_7:
    if ( v26 || v2 )
      goto LABEL_8;
    goto LABEL_19;
  }
  v9 = v27;
  v10 = (const void *)(a1 + 40);
  while ( memcmp(v10, (const void *)(NextRegistration + 12), 0x10u) )
  {
LABEL_16:
    NextRegistration = EtwpGetNextRegistration(NextRegistration);
    v10 = (const void *)(a1 + 40);
    if ( !NextRegistration )
      goto LABEL_17;
  }
  if ( *(void **)(NextRegistration + 44) != NtCurrentTeb()->ClientId.UniqueThread )
  {
    RtlAcquireSRWLockExclusive(NextRegistration + 36);
    v9 = 1;
    *(_DWORD *)(NextRegistration + 44) = NtCurrentTeb()->ClientId.UniqueThread;
  }
  if ( !(unsigned __int8)EtwpProcessNotification(NextRegistration, a1, &v20, &v22, &v26) )
  {
    if ( v9 )
    {
      *(_DWORD *)(NextRegistration + 44) = 0;
      RtlReleaseSRWLockExclusive(NextRegistration + 36);
      v9 = 0;
    }
    goto LABEL_16;
  }
LABEL_17:
  v27 = v9;
  v1 = v25;
  if ( !v26 )
    goto LABEL_18;
LABEL_8:
  if ( v24 != 1 || EtwpReplySend )
  {
    v7 = v22;
  }
  else
  {
    if ( v22 )
    {
      *(_DWORD *)a1 = 1;
      goto LABEL_55;
    }
    if ( *(_DWORD *)a1 == 3 )
LABEL_55:
      *(_DWORD *)(a1 + 4) = 72;
    *(_DWORD *)(a1 + 16) = v21;
    *(_DWORD *)(a1 + 24) = v20;
    v19 = HIDWORD(v20);
    *(_BYTE *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 28) = v19;
    v7 = EtwReplyNotification(a1);
  }
LABEL_10:
  if ( v27 )
  {
    *(_DWORD *)(NextRegistration + 44) = 0;
    RtlReleaseSRWLockExclusive(NextRegistration + 36);
    RtlReleaseSRWLockShared(NextRegistration + 40);
  }
  return v7;
}
