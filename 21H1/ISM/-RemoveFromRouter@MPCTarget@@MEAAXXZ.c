/*
 * XREFs of ?RemoveFromRouter@MPCTarget@@MEAAXXZ @ 0x1800BB210
 * Callers:
 *     ??1MPCTarget@@UEAA@XZ @ 0x1800BAA48 (--1MPCTarget@@UEAA@XZ.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011C98 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 */

void __fastcall MPCTarget::RemoveFromRouter(MPCTarget *this)
{
  struct MPCHolographicInputManager *Instance; // rax

  Instance = MPCHolographicInputManager::GetInstance();
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)Instance + 287) + 56LL))(
    *((_QWORD *)Instance + 287),
    *((_QWORD *)this + 6));
}
