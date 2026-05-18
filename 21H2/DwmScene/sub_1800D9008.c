/*
 * XREFs of sub_1800D9008 @ 0x1800D9008
 * Callers:
 *     sub_1800D90D8 @ 0x1800D90D8 (sub_1800D90D8.c)
 *     sub_1800D99B0 @ 0x1800D99B0 (sub_1800D99B0.c)
 * Callees:
 *     sub_1800DA8B8 @ 0x1800DA8B8 (sub_1800DA8B8.c)
 */

_QWORD *__fastcall sub_1800D9008(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // rdx
  _QWORD *result; // rax
  __int64 **v5; // rcx
  __int64 i; // rcx
  __int64 *v7; // rdx
  _QWORD *v8; // [rsp+20h] [rbp-18h] BYREF

  *(_BYTE *)a1 = 0;
  v1 = (_QWORD *)(a1 + 16);
  v2 = *(_QWORD **)(a1 + 16);
  result = (_QWORD *)*v2;
  if ( (_QWORD *)*v2 != v2 )
  {
    do
    {
      if ( result[5] == *(_QWORD *)(a1 + 8) )
      {
        v5 = (__int64 **)result[2];
        if ( *((_BYTE *)v5 + 25) )
        {
          for ( i = result[1]; !*(_BYTE *)(i + 25) && result == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
            result = (_QWORD *)i;
          result = (_QWORD *)i;
        }
        else
        {
          v7 = *v5;
          for ( result = (_QWORD *)result[2]; !*((_BYTE *)v7 + 25); v7 = (__int64 *)*v7 )
            result = v7;
        }
      }
      else
      {
        sub_1800DA8B8(v1, &v8, result);
        result = v8;
      }
    }
    while ( result != (_QWORD *)*v1 );
  }
  return result;
}
