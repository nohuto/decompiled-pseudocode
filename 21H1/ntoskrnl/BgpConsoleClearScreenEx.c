/*
 * XREFs of BgpConsoleClearScreenEx @ 0x1409F3718
 * Callers:
 *     BgpConsoleInitialize @ 0x1409F1820 (BgpConsoleInitialize.c)
 *     BgpConsoleClearScreen @ 0x1409F36E0 (BgpConsoleClearScreen.c)
 * Callees:
 *     BgpClearScreen @ 0x1405BE6A4 (BgpClearScreen.c)
 */

__int64 BgpConsoleClearScreenEx()
{
  __int64 v0; // rax
  unsigned int v1; // ecx
  int v2; // r8d
  _DWORD *v3; // r10
  __int64 v4; // r9
  unsigned int v5; // eax
  __int64 v6; // r11
  __int64 i; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax

  v0 = qword_140CDB058;
  v1 = *(_DWORD *)(qword_140CDB058 + 16);
  *(_DWORD *)(qword_140CDB058 + 68) = 0;
  *(_DWORD *)(v0 + 72) = 0;
  v2 = BgpClearScreen(v1);
  if ( v2 >= 0 )
  {
    v3 = (_DWORD *)qword_140CDB058;
    v4 = 0LL;
    v5 = *(_DWORD *)(qword_140CDB058 + 4);
    v6 = 80LL;
    do
    {
      for ( i = 0LL; (unsigned int)i < v5; v5 = v3[1] )
      {
        v8 = 3 * (v4 + i);
        LOWORD(v3[v8 + 22]) = 32;
        v9 = v4 + i + 7;
        i = (unsigned int)(i + 1);
        v3[3 * v9] = v3[4];
        v3[v8 + 20] = v3[3];
      }
      v4 += 25LL;
      --v6;
    }
    while ( v6 );
  }
  return (unsigned int)v2;
}
