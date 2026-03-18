/*
 * XREFs of FsRtlDoesDbcsContainWildCards @ 0x14088F000
 * Callers:
 *     FsRtlIsFatDbcsLegal @ 0x1406C8D70 (FsRtlIsFatDbcsLegal.c)
 *     FsRtlIsDbcsInExpression @ 0x14088F070 (FsRtlIsDbcsInExpression.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlDoesDbcsContainWildCards(PANSI_STRING Name)
{
  unsigned int Length; // r8d
  int v2; // edx
  char *Buffer; // r9
  __int64 v4; // rcx

  Length = Name->Length;
  v2 = 0;
  if ( !Name->Length )
    return 0;
  Buffer = Name->Buffer;
  while ( 1 )
  {
    v4 = Buffer[v2];
    if ( (unsigned __int8)v4 < 0x80u || !(_BYTE)NlsMbOemCodePageTag || !NlsOemLeadByteInfoTable[(unsigned __int8)v4] )
      break;
    ++v2;
LABEL_9:
    if ( ++v2 >= Length )
      return 0;
  }
  if ( (v4 & 0x80u) != 0LL || (*((_BYTE *)qword_140011610 + v4) & 8) == 0 )
    goto LABEL_9;
  return 1;
}
