/*
 * XREFs of DrvGetDisplayDriverNames @ 0x1C00B8E90
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00B5FC4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     DrvBuildDevmodeList @ 0x1C00BB5B0 (DrvBuildDevmodeList.c)
 *     DrvEscapeRemoteDrivers @ 0x1C00CABA0 (DrvEscapeRemoteDrivers.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0080D68 (PALLOCMEM2.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 */

unsigned int *__fastcall DrvGetDisplayDriverNames(__int64 a1)
{
  _WORD *v1; // rax
  unsigned int *v3; // rdi
  int v4; // esi
  unsigned int v5; // r14d
  unsigned int *v6; // rax
  unsigned int *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // eax
  __int64 v13; // rax

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
    v6 = (unsigned int *)PALLOCMEM2(v4 + 24 * v5 + 26, 0x73726447u, 0);
    v3 = v6;
    if ( v6 )
    {
      v7 = &v6[6 * v5 + 6];
      memmove(v7, *(const void **)(a1 + 200), (unsigned int)(v4 + 2));
      *v3 = 0;
      while ( *(_WORD *)v7 )
      {
        *(_QWORD *)&v3[4 * *v3 + 4] = v7;
        v11 = *v3;
        if ( *v3 >= v5 )
        {
          v13 = WdLogNewEntry5_WdAssertion(v9, v8, v10);
          WdLogEvent5_WdAssertion(v13);
          return v3;
        }
        v9 = 2LL * v11;
        *(_QWORD *)&v3[4 * v11 + 2] = *(_QWORD *)(a1 + 136);
        ++*v3;
        while ( *(_WORD *)v7 )
          v7 = (unsigned int *)((char *)v7 + 2);
        v7 = (unsigned int *)((char *)v7 + 2);
      }
    }
  }
  return v3;
}
