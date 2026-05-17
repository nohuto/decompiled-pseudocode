/*
 * XREFs of _SbGetContextDetailsByGuid@8 @ 0x4B2B9A35
 * Callers:
 *     _SbUpdateSwitchContextBasedOnDll@12 @ 0x4B2B989E (_SbUpdateSwitchContextBasedOnDll@12.c)
 *     _SbpDetermineDllContext@8 @ 0x4B2B9AA4 (_SbpDetermineDllContext@8.c)
 * Callees:
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

int __fastcall SbGetContextDetailsByGuid(void *Buf1, _DWORD *a2)
{
  const void *v3; // eax
  int v4; // esi
  int *v5; // ecx
  int v6; // ebx
  int *v9; // [esp+Ch] [ebp-8h]
  unsigned int v10; // [esp+10h] [ebp-4h]

  v3 = Buf1;
  v4 = 0;
  if ( a2 && Buf1 )
  {
    v5 = dword_4B2810C4;
    *a2 = 0;
    v6 = 0;
    v9 = dword_4B2810C4;
    v10 = 0;
    while ( memcmp(v3, v5, 0x10u) )
    {
      ++v6;
      v5 = v9 + 7;
      v10 += 28;
      v9 += 7;
      v3 = Buf1;
      if ( v10 >= 0x8C )
        return v4;
    }
    v4 = 1;
    *a2 = &SbSupportedOsList[7 * v6];
  }
  return v4;
}
