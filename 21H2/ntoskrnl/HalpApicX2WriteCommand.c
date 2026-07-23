/*
 * XREFs of HalpApicX2WriteCommand @ 0x1404D1DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HalpApicX2WriteCommand(unsigned int a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  unsigned int v3; // ecx
  unsigned __int64 result; // rax

  v2 = a1;
  if ( (a2 & 0xC0000) == 0x40000 )
  {
    v3 = 2111;
    a2 = (unsigned __int8)a2;
  }
  else
  {
    v3 = 2096;
    a2 = (unsigned int)a2 | (unsigned __int64)(v2 << 32);
  }
  result = a2;
  __writemsr(v3, a2);
  return result;
}
