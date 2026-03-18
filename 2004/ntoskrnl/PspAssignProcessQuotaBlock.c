/*
 * XREFs of PspAssignProcessQuotaBlock @ 0x140644EB8
 * Callers:
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 *     PspSetQuotaLimits @ 0x1406F5E44 (PspSetQuotaLimits.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     PspUnlockQuotaListShared @ 0x140272770 (PspUnlockQuotaListShared.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     SeQueryUserSidToken @ 0x1406259FC (SeQueryUserSidToken.c)
 *     RtlCopySid @ 0x140625AA0 (RtlCopySid.c)
 *     PspReadUserQuotaLimits @ 0x140644D20 (PspReadUserQuotaLimits.c)
 *     PspLookupProcessQuotaBlock @ 0x1406450A0 (PspLookupProcessQuotaBlock.c)
 *     PspSafeReferenceQuotaBlock @ 0x1406451D0 (PspSafeReferenceQuotaBlock.c)
 *     PspDereferenceQuotaBlock @ 0x14066A848 (PspDereferenceQuotaBlock.c)
 *     PspInitializeQuotaBlock @ 0x1407BBC84 (PspInitializeQuotaBlock.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspAssignProcessQuotaBlock(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  unsigned __int8 v6; // r13
  _BYTE *v7; // r14
  ULONG v8; // esi
  volatile signed __int32 *v9; // rbx
  int v10; // edi
  struct _KTHREAD *CurrentThread; // rdi
  int *v12; // r12
  volatile signed __int64 *v13; // rsi
  volatile signed __int32 *PoolWithTag; // rax
  __int64 v16; // rdi
  ULONG DestinationSidLength; // [rsp+20h] [rbp-59h] BYREF
  int v18; // [rsp+24h] [rbp-55h] BYREF
  __int64 v19; // [rsp+28h] [rbp-51h]
  _BYTE SourceSid[80]; // [rsp+30h] [rbp-49h] BYREF
  _DWORD v21[4]; // [rsp+80h] [rbp+7h] BYREF

  v18 = 0;
  DestinationSidLength = 0;
  v5 = a1;
  v19 = a1;
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
  v9 = (volatile signed __int32 *)PspLookupProcessQuotaBlock(v7, v8, v6, 0LL);
  if ( v9 )
    goto LABEL_10;
  if ( v5 )
  {
    v12 = 0LL;
  }
  else
  {
    v10 = PspReadUserQuotaLimits(SourceSid, &v18, v21);
    if ( v10 < 0 )
      return (unsigned int)v10;
    if ( v18 )
    {
      CurrentThread = KeGetCurrentThread();
      v12 = PspDefaultResourceLimits;
      v13 = (volatile signed __int64 *)PspQuotaBlockTable;
      v7 = 0LL;
      DestinationSidLength = 0;
      v6 = 1;
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)v13, 0LL);
      v9 = (volatile signed __int32 *)PspDefaultQuotaBlock;
      if ( PspDefaultQuotaBlock && (unsigned int)PspSafeReferenceQuotaBlock(PspDefaultQuotaBlock) )
      {
        PspUnlockQuotaListShared((__int64)CurrentThread, v13);
        _InterlockedIncrement(v9 + 129);
        goto LABEL_10;
      }
      PspUnlockQuotaListShared((__int64)CurrentThread, v13);
      v8 = DestinationSidLength;
    }
    else
    {
      v12 = v21;
    }
    v5 = v19;
  }
  PoolWithTag = (volatile signed __int32 *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v8 + 576LL, 0x62517350u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    v10 = PspInitializeQuotaBlock(v5, v12, PoolWithTag);
    if ( v10 < 0 )
    {
LABEL_28:
      if ( v9 )
      {
        _InterlockedAdd(v9 + 129, 0xFFFFFFFF);
        PspDereferenceQuotaBlock((PVOID)v9);
      }
      return (unsigned int)v10;
    }
    if ( v7 )
      RtlCopySid(v8, (PSID)(v9 + 144), SourceSid);
    v16 = PspLookupProcessQuotaBlock(v7, v8, v6, v9);
    if ( v16 )
    {
      _InterlockedAdd(v9 + 129, 0xFFFFFFFF);
      PspDereferenceQuotaBlock((PVOID)v9);
      v9 = (volatile signed __int32 *)v16;
    }
LABEL_10:
    if ( !*(_QWORD *)(a2 + 1384) )
    {
      *(_QWORD *)(a2 + 1384) = v9;
      return 0LL;
    }
    if ( (_UNKNOWN *)_InterlockedCompareExchange64(
                       (volatile signed __int64 *)(a2 + 1384),
                       (signed __int64)v9,
                       (signed __int64)&PspSystemQuotaBlock) == &PspSystemQuotaBlock )
      return 0LL;
    v10 = -1073741823;
    goto LABEL_28;
  }
  return (unsigned int)-1073741670;
}
