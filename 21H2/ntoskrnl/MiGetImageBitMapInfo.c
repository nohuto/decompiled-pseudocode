/*
 * XREFs of MiGetImageBitMapInfo @ 0x14035F2F4
 * Callers:
 *     MiReturnImageBase @ 0x1406EABD8 (MiReturnImageBase.c)
 *     MiSelectImageBase @ 0x140714524 (MiSelectImageBase.c)
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
    result = (__int64)&qword_140C4CBE0;
    *a2 = &qword_140C4CBE0;
    if ( a4 )
    {
      result = qword_140C4CBF0;
      goto LABEL_6;
    }
  }
  else
  {
    if ( a1 == 2 )
    {
      *a2 = &unk_140C4CB88;
      result = (__int64)&qword_140C4CBE0;
      a2[1] = &qword_140C4CBE0;
    }
    else
    {
      if ( a1 != 3 )
      {
        *a2 = &qword_140C4CB50;
        result = 0x7FFFFFFF0000LL;
        *a3 = 0x7FFFFFFF0000LL;
        if ( !a4 )
          return result;
        result = qword_140C4CB60;
        goto LABEL_6;
      }
      result = (__int64)&unk_140C4CB88;
      *a2 = &unk_140C4CB88;
    }
    *a3 = 2013265920LL;
    if ( a4 )
    {
      result = qword_140C4CBC8;
LABEL_6:
      *a4 = result;
    }
  }
  return result;
}
