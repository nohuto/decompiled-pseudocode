/*
 * XREFs of sub_180020F20 @ 0x180020F20
 * Callers:
 *     sub_1800069C0 @ 0x1800069C0 (sub_1800069C0.c)
 * Callees:
 *     sub_180017360 @ 0x180017360 (sub_180017360.c)
 *     sub_18001D9B4 @ 0x18001D9B4 (sub_18001D9B4.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180020F20(__int64 a1, int a2, __int64 a3)
{
  int v4; // edi
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  v4 = sub_18001D9B4((RTL_SRWLOCK *)qword_18004FE78, a2, &v8);
  v5 = v8;
  if ( v4 >= 0 )
  {
    if ( v8 )
      v4 = sub_180017360(v8, a3);
    else
      v4 = -2147023728;
  }
  if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 )
  {
    v6 = v8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 24LL))(v6, 1LL);
  }
  return (unsigned int)v4;
}
