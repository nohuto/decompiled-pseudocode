/*
 * XREFs of sub_18001A320 @ 0x18001A320
 * Callers:
 *     <none>
 * Callees:
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_18001A320(_QWORD *a1, char a2)
{
  *a1 = &wistd::__function::__base<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
