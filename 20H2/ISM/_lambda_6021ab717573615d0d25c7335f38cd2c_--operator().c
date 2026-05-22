/*
 * XREFs of _lambda_6021ab717573615d0d25c7335f38cd2c_::operator() @ 0x1800406C4
 * Callers:
 *     ?HandleHomeGesture@MPCHandProcessor@@AEAA_NPEAUInputInfo@@@Z @ 0x18007DA60 (-HandleHomeGesture@MPCHandProcessor@@AEAA_NPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?SendHomeGesture@MPCManager@@QEAAXKK_KII@Z @ 0x18003F66C (-SendHomeGesture@MPCManager@@QEAAXKK_KII@Z.c)
 */

void __fastcall lambda_6021ab717573615d0d25c7335f38cd2c_::operator()(_QWORD **a1, unsigned int a2)
{
  MPCManager::SendHomeGesture(
    MPCManager::s_instance,
    *(_DWORD *)(*a1)[6],
    *(_DWORD *)((*a1)[6] + 4LL),
    *(_QWORD *)(*a1[1] + 16LL),
    *(_DWORD *)(*a1[1] + 828LL),
    a2);
}
