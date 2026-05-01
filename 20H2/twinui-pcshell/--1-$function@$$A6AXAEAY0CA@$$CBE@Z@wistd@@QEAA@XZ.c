/*
 * XREFs of ??1?$function@$$A6AXAEAY0CA@$$CBE@Z@wistd@@QEAA@XZ @ 0x1800B0C50
 * Callers:
 *     ??1?$wnf_subscription_state@$$BY0CA@E@details@wil@@UEAA@XZ @ 0x1800B0C78 (--1-$wnf_subscription_state@$$BY0CA@E@details@wil@@UEAA@XZ.c)
 *     ?SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180353378 (-SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     _TouchKeyboardExperienceManager::SubscribeTouchKeyboardWnfNotifications_::_1_::dtor$20 @ 0x180353865 (_TouchKeyboardExperienceManager--SubscribeTouchKeyboardWnfNotifications_--_1_--dtor$20.c)
 *     _TouchKeyboardExperienceManager::SubscribeTouchKeyboardWnfNotifications_::_1_::dtor$22 @ 0x180353871 (_TouchKeyboardExperienceManager--SubscribeTouchKeyboardWnfNotifications_--_1_--dtor$22.c)
 *     _TouchKeyboardExperienceManager::SubscribeTouchKeyboardWnfNotifications_::_1_::dtor$24 @ 0x18035387D (_TouchKeyboardExperienceManager--SubscribeTouchKeyboardWnfNotifications_--_1_--dtor$24.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::function<void (unsigned char const (&)[32])>::~function<void (unsigned char const (&)[32])>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  return result;
}
