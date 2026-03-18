/*
 * XREFs of PoInitializeBroadcast @ 0x140802640
 * Callers:
 *     PopDirectedDripsInitializeBroadcast @ 0x14098BDD4 (PopDirectedDripsInitializeBroadcast.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 *     PnprQuiesceDevices @ 0x140A68674 (PnprQuiesceDevices.c)
 * Callees:
 *     PpmBeginHighPerfRequest @ 0x1403690D0 (PpmBeginHighPerfRequest.c)
 *     PopHaltDeviceIdle @ 0x140395114 (PopHaltDeviceIdle.c)
 *     PopBuildDeviceNotifyList @ 0x140A50C40 (PopBuildDeviceNotifyList.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 PoInitializeBroadcast()
{
  unsigned int v0; // ebx
  _QWORD *Pool2; // rdi
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // rax

  v0 = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 472LL, 1936933968LL);
  if ( Pool2 )
  {
    v2 = Pool2 + 12;
    Pool2[2] = KeGetCurrentThread();
    v3 = 5LL;
    Pool2[1] = 0LL;
    Pool2[55] = Pool2 + 54;
    Pool2[54] = Pool2 + 54;
    do
    {
      *(v2 - 2) = v2 - 3;
      *(v2 - 3) = v2 - 3;
      *v2 = v2 - 1;
      *(v2 - 1) = v2 - 1;
      v2[2] = v2 + 1;
      v2[1] = v2 + 1;
      v4 = v2 + 3;
      v2[4] = v2 + 3;
      v2 += 9;
      *v4 = v4;
      --v3;
    }
    while ( v3 );
    PpmBeginHighPerfRequest();
    PopCurrentBroadcast = 0uLL;
    qword_140C22750 = Pool2;
    PopBuildDeviceNotifyList(Pool2 + 6);
    PopHaltDeviceIdle();
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v0;
}
