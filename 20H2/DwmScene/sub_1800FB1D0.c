/*
 * XREFs of sub_1800FB1D0 @ 0x1800FB1D0
 * Callers:
 *     sub_1800FA430 @ 0x1800FA430 (sub_1800FA430.c)
 *     sub_1800FB81C @ 0x1800FB81C (sub_1800FB81C.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180017634 @ 0x180017634 (sub_180017634.c)
 *     sub_18002C274 @ 0x18002C274 (sub_18002C274.c)
 *     sub_1800628C4 @ 0x1800628C4 (sub_1800628C4.c)
 *     sub_18009B760 @ 0x18009B760 (sub_18009B760.c)
 *     sub_1800EB244 @ 0x1800EB244 (sub_1800EB244.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_1800FB1D0(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 *v3; // rsi
  volatile signed __int32 *v4; // rbx
  __int64 *v5; // rax
  int v6; // eax
  bool v7; // zf
  _QWORD *v8; // rcx
  __int64 v10; // [rsp+28h] [rbp-19h] BYREF
  volatile signed __int32 *v11; // [rsp+30h] [rbp-11h]
  const void *Src; // [rsp+38h] [rbp-9h] BYREF
  __m128i si128; // [rsp+58h] [rbp+17h] BYREF
  int v14; // [rsp+68h] [rbp+27h]
  int v15; // [rsp+6Ch] [rbp+2Bh]
  int v16; // [rsp+70h] [rbp+2Fh]
  __int128 v17; // [rsp+74h] [rbp+33h]
  int v18; // [rsp+84h] [rbp+43h]
  int v19; // [rsp+88h] [rbp+47h]

  v2 = (_QWORD *)sub_1800EB244(a1);
  sub_180017634(v2, &v10, 1u);
  v3 = (__int64 *)(a1 + 1816);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 1816), &v10);
  v4 = v11;
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  v5 = (__int64 *)sub_18002C274(&Src, (_QWORD *)(a1 + 24), " DepthSampler");
  sub_1800628C4(*v3, v5);
  v14 = 0;
  v18 = 0;
  v6 = 3;
  v15 = 0;
  v7 = *(_DWORD *)(a1 + 1944) == 1;
  v19 = 2139095039;
  if ( v7 )
    v6 = 6;
  v8 = (_QWORD *)*v3;
  v17 = xmmword_18020DC70;
  v16 = v6;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801D5E10);
  return sub_18009B760(v8, &si128, 0LL);
}
