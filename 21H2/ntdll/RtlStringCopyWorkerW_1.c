/*
 * XREFs of RtlStringCopyWorkerW_1 @ 0x1800D03FC
 * Callers:
 *     RtlStringCchCopyExW @ 0x1800D0328 (RtlStringCchCopyExW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCopyWorkerW_1(_WORD *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  _WORD *v4; // r10
  __int64 v5; // r11
  __int64 v6; // rax
  __int64 v7; // r9
  __int16 v8; // cx
  _WORD *v9; // rcx
  __int64 result; // rax
  __int64 v11; // rcx

  v4 = a1;
  v5 = 0LL;
  if ( a2 )
  {
    v6 = 2147483646LL;
    v7 = a4 - (_QWORD)a1;
    do
    {
      if ( !v6 )
        break;
      v8 = *(_WORD *)((char *)v4 + v7);
      if ( !v8 )
        break;
      *v4 = v8;
      --v6;
      ++v4;
      ++v5;
      --a2;
    }
    while ( a2 );
  }
  v9 = v4 - 1;
  result = a2 == 0 ? 0x80000005 : 0;
  if ( a2 )
    v9 = v4;
  *v9 = 0;
  if ( a3 )
  {
    v11 = v5 - 1;
    if ( a2 )
      v11 = v5;
    *a3 = v11;
  }
  return result;
}
