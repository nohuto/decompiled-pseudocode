/*
 * XREFs of CmpInitializeSystemHive @ 0x140B169F0
 * Callers:
 *     CmpInitializePreloadedHives @ 0x140B16904 (CmpInitializePreloadedHives.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpLinkHiveToMaster @ 0x14067C9E8 (CmpLinkHiveToMaster.c)
 *     CmpCreateHive @ 0x14068A7FC (CmpCreateHive.c)
 *     CmpSetupLoggingState @ 0x140837614 (CmpSetupLoggingState.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpInitializeSystemHive(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *PoolWithTag; // rax
  _OWORD *v6; // rdi
  int v7; // r8d
  int v8; // eax
  int v9; // ecx
  int v10; // ebx
  __int64 v12; // [rsp+90h] [rbp+18h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+98h] [rbp+20h] BYREF

  v12 = a3;
  LOBYTE(v12) = 0;
  BugCheckParameter3 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1B0uLL, 0x33394D43u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x1B0uLL);
    v7 = 18;
    if ( CmBugcheckRecoveryEnabled )
      v7 = 33554450;
    v8 = CmpCreateHive(
           &BugCheckParameter3,
           1u,
           v7,
           2u,
           *(_QWORD *)(a1 + 168),
           0LL,
           (__int64)&CmpSystemFileName,
           4784136,
           0LL,
           0LL,
           (__int64)&v12,
           (__int64)v6);
    if ( v8 < 0 )
      KeBugCheckEx(0x74u, 3uLL, 2uLL, (ULONG_PTR)v6, v8);
    CmpSetupLoggingState(BugCheckParameter3, (unsigned int *)(*(_QWORD *)(a1 + 240) + 2916LL));
    if ( (_BYTE)v12 == 1 )
      CmpInitRmLogOnLoad = 1;
    if ( CmpShareSystemHives )
      *(_DWORD *)(BugCheckParameter3 + 160) |= 0x8000u;
    if ( CmStateSeparationEnabled && !CmStateSeparationDevMode )
    {
      *(_DWORD *)(BugCheckParameter3 + 160) |= 0x8000u;
      *(_DWORD *)(BugCheckParameter3 + 160) &= ~2u;
    }
    v9 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL);
    CmpBootType = v9;
    if ( !CmSelfHeal )
    {
      BYTE3(NlsMbOemCodePageTag) = 0;
      if ( (v9 & 4) != 0 )
        KeBugCheckEx(0x74u, 3uLL, 3uLL, BugCheckParameter3, 0LL);
    }
    v10 = CmpLinkHiveToMaster(
            (__int64)&CmRegistryMachineSystemName,
            0LL,
            BugCheckParameter3,
            0,
            dword_140C02780,
            0,
            0LL,
            a2,
            0LL,
            0LL,
            1,
            v6);
    if ( v10 >= 0 )
    {
      v10 = 0;
      qword_140C02770 = BugCheckParameter3;
    }
    ExFreePoolWithTag(v6, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v10;
}
