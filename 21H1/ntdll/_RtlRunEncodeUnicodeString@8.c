/*
 * XREFs of _RtlRunEncodeUnicodeString@8 @ 0x4B347200
 * Callers:
 *     <none>
 * Callees:
 *     _NtQuerySystemTime@4 @ 0x4B2F2F20 (_NtQuerySystemTime@4.c)
 */

unsigned int __stdcall RtlRunEncodeUnicodeString(char *a1, unsigned __int16 *a2)
{
  unsigned int v2; // ebx
  char v3; // cl
  char v4; // al
  unsigned int v5; // ecx
  unsigned int result; // eax
  unsigned __int16 v7; // di
  LARGE_INTEGER SystemTime; // [esp+8h] [ebp-8h] BYREF

  v2 = 1;
  v3 = *a1;
  if ( !*a1 )
  {
    NtQuerySystemTime(&SystemTime);
    v4 = BYTE1(SystemTime.LowPart);
    v5 = 1;
    *a1 = BYTE1(SystemTime.LowPart);
    if ( !v4 )
    {
      do
      {
        if ( v5 >= 8 )
          break;
        *a1 |= *((_BYTE *)&SystemTime.LowPart + v5++);
      }
      while ( !*a1 );
    }
    v3 = *a1;
    if ( !*a1 )
    {
      *a1 = 1;
      v3 = 1;
    }
  }
  result = *a2;
  v7 = result;
  if ( (_WORD)result )
  {
    result = *((_DWORD *)a2 + 1);
    *(_BYTE *)result ^= v3 | 0x43;
    v7 = *a2;
  }
  if ( v7 > 1u )
  {
    do
    {
      *(_BYTE *)(*((_DWORD *)a2 + 1) + v2) ^= *a1 ^ *(_BYTE *)(*((_DWORD *)a2 + 1) + v2 - 1);
      ++v2;
      result = *a2;
    }
    while ( v2 < result );
  }
  return result;
}
