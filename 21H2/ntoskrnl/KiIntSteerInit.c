/*
 * XREFs of KiIntSteerInit @ 0x140B036D4
 * Callers:
 *     KeInitSystem @ 0x140B03800 (KeInitSystem.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     IntPartCreate @ 0x140B01BE0 (IntPartCreate.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x140B02040 (KiIntSteerDetermineSteeringEnabled.c)
 */

__int64 __fastcall KiIntSteerInit(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( (_DWORD)a1 == 1 )
  {
    KiIntTrackRootCount = 0;
    qword_140C2AD58 = (__int64)&KiIntTrackRootList;
    KiIntTrackRootList = (ULONG_PTR)&KiIntTrackRootList;
    KiIntTrackSpinlock = 0LL;
    KiIntSteerMask = 2097153;
    memset(&unk_140C2AB04, 0, 0x104uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)&KiIntSteerMask, 0);
    KiIntSteerAffinitizedInterrupts[0] = 2097153;
    memset(&unk_140C2AC44, 0, 0x104uLL);
    v5 = 0;
    ((void (__fastcall *)(__int64, __int64, int *, int *))off_140C020D8[0])(39LL, 4LL, &KiInterruptControllerInfo, &v5);
    KiIntSteerEnabled = KiIntSteerDetermineSteeringEnabled();
    if ( KiIntSteerEnabled )
    {
      KiIntSteerDistributionContext = (void *)ExAllocatePool2(64LL, 0x104uLL, 0x6B725449u);
      if ( !KiIntSteerDistributionContext )
        return (unsigned int)-1073741670;
    }
  }
  else if ( (_DWORD)a1 == 2 && KiIntSteerEnabled )
  {
    if ( (KiInterruptSteeringFlags & 4) != 0 )
      LOBYTE(v3) = 1;
    v3 = IntPartCreate(a1, v3, a3);
    KiIntPartInitialized = 1;
  }
  return v3;
}
