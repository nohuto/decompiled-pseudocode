/*
 * XREFs of _InitWindowMsgTable@12 @ 0x292B82
 * Callers:
 *     _InitMessageTables@0 @ 0x292A20 (_InitMessageTables@0.c)
 * Callees:
 *     <none>
 */

int __fastcall InitWindowMsgTable(_DWORD *a1, unsigned int *a2, unsigned __int16 *a3)
{
  unsigned __int16 *v3; // edi
  unsigned int v4; // eax
  unsigned __int16 v6; // si
  unsigned __int16 *v7; // ecx
  int result; // eax

  v3 = a3;
  v4 = 0;
  *a2 = 0;
  v6 = *a3;
  if ( *a3 )
  {
    v7 = a3;
    do
    {
      v4 = v6;
      if ( v6 > *a2 )
        *a2 = v6;
      else
        v4 = *a2;
      v6 = *++v7;
    }
    while ( *v7 );
  }
  result = SharedAlloc((v4 >> 3) + 1);
  *a1 = result;
  if ( result )
  {
    while ( 1 )
    {
      result = *v3;
      if ( !(_WORD)result )
        break;
      ++v3;
      *(_BYTE *)(((unsigned __int16)result >> 3) + *a1) |= 1 << (result & 7);
    }
  }
  return result;
}
