/*
 * XREFs of sub_1800A3C48 @ 0x1800A3C48
 * Callers:
 *     sub_18009F388 @ 0x18009F388 (sub_18009F388.c)
 *     sub_18009FC8C @ 0x18009FC8C (sub_18009FC8C.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     sub_18006187C @ 0x18006187C (sub_18006187C.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800A3C48(__int64 a1, _QWORD *a2)
{
  volatile signed __int32 *v4; // rbx
  __int64 *v5; // rax
  _QWORD v6[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v7[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  sub_18006187C(*a2 + 24LL, (__int64)a2);
  if ( *(_DWORD *)(a1 + 432) != 1 )
  {
    sub_18000FD48(v7);
    v5 = sub_18000FD48(v6);
    sub_180027FF4(pExceptionObject, v5, 510, (__int64)v7, 0);
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
