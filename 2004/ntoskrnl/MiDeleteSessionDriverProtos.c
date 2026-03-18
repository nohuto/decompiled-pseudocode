/*
 * XREFs of MiDeleteSessionDriverProtos @ 0x140766648
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A8E58 (MiUnloadSystemImage.c)
 *     MiMapSystemImage @ 0x140747630 (MiMapSystemImage.c)
 *     MiCreateSessionDriverProtos @ 0x1408D71D8 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x140263D10 (MiGetSubsectionDriverProtos.c)
 *     MiDeletePerSessionProtos @ 0x14035CCDC (MiDeletePerSessionProtos.c)
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
