/*
 * XREFs of sub_1800F08C0 @ 0x1800F08C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_180031AE8 @ 0x180031AE8 (sub_180031AE8.c)
 *     sub_18007B1D0 @ 0x18007B1D0 (sub_18007B1D0.c)
 *     sub_18008A1A4 @ 0x18008A1A4 (sub_18008A1A4.c)
 *     sub_180099C14 @ 0x180099C14 (sub_180099C14.c)
 *     sub_1800A1588 @ 0x1800A1588 (sub_1800A1588.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __RTtypeid @ 0x180123994 (__RTtypeid.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_1800F08C0(__int64 a1, _QWORD *a2, _DWORD *a3, __int64 a4)
{
  volatile signed __int32 *v6; // rbx
  _QWORD *v8; // rax
  const void **v9; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rax
  _BYTE *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rbx
  __int64 *v15; // rax
  _QWORD v16[4]; // [rsp+40h] [rbp-F8h] BYREF
  const void *Src; // [rsp+60h] [rbp-D8h] BYREF
  _BYTE v18[32]; // [rsp+80h] [rbp-B8h] BYREF
  _BYTE v19[32]; // [rsp+A0h] [rbp-98h] BYREF
  _BYTE v20[32]; // [rsp+C0h] [rbp-78h] BYREF
  _QWORD pExceptionObject[11]; // [rsp+E0h] [rbp-58h] BYREF

  if ( (*a3 & 0x10000) == 0 )
  {
    v8 = (_QWORD *)sub_18007B1D0(a1);
    v9 = sub_1800A1588(&Src, "Component::Clone() -- component '", v8);
    v10 = (_QWORD *)sub_180031AE8((__int64)v18, v9, "' of type ");
    v11 = _RTtypeid(a1);
    v12 = (_BYTE *)sub_18008A1A4(v11);
    v13 = (_QWORD *)sub_180031AE8((__int64)v19, v10, v12);
    v14 = sub_180031AE8((__int64)v20, v13, " does not support cloning.");
    v15 = sub_18000FE28(v16);
    sub_180099C14(pExceptionObject, v15, 43, v14, 0);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v6 = *(volatile signed __int32 **)(a4 + 8);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return a2;
}
