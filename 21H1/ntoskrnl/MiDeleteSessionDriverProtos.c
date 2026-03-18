/*
 * XREFs of MiDeleteSessionDriverProtos @ 0x140764C88
 * Callers:
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
 *     MiMapSystemImage @ 0x140745AB0 (MiMapSystemImage.c)
 *     MiCreateSessionDriverProtos @ 0x1408D5E88 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x1402BCD40 (MiGetSubsectionDriverProtos.c)
 *     MiDeletePerSessionProtos @ 0x14031F1CC (MiDeletePerSessionProtos.c)
 */

__int64 __fastcall MiDeleteSessionDriverProtos(__int64 *a1)
{
  __int64 v1; // rdi
  _QWORD *i; // rbx
  unsigned __int64 *SubsectionDriverProtos; // rax
  __int64 result; // rax

  v1 = *a1;
  for ( i = a1 + 16; i; i = (_QWORD *)i[2] )
  {
    if ( (*((_BYTE *)i + 34) & 2) == 0 )
    {
      SubsectionDriverProtos = (unsigned __int64 *)MiGetSubsectionDriverProtos(i);
      if ( SubsectionDriverProtos )
      {
        i[3] = 0LL;
        SubsectionDriverProtos[8] = (unsigned __int64)i;
        MiDeletePerSessionProtos(SubsectionDriverProtos);
      }
    }
  }
  result = 63487LL;
  *(_WORD *)(v1 + 12) &= ~0x800u;
  return result;
}
