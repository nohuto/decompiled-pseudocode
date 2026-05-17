/*
 * XREFs of __aulldvrm @ 0x4B2F6720
 * Callers:
 *     x64toa @ 0x4B2F6A85 (x64toa.c)
 *     x64tow @ 0x4B2F6C3E (x64tow.c)
 *     _wcstoxq @ 0x4B2F7C71 (_wcstoxq.c)
 *     strtoxq @ 0x4B2FB4FC (strtoxq.c)
 *     __output_l @ 0x4B2FB9B0 (__output_l.c)
 *     __woutput_l @ 0x4B2FC3A0 (__woutput_l.c)
 *     x64toa_s @ 0x4B2FEF5E (x64toa_s.c)
 *     x64tow_s @ 0x4B2FF23E (x64tow_s.c)
 *     __output_s @ 0x4B3008FA (__output_s.c)
 *     __woutput_s @ 0x4B301F94 (__woutput_s.c)
 * Callees:
 *     <none>
 */

unsigned int __stdcall _aulldvrm(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rtt
  unsigned int v3; // esi
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  unsigned __int64 v6; // rax
  char v7; // cf
  unsigned __int64 v8; // rax

  if ( HIDWORD(a2) )
  {
    v4 = HIDWORD(a2);
    v5 = a2;
    v6 = a1;
    do
    {
      v7 = v4 & 1;
      v4 >>= 1;
      v5 = (v5 >> 1) | (v7 << 31);
      v6 >>= 1;
    }
    while ( v4 );
    v3 = v6 / v5;
    v8 = v3 * (unsigned __int64)(unsigned int)a2;
    if ( __CFADD__(HIDWORD(a2) * v3, HIDWORD(v8)) || (HIDWORD(v8) = (a2 * (unsigned __int64)v3) >> 32, v8 > a1) )
      --v3;
  }
  else
  {
    LODWORD(v2) = a1;
    HIDWORD(v2) = HIDWORD(a1) % (unsigned int)a2;
    return v2 / (unsigned int)a2;
  }
  return v3;
}
