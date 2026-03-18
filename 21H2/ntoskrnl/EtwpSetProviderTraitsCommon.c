/*
 * XREFs of EtwpSetProviderTraitsCommon @ 0x14079781C
 * Callers:
 *     EtwpSetProviderTraitsKm @ 0x1406DEC48 (EtwpSetProviderTraitsKm.c)
 *     EtwpSetProviderTraitsUm @ 0x140797650 (EtwpSetProviderTraitsUm.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     strnlen @ 0x1403E2F80 (strnlen.c)
 *     TraitsCompare @ 0x1406B4704 (TraitsCompare.c)
 *     AddDecodeGuidToSessions @ 0x1406EA568 (AddDecodeGuidToSessions.c)
 *     EtwpAddRegEntryToGroup @ 0x140794F30 (EtwpAddRegEntryToGroup.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1407973D0 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpGetProviderGroupFromTraits @ 0x140797A74 (EtwpGetProviderGroupFromTraits.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpSetProviderTraitsCommon(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        struct _FAST_MUTEX *a7,
        __int64 a8)
{
  unsigned __int64 v8; // rdi
  void *v10; // r13
  __int16 v11; // r12
  __int64 v12; // rcx
  bool v13; // zf
  unsigned int v14; // edx
  struct _FAST_MUTEX *v15; // rcx
  _DWORD *v16; // r14
  char v17; // bp
  __int64 v18; // rax
  unsigned __int64 v19; // rbx
  bool v20; // r8
  int v21; // eax
  unsigned __int64 v22; // rax
  unsigned int v23; // ebx
  _OWORD *ProviderGroupFromTraits; // rax
  PFAST_MUTEX FastMutex[2]; // [rsp+48h] [rbp-60h] BYREF

  v8 = a5;
  v10 = (void *)a5;
  v11 = 0;
  FastMutex[0] = a7;
  if ( a6 < 3 )
    goto LABEL_40;
  if ( *(unsigned __int16 *)(a5 + 28) != a6 )
    goto LABEL_40;
  v12 = (unsigned int)strnlen((const char *)(a5 + 30), a6 - 2) + 3;
  v13 = (_DWORD)v12 == a6;
  if ( (unsigned int)v12 > a6 )
    goto LABEL_40;
  if ( (unsigned int)v12 < a6 )
  {
    while ( (int)v12 + 2 <= a6 )
    {
      v14 = *(unsigned __int16 *)(v12 + a5 + 28);
      if ( v14 < 3 )
        break;
      v12 = v14 + (unsigned int)v12;
      v13 = (_DWORD)v12 == a6;
      if ( (unsigned int)v12 >= a6 )
        goto LABEL_8;
    }
LABEL_40:
    v23 = -1073741566;
    goto LABEL_30;
  }
LABEL_8:
  if ( !v13 )
    goto LABEL_40;
  v15 = FastMutex[0];
  v16 = (_DWORD *)(a5 + 24);
  *(_OWORD *)a5 = 0LL;
  *(_QWORD *)(a5 + 16) = 0LL;
  v17 = 1;
  *(_DWORD *)(a5 + 24) = 1;
  ExAcquireFastMutex(v15);
  if ( (*(_BYTE *)(a8 + 8) & 1) != 0 )
  {
    v19 = *(_QWORD *)a8;
    if ( !*(_QWORD *)a8 )
    {
LABEL_19:
      v19 = 0LL;
LABEL_20:
      v20 = 0;
      goto LABEL_21;
    }
    v18 = a8 ^ v19;
  }
  else
  {
    v18 = *(_QWORD *)a8;
    v19 = *(_QWORD *)a8;
  }
  if ( !v18 )
    goto LABEL_19;
  v20 = 0;
  if ( !v19 )
  {
LABEL_21:
    RtlRbInsertNodeEx((unsigned __int64 *)a8, v19, v20, a5);
    v10 = 0LL;
    v17 = 0;
    goto LABEL_22;
  }
  while ( 1 )
  {
    v21 = TraitsCompare(a5, v19);
    if ( v21 <= 0 )
      break;
    v22 = *(_QWORD *)(v19 + 8);
    if ( !v22 )
    {
      v20 = 1;
      goto LABEL_21;
    }
LABEL_15:
    v19 = v22;
  }
  if ( v21 < 0 )
  {
    v22 = *(_QWORD *)v19;
    if ( !*(_QWORD *)v19 )
      goto LABEL_20;
    goto LABEL_15;
  }
  v16 = (_DWORD *)(v19 + 24);
  v8 = v19;
  ++*(_DWORD *)(v19 + 24);
LABEL_22:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 104), v8, 0LL) )
  {
    if ( v17 )
    {
      --*v16;
    }
    else
    {
      RtlRbRemoveNode((unsigned __int64 *)a8, v8);
      v10 = (void *)v8;
    }
    v23 = -1073741823;
  }
  else
  {
    v23 = 0;
  }
  KeReleaseGuardedMutex(FastMutex[0]);
  if ( !v23 )
  {
    if ( *(_WORD *)(v8 + 28) == 22 && *(_DWORD *)(v8 + 30) == 33559296 )
    {
      if ( AddDecodeGuidToSessions(a4) )
        v11 = 1024;
LABEL_29:
      _InterlockedOr16((volatile signed __int16 *)(a4 + 98), v11 | 0x200);
    }
    else
    {
      if ( *(_QWORD *)(a4 + 40) )
        goto LABEL_29;
      ProviderGroupFromTraits = (_OWORD *)EtwpGetProviderGroupFromTraits();
      if ( !ProviderGroupFromTraits )
        goto LABEL_29;
      *(_OWORD *)FastMutex = *ProviderGroupFromTraits;
      v23 = EtwpAddRegEntryToGroup(a4, (int)FastMutex, a1, a2, a3);
      if ( !v23 )
        goto LABEL_29;
      EtwpReleaseProviderTraitsReference(a4);
    }
  }
LABEL_30:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return v23;
}
