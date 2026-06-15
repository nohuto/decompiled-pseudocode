/*
 * XREFs of sub_18006D234 @ 0x18006D234
 * Callers:
 *     sub_180010CB0 @ 0x180010CB0 (sub_180010CB0.c)
 *     sub_180045270 @ 0x180045270 (sub_180045270.c)
 *     sub_180053F40 @ 0x180053F40 (sub_180053F40.c)
 *     sub_18006DE20 @ 0x18006DE20 (sub_18006DE20.c)
 *     sub_180071940 @ 0x180071940 (sub_180071940.c)
 *     sub_1800B91E4 @ 0x1800B91E4 (sub_1800B91E4.c)
 *     sub_1800D7588 @ 0x1800D7588 (sub_1800D7588.c)
 *     sub_18010742C @ 0x18010742C (sub_18010742C.c)
 *     sub_18010CAE0 @ 0x18010CAE0 (sub_18010CAE0.c)
 *     sub_1801202A0 @ 0x1801202A0 (sub_1801202A0.c)
 *     sub_1801203F8 @ 0x1801203F8 (sub_1801203F8.c)
 *     sub_18012276C @ 0x18012276C (sub_18012276C.c)
 *     sub_18012716C @ 0x18012716C (sub_18012716C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006D234(volatile signed __int32 *a1)
{
  signed __int32 v1; // r8d
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 == 0x7FFFFFFF )
    return 0x7FFFFFFFLL;
  do
  {
    if ( v1 == _InterlockedCompareExchange(a1, v1 + 1, v1) )
      break;
    v1 = *a1;
  }
  while ( *a1 != 0x7FFFFFFF );
  result = (unsigned int)(v1 + 1);
  if ( v1 == 0x7FFFFFFF )
    return 0x7FFFFFFFLL;
  return result;
}
