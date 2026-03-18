/*
 * XREFs of PspAssignProcessQuotaBlock @ 0x1406D9004
 * Callers:
 *     PspSetQuotaLimits @ 0x1406D3274 (PspSetQuotaLimits.c)
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     PspUnlockQuotaListShared @ 0x1403129D8 (PspUnlockQuotaListShared.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PspDereferenceQuotaBlock @ 0x140615568 (PspDereferenceQuotaBlock.c)
 *     SeQueryUserSidToken @ 0x14066B11C (SeQueryUserSidToken.c)
 *     RtlCopySid @ 0x14066B1C0 (RtlCopySid.c)
 *     PspLookupProcessQuotaBlock @ 0x1406D91EC (PspLookupProcessQuotaBlock.c)
 *     PspReadUserQuotaLimits @ 0x1406D931C (PspReadUserQuotaLimits.c)
 *     PspSafeReferenceQuotaBlock @ 0x1406D94B4 (PspSafeReferenceQuotaBlock.c)
 *     PspInitializeQuotaBlock @ 0x1407B8B14 (PspInitializeQuotaBlock.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspAssignProcessQuotaBlock(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  unsigned __int8 v6; // r13
  _BYTE *v7; // r14
  ULONG v8; // esi
  __int64 v9; // rdx
  volatile signed __int32 *v10; // rbx
  __int64 v11; // r8
  _BOOL8 v12; // r9
  int UserQuotaLimits; // edi
  struct _KTHREAD *CurrentThread; // rdi
  int *v15; // r12
  volatile signed __int64 *v16; // rsi
  volatile signed __int32 *PoolWithTag; // rax
  __int64 v19; // rdi
  ULONG DestinationSidLength; // [rsp+20h] [rbp-59h] BYREF
  int v21; // [rsp+24h] [rbp-55h]
  __int64 v22; // [rsp+28h] [rbp-51h]
  _BYTE SourceSid[80]; // [rsp+30h] [rbp-49h] BYREF
  char v24; // [rsp+80h] [rbp+7h] BYREF

  v21 = 0;
  DestinationSidLength = 0;
  v5 = a1;
  v22 = a1;
  memset(SourceSid, 0, 0x44uLL);
  v6 = 0;
  v7 = 0LL;
  SeQueryUserSidToken(a3, SourceSid, 0x44u, &DestinationSidLength);
  if ( v5 && (*(_DWORD *)(v5 + 80) & 0x10) != 0 )
  {
    v8 = 0;
    v6 = 1;
    DestinationSidLength = 0;
  }
  else
  {
    v8 = DestinationSidLength;
    v7 = SourceSid;
  }
  v10 = (volatile signed __int32 *)PspLookupProcessQuotaBlock(v7, v8, v6, 0LL);
  if ( v10 )
    goto LABEL_10;
  if ( v5 )
  {
    v15 = 0LL;
  }
  else
  {
    UserQuotaLimits = PspReadUserQuotaLimits(SourceSid);
    if ( UserQuotaLimits < 0 )
      return (unsigned int)UserQuotaLimits;
    if ( v21 )
    {
      CurrentThread = KeGetCurrentThread();
      v15 = PspDefaultResourceLimits;
      v16 = (volatile signed __int64 *)PspQuotaBlockTable;
      v7 = 0LL;
      DestinationSidLength = 0;
      v6 = 1;
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)v16, 0LL);
      v10 = (volatile signed __int32 *)PspDefaultQuotaBlock;
      if ( PspDefaultQuotaBlock && (unsigned int)PspSafeReferenceQuotaBlock(PspDefaultQuotaBlock) )
      {
        PspUnlockQuotaListShared((__int64)CurrentThread, v16);
        _InterlockedIncrement(v10 + 129);
        goto LABEL_10;
      }
      PspUnlockQuotaListShared((__int64)CurrentThread, v16);
      v8 = DestinationSidLength;
    }
    else
    {
      v15 = (int *)&v24;
    }
    v5 = v22;
  }
  PoolWithTag = (volatile signed __int32 *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v8 + 576LL, 0x62517350u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    UserQuotaLimits = PspInitializeQuotaBlock(v5, v15, PoolWithTag);
    if ( UserQuotaLimits < 0 )
    {
LABEL_28:
      if ( v10 )
      {
        _InterlockedAdd(v10 + 129, 0xFFFFFFFF);
        PspDereferenceQuotaBlock(v10, v9, v11, v12);
      }
      return (unsigned int)UserQuotaLimits;
    }
    if ( v7 )
      RtlCopySid(v8, (PSID)(v10 + 144), SourceSid);
    v19 = PspLookupProcessQuotaBlock(v7, v8, v6, v10);
    if ( v19 )
    {
      _InterlockedAdd(v10 + 129, 0xFFFFFFFF);
      PspDereferenceQuotaBlock(v10, v9, v11, v12);
      v10 = (volatile signed __int32 *)v19;
    }
LABEL_10:
    if ( !*(_QWORD *)(a2 + 1384) )
    {
      *(_QWORD *)(a2 + 1384) = v10;
      return 0LL;
    }
    if ( (_UNKNOWN *)_InterlockedCompareExchange64(
                       (volatile signed __int64 *)(a2 + 1384),
                       (signed __int64)v10,
                       (signed __int64)&PspSystemQuotaBlock) == &PspSystemQuotaBlock )
      return 0LL;
    UserQuotaLimits = -1073741823;
    goto LABEL_28;
  }
  return (unsigned int)-1073741670;
}
