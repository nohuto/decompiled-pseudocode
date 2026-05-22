/*
 * XREFs of ?SendHomeEvent@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x18018F008
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18018E1E4 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?SendHomeGesture@MPCManager@@QEAAXKK_KII@Z @ 0x18003F66C (-SendHomeGesture@MPCManager@@QEAAXKK_KII@Z.c)
 */

void __fastcall MPCSixDofProcessor::SendHomeEvent(MPCSixDofProcessor *this, struct LegacyInputInfo *a2)
{
  DWORD v4; // [rsp+60h] [rbp+18h] BYREF

  if ( !byte_1802094BC )
  {
    v4 = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\DWM",
      L"DisableBloomFor6dof",
      0x10u,
      0LL,
      &dword_1802094C0,
      &v4);
    byte_1802094BC = 1;
  }
  if ( dword_1802094C0 != 1 )
    MPCManager::SendHomeGesture(
      MPCManager::s_instance,
      **((_DWORD **)this + 6),
      *(_DWORD *)(*((_QWORD *)this + 6) + 4LL),
      *((_QWORD *)a2 + 2),
      *((_DWORD *)a2 + 179),
      0x10u);
}
