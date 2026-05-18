/*
 * XREFs of sub_18000FB60 @ 0x18000FB60
 * Callers:
 *     sub_18000FD9C @ 0x18000FD9C (sub_18000FD9C.c)
 *     sub_180018974 @ 0x180018974 (sub_180018974.c)
 *     sub_180018A98 @ 0x180018A98 (sub_180018A98.c)
 *     sub_180018B10 @ 0x180018B10 (sub_180018B10.c)
 *     sub_180026E88 @ 0x180026E88 (sub_180026E88.c)
 *     sub_18002D804 @ 0x18002D804 (sub_18002D804.c)
 *     sub_180096B20 @ 0x180096B20 (sub_180096B20.c)
 *     sub_180096B98 @ 0x180096B98 (sub_180096B98.c)
 *     sub_1800A3ED4 @ 0x1800A3ED4 (sub_1800A3ED4.c)
 *     sub_1800A3F64 @ 0x1800A3F64 (sub_1800A3F64.c)
 *     sub_1800A3FF4 @ 0x1800A3FF4 (sub_1800A3FF4.c)
 *     sub_1800A4084 @ 0x1800A4084 (sub_1800A4084.c)
 *     sub_1800A42D0 @ 0x1800A42D0 (sub_1800A42D0.c)
 *     sub_1800A8830 @ 0x1800A8830 (sub_1800A8830.c)
 *     sub_1800F432C @ 0x1800F432C (sub_1800F432C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18000FB60(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rcx

  if ( a2 )
  {
    v2 = *(_QWORD *)(a2 + 104);
    if ( !(v2 ? *(_DWORD *)(v2 + 8) : 0) )
    {
      v4 = *(volatile signed __int32 **)(a1 + 8);
      if ( v4 )
      {
        _InterlockedIncrement(v4 + 2);
        v4 = *(volatile signed __int32 **)(a1 + 8);
        if ( v4 )
          _InterlockedIncrement(v4 + 3);
      }
      v5 = *(volatile signed __int32 **)(a2 + 104);
      *(_QWORD *)(a2 + 96) = a2;
      *(_QWORD *)(a2 + 104) = v4;
      if ( v5 && _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      }
    }
  }
}
