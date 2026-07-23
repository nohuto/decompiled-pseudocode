/*
 * XREFs of RtlpApplyLengthFunction @ 0x18007EA50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A1120 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpApplyLengthFunction(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall *a4)(_QWORD, __int64, unsigned int *))
{
  __int64 v5; // rdi
  __int64 result; // rax
  unsigned __int16 v7; // ax
  unsigned int v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0;
  v5 = 0LL;
  if ( !a3 || !a4 || a1 )
    return 3221225485LL;
  if ( a2 == 16 )
    goto LABEL_5;
  if ( a2 != 56 )
    return 3221225485LL;
  v5 = a3;
LABEL_5:
  result = a4(0LL, a3, &v8);
  if ( (int)result >= 0 )
  {
    if ( v8 > 0x7FFF )
    {
      return 3221225734LL;
    }
    else
    {
      v7 = 2 * v8;
      *(_WORD *)a3 = 2 * v8;
      if ( v5 )
        *(_WORD *)(*(_QWORD *)(a3 + 8) + 2 * ((unsigned __int64)v7 >> 1)) = 0;
      return 0LL;
    }
  }
  return result;
}
