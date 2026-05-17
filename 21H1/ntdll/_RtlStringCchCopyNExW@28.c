/*
 * XREFs of _RtlStringCchCopyNExW@28 @ 0x4B3382E0
 * Callers:
 *     _punycode_encode@24 @ 0x4B365B90 (_punycode_encode@24.c)
 * Callees:
 *     RtlStringCopyWorkerW_2 @ 0x4B338366 (RtlStringCopyWorkerW_2.c)
 */

int __fastcall RtlStringCchCopyNExW(_WORD *a1, int a2, _WORD *a3, int a4, _DWORD *a5, int a6, int a7)
{
  _WORD *v7; // edi
  int v8; // esi
  int v9; // eax
  int v11; // [esp+8h] [ebp-4h] BYREF

  v7 = a1;
  v8 = 0;
  if ( a2 <= 0 )
    v8 = -1073741811;
  if ( v8 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v8 = 0;
    if ( a2 )
    {
      v11 = 0;
      v9 = RtlStringCopyWorkerW_2(&v11, a3, 4);
      v8 = v9;
      v7 += v11;
      if ( v9 < 0 && v9 != -2147483643 )
        return v8;
    }
    else if ( *a3 )
    {
      if ( !a1 )
        return -1073741811;
      v8 = -2147483643;
    }
    if ( a5 )
      *a5 = v7;
  }
  return v8;
}
