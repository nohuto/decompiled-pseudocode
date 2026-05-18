/*
 * XREFs of sub_180070A10 @ 0x180070A10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_180019D00 @ 0x180019D00 (sub_180019D00.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180070A10(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int64 result; // rax
  unsigned int v6; // eax
  _QWORD v7[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v8[5]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+80h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a2 + 28) > *(_DWORD *)(a2 + 32) )
  {
    sub_18000FE28(v8);
    v6 = (unsigned int)sub_18000FE28(v7);
    sub_1800D1210((unsigned int)pExceptionObject, v6, 396, (unsigned int)v8, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_180019D00(a1 + 288, a2);
  *(_OWORD *)(a1 + 384) = *a3;
  *(_OWORD *)(a1 + 400) = a3[1];
  *(_DWORD *)(a1 + 416) = *(_DWORD *)(a1 + 308);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 280LL))(a1);
  *(_BYTE *)(a1 + 3976) = 1;
  return result;
}
