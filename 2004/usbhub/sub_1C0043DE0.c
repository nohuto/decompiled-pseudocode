/*
 * XREFs of sub_1C0043DE0 @ 0x1C0043DE0
 * Callers:
 *     sub_1C0043F70 @ 0x1C0043F70 (sub_1C0043F70.c)
 *     sub_1C0043FF0 @ 0x1C0043FF0 (sub_1C0043FF0.c)
 *     sub_1C0044090 @ 0x1C0044090 (sub_1C0044090.c)
 *     sub_1C0044230 @ 0x1C0044230 (sub_1C0044230.c)
 *     sub_1C0044420 @ 0x1C0044420 (sub_1C0044420.c)
 *     sub_1C0044590 @ 0x1C0044590 (sub_1C0044590.c)
 *     sub_1C00446D4 @ 0x1C00446D4 (sub_1C00446D4.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C005C500 @ 0x1C005C500 (sub_1C005C500.c)
 */

unsigned __int64 __fastcall sub_1C0043DE0(__int64 a1, int a2, int a3)
{
  _DWORD *v5; // rdi
  __int64 v6; // r9
  unsigned __int64 result; // rax
  void *v8; // rdx

  v5 = sub_1C000F050(a1);
  v6 = ((unsigned __int8)v5[6] + 1) & 7;
  v5[6] = v6;
  v6 *= 32LL;
  *(_DWORD *)((char *)v5 + v6 + 28) = a3;
  *(_DWORD *)((char *)v5 + v6 + 32) = v5[340];
  *(_DWORD *)((char *)v5 + v6 + 36) = a2;
  result = (unsigned int)v5[340];
  if ( a2 != (_DWORD)result )
  {
    if ( (_DWORD)result == 5 )
    {
      v8 = &unk_1C00627F8;
    }
    else
    {
      if ( a2 != 5 )
        goto LABEL_7;
      v8 = &unk_1C0062978;
    }
    result = sub_1C005C500(v5, v8);
  }
LABEL_7:
  switch ( a2 )
  {
    case 1:
      result = (unsigned __int64)sub_1C0043F70;
      goto LABEL_21;
    case 2:
      result = (unsigned __int64)sub_1C0044230;
      goto LABEL_21;
    case 3:
      *((_QWORD *)v5 + 171) = 0LL;
      break;
    case 4:
      result = (unsigned __int64)sub_1C0043FF0;
      goto LABEL_21;
    case 5:
      result = (unsigned __int64)sub_1C0044420;
      goto LABEL_21;
    case 6:
      result = (unsigned __int64)sub_1C0044590;
      goto LABEL_21;
    case 7:
      result = (unsigned __int64)sub_1C0044090;
LABEL_21:
      *((_QWORD *)v5 + 171) = result;
      break;
  }
  v5[340] = a2;
  return result;
}
