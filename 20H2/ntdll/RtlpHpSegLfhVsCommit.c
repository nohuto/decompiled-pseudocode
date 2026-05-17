/*
 * XREFs of RtlpHpSegLfhVsCommit @ 0x180023040
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegPageRangeCommit @ 0x180023180 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18010EF28 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpHpSegLfhVsCommit(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  char v6; // r10
  __int64 v7; // r9
  char v8; // r8
  __int64 DescriptorValidateSafe; // rax
  char v10; // cl
  char v12; // dl

  if ( (RtlpHpAppCompatFlags & 1) != 0 )
  {
    DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe();
    v6 = *(_BYTE *)(a1 + 8);
    v8 = v6;
  }
  else
  {
    v6 = *(_BYTE *)(a1 + 8);
    v7 = a2 & *(_QWORD *)a1;
    v8 = v6;
    if ( (a1 ^ v7 ^ (unsigned __int64)RtlpHpHeapGlobals ^ *(_QWORD *)(v7 + 0x10)) == 0xA2E64EADA2E64EADuLL )
      DescriptorValidateSafe = v7 + 32 * ((unsigned __int64)(unsigned int)(a2 - v7) >> v6);
    else
      DescriptorValidateSafe = 0LL;
  }
  if ( !DescriptorValidateSafe )
    goto LABEL_13;
  v10 = *(_BYTE *)(DescriptorValidateSafe + 24);
  if ( (v10 & 1) == 0 )
    goto LABEL_13;
  if ( (v10 & 2) == 0 )
  {
    DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 31);
    v12 = *(_BYTE *)(DescriptorValidateSafe + 24);
    if ( (v12 & 3) == 3 )
    {
      v6 = v8;
      if ( (v12 & 0xCu) >= 8 )
        return RtlpHpSegPageRangeCommit(
                 a1,
                 DescriptorValidateSafe,
                 ((_DWORD)a2
                - (unsigned int)((DescriptorValidateSafe - (DescriptorValidateSafe & *(_QWORD *)a1)) >> 5 << v6)
                - ((unsigned int)DescriptorValidateSafe & *(_DWORD *)a1)) >> 12,
                 a3 >> 12,
                 0,
                 0LL);
    }
LABEL_13:
    v6 = v8;
LABEL_16:
    DescriptorValidateSafe = 0LL;
    return RtlpHpSegPageRangeCommit(
             a1,
             DescriptorValidateSafe,
             ((_DWORD)a2
            - (unsigned int)((DescriptorValidateSafe - (DescriptorValidateSafe & *(_QWORD *)a1)) >> 5 << v6)
            - ((unsigned int)DescriptorValidateSafe & *(_DWORD *)a1)) >> 12,
             a3 >> 12,
             0,
             0LL);
  }
  if ( (v10 & 0xCu) < 8 )
  {
    v8 = v6;
    if ( (((1 << v6) - 1) & a2) != 0 )
      goto LABEL_16;
  }
  v6 = v8;
  return RtlpHpSegPageRangeCommit(
           a1,
           DescriptorValidateSafe,
           ((_DWORD)a2
          - (unsigned int)((DescriptorValidateSafe - (DescriptorValidateSafe & *(_QWORD *)a1)) >> 5 << v6)
          - ((unsigned int)DescriptorValidateSafe & *(_DWORD *)a1)) >> 12,
           a3 >> 12,
           0,
           0LL);
}
