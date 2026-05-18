/*
 * XREFs of sub_18006B140 @ 0x18006B140
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_18001925C @ 0x18001925C (sub_18001925C.c)
 *     sub_1800CB940 @ 0x1800CB940 (sub_1800CB940.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006B140(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int64 result; // rax
  unsigned int v6; // eax
  _QWORD v7[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v8[5]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+80h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a2 + 28) > *(_DWORD *)(a2 + 32) )
  {
    sub_18000FD48(v8);
    v6 = (unsigned int)sub_18000FD48(v7);
    sub_1800CB940((unsigned int)pExceptionObject, v6, 396, (unsigned int)v8, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_18001925C(a1 + 288, a2);
  *(_OWORD *)(a1 + 384) = *a3;
  *(_OWORD *)(a1 + 400) = a3[1];
  *(_DWORD *)(a1 + 416) = *(_DWORD *)(a1 + 308);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 280LL))(a1);
  *(_BYTE *)(a1 + 3976) = 1;
  return result;
}
