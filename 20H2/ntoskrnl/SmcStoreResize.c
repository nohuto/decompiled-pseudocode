/*
 * XREFs of SmcStoreResize @ 0x1409308A8
 * Callers:
 *     SmcProcessResizeRequest @ 0x14092D2E0 (SmcProcessResizeRequest.c)
 * Callees:
 *     RtlClearAllBits @ 0x140204890 (RtlClearAllBits.c)
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     RtlSetAllBits @ 0x14025D340 (RtlSetAllBits.c)
 *     CmSiFreeMemory @ 0x140267C30 (CmSiFreeMemory.c)
 *     SSHSupportAllocateNonPaged @ 0x140328734 (SSHSupportAllocateNonPaged.c)
 *     SmStoreResize @ 0x14092CE88 (SmStoreResize.c)
 *     SmcCacheReference @ 0x14092FF34 (SmcCacheReference.c)
 *     SmcStoreEntryFind @ 0x140930748 (SmcStoreEntryFind.c)
 *     SmcStorePlacementGet @ 0x140930788 (SmcStorePlacementGet.c)
 */

__int64 __fastcall SmcStoreResize(__int64 a1, _DWORD *a2)
{
  unsigned int v3; // edx
  struct _PRIVILEGE_SET *NonPaged; // rsi
  struct _EX_RUNDOWN_REF v5; // rax
  unsigned __int64 Count; // rdi
  int v7; // edi
  __int64 v8; // rax
  ULONG *v9; // r13
  unsigned __int64 v10; // r12
  bool v11; // zf
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v13; // r14
  struct _EX_RUNDOWN_REF *v14; // rax
  struct _EX_RUNDOWN_REF *v15; // rdi
  struct _PRIVILEGE_SET *v16; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r9
  _DWORD *v19; // rcx
  struct _KTHREAD *v20; // rax
  _DWORD *v21; // rcx
  unsigned __int64 v22; // r9
  struct _PRIVILEGE_SET *v23; // rdx
  unsigned __int64 v24; // r8
  _RTL_BITMAP BitMapHeader; // [rsp+30h] [rbp-30h] BYREF
  __int128 v27; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+50h] [rbp-10h]
  int v30; // [rsp+A8h] [rbp+48h]
  struct _EX_RUNDOWN_REF *v31; // [rsp+B0h] [rbp+50h]

  v3 = a2[1];
  v28 = 0LL;
  NonPaged = 0LL;
  v30 = 0;
  v27 = 0LL;
  BitMapHeader = 0LL;
  v5.Count = SmcCacheReference(a1, v3).Count;
  Count = v5.Count;
  if ( !v5.Count )
    return (unsigned int)-1073741672;
  v8 = *(unsigned int *)(v5.Count + 8);
  v9 = a2 + 4;
  if ( a2[4] > (unsigned int)v8 )
  {
    v7 = -1073741811;
    goto LABEL_35;
  }
  v10 = (unsigned __int64)(v8 + 31) >> 5;
  NonPaged = (struct _PRIVILEGE_SET *)SSHSupportAllocateNonPaged((unsigned int)(4 * v10), 0x72436D73u);
  if ( NonPaged )
  {
    v11 = (*a2 & 0x100) == 0;
    BitMapHeader.SizeOfBitMap = *(_DWORD *)(Count + 8);
    BitMapHeader.Buffer = &NonPaged->PrivilegeCount;
    if ( v11 )
    {
      RtlClearAllBits(&BitMapHeader);
    }
    else
    {
      RtlSetAllBits(&BitMapHeader);
      DWORD1(v27) |= 4u;
      v28 = 0LL;
      *((_QWORD *)&v27 + 1) = NonPaged;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v13 = (volatile signed __int64 *)(Count + 160);
    ExAcquirePushLockExclusiveEx(Count + 160, 0LL);
    v14 = (struct _EX_RUNDOWN_REF *)SmcStoreEntryFind(Count, a2[2], a2[3]);
    v31 = v14;
    if ( v14 )
    {
      v30 = ExAcquireRundownProtection_0(v14 + 2);
      if ( (*a2 & 0x100) != 0 )
      {
        v7 = SmcStorePlacementGet(Count, *v9, (__int64)&v27);
        if ( v7 < 0 )
          goto LABEL_30;
        v15 = v31;
        v16 = NonPaged;
        v17 = (unsigned int)v10;
        v18 = 0LL;
        v19 = (_DWORD *)v31[1].Count;
        if ( NonPaged > (struct _PRIVILEGE_SET *)((char *)NonPaged + 4 * (unsigned int)v10) )
          v17 = 0LL;
        if ( v17 )
        {
          do
          {
            ++v18;
            *v19 |= v16->PrivilegeCount;
            v16 = (struct _PRIVILEGE_SET *)((char *)v16 + 4);
            ++v19;
          }
          while ( v18 < v17 );
        }
      }
      else
      {
        v15 = v31;
      }
      if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v13);
      KeAbPostRelease((ULONG_PTR)v13);
      KeLeaveCriticalRegion();
      SmStoreResize(a2[3], a2[2], (unsigned int)&BitMapHeader, (_DWORD)a2 + 16, (*a2 >> 8) & 1);
      if ( (*a2 & 0x100) != 0 || !*v9 )
      {
        v7 = 0;
LABEL_33:
        if ( v30 )
          ExReleaseRundownProtection_0(v31 + 2);
        goto LABEL_35;
      }
      v20 = KeGetCurrentThread();
      --v20->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v13, 0LL);
      v21 = (_DWORD *)v15[1].Count;
      v22 = (unsigned int)v10;
      v23 = NonPaged;
      v24 = 0LL;
      if ( NonPaged > (struct _PRIVILEGE_SET *)((char *)NonPaged + 4 * (unsigned int)v10) )
        v22 = 0LL;
      if ( v22 )
      {
        do
        {
          ++v24;
          *v21 ^= v23->PrivilegeCount;
          v23 = (struct _PRIVILEGE_SET *)((char *)v23 + 4);
          ++v21;
        }
        while ( v24 < v22 );
      }
      v7 = 0;
    }
    else
    {
      v7 = -1073741672;
    }
LABEL_30:
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v13);
    KeAbPostRelease((ULONG_PTR)v13);
    KeLeaveCriticalRegion();
    goto LABEL_33;
  }
  v7 = -1073741670;
LABEL_35:
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(32LL * (a2[1] & 0xF) + a1 + 8));
  if ( NonPaged )
    CmSiFreeMemory(NonPaged);
  return (unsigned int)v7;
}
