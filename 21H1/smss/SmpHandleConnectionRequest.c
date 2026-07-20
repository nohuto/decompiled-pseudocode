/*
 * XREFs of SmpHandleConnectionRequest @ 0x140003020
 * Callers:
 *     SmpApiCallback @ 0x140002A60 (SmpApiCallback.c)
 * Callees:
 *     SmpReadySubSys @ 0x1400028DC (SmpReadySubSys.c)
 *     SmpSearchKnownSubSysDatabase @ 0x1400034EC (SmpSearchKnownSubSysDatabase.c)
 *     SmpUnlockKnownSubSysList @ 0x1400035B8 (SmpUnlockKnownSubSysList.c)
 *     SmpLookupControlBlock @ 0x1400035E4 (SmpLookupControlBlock.c)
 *     SmpGetProcessMuSessionId @ 0x140003678 (SmpGetProcessMuSessionId.c)
 *     SmpWaitForSubSysStartup @ 0x140003918 (SmpWaitForSubSysStartup.c)
 *     SmpDereferenceKnownSubSys @ 0x140003A84 (SmpDereferenceKnownSubSys.c)
 *     SmpDestroyControlBlock @ 0x140003BE4 (SmpDestroyControlBlock.c)
 *     SmpReleaseControlBlock @ 0x140003C7C (SmpReleaseControlBlock.c)
 *     SmpAddKnownSubSys @ 0x140003DA8 (SmpAddKnownSubSys.c)
 *     SmpCreateKnownSubSys @ 0x140003DEC (SmpCreateKnownSubSys.c)
 *     __security_check_cookie @ 0x14000E4B0 (__security_check_cookie.c)
 *     SmpDeleteSubSys @ 0x140015678 (SmpDeleteSubSys.c)
 */

char __fastcall SmpHandleConnectionRequest(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 *v4; // rbx
  volatile signed __int32 *v5; // rdi
  _DWORD *v6; // r14
  __int64 v7; // rsi
  __int64 KnownSubSys; // r13
  __int64 v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rax
  char v16; // r14
  char *Heap; // rax
  int *v18; // rbx
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  _OWORD *v23; // rax
  char v25; // [rsp+50h] [rbp-B0h]
  char v26; // [rsp+51h] [rbp-AFh]
  int v27; // [rsp+54h] [rbp-ACh]
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v29; // [rsp+60h] [rbp-A0h] BYREF
  int v30; // [rsp+68h] [rbp-98h] BYREF
  _BYTE *v31; // [rsp+70h] [rbp-90h]
  __int64 v32; // [rsp+78h] [rbp-88h]
  ULONG MaxMessageLength; // [rsp+80h] [rbp-80h] BYREF
  void *PortHandle; // [rsp+88h] [rbp-78h] BYREF
  __int64 v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h] BYREF
  _OWORD *v37; // [rsp+A0h] [rbp-60h]
  _BYTE v38[16]; // [rsp+A8h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  int v40; // [rsp+C8h] [rbp-38h]
  __int64 v41; // [rsp+D0h] [rbp-30h]
  __int64 v42; // [rsp+D8h] [rbp-28h]
  int v43; // [rsp+E0h] [rbp-20h]
  __int128 v44; // [rsp+E8h] [rbp-18h]
  _SECURITY_QUALITY_OF_SERVICE SecurityQos; // [rsp+F8h] [rbp-8h] BYREF

  v4 = (__int64 *)(a2 + 8);
  v5 = 0LL;
  v35 = a1;
  v6 = (_DWORD *)(a2 + 40);
  v7 = 0LL;
  v26 = 0;
  v29 = 0;
  KnownSubSys = 0LL;
  v27 = 0;
  v25 = 1;
  v37 = (_OWORD *)(a2 + 8);
  if ( *(_QWORD *)(a2 + 8) == SmpUniqueProcessId || a4 )
  {
    Handle = 0LL;
  }
  else
  {
    v40 = 48;
    v41 = 0LL;
    v43 = 0;
    v42 = 0LL;
    v44 = 0LL;
    if ( (int)NtAlpcOpenSenderProcess(&Handle, a1, a2) < 0 )
    {
      Handle = 0LL;
      v25 = 0;
      goto LABEL_63;
    }
    SmpGetProcessMuSessionId(Handle, &v29);
    v11 = *v4;
    v12 = v29;
    v30 = 0;
    v31 = 0LL;
    v32 = v11;
    v5 = (volatile signed __int32 *)SmpSearchKnownSubSysDatabase(v29, &v30);
    if ( v5 )
    {
LABEL_38:
      if ( (v5[2] & 1) == 0 )
      {
        LODWORD(v32) = *v6;
        v30 = 1;
        v31 = 0LL;
        KnownSubSys = SmpSearchKnownSubSysDatabase(v12, &v30);
        if ( KnownSubSys )
        {
          v25 = 0;
LABEL_63:
          LOBYTE(Heap) = 0;
          goto LABEL_64;
        }
      }
      _m_prefetchw((const void *)(v5 + 2));
      if ( (_InterlockedOr(v5 + 2, 2u) & 2) != 0 )
      {
        v25 = 0;
        goto LABEL_63;
      }
LABEL_40:
      v16 = v26;
      goto LABEL_9;
    }
    v13 = SmpLookupControlBlock(v12);
    v7 = v13;
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 16);
      v15 = *(_QWORD *)(a2 + 8);
      if ( *(_QWORD *)(v14 + 8) != v15 )
      {
        if ( *(_QWORD *)(v7 + 56) == v15 )
        {
          v16 = 1;
          v27 = 8;
          v26 = 1;
          goto LABEL_9;
        }
        goto LABEL_51;
      }
      KnownSubSys = SmpCreateKnownSubSys(1LL);
      v31 = v38;
      SmpWaitForSubSysStartup(v12, 1LL, 0LL, v38);
      if ( *(_DWORD *)v14 || *(_QWORD *)(v14 + 8) != *(_QWORD *)(a2 + 8) )
      {
        v6 = (_DWORD *)(a2 + 40);
      }
      else
      {
        v5 = (volatile signed __int32 *)SmpSearchKnownSubSysDatabase(v12, &v30);
        v30 = 1;
        v6 = (_DWORD *)(a2 + 40);
        LODWORD(v32) = *(_DWORD *)(a2 + 40);
        if ( v5 )
        {
          v25 = 0;
        }
        else
        {
          v5 = (volatile signed __int32 *)SmpSearchKnownSubSysDatabase(v12, &v30);
          if ( v5 )
          {
            v25 = 0;
          }
          else if ( KnownSubSys )
          {
            *(_DWORD *)(KnownSubSys + 64) = v12;
            v5 = (volatile signed __int32 *)KnownSubSys;
            *(_QWORD *)(KnownSubSys + 32) = Handle;
            v22 = KnownSubSys;
            *(_DWORD *)(KnownSubSys + 24) = *v6;
            KnownSubSys = 0LL;
            Handle = 0LL;
            SmpAddKnownSubSys(v38, v22);
            v26 = 1;
          }
          else
          {
            v25 = 0;
          }
        }
      }
      SmpUnlockKnownSubSysList(v38);
      LOBYTE(Heap) = v25;
      if ( v25 != 1 )
      {
LABEL_64:
        v18 = 0LL;
        goto LABEL_15;
      }
      if ( !v5 )
        goto LABEL_40;
      goto LABEL_38;
    }
  }
LABEL_51:
  v16 = 0;
LABEL_9:
  Heap = (char *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag + 0x80000, 0x28uLL);
  v18 = (int *)Heap;
  if ( Heap )
  {
    RtlInitializeSRWLock(Heap + 24);
    v18[2] = 0;
    if ( v5 )
    {
      v20 = v27 | 0x10;
      *((_QWORD *)v18 + 4) = v5;
      LOBYTE(v27) = v27 | 0x10;
    }
    else
    {
      v19 = (__int64)Handle;
      if ( v27 )
        v19 = v7;
      *((_QWORD *)v18 + 4) = v19;
      v20 = v27;
    }
    *v18 = v20;
    *(_DWORD *)(a3 + 4) |= 0x20000000u;
    *((_QWORD *)v18 + 2) = 0LL;
    RtlAcquireSRWLockExclusive(v18 + 6);
    LOBYTE(Heap) = 1;
    goto LABEL_15;
  }
  v25 = 0;
  if ( v16 != 1 )
LABEL_15:
    v16 = 0;
  v21 = NtAlpcAcceptConnectPort(&v36, v35, 0LL, 0LL, 0LL, v18, a2, a3, (_BYTE)Heap);
  if ( v25 != 1 )
    goto LABEL_21;
  if ( v21 >= 0 )
  {
    v18[1] = *(_DWORD *)(AlpcGetMessageAttribute(a3, 0x20000000LL) + 16);
    *((_QWORD *)v18 + 2) = v36;
    LOBYTE(v21) = RtlReleaseSRWLockExclusive(v18 + 6);
    if ( v5 )
    {
      *(_WORD *)(a2 + 282) = 0;
      RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)(a2 + 44));
      SecurityQos.ImpersonationLevel = SecurityIdentification;
      *(_WORD *)&SecurityQos.ContextTrackingMode = 257;
      if ( NtConnectPort(&PortHandle, &DestinationString, &SecurityQos, 0LL, 0LL, &MaxMessageLength, 0LL, 0LL) >= 0 )
      {
        if ( MaxMessageLength == 288 )
          *((_QWORD *)v5 + 5) = PortHandle;
        else
          NtClose(PortHandle);
      }
      if ( v7 )
        NtSetEvent(*(HANDLE *)(v7 + 40), 0LL);
      if ( (v5[2] & 1) != 0 )
        v23 = v37;
      else
        v23 = (_OWORD *)(a2 + 40);
      LOBYTE(v21) = SmpReadySubSys((__int64)v5, v23);
      v5 = 0LL;
    }
    else if ( (v27 & 8) != 0 )
    {
      LOBYTE(v21) = 0;
      v7 = 0LL;
    }
    else if ( Handle )
    {
      LOBYTE(v21) = 0;
      Handle = 0LL;
    }
LABEL_21:
    if ( !v16 )
      goto LABEL_22;
    goto LABEL_70;
  }
  LOBYTE(v21) = RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v18);
  if ( v26 != 1 )
    goto LABEL_21;
LABEL_70:
  if ( v5 )
    SmpDeleteSubSys((PVOID)v5);
  LOBYTE(v21) = SmpDestroyControlBlock((PVOID)v7);
LABEL_22:
  if ( Handle )
    LOBYTE(v21) = NtClose(Handle);
  if ( v5 )
    LOBYTE(v21) = SmpDereferenceKnownSubSys((PVOID)v5);
  if ( KnownSubSys )
    LOBYTE(v21) = SmpDereferenceKnownSubSys((PVOID)KnownSubSys);
  if ( v7 )
    LOBYTE(v21) = SmpReleaseControlBlock((PVOID)v7);
  return v21;
}
