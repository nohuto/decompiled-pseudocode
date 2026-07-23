/*
 * XREFs of CmpKeySecurityDecrementReferenceCount @ 0x1403F090C
 * Callers:
 *     CmpDereferenceSecurityNode @ 0x1403F086C (CmpDereferenceSecurityNode.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140661B1C (CmpSetSecurityDescriptorInfo.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

bool __fastcall CmpKeySecurityDecrementReferenceCount(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  int v3; // eax
  int v4; // eax

  v3 = *(_DWORD *)(a1 + 12);
  if ( !v3 )
    KeBugCheckEx(0x51u, 4uLL, 7uLL, a2, a3);
  v4 = v3 - 1;
  *(_DWORD *)(a1 + 12) = v4;
  return v4 == 0;
}
