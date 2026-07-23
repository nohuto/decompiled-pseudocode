/*
 * XREFs of _SbGetContextDetailsByGuid@8 @ 0x4B2B9A35
 * Callers:
 *     _SbUpdateSwitchContextBasedOnDll@12 @ 0x4B2B989E (_SbUpdateSwitchContextBasedOnDll@12.c)
 *     _SbpDetermineDllContext@8 @ 0x4B2B9AA4 (_SbpDetermineDllContext@8.c)
 * Callees:
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

int __usercall SbGetContextDetailsByGuid@<eax>(void *Buf1@<ecx>, _DWORD *a2@<edx>, int a3@<ebx>)
{
  const void *v4; // eax
  int v5; // esi
  int *v6; // ecx
  int v7; // ebx
  size_t v9; // [esp-8h] [ebp-1Ch]
  int *v11; // [esp+Ch] [ebp-8h]
  unsigned int v12; // [esp+10h] [ebp-4h]

  v4 = Buf1;
  v5 = 0;
  if ( a2 && Buf1 )
  {
    v6 = dword_4B2810C4;
    *a2 = 0;
    HIDWORD(v9) = a3;
    v7 = 0;
    v11 = dword_4B2810C4;
    v12 = 0;
    while ( 1 )
    {
      LODWORD(v9) = 16;
      if ( !memcmp(v4, v6, v9) )
        break;
      ++v7;
      v6 = v11 + 7;
      v12 += 28;
      v11 += 7;
      v4 = Buf1;
      if ( v12 >= 0x8C )
        return v5;
    }
    v5 = 1;
    *a2 = &SbSupportedOsList[7 * v7];
  }
  return v5;
}
