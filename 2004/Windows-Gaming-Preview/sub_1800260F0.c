/*
 * XREFs of sub_1800260F0 @ 0x1800260F0
 * Callers:
 *     sub_180024BA0 @ 0x180024BA0 (sub_180024BA0.c)
 *     sub_180024FB0 @ 0x180024FB0 (sub_180024FB0.c)
 *     sub_180025320 @ 0x180025320 (sub_180025320.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800260F0(__int64 a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 68));
  if ( (*(_BYTE *)(a1 + 88) & 4) == 0 && v1 == 2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 8LL))(qword_18005ADB0);
  return v1;
}
