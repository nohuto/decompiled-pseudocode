/*
 * XREFs of sub_1800DFD90 @ 0x1800DFD90
 * Callers:
 *     sub_1800E0FF0 @ 0x1800E0FF0 (sub_1800E0FF0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800DFD90(__int64 a1, __int64 a2)
{
  char v4; // cl
  unsigned int v5; // esi
  _QWORD *v6; // rdi
  char v7; // r8
  _QWORD *v8; // rdx
  _QWORD *result; // rax

  v4 = 0;
  v5 = 0;
  v6 = (_QWORD *)(a1 + 8);
  do
  {
    v7 = *(_BYTE *)(a1 + 440);
    if ( v7 || v6[16] != *v6 )
    {
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(16LL * v5 + a1 + 136), (_QWORD *)(16LL * v5 + a1 + 8));
      v7 = *(_BYTE *)(a1 + 440);
      v4 = 1;
    }
    ++v5;
    v6 += 2;
  }
  while ( v5 < 8 );
  v8 = (_QWORD *)(a1 + 392);
  if ( v7 || (result = (_QWORD *)*v8, *(_QWORD *)(a1 + 408) != *v8) )
  {
    result = std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 408), v8);
    v4 = 1;
  }
  if ( v4 )
    result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 176LL))(
                         a2,
                         a1 + 136,
                         a1 + 408);
  *(_BYTE *)(a1 + 440) = 0;
  return result;
}
