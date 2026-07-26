/*
 * XREFs of ndisValidateAndConvertWcharStringToUnicodeString @ 0x1C00F8878
 * Callers:
 *     ndisValidateNdisVarDataDesc32InputString @ 0x1C00F86CC (ndisValidateNdisVarDataDesc32InputString.c)
 *     ndisValidateNdisVarDataDescInputString @ 0x1C00F8754 (ndisValidateNdisVarDataDescInputString.c)
 *     ndisValidateNdisOffsetAndLengthInputString @ 0x1C0117D68 (ndisValidateNdisOffsetAndLengthInputString.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisValidateAndConvertWcharStringToUnicodeString(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        __int64 a5)
{
  __int64 v6; // rax
  __int64 v8; // rcx
  __int64 v9; // rax

  if ( (a2 & 1) == 0 )
  {
    if ( !a2 )
    {
      *(_QWORD *)(a5 + 8) = 0LL;
      LOWORD(a2) = 0;
      *(_WORD *)(a5 + 2) = 0;
LABEL_7:
      *(_WORD *)a5 = a2;
      return 1;
    }
    if ( a2 <= 0x1000 )
    {
      v6 = (a2 >> 1) - 1;
      if ( !a4 )
        goto LABEL_5;
      v8 = (unsigned int)v6;
      if ( !*(_WORD *)(a1 + 2 * v6) )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( *(_WORD *)(a1 + 2 * v9) );
        if ( v9 == v8 )
        {
LABEL_5:
          *(_WORD *)(a5 + 2) = a2;
          *(_QWORD *)(a5 + 8) = a1;
          if ( a4 )
            LOWORD(a2) = a2 - 2;
          goto LABEL_7;
        }
      }
    }
  }
  return 0;
}
