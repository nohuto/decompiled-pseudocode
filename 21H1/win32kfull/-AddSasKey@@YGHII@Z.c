/*
 * XREFs of ?AddSasKey@@YGHII@Z @ 0xEC4F4
 * Callers:
 *     __RegisterHotKey@20 @ 0xC5F06 (__RegisterHotKey@20.c)
 * Callees:
 *     <none>
 */

int __fastcall AddSasKey(int a1, struct tagSASKEY *a2)
{
  unsigned int i; // eax

  for ( i = 0; i < 2; ++i )
  {
    if ( !dword_273B00[2 * i] )
    {
      dword_273B00[2 * i] = a1;
      *(&gSasKeyList + 2 * i) = a2;
      return 1;
    }
  }
  return 0;
}
