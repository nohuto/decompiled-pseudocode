/*
 * XREFs of ?TriggerHomeGesture@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@W4InputType@@I@Z @ 0x18003FA10
 * Callers:
 *     <none>
 * Callees:
 *     ?SendHomeGesture@MPCManager@@QEAAXKK_KII@Z @ 0x18003F6FC (-SendHomeGesture@MPCManager@@QEAAXKK_KII@Z.c)
 */

__int64 __fastcall MPCManager::TriggerHomeGesture(MPCManager *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  ULONGLONG TickCount64; // rax

  TickCount64 = GetTickCount64();
  MPCManager::SendHomeGesture(a1, 0, a3, TickCount64, 0, a4);
  return 0LL;
}
