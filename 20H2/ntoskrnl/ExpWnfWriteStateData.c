/*
 * XREFs of ExpWnfWriteStateData @ 0x140653560
 * Callers:
 *     ExpNtUpdateWnfStateData @ 0x14065397C (ExpNtUpdateWnfStateData.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14020A530 (ExAllocatePoolWithQuotaTag.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140241C10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwSetValueKey @ 0x1403F8D70 (ZwSetValueKey.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     ExpWnfComposeValueName @ 0x1405DF9AC (ExpWnfComposeValueName.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  _KPROCESS *v17; // rcx
  int v18; // r12d
  _DWORD *PoolWithTag; // r14
  __int64 v20; // rax
  __int64 v21; // r14
  int v22; // eax
  _DWORD *v23; // [rsp+38h] [rbp-C0h]
  NTSTATUS v24; // [rsp+40h] [rbp-B8h]
  PVOID P; // [rsp+48h] [rbp-B0h]
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-90h]
  _OWORD v29[3]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-58h] BYREF

  v6 = a3;
  v7 = a2;
  v28 = a1;
  memset(v29, 0, sizeof(v29));
  v24 = 0;
  *(_QWORD *)&ValueName.Length = 2228224LL;
  ValueName.Buffer = (wchar_t *)&v30;
  if ( *(_QWORD *)(a1 + 104) )
    ExpWnfComposeValueName(*(_QWORD *)(a1 + 40), &ValueName);
  v23 = 0LL;
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
    v22 = *(_QWORD *)(a1 + 88) ? *(_DWORD *)(a1 + 96) : 0;
    if ( v22 != a4 )
    {
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
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
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
    KeAbPostRelease(a1 + 80);
    if ( ((*(_DWORD *)(a1 + 40) >> 4) & 3) != 3 || PsInitialSystemProcess == *(PEPROCESS *)(a1 + 152) )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v6 + 16), 0x20666E57u);
      v23 = PoolWithTag;
    }
    else
    {
      v17 = *(_KPROCESS **)(a1 + 152);
      if ( !v17 )
        return 3221225524LL;
      if ( v17 == KeGetCurrentThread()->ApcState.Process )
      {
        v18 = 0;
      }
      else
      {
        v18 = 1;
        KiStackAttachProcess(v17, 0, (__int64)v29);
      }
      PoolWithTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)(v6 + 16), 0x20666E57u);
      v23 = PoolWithTag;
      if ( v18 )
        KiUnstackDetachProcess((__int64)v29, 0);
      v7 = a2;
    }
    if ( !PoolWithTag )
      return 3221225626LL;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    *PoolWithTag = 1050884;
    PoolWithTag[1] = v6;
    v20 = KeAbPreAcquire(a1 + 80, 0LL, 0);
    v21 = v20;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 80), v20, a1 + 80);
    if ( v21 )
      *(_BYTE *)(v21 + 26) |= 1u;
    v13 = 0LL;
    if ( *(_QWORD *)(a1 + 88) != 1LL )
      v13 = *(_DWORD **)(a1 + 88);
    if ( !v13 || v13[1] < (unsigned int)v6 )
      v13 = v23;
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
      v24 = ZwSetValueKey(v15, &ValueName, 0, 3u, v13 + 3, v6 + 4);
      if ( v24 < 0 )
      {
        P = *(PVOID *)(a1 + 88);
        *(_QWORD *)(a1 + 88) = 0LL;
        goto LABEL_24;
      }
    }
    if ( v13 == v23 )
    {
      P = *(PVOID *)(a1 + 88);
      *(_QWORD *)(a1 + 88) = v13;
      v23 = 0LL;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 88) = 1LL;
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 96), i);
LABEL_24:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
  KeAbPostRelease(a1 + 80);
  if ( (unsigned __int64)P >= 2 )
    ExFreePoolWithTag(P, 0x20666E57u);
  if ( v23 )
    ExFreePoolWithTag(v23, 0x20666E57u);
  return (unsigned int)v24;
}
