/*
 * XREFs of XmLodsOp @ 0x1404E1760
 * Callers:
 *     XmEmulateStream @ 0x1403948D8 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x140394490 (XmStoreResult.c)
 *     XmSetSourceValue @ 0x1403945D8 (XmSetSourceValue.c)
 *     XmGetStringAddress @ 0x1403BE08C (XmGetStringAddress.c)
 */

_WORD *__fastcall XmLodsOp(__int64 a1)
{
  int v2; // edi
  _WORD *result; // rax
  int *StringAddress; // rax
  __int64 v5; // rcx

  v2 = 1;
  if ( *(_BYTE *)(a1 + 139) )
  {
    if ( *(_BYTE *)(a1 + 137) )
    {
      v2 = *(_DWORD *)(a1 + 28);
      *(_DWORD *)(a1 + 28) = 0;
    }
    else
    {
      v2 = *(unsigned __int16 *)(a1 + 28);
      *(_WORD *)(a1 + 28) = 0;
    }
  }
  result = (_WORD *)(a1 + 24);
  for ( *(_QWORD *)(a1 + 88) = a1 + 24; v2; --v2 )
  {
    StringAddress = XmGetStringAddress(a1, *(_DWORD *)(a1 + 116), 6u);
    XmSetSourceValue(a1, (unsigned __int16 *)StringAddress);
    result = XmStoreResult(v5, *(_DWORD *)(a1 + 108));
  }
  return result;
}
