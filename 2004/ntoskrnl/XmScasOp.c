/*
 * XREFs of XmScasOp @ 0x1404E1870
 * Callers:
 *     XmEmulateStream @ 0x1403948D8 (XmEmulateStream.c)
 * Callees:
 *     XmSetSourceValue @ 0x1403945D8 (XmSetSourceValue.c)
 *     XmSetDestinationValue @ 0x140394668 (XmSetDestinationValue.c)
 *     XmGetStringAddress @ 0x1403BE08C (XmGetStringAddress.c)
 *     XmCompareOperands @ 0x1404E15EC (XmCompareOperands.c)
 */

__int64 __fastcall XmScasOp(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax
  int *StringAddress; // rax
  __int64 v5; // rcx

  v2 = 1;
  if ( *(_BYTE *)(a1 + 139) )
  {
    if ( *(_BYTE *)(a1 + 137) )
      v2 = *(_DWORD *)(a1 + 28);
    else
      v2 = *(unsigned __int16 *)(a1 + 28);
  }
  result = XmSetSourceValue(a1, (unsigned __int16 *)(a1 + 24));
  do
  {
    if ( !v2 )
      break;
    StringAddress = XmGetStringAddress(a1, 0, 7u);
    XmSetDestinationValue(a1, (unsigned __int16 *)StringAddress);
    result = XmCompareOperands(v5);
    --v2;
  }
  while ( ((*(_DWORD *)(a1 + 16) & 0x40) != 0) == *(_BYTE *)(a1 + 141) );
  if ( *(_BYTE *)(a1 + 139) )
  {
    if ( *(_BYTE *)(a1 + 137) )
      *(_DWORD *)(a1 + 28) = v2;
    else
      *(_WORD *)(a1 + 28) = v2;
  }
  return result;
}
