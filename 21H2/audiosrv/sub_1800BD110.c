/*
 * XREFs of sub_1800BD110 @ 0x1800BD110
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_180068064 @ 0x180068064 (sub_180068064.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800BD110(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r8
  int v3; // eax
  unsigned int v4; // ebx

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
    v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 24LL))(*(_QWORD *)(a1 + 40));
  else
    v3 = sub_180068064(a1, a2);
  v4 = v3;
  if ( v3 < 0 )
    sub_18005E8F8((__int64)"CMeterHardware::GetChannelCount", 345, v3);
  return v4;
}
