/*
 * XREFs of PpmIdleInitializeConcurrency @ 0x1407A7EA4
 * Callers:
 *     PpmParkRegisterParking @ 0x1403BF590 (PpmParkRegisterParking.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x1402E44A0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402F1C40 (KeSetSystemGroupAffinityThread.c)
 *     KeCountSetBitsAffinityEx @ 0x1402FD690 (KeCountSetBitsAffinityEx.c)
 *     KeFirstGroupAffinityEx @ 0x140350740 (KeFirstGroupAffinityEx.c)
 *     PpmQueryTime @ 0x1403C03FC (PpmQueryTime.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PpmIdleInitializeConcurrency(unsigned __int16 *a1, _QWORD *a2, _QWORD *a3)
{
  int v6; // esi
  unsigned int GroupAffinity; // ebp
  _DWORD *PoolWithTag; // rbx
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-58h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-48h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  v6 = KeCountSetBitsAffinityEx(a1);
  GroupAffinity = KeFirstGroupAffinityEx((__int64)&Affinity, a1);
  if ( a3 && (PoolWithTag = (_DWORD *)*a3) != 0LL && v6 == PoolWithTag[2] )
  {
    *a3 = 0LL;
  }
  else
  {
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(8 * v6 + 40), 0x704D5050u);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, (unsigned int)(8 * v6 + 40));
      *(_QWORD *)PoolWithTag = 0LL;
      PoolWithTag[2] = v6;
      PpmQueryTime();
    }
    GroupAffinity = -1073741670;
  }
  *a2 = PoolWithTag;
  return GroupAffinity;
}
