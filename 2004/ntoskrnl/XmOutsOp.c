/*
 * XREFs of XmOutsOp @ 0x1404E12E0
 * Callers:
 *     XmEmulateStream @ 0x1403948D8 (XmEmulateStream.c)
 * Callees:
 *     XmSetSourceValue @ 0x1403945D8 (XmSetSourceValue.c)
 *     x86BiosWriteIoSpace @ 0x140396CB0 (x86BiosWriteIoSpace.c)
 *     XmGetStringAddress @ 0x1403BE08C (XmGetStringAddress.c)
 */

char __fastcall XmOutsOp(__int64 a1)
{
  char result; // al
  int v3; // edi
  __int16 i; // si
  int *StringAddress; // rax

  result = 0;
  v3 = 1;
  if ( *(_BYTE *)(a1 + 139) )
  {
    if ( *(_BYTE *)(a1 + 137) )
    {
      v3 = *(_DWORD *)(a1 + 28);
      *(_DWORD *)(a1 + 28) = 0;
    }
    else
    {
      v3 = *(unsigned __int16 *)(a1 + 28);
      *(_WORD *)(a1 + 28) = 0;
    }
  }
  for ( i = *(_WORD *)(a1 + 108); v3; --v3 )
  {
    StringAddress = XmGetStringAddress(a1, *(_DWORD *)(a1 + 116), 6u);
    XmSetSourceValue(a1, (unsigned __int16 *)StringAddress);
    result = x86BiosWriteIoSpace(*(unsigned int *)(a1 + 120), i, *(_DWORD *)(a1 + 108));
  }
  return result;
}
