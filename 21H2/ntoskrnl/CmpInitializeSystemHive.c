/*
 * XREFs of CmpInitializeSystemHive @ 0x140A5BA10
 * Callers:
 *     CmpInitializePreloadedHives @ 0x140A5B924 (CmpInitializePreloadedHives.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpCreateHive @ 0x1406F756C (CmpCreateHive.c)
 *     CmpLinkHiveToMaster @ 0x1406F8338 (CmpLinkHiveToMaster.c)
 *     CmpSetupLoggingState @ 0x1407A7288 (CmpSetupLoggingState.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpInitializeSystemHive(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *PoolWithTag; // rax
  _OWORD *v6; // rdi
  int v7; // eax
  int v8; // ecx
  int v9; // ebx
  __int64 v11; // [rsp+90h] [rbp+18h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+98h] [rbp+20h] BYREF

  v11 = a3;
  LOBYTE(v11) = 0;
  BugCheckParameter3 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1B0uLL, 0x33394D43u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x1B0uLL);
    v7 = CmpCreateHive(
           &BugCheckParameter3,
           1u,
           18,
           2u,
           *(_QWORD *)(a1 + 168),
           0LL,
           (__int64)&CmpSystemFileName,
           5832712,
           0LL,
           0LL,
           (__int64)&v11,
           (__int64)v6);
    if ( v7 < 0 )
      KeBugCheckEx(0x74u, 3uLL, 2uLL, (ULONG_PTR)v6, v7);
    CmpSetupLoggingState(BugCheckParameter3, (unsigned int *)(*(_QWORD *)(a1 + 240) + 2884LL));
    if ( (_BYTE)v11 == 1 )
      CmpInitRmLogOnLoad = 1;
    if ( BYTE4(NlsMbCodePageTag) )
      *(_DWORD *)(BugCheckParameter3 + 160) |= 0x8000u;
    if ( CmStateSeparationEnabled && !CmStateSeparationDevMode )
    {
      *(_DWORD *)(BugCheckParameter3 + 160) |= 0x8000u;
      *(_DWORD *)(BugCheckParameter3 + 160) &= ~2u;
    }
    v8 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL);
    CmpBootType = v8;
    if ( !CmSelfHeal )
    {
      BYTE3(NlsMbCodePageTag) = 0;
      if ( (v8 & 4) != 0 )
        KeBugCheckEx(0x74u, 3uLL, 3uLL, BugCheckParameter3, 0LL);
    }
    v9 = CmpLinkHiveToMaster(
           (__int64)&CmRegistryMachineSystemName,
           0LL,
           BugCheckParameter3,
           0,
           dword_140C01180,
           0,
           0LL,
           a2,
           0LL,
           0LL,
           1,
           v6);
    if ( v9 >= 0 )
    {
      v9 = 0;
      qword_140C01170 = BugCheckParameter3;
    }
    ExFreePoolWithTag(v6, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v9;
}
