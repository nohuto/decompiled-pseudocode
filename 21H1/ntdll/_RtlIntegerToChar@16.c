/*
 * XREFs of _RtlIntegerToChar@16 @ 0x4B2D2AE0
 * Callers:
 *     _RtlIntegerToUnicodeString@12 @ 0x4B2D2A70 (_RtlIntegerToUnicodeString@12.c)
 * Callees:
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 */

int __stdcall RtlIntegerToChar(unsigned int a1, int a2, int a3, char *a4)
{
  unsigned int v4; // ebx
  int v5; // ecx
  int v6; // esi
  _BYTE *v7; // edx
  int v9; // ebx
  signed int v10; // ebx
  int v11; // edi
  char *v12; // eax
  bool v13; // cc
  int v15; // eax
  int v16; // esi
  int v17; // [esp-4h] [ebp-60h]
  _BYTE *v18; // [esp+14h] [ebp-48h]
  char *v19; // [esp+18h] [ebp-44h]
  _BYTE v20[7]; // [esp+3Dh] [ebp-1Fh] BYREF
  CPPEH_RECORD ms_exc; // [esp+44h] [ebp-18h]

  v19 = a4;
  v4 = a2;
  switch ( a2 )
  {
    case 0:
      v4 = 10;
      a2 = 10;
      goto LABEL_5;
    case 2:
      v5 = 1;
      goto LABEL_20;
    case 8:
      v17 = 3;
LABEL_19:
      v5 = v17;
LABEL_20:
      v6 = (1 << v5) - 1;
      goto LABEL_6;
  }
  if ( a2 != 10 )
  {
    if ( a2 != 16 )
      return -1073741811;
    v17 = 4;
    goto LABEL_19;
  }
LABEL_5:
  v5 = 0;
  v6 = 0;
LABEL_6:
  v7 = v20;
  v18 = v20;
  do
  {
    if ( v5 )
    {
      v9 = a1 & v6;
      a1 >>= v5;
    }
    else
    {
      v15 = a1 / v4;
      v9 = a1 % v4;
      a1 = v15;
      v7 = v18;
    }
    v18 = --v7;
    *v7 = RtlpIntegerChars[v9];
    v4 = a2;
  }
  while ( a1 );
  v10 = v20 - v7;
  v11 = a3;
  v12 = a4;
  if ( a3 >= 0 )
    goto LABEL_11;
  v11 = -a3;
  v13 = v10 <= -a3;
  if ( v10 < -a3 )
  {
    v16 = v11 - v10;
    memset(a4, 48, v11 - v10);
    v11 = v10;
    v12 = &a4[v16];
    v19 = &a4[v16];
    v7 = v18;
LABEL_11:
    v13 = v10 <= v11;
  }
  if ( !v13 )
    return -2147483643;
  ms_exc.registration.TryLevel = 0;
  memcpy(v12, v7, v10);
  if ( v10 < v11 )
    v19[v10] = 0;
  ms_exc.registration.TryLevel = -2;
  return 0;
}
