/*
 * XREFs of ExpPoolFlagsToPoolType @ 0x1409B5030
 * Callers:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     ExAllocatePoolMm @ 0x140346100 (ExAllocatePoolMm.c)
 *     ExAllocatePool2 @ 0x1409B51B0 (ExAllocatePool2.c)
 *     ExAllocatePool3 @ 0x1409B5270 (ExAllocatePool3.c)
 *     VerifierExAllocatePool2 @ 0x1409D59E0 (VerifierExAllocatePool2.c)
 *     VerifierExAllocatePool3 @ 0x1409D5B10 (VerifierExAllocatePool3.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpPoolFlagsToPoolType(__int64 a1, int a2, int *a3, _BYTE *a4, _BYTE *a5)
{
  int v5; // r10d
  __int64 v7; // rax
  int v8; // edx
  int v9; // r9d
  int v11; // edx

  v5 = 0;
  *a3 = 0;
  *a4 = 0;
  *a5 = 0;
  if ( (a1 & 0xFFFFF800) != 0 || (a1 & 0x10) != 0 && !a2 )
    return 3221225485LL;
  v7 = a1 & 0x1C0;
  if ( v7 == 64 )
  {
    v5 = 512;
  }
  else if ( v7 != 128 )
  {
    if ( v7 != 256 )
      return 3221225485LL;
    v5 = -2147483647;
    if ( (a1 & 0x10) == 0 )
      v5 = 1;
  }
  v8 = v5 | 0x20;
  if ( (a1 & 4) == 0 )
    v8 = v5;
  v9 = v8 | 0x400;
  if ( (a1 & 2) != 0 )
    v9 = v8;
  if ( (a1 & 0x100000629LL) != 0 )
  {
    v11 = v9 | 4;
    if ( (a1 & 8) == 0 )
      v11 = v9;
    v9 = v11;
    if ( (a1 & 0x200) != 0 )
      v9 = v11 | 0x80;
    if ( (a1 & 0x400) != 0 )
      v9 |= 0x40u;
    if ( (a1 & 1) != 0 )
    {
      *a4 = 1;
      if ( (a1 & 0x20) == 0 )
        v9 |= 8u;
    }
    else if ( (a1 & 0x20) != 0 )
    {
      v9 |= 0x10u;
    }
    if ( (a1 & 0x100000000LL) != 0 )
      *a5 = 1;
  }
  *a3 = v9;
  return 0LL;
}
