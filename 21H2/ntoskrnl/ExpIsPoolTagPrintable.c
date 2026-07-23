/*
 * XREFs of ExpIsPoolTagPrintable @ 0x1409EE0D8
 * Callers:
 *     ExAllocatePoolSanityChecks @ 0x1409EDDE4 (ExAllocatePoolSanityChecks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpIsPoolTagPrintable(unsigned int a1)
{
  unsigned int v1; // r8d
  char *v2; // r9
  unsigned int v4; // ecx
  unsigned int v5; // edx
  char v7; // [rsp+10h] [rbp+10h] BYREF

  v1 = 0;
  v2 = &v7;
  v4 = 0;
  while ( 1 )
  {
    v5 = a1 >> v4;
    if ( (unsigned __int8)((a1 >> v4) - 97) <= 0x19u )
      LOBYTE(v5) = v5 - 32;
    if ( (unsigned __int8)(v5 - 48) <= 9u || (unsigned __int8)(v5 - 65) <= 0x19u )
      break;
    v4 += 8;
    ++v2;
    if ( v4 >= 0x20 )
      return v1;
  }
  return 1;
}
