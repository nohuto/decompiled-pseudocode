/*
 * XREFs of _lambda_31831d19834a95ec93618be6274e412d_::operator() @ 0x18007D370
 * Callers:
 *     ?HandleHomeGesture@MPCHandProcessor@@AEAA_NPEAUInputInfo@@@Z @ 0x18007DB00 (-HandleHomeGesture@MPCHandProcessor@@AEAA_NPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?SendHomeGestureReadyChanged@MPCManager@@QEAAX_NKK_KII@Z @ 0x180073AE4 (-SendHomeGestureReadyChanged@MPCManager@@QEAAX_NKK_KII@Z.c)
 */

void __fastcall lambda_31831d19834a95ec93618be6274e412d_::operator()(__int64 *a1)
{
  __int64 v1; // rdx

  v1 = *a1;
  LOBYTE(v1) = *(_BYTE *)(*a1 + 10760);
  MPCManager::SendHomeGestureReadyChanged(
    MPCManager::s_instance,
    v1,
    **(_DWORD **)(*a1 + 48),
    *(_DWORD *)(*(_QWORD *)(*a1 + 48) + 4LL),
    *(_QWORD *)(*(_QWORD *)a1[1] + 16LL),
    *(_DWORD *)(*(_QWORD *)a1[1] + 828LL),
    *(_DWORD *)(*(_QWORD *)a1[1] + 856LL));
}
