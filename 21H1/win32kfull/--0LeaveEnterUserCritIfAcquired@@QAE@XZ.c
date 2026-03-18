/*
 * XREFs of ??0LeaveEnterUserCritIfAcquired@@QAE@XZ @ 0x1B40F2
 * Callers:
 *     ?SendDeviceIOControl@SimpleHapticsController@@QAEJKPAXK0KPAK@Z @ 0x1B4DDC (-SendDeviceIOControl@SimpleHapticsController@@QAEJKPAXK0KPAK@Z.c)
 * Callees:
 *     <none>
 */

LeaveEnterUserCritIfAcquired *__thiscall LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired(
        LeaveEnterUserCritIfAcquired *this)
{
  bool v2; // al
  bool v3; // al

  v2 = ExIsResourceAcquiredExclusiveLite(_gpresUser) != 0;
  *(_BYTE *)this = v2;
  v3 = v2 || ExIsResourceAcquiredSharedLite(_gpresUser);
  *((_BYTE *)this + 1) = v3;
  if ( v3 )
    UserSessionSwitchLeaveCrit();
  return this;
}
