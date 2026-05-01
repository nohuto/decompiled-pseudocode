/*
 * XREFs of ?_IsViewCloaked@ShellFeedsExperienceManagerImpl@@AEAA_NXZ @ 0x18009CFC8
 * Callers:
 *     ?Poke@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z @ 0x18009BA60 (-Poke@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ShellFeedsExperienceManagerImpl::_IsViewCloaked(ShellFeedsExperienceManagerImpl *this)
{
  __int64 v1; // rcx
  char v2; // bl
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 12);
  v2 = 0;
  v4 = 0;
  if ( (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v1 + 112LL))(v1, &v4) >= 0 )
    return v4 != 0;
  return v2;
}
