/*
 * XREFs of DrvGetDisplayDriverNames @ 0x1C00156E0
 * Callers:
 *     DrvBuildDevmodeList @ 0x1C000F520 (DrvBuildDevmodeList.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0011E88 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     DrvEscapeRemoteDrivers @ 0x1C00C9B60 (DrvEscapeRemoteDrivers.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003C5B0 (PALLOCMEM2.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 */

unsigned int *__fastcall DrvGetDisplayDriverNames(__int64 a1)
{
  _WORD *v1; // rax
  unsigned int *v3; // rdi
  int v4; // esi
  unsigned int v5; // r14d
  __int64 v6; // rax
  _WORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v12; // rax

  v1 = *(_WORD **)(a1 + 200);
  v3 = 0LL;
  v4 = 0;
  if ( v1 )
  {
    v5 = 0;
    while ( *v1 )
    {
      ++v5;
      do
      {
        ++v1;
        v4 += 2;
      }
      while ( *v1 );
      ++v1;
      v4 += 2;
    }
    v6 = PALLOCMEM2(v4 + 24 * v5 + 26);
    v3 = (unsigned int *)v6;
    if ( v6 )
    {
      v7 = (_WORD *)(v6 + 24LL * (v5 + 1));
      memmove(v7, *(const void **)(a1 + 200), (unsigned int)(v4 + 2));
      *v3 = 0;
      while ( *v7 )
      {
        *(_QWORD *)&v3[4 * *v3 + 4] = v7;
        v10 = *v3;
        if ( *v3 >= v5 )
        {
          v12 = WdLogNewEntry5_WdAssertion(v9, v8);
          WdLogEvent5_WdAssertion(v12);
          return v3;
        }
        v9 = 2LL * v10;
        *(_QWORD *)&v3[4 * v10 + 2] = *(_QWORD *)(a1 + 136);
        ++*v3;
        while ( *v7 )
          ++v7;
        ++v7;
      }
    }
  }
  return v3;
}
