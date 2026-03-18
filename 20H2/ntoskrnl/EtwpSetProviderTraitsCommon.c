/*
 * XREFs of EtwpSetProviderTraitsCommon @ 0x1406697B8
 * Callers:
 *     EtwpSetProviderTraitsUm @ 0x1406695EC (EtwpSetProviderTraitsUm.c)
 *     EtwpSetProviderTraitsKm @ 0x14077B368 (EtwpSetProviderTraitsKm.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140216290 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x140216FB0 (RtlRbInsertNodeEx.c)
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     strnlen @ 0x1403D3260 (strnlen.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1405F5200 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpGetProviderGroupFromTraits @ 0x140669A04 (EtwpGetProviderGroupFromTraits.c)
 *     EtwpAddRegEntryToGroup @ 0x140669A60 (EtwpAddRegEntryToGroup.c)
 *     TraitsCompare @ 0x1406BBE8C (TraitsCompare.c)
 *     AddDecodeGuidToSessions @ 0x14094437C (AddDecodeGuidToSessions.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpSetProviderTraitsCommon(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        PFAST_MUTEX FastMutex,
        __int64 a8)
{
  unsigned __int64 v8; // rdi
  __int16 v10; // r13
  __int64 v11; // rdx
  bool v12; // zf
  _DWORD *v13; // r14
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  bool v16; // bp
  char v17; // r15
  int v18; // eax
  unsigned __int64 v19; // rax
  unsigned int v20; // ebx
  __int128 *ProviderGroupFromTraits; // rax
  PVOID P; // [rsp+38h] [rbp-80h]
  __int128 v28; // [rsp+58h] [rbp-60h] BYREF

  v8 = a5;
  v10 = 0;
  P = (PVOID)a5;
  if ( a6 < 3 )
    goto LABEL_39;
  if ( *(unsigned __int16 *)(a5 + 28) != a6 )
    goto LABEL_39;
  v11 = (unsigned int)strnlen((const char *)(a5 + 30), a6 - 2) + 3;
  v12 = (_DWORD)v11 == a6;
  if ( (unsigned int)v11 > a6 )
    goto LABEL_39;
  if ( (unsigned int)v11 < a6 )
  {
    while ( (int)v11 + 2 <= a6 )
    {
      LODWORD(v11) = *(unsigned __int16 *)(v11 + a5 + 28) + (_DWORD)v11;
      v12 = (_DWORD)v11 == a6;
      if ( (unsigned int)v11 >= a6 )
        goto LABEL_7;
    }
LABEL_39:
    v20 = -1073741566;
    goto LABEL_29;
  }
LABEL_7:
  if ( !v12 )
    goto LABEL_39;
  v13 = (_DWORD *)(a5 + 24);
  *(_OWORD *)a5 = 0LL;
  *(_QWORD *)(a5 + 16) = 0LL;
  *(_DWORD *)(a5 + 24) = 1;
  ExAcquireFastMutex(FastMutex);
  if ( (*(_BYTE *)(a8 + 8) & 1) != 0 )
  {
    v15 = *(_QWORD *)a8;
    if ( !*(_QWORD *)a8 )
      goto LABEL_33;
    v14 = a8 ^ v15;
  }
  else
  {
    v14 = *(_QWORD *)a8;
    v15 = *(_QWORD *)a8;
  }
  if ( !v14 )
  {
LABEL_33:
    v15 = 0LL;
    v16 = 0;
    v17 = 0;
    goto LABEL_34;
  }
  v16 = 0;
  v17 = 0;
  if ( !v15 )
  {
LABEL_19:
    if ( !v17 )
      goto LABEL_34;
    v13 = (_DWORD *)(v15 + 24);
    v8 = v15;
    ++*(_DWORD *)(v15 + 24);
    goto LABEL_21;
  }
  while ( 1 )
  {
    v18 = TraitsCompare(a5, v15);
    if ( v18 > 0 )
      break;
    if ( v18 >= 0 )
    {
      v17 = 1;
      goto LABEL_19;
    }
    v19 = *(_QWORD *)v15;
    if ( !*(_QWORD *)v15 )
    {
      v16 = 0;
      goto LABEL_34;
    }
LABEL_14:
    v15 = v19;
  }
  v19 = *(_QWORD *)(v15 + 8);
  if ( v19 )
    goto LABEL_14;
  v16 = 1;
LABEL_34:
  RtlRbInsertNodeEx((unsigned __int64 *)a8, v15, v16, a5);
  P = 0LL;
LABEL_21:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 104), v8, 0LL) )
  {
    if ( v17 )
    {
      --*v13;
    }
    else
    {
      RtlRbRemoveNode((unsigned __int64 *)a8, v8);
      P = (PVOID)v8;
    }
    v20 = -1073741823;
  }
  else
  {
    v20 = 0;
  }
  KeReleaseGuardedMutex(FastMutex);
  if ( !v20 )
  {
    if ( *(_WORD *)(v8 + 28) == 22 && *(_DWORD *)(v8 + 30) == 33559296 )
    {
      if ( (unsigned __int8)AddDecodeGuidToSessions(a4) )
        v10 = 1024;
LABEL_28:
      _InterlockedOr16((volatile signed __int16 *)(a4 + 98), v10 | 0x200);
    }
    else
    {
      if ( *(_QWORD *)(a4 + 40) )
        goto LABEL_28;
      ProviderGroupFromTraits = (__int128 *)EtwpGetProviderGroupFromTraits();
      if ( !ProviderGroupFromTraits )
        goto LABEL_28;
      v28 = *ProviderGroupFromTraits;
      v20 = EtwpAddRegEntryToGroup(a4, (unsigned int)&v28, a1, a2, a3);
      if ( !v20 )
        goto LABEL_28;
      EtwpReleaseProviderTraitsReference(a4);
    }
  }
LABEL_29:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v20;
}
