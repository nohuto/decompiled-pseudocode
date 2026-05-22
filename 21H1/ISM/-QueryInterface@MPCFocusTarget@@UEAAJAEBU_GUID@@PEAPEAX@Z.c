/*
 * XREFs of ?QueryInterface@MPCFocusTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BA630
 * Callers:
 *     ?QueryInterface@MPCFocusTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004B550 (-QueryInterface@MPCFocusTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCFocusTarget@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004B560 (-QueryInterface@MPCFocusTarget@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?QueryInterface@MPCTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BB190 (-QueryInterface@MPCTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall MPCFocusTarget::QueryInterface(MPCFocusTarget *this, const struct _GUID *a2, void **a3)
{
  __int64 v4; // rax

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b7db9364_602e_4e1a_8a9c_41444480abce.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b7db9364_602e_4e1a_8a9c_41444480abce.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b7db9364_602e_4e1a_8a9c_41444480abce.Data4;
  if ( v4 )
    return MPCTarget::QueryInterface(this, a2, a3);
  (*(void (__fastcall **)(MPCFocusTarget *))(*(_QWORD *)this + 8LL))(this);
  *a3 = (char *)this + 64;
  return 0LL;
}
