/*
 * XREFs of sub_1800627D4 @ 0x1800627D4
 * Callers:
 *     sub_18000F54C @ 0x18000F54C (sub_18000F54C.c)
 *     sub_1800172A8 @ 0x1800172A8 (sub_1800172A8.c)
 *     sub_18001EBF4 @ 0x18001EBF4 (sub_18001EBF4.c)
 *     sub_1800389E8 @ 0x1800389E8 (sub_1800389E8.c)
 *     sub_180038C64 @ 0x180038C64 (sub_180038C64.c)
 *     sub_180068B20 @ 0x180068B20 (sub_180068B20.c)
 *     sub_1800C6BA8 @ 0x1800C6BA8 (sub_1800C6BA8.c)
 *     sub_1800C74C8 @ 0x1800C74C8 (sub_1800C74C8.c)
 *     sub_1800C7744 @ 0x1800C7744 (sub_1800C7744.c)
 *     sub_1800C79C0 @ 0x1800C79C0 (sub_1800C79C0.c)
 *     sub_1800C7C3C @ 0x1800C7C3C (sub_1800C7C3C.c)
 *     sub_1800C7EB8 @ 0x1800C7EB8 (sub_1800C7EB8.c)
 *     sub_1800C9B00 @ 0x1800C9B00 (sub_1800C9B00.c)
 *     sub_1800C9F64 @ 0x1800C9F64 (sub_1800C9F64.c)
 *     sub_1800CBD34 @ 0x1800CBD34 (sub_1800CBD34.c)
 *     sub_1800EE22C @ 0x1800EE22C (sub_1800EE22C.c)
 *     sub_1800F0A78 @ 0x1800F0A78 (sub_1800F0A78.c)
 * Callees:
 *     sub_18006AB3C @ 0x18006AB3C (sub_18006AB3C.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800627D4(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  volatile signed __int32 *v5; // rcx
  __int64 result; // rax

  v2 = a2[1];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 12));
    v2 = a2[1];
  }
  *(_QWORD *)(a1 + 72) = *a2;
  v5 = *(volatile signed __int32 **)(a1 + 80);
  *(_QWORD *)(a1 + 80) = v2;
  if ( v5 && _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
  result = sub_18006AB3C(*a2);
  *(_DWORD *)(a1 + 88) = result;
  return result;
}
