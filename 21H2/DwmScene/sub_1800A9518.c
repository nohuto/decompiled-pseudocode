/*
 * XREFs of sub_1800A9518 @ 0x1800A9518
 * Callers:
 *     sub_1800A4C58 @ 0x1800A4C58 (sub_1800A4C58.c)
 *     sub_1800A555C @ 0x1800A555C (sub_1800A555C.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_18006714C @ 0x18006714C (sub_18006714C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800A9518(__int64 a1, _QWORD *a2)
{
  volatile signed __int32 *v4; // rbx
  __int64 *v5; // rax
  _QWORD v6[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v7[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  sub_18006714C(*a2 + 24LL, (__int64)a2);
  if ( *(_DWORD *)(a1 + 432) != 1 )
  {
    sub_18000FE28(v7);
    v5 = sub_18000FE28(v6);
    sub_18002D8C4(pExceptionObject, v5, 510, (__int64)v7, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v4 = (volatile signed __int32 *)a2[1];
  if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
    if ( !_InterlockedDecrement(v4 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  }
}
