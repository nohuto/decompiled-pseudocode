/*
 * XREFs of sub_1800665EC @ 0x1800665EC
 * Callers:
 *     sub_180066660 @ 0x180066660 (sub_180066660.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall sub_1800665EC(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  __int64 v3; // rcx
  bool v4; // bl
  _BYTE v6[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 376LL))(a1, v6) + 8);
  if ( v1 )
    v2 = *(_DWORD *)(v1 + 8);
  else
    v2 = 0;
  v3 = v7;
  v4 = v2 != 0;
  if ( v7 && _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return v4;
}
