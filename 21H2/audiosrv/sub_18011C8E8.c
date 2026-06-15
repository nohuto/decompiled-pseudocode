/*
 * XREFs of sub_18011C8E8 @ 0x18011C8E8
 * Callers:
 *     sub_1800D672C @ 0x1800D672C (sub_1800D672C.c)
 *     sub_180117A50 @ 0x180117A50 (sub_180117A50.c)
 *     sub_180117D48 @ 0x180117D48 (sub_180117D48.c)
 * Callees:
 *     sub_18004C540 @ 0x18004C540 (sub_18004C540.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18011C8E8(__int64 a1, __int64 a2)
{
  int v4; // ebx

  v4 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(**(_QWORD **)(a1 + 16) + 24LL))(
         *(_QWORD *)(a1 + 16),
         &unk_180173700,
         1LL);
  if ( v4 >= 0 )
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(MEMORY[0] + 32LL))(
           0LL,
           *(_QWORD *)(a1 + 16),
           1LL,
           a2);
  sub_18004C540((__int64)"CEndpointCharacteristics::GetOffloadDeviceFormat", 5966LL, (unsigned int)v4);
  return (unsigned int)v4;
}
