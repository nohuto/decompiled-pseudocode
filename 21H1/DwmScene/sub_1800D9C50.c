/*
 * XREFs of sub_1800D9C50 @ 0x1800D9C50
 * Callers:
 *     sub_1800DB720 @ 0x1800DB720 (sub_1800DB720.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D9C50(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // r14
  __int64 result; // rax
  __int64 v7; // rbp
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rbx

  v2 = 0LL;
  v4 = 0LL;
  do
  {
    result = *(unsigned int *)(a1 + 3464);
    if ( _bittest((const int *)&result, v2) )
    {
      v7 = 0LL;
      v8 = 0LL;
      do
      {
        if ( *(_BYTE *)(a1 + 3468)
          || (result = *(_QWORD *)(a1 + 16 * (v4 + v8) + 8), *(_QWORD *)(a1 + 16 * (v4 + v8) + 1160) != result) )
        {
          v9 = 16 * (v7 + 12 * v2);
          v10 = v9 + a1;
          std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v9 + a1 + 1160), (_QWORD *)(a1 + v9 + 8));
          result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)a2 + 112LL))(
                     a2,
                     (unsigned int)v2,
                     v10 + 1160,
                     (unsigned int)v7);
        }
        v7 = (unsigned int)(v7 + 1);
        ++v8;
      }
      while ( (unsigned int)v7 < 0xC );
    }
    v2 = (unsigned int)(v2 + 1);
    v4 += 12LL;
  }
  while ( (unsigned int)v2 < 6 );
  *(_BYTE *)(a1 + 3468) = 0;
  return result;
}
