/*
 * XREFs of CalcWindowsFullScreen @ 0x1C011C250
 * Callers:
 *     <none>
 * Callees:
 *     CalcWindowFullScreen @ 0x1C00906E4 (CalcWindowFullScreen.c)
 */

__int64 __fastcall CalcWindowsFullScreen(__int64 a1)
{
  __int64 result; // rax
  __int64 *v2; // rbx

  result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 112LL);
  if ( result )
  {
    while ( 1 )
    {
      v2 = (__int64 *)(result + 88);
      if ( !*(_QWORD *)(result + 88) )
        break;
      CalcWindowFullScreen((struct tagWND *)result);
      result = *v2;
    }
  }
  return result;
}
