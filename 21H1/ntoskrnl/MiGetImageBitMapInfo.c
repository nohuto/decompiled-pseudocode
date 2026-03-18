/*
 * XREFs of MiGetImageBitMapInfo @ 0x14030EAE8
 * Callers:
 *     MiReturnImageBase @ 0x140634278 (MiReturnImageBase.c)
 *     MiSelectImageBase @ 0x14063AF58 (MiSelectImageBase.c)
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
    result = (__int64)&qword_140C4CB20;
    *a2 = &qword_140C4CB20;
    if ( a4 )
    {
      result = qword_140C4CB30;
      goto LABEL_6;
    }
  }
  else
  {
    if ( a1 == 2 )
    {
      *a2 = &unk_140C4CAC8;
      result = (__int64)&qword_140C4CB20;
      a2[1] = &qword_140C4CB20;
    }
    else
    {
      if ( a1 != 3 )
      {
        *a2 = &qword_140C4CA90;
        result = 0x7FFFFFFF0000LL;
        *a3 = 0x7FFFFFFF0000LL;
        if ( !a4 )
          return result;
        result = qword_140C4CAA0;
        goto LABEL_6;
      }
      result = (__int64)&unk_140C4CAC8;
      *a2 = &unk_140C4CAC8;
    }
    *a3 = 2013265920LL;
    if ( a4 )
    {
      result = qword_140C4CB08;
LABEL_6:
      *a4 = result;
    }
  }
  return result;
}
