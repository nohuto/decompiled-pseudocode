/*
 * XREFs of BusApiBuildProcessFunctionUnit @ 0x1C002B6E4
 * Callers:
 *     USBParseProcessUnit @ 0x1C0030A60 (USBParseProcessUnit.c)
 * Callees:
 *     BusApiBuildFunctionUnit @ 0x1C002B504 (BusApiBuildFunctionUnit.c)
 */

__int64 __fastcall BusApiBuildProcessFunctionUnit(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        int *a8,
        const WCHAR *a9,
        int a10,
        __int64 a11,
        unsigned int a12,
        __int64 a13)
{
  unsigned int v13; // edi
  __int64 v14; // rbx
  int v16; // r10d
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // r8

  v13 = a12;
  v14 = 0LL;
  a11 = 0LL;
  v16 = BusApiBuildFunctionUnit(a1, a2, 4, a5, a6, a7, a8, a9, 4 * a12, &a11);
  if ( v16 >= 0 )
  {
    v17 = a11;
    if ( a11 )
    {
      *(_DWORD *)(a11 + 64) = a4;
      *(_DWORD *)(v17 + 76) = a10;
      *(_DWORD *)(v17 + 80) = v13;
      if ( v13 )
      {
        v18 = a13;
        v19 = v13;
        *(_QWORD *)(v17 + 88) = v17 + 12 * (a7 + 8LL);
        do
        {
          *(_DWORD *)(v14 + *(_QWORD *)(v17 + 88)) = *(_DWORD *)(v14 + v18);
          v14 += 4LL;
          --v19;
        }
        while ( v19 );
      }
    }
  }
  return (unsigned int)v16;
}
