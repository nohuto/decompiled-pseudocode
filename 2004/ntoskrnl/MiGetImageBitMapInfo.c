/*
 * XREFs of MiGetImageBitMapInfo @ 0x14034BFC8
 * Callers:
 *     MiReturnImageBase @ 0x1405FF238 (MiReturnImageBase.c)
 *     MiSelectImageBase @ 0x140605F18 (MiSelectImageBase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetImageBitMapInfo(int a1, _QWORD *a2, _QWORD *a3, __int64 *a4)
{
  __int64 result; // rax

  a2[1] = 0LL;
  if ( a1 == 1 )
  {
    *a3 = 2013265920LL;
    result = (__int64)&qword_140C4C9E0;
    *a2 = &qword_140C4C9E0;
    if ( a4 )
    {
      result = qword_140C4C9F0;
      goto LABEL_6;
    }
  }
  else
  {
    if ( a1 == 2 )
    {
      *a2 = &unk_140C4C988;
      result = (__int64)&qword_140C4C9E0;
      a2[1] = &qword_140C4C9E0;
    }
    else
    {
      if ( a1 != 3 )
      {
        *a2 = &qword_140C4C950;
        result = 0x7FFFFFFF0000LL;
        *a3 = 0x7FFFFFFF0000LL;
        if ( !a4 )
          return result;
        result = qword_140C4C960;
        goto LABEL_6;
      }
      result = (__int64)&unk_140C4C988;
      *a2 = &unk_140C4C988;
    }
    *a3 = 2013265920LL;
    if ( a4 )
    {
      result = qword_140C4C9C8;
LABEL_6:
      *a4 = result;
    }
  }
  return result;
}
