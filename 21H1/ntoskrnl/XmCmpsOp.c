/*
 * XREFs of XmCmpsOp @ 0x1404E0F80
 * Callers:
 *     XmEmulateStream @ 0x140393D08 (XmEmulateStream.c)
 * Callees:
 *     XmSetSourceValue @ 0x140393A08 (XmSetSourceValue.c)
 *     XmSetDestinationValue @ 0x140393A98 (XmSetDestinationValue.c)
 *     XmGetStringAddress @ 0x1403BD0FC (XmGetStringAddress.c)
 *     XmCompareOperands @ 0x1404E102C (XmCompareOperands.c)
 */

void __fastcall XmCmpsOp(__int64 a1)
{
  int v2; // edi
  int *StringAddress; // rax
  __int64 v4; // rcx
  int *v5; // rax

  v2 = 1;
  if ( !*(_BYTE *)(a1 + 139) )
    goto LABEL_5;
  if ( *(_BYTE *)(a1 + 137) )
    v2 = *(_DWORD *)(a1 + 28);
  else
    v2 = *(unsigned __int16 *)(a1 + 28);
  while ( v2 )
  {
LABEL_5:
    StringAddress = XmGetStringAddress(a1, *(_DWORD *)(a1 + 116), 6u);
    XmSetSourceValue(a1, (unsigned __int16 *)StringAddress);
    v5 = XmGetStringAddress(v4, 0, 7u);
    XmSetDestinationValue(a1, (unsigned __int16 *)v5);
    XmCompareOperands();
    --v2;
    if ( ((*(_DWORD *)(a1 + 16) & 0x40) != 0) != *(_BYTE *)(a1 + 141) )
      break;
  }
  if ( *(_BYTE *)(a1 + 139) )
  {
    if ( *(_BYTE *)(a1 + 137) )
      *(_DWORD *)(a1 + 28) = v2;
    else
      *(_WORD *)(a1 + 28) = v2;
  }
}
