/*
 * XREFs of ?KeyUp@CSwitchItemGrid@@UEAA_NIW4ModifierKeys@@@Z @ 0x1803A6FB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CSwitchItemGrid::KeyUp(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r9
  __int64 v4; // rcx

  v3 = 0;
  if ( (_DWORD)a2 == 9 || (unsigned int)(a2 - 37) <= 3 )
    return 1;
  v4 = *(_QWORD *)(a1 + 168);
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v4 + 248LL))(v4, a2, a3, 0LL);
  return v3;
}
