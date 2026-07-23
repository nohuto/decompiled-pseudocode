/*
 * XREFs of HalpConsumeLowMemory @ 0x140A65484
 * Callers:
 *     HalpMmInitSystem @ 0x1409A1500 (HalpMmInitSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall HalpConsumeLowMemory(__int64 a1)
{
  __int64 *v1; // r9
  __int64 *v2; // r8
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r11
  char *v7; // r10
  __int64 **v8; // rax

  v1 = (__int64 *)(a1 + 32);
  v2 = *(__int64 **)(a1 + 32);
  if ( v2 != (__int64 *)(a1 + 32) )
  {
    do
    {
      v3 = *((int *)v2 + 4);
      if ( (unsigned int)v3 > 0x23 || (v4 = 0xBC4400048LL, !_bittest64(&v4, v3)) )
      {
        v5 = v2[3];
        if ( v5 < 0x100 )
        {
          v6 = v5 + v2[4];
          if ( v6 > 0x100 )
          {
            v7 = (char *)HalpAllocationDescriptorArray + 40 * (unsigned int)HalpUsedAllocDescriptors++;
            *((_QWORD *)v7 + 3) = 256LL;
            *((_QWORD *)v7 + 4) = v6 - 256;
            *((_DWORD *)v7 + 4) = *((_DWORD *)v2 + 4);
            v8 = (__int64 **)v2[1];
            if ( *v8 != v2 )
              __fastfail(3u);
            *((_QWORD *)v7 + 1) = v8;
            *(_QWORD *)v7 = v2;
            *v8 = (__int64 *)v7;
            v2[1] = (__int64)v7;
            v2[4] = 256 - v2[3];
          }
          *((_DWORD *)v2 + 4) = 26;
        }
      }
      v2 = (__int64 *)*v2;
    }
    while ( v2 != v1 );
  }
}
