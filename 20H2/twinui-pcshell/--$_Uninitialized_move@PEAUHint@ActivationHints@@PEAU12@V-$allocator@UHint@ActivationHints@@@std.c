/*
 * XREFs of ??$_Uninitialized_move@PEAUHint@ActivationHints@@PEAU12@V?$allocator@UHint@ActivationHints@@@std@@@std@@YAPEAUHint@ActivationHints@@QEAU12@0PEAU12@AEAV?$allocator@UHint@ActivationHints@@@0@@Z @ 0x1803C985C
 * Callers:
 *     ??$_Emplace_reallocate@UHint@ActivationHints@@@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@QEAAPEAUHint@ActivationHints@@QEAU23@$$QEAU23@@Z @ 0x1803C965C (--$_Emplace_reallocate@UHint@ActivationHints@@@-$vector@UHint@ActivationHints@@V-$allocator@UHin.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::_Uninitialized_move<ActivationHints::Hint *,ActivationHints::Hint *,std::allocator<ActivationHints::Hint>>(
        _QWORD *a1,
        _QWORD *a2,
        char *a3)
{
  char *result; // rax
  _QWORD *v4; // r8
  char *v5; // r9
  __int64 v6; // rcx

  result = a3;
  if ( a1 != a2 )
  {
    v4 = a1 + 7;
    v5 = (char *)(result - (char *)a1);
    do
    {
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 40) = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 32) = 0LL;
      *(_OWORD *)result = *(_OWORD *)(v4 - 7);
      *((_OWORD *)result + 1) = *(_OWORD *)(v4 - 5);
      *(v4 - 5) = 0LL;
      result += 80;
      *(v4 - 4) = 7LL;
      *((_WORD *)v4 - 28) = 0;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 8) = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5) = 0LL;
      *(_OWORD *)((char *)v4 + (_QWORD)v5 - 24) = *(_OWORD *)(v4 - 3);
      *(_OWORD *)((char *)v4 + (_QWORD)v5 - 8) = *(_OWORD *)(v4 - 1);
      *(v4 - 1) = 0LL;
      *v4 = 7LL;
      *((_WORD *)v4 - 12) = 0;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 + 8) = v4[1];
      v6 = v4[2];
      v4[2] = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 + 16) = v6;
      v4 += 10;
    }
    while ( v4 - 7 != a2 );
  }
  return result;
}
