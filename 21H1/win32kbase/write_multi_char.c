/*
 * XREFs of write_multi_char @ 0x1C00CD0F0
 * Callers:
 *     _output_l @ 0x1C00CC864 (_output_l.c)
 * Callees:
 *     write_char @ 0x1C00CD0A0 (write_char.c)
 */

int __fastcall write_multi_char(char a1, int a2, FILE *a3, _DWORD *a4)
{
  int v6; // ebx
  int result; // eax

  if ( a2 > 0 )
  {
    v6 = a2;
    do
    {
      --v6;
      result = write_char(a1, a3, a4);
    }
    while ( *a4 != -1 && v6 > 0 );
  }
  return result;
}
