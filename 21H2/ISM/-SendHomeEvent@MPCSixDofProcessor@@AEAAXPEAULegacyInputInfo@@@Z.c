/*
 * XREFs of ?SendHomeEvent@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x18018F4B8
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18018E694 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?SendHomeGesture@MPCManager@@QEAAXKK_KII@Z @ 0x18004002C (-SendHomeGesture@MPCManager@@QEAAXKK_KII@Z.c)
 */

void __fastcall MPCSixDofProcessor::SendHomeEvent(MPCSixDofProcessor *this, struct LegacyInputInfo *a2)
{
  DWORD v4; // [rsp+60h] [rbp+18h] BYREF

  if ( !byte_18020A4E4 )
  {
    v4 = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\DWM",
      L"DisableBloomFor6dof",
      0x10u,
      0LL,
      &dword_18020A4E8,
      &v4);
    byte_18020A4E4 = 1;
  }
  if ( dword_18020A4E8 != 1 )
    MPCManager::SendHomeGesture(
      MPCManager::s_instance,
      **((_DWORD **)this + 6),
      *(_DWORD *)(*((_QWORD *)this + 6) + 4LL),
      *((_QWORD *)a2 + 2),
      *((_DWORD *)a2 + 179),
      0x10u);
}
