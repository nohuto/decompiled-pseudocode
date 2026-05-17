/*
 * XREFs of _LdrVerifyImageMatchesChecksum@16 @ 0x4B32F040
 * Callers:
 *     <none>
 * Callees:
 *     _LdrVerifyImageMatchesChecksumEx@8 @ 0x4B32F0B0 (_LdrVerifyImageMatchesChecksumEx@8.c)
 */

int __stdcall LdrVerifyImageMatchesChecksum(int a1, int a2, int a3, _WORD *a4)
{
  int v4; // ecx
  int result; // eax
  int v6; // [esp+8h] [ebp-28h] BYREF
  int v7; // [esp+Ch] [ebp-24h]
  int v8; // [esp+10h] [ebp-20h]
  int v9; // [esp+14h] [ebp-1Ch]
  __int16 v10; // [esp+2Ch] [ebp-4h]

  v4 = 0;
  v6 = 40;
  v7 = 0;
  if ( a2 )
  {
    v4 = 1;
    v8 = a2;
    v7 = 1;
    v9 = a3;
  }
  if ( a4 )
    v7 = v4 | 4;
  result = LdrVerifyImageMatchesChecksumEx(a1, &v6);
  if ( result >= 0 )
  {
    if ( a4 )
      *a4 = v10;
  }
  return result;
}
