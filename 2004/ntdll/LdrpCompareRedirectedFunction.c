/*
 * XREFs of LdrpCompareRedirectedFunction @ 0x1800D510C
 * Callers:
 *     LdrpAddRedirectedFunction @ 0x1800D4B44 (LdrpAddRedirectedFunction.c)
 *     LdrpCheckRedirection @ 0x1800D4F30 (LdrpCheckRedirection.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x180016090 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall LdrpCompareRedirectedFunction(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char *v5; // rax
  __int64 v6; // rcx
  char v7; // r9

  result = (unsigned int)(*(_DWORD *)(a2 + 24) - *(_DWORD *)a1);
  if ( !(_DWORD)result )
  {
    result = (unsigned int)(*(_DWORD *)(a2 + 28) - *(_DWORD *)(a1 + 4));
    if ( !(_DWORD)result )
    {
      v5 = *(char **)(a2 + 32);
      v6 = *(_QWORD *)(a1 + 8) - (_QWORD)v5;
      while ( 1 )
      {
        v7 = *v5;
        if ( *v5 != v5[v6] )
          break;
        ++v5;
        if ( !v7 )
        {
          result = 0LL;
          goto LABEL_8;
        }
      }
      result = (unsigned __int8)*v5 < (unsigned __int8)v5[v6] ? -1 : 1;
LABEL_8:
      if ( !(_DWORD)result )
        return RtlCompareUnicodeString((unsigned __int16 *)(a2 + 40), (unsigned __int16 *)(a1 + 16), 1);
    }
  }
  return result;
}
