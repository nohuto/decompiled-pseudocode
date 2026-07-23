/*
 * XREFs of MiDeleteSessionDriverProtos @ 0x1407797E8
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A84A8 (MiUnloadSystemImage.c)
 *     MiMapSystemImage @ 0x14075D284 (MiMapSystemImage.c)
 *     MiCreateSessionDriverProtos @ 0x1408DA938 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiDeletePerSessionProtos @ 0x14024D674 (MiDeletePerSessionProtos.c)
 *     MiGetSubsectionDriverProtos @ 0x140307B30 (MiGetSubsectionDriverProtos.c)
 */

__int64 __fastcall MiDeleteSessionDriverProtos(__int64 *a1)
{
  __int64 v1; // rdi
  _QWORD *i; // rbx
  __int64 SubsectionDriverProtos; // rax
  __int64 result; // rax

  v1 = *a1;
  for ( i = a1 + 16; i; i = (_QWORD *)i[2] )
  {
    if ( (*((_BYTE *)i + 34) & 2) == 0 )
    {
      SubsectionDriverProtos = MiGetSubsectionDriverProtos(i);
      if ( SubsectionDriverProtos )
      {
        i[3] = 0LL;
        *(_QWORD *)(SubsectionDriverProtos + 64) = i;
        MiDeletePerSessionProtos((char *)SubsectionDriverProtos);
      }
    }
  }
  result = 63487LL;
  *(_WORD *)(v1 + 12) &= ~0x800u;
  return result;
}
