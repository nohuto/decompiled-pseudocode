/*
 * XREFs of sub_180033378 @ 0x180033378
 * Callers:
 *     ??_G?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z @ 0x180033170 (--_G-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAAPEAXI@Z.c)
 *     sub_180033740 @ 0x180033740 (sub_180033740.c)
 *     sub_180033B5C @ 0x180033B5C (sub_180033B5C.c)
 *     sub_180034340 @ 0x180034340 (sub_180034340.c)
 *     sub_18003439C @ 0x18003439C (sub_18003439C.c)
 *     sub_180034630 @ 0x180034630 (sub_180034630.c)
 *     sub_180035970 @ 0x180035970 (sub_180035970.c)
 *     sub_18003CD88 @ 0x18003CD88 (sub_18003CD88.c)
 *     sub_18003CEB8 @ 0x18003CEB8 (sub_18003CEB8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180033378(_QWORD *a1)
{
  volatile signed __int32 *v1; // rdx
  volatile signed __int32 *v3; // rdx
  volatile signed __int32 *v4; // rdx
  volatile signed __int32 *v5; // rdx
  __int64 result; // rax

  v1 = (volatile signed __int32 *)(a1[14] - 24LL);
  *a1 = off_18003F6E0;
  if ( _InterlockedDecrement(v1 + 4) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v1 + 8LL))(*(_QWORD *)v1);
  v3 = (volatile signed __int32 *)(a1[13] - 24LL);
  if ( _InterlockedDecrement(v3 + 4) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v3 + 8LL))(*(_QWORD *)v3);
  v4 = (volatile signed __int32 *)(a1[12] - 24LL);
  if ( _InterlockedDecrement(v4 + 4) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 8LL))(*(_QWORD *)v4);
  v5 = (volatile signed __int32 *)(a1[11] - 24LL);
  result = (unsigned int)_InterlockedDecrement(v5 + 4);
  if ( (int)result <= 0 )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 8LL))(*(_QWORD *)v5);
  return result;
}
