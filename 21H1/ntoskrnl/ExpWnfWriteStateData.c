/*
 * XREFs of ExpWnfWriteStateData @ 0x140667AD0
 * Callers:
 *     ExpNtUpdateWnfStateData @ 0x140667EEC (ExpNtUpdateWnfStateData.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1402421D0 (ExAllocatePoolWithQuotaTag.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwSetValueKey @ 0x1403F2F30 (ZwSetValueKey.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     ExpWnfComposeValueName @ 0x14068A53C (ExpWnfComposeValueName.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpWnfWriteStateData(__int64 a1, const void *a2, unsigned int a3, int a4, int a5)
{
  size_t v6; // r13
  const void *v7; // r12
  volatile signed __int64 *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  _DWORD *v12; // rcx
  _DWORD *v13; // r14
  __int32 i; // esi
  void *v15; // rcx
  _DWORD *v17; // r9
  _KPROCESS *v18; // rcx
  int v19; // r12d
  __int64 v20; // r8
  _DWORD *v21; // r9
  _DWORD *PoolWithTag; // r14
  __int64 v23; // rax
  __int64 v24; // r14
  int v25; // eax
  _DWORD *v26; // [rsp+38h] [rbp-C0h]
  NTSTATUS v27; // [rsp+40h] [rbp-B8h]
  PVOID P; // [rsp+48h] [rbp-B0h]
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+68h] [rbp-90h]
  _OWORD v32[3]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v33; // [rsp+A0h] [rbp-58h] BYREF

  v6 = a3;
  v7 = a2;
  v31 = a1;
  memset(v32, 0, sizeof(v32));
  v27 = 0;
  *(_QWORD *)&ValueName.Length = 2228224LL;
  ValueName.Buffer = (wchar_t *)&v33;
  if ( *(_QWORD *)(a1 + 104) )
    ExpWnfComposeValueName(*(_QWORD *)(a1 + 40), &ValueName);
  v26 = 0LL;
  P = 0LL;
  v9 = (volatile signed __int64 *)(a1 + 80);
  v10 = KeAbPreAcquire(a1 + 80, 0LL, 0);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 80), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 80), v10, a1 + 80);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  if ( a5 )
  {
    v25 = *(_QWORD *)(a1 + 88) ? *(_DWORD *)(a1 + 96) : 0;
    if ( v25 != a4 )
    {
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 80);
      KeAbPostRelease(a1 + 80);
      return 3221225473LL;
    }
  }
  v12 = 0LL;
  if ( *(_QWORD *)(a1 + 88) != 1LL )
    v12 = *(_DWORD **)(a1 + 88);
  if ( !v12 && (*(_QWORD *)(a1 + 104) || (_DWORD)v6) || (v13 = v12) != 0LL && v12[1] < (unsigned int)v6 )
  {
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 80);
    KeAbPostRelease(a1 + 80);
    if ( ((*(_DWORD *)(a1 + 40) >> 4) & 3) != 3 || PsInitialSystemProcess == *(PEPROCESS *)(a1 + 152) )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v6 + 16), 0x20666E57u);
      v26 = PoolWithTag;
    }
    else
    {
      v18 = *(_KPROCESS **)(a1 + 152);
      if ( !v18 )
        return 3221225524LL;
      if ( v18 == KeGetCurrentThread()->ApcState.Process )
      {
        v19 = 0;
      }
      else
      {
        v19 = 1;
        KiStackAttachProcess(v18, 0LL, (__int64)v32, v17);
      }
      PoolWithTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)(v6 + 16), 0x20666E57u);
      v26 = PoolWithTag;
      if ( v19 )
        KiUnstackDetachProcess((__int64)v32, 0LL, v20, v21);
      v7 = a2;
    }
    if ( !PoolWithTag )
      return 3221225626LL;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    *PoolWithTag = 1050884;
    PoolWithTag[1] = v6;
    v23 = KeAbPreAcquire(a1 + 80, 0LL, 0);
    v24 = v23;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 80), v23, a1 + 80);
    if ( v24 )
      *(_BYTE *)(v24 + 26) |= 1u;
    v13 = 0LL;
    if ( *(_QWORD *)(a1 + 88) != 1LL )
      v13 = *(_DWORD **)(a1 + 88);
    if ( !v13 || v13[1] < (unsigned int)v6 )
      v13 = v26;
  }
  for ( i = *(_DWORD *)(a1 + 96) + 1; !i; i = 1 )
    ;
  if ( v13 )
  {
    memmove(v13 + 4, v7, v6);
    v13[2] = v6;
    v13[3] = i;
    v15 = *(void **)(a1 + 104);
    if ( v15 )
    {
      v27 = ZwSetValueKey(v15, &ValueName, 0, 3u, v13 + 3, v6 + 4);
      if ( v27 < 0 )
      {
        P = *(PVOID *)(a1 + 88);
        *(_QWORD *)(a1 + 88) = 0LL;
        goto LABEL_24;
      }
    }
    if ( v13 == v26 )
    {
      P = *(PVOID *)(a1 + 88);
      *(_QWORD *)(a1 + 88) = v13;
      v26 = 0LL;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 88) = 1LL;
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 96), i);
LABEL_24:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 80);
  KeAbPostRelease(a1 + 80);
  if ( (unsigned __int64)P >= 2 )
    ExFreePoolWithTag(P, 0x20666E57u);
  if ( v26 )
    ExFreePoolWithTag(v26, 0x20666E57u);
  return (unsigned int)v27;
}
