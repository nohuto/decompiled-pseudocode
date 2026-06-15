/*
 * XREFs of sub_1800D1BD0 @ 0x1800D1BD0
 * Callers:
 *     sub_180031350 @ 0x180031350 (sub_180031350.c)
 * Callees:
 *     sub_18000410C @ 0x18000410C (sub_18000410C.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 */

__int64 __fastcall sub_1800D1BD0(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  void *v4; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 132) == 2 )
  {
    sub_1800CB144((__int64 *)(a1 + 176));
    sub_1800CB144((__int64 *)(a1 + 184));
    sub_1800CB144((__int64 *)(a1 + 192));
  }
  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)qword_18019EE58 + 32LL))(
         qword_18019EE58,
         *(_QWORD *)(a1 + 64),
         a1 + 8);
  v3 = v2;
  if ( v2 < 0 )
    sub_18006D26C((int)retaddr, 325, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", v2);
  v4 = *(void **)(a1 + 312);
  if ( v4 )
    sub_18000410C(v4);
  return v3;
}
