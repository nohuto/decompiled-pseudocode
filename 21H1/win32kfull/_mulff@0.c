/*
 * XREFs of _mulff@0 @ 0xEF0E3
 * Callers:
 *     _bCvtVts_FlToFl@16 @ 0xEECF0 (_bCvtVts_FlToFl@16.c)
 *     _mulff_c@8 @ 0xEF144 (_mulff_c@8.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 * Callees:
 *     <none>
 */

int __usercall mulff@<eax>(__int64 a1@<edx:eax>, int a2@<ecx>, int a3@<ebx>)
{
  unsigned int v3; // kr00_4
  unsigned int v4; // kr08_4

  if ( !__OFADD__(a2, a3) )
  {
    v3 = HIDWORD(a1);
    v4 = a1;
    a1 = SHIDWORD(a1) * (__int64)(int)a1;
    if ( !is_mul_ok(v3, v4) )
    {
      if ( a1 < 0 )
      {
        a1 = (-a1 << (byte_EF0DF[(unsigned __int64)-a1 >> 32 >> 28] & 0x1F)) + 0x80000000LL;
        if ( a1 < 0 )
          HIDWORD(a1) >>= 1;
        LODWORD(a1) = -HIDWORD(a1);
      }
      else
      {
        a1 = (a1 << (byte_EF0DF[(unsigned __int64)HIDWORD(a1) >> 28] & 0x1F)) + 0x80000000LL;
        if ( a1 < 0 )
          HIDWORD(a1) >>= 1;
        LODWORD(a1) = HIDWORD(a1);
      }
    }
  }
  return a1;
}
