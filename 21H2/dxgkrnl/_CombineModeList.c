/*
 * XREFs of _CombineModeList @ 0x1C02F8944
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1C01D2768 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C01D31C8 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     _UpgradeDispModeFlags @ 0x1C01DE1C4 (_UpgradeDispModeFlags.c)
 */

__int64 __fastcall CombineModeList(unsigned int *a1, const void **a2, unsigned int a3, unsigned int *a4, char a5)
{
  unsigned int v5; // r14d
  unsigned int v6; // r12d
  unsigned int *v7; // rax
  unsigned int v8; // r8d
  __int64 v11; // r9
  unsigned int v12; // ebx
  unsigned int v13; // ebp
  unsigned int *v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // r8d
  unsigned int v19; // esi
  unsigned int v20; // r12d
  __int64 v21; // rdi
  unsigned int v22; // edx
  unsigned int v23; // ecx
  char *v24; // rcx
  __int64 v25; // rdx
  _DWORD *v26; // rdi
  char v27; // dl
  unsigned int i; // ebp
  __int64 v29; // rsi
  int v30; // ecx
  unsigned __int64 v31; // rax
  void *v32; // rsi
  unsigned int v34; // r9d
  _DWORD *v35; // r8
  __int64 v36; // r10
  char *v37; // rcx
  __int64 v38; // rdx
  int v39; // [rsp+50h] [rbp-58h]
  unsigned int v40; // [rsp+54h] [rbp-54h]
  unsigned int v41; // [rsp+58h] [rbp-50h]
  __int64 v42; // [rsp+60h] [rbp-48h]

  v40 = -1;
  v5 = 0;
  v6 = a3;
  v7 = a4;
  v8 = -1;
  v39 = -1;
  if ( v6 )
  {
    v11 = *a1;
    v12 = *a1;
    v41 = *a1;
    if ( a5 )
    {
      v13 = 0;
      v14 = v7;
      v15 = v6;
      do
      {
        v16 = v5;
        v17 = v13;
        v5 = *v14;
        v13 = v14[1];
        v14 += 11;
        if ( v5 <= v16 )
          v5 = v16;
        if ( v13 <= v17 )
          v13 = v17;
        --v15;
      }
      while ( v15 );
      v18 = -1;
      v19 = 0;
      v12 = 0;
      if ( (_DWORD)v11 )
      {
        v20 = -1;
        do
        {
          v21 = (__int64)*a2 + 44 * v19;
          if ( v20 == -1 || (v22 = *(_DWORD *)v21, *(_DWORD *)v21 > v20) )
          {
            v20 = *(_DWORD *)v21;
            v22 = *(_DWORD *)v21;
          }
          if ( v18 == -1 || (v23 = *(_DWORD *)(v21 + 4), v23 > v18) )
          {
            v23 = *(_DWORD *)(v21 + 4);
            v39 = v23;
          }
          if ( (*(_DWORD *)(v21 + 40) & 0x40) != 0 || v22 <= v5 && v23 <= v13 )
          {
            if ( v19 != v12 )
            {
              if ( v19 <= v12 )
              {
                WdLogSingleEntry1(1LL, 2805LL);
                DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i > j", 2805LL, 0LL, 0LL, 0LL, 0LL);
              }
              v24 = (char *)*a2;
              v25 = 44LL * v12;
              *(_OWORD *)&v24[v25] = *(_OWORD *)v21;
              *(_OWORD *)&v24[v25 + 16] = *(_OWORD *)(v21 + 16);
              *(_QWORD *)&v24[v25 + 32] = *(_QWORD *)(v21 + 32);
              *(_DWORD *)&v24[v25 + 40] = *(_DWORD *)(v21 + 40);
            }
            ++v12;
          }
          v18 = v39;
          ++v19;
        }
        while ( v19 < *a1 );
        v40 = v20;
        v6 = a3;
      }
      v8 = v39;
      v7 = a4;
      *a1 = v12;
    }
    if ( v6 )
    {
      v26 = v7 + 8;
      v42 = v6;
      do
      {
        v27 = 0;
        if ( (v26[2] & 0x40) != 0 || *(v26 - 8) <= v40 && *(v26 - 7) <= v8 )
        {
          for ( i = 0; i < *a1; ++i )
          {
            v29 = (__int64)*a2 + 44 * i;
            if ( *(v26 - 8) == *(_DWORD *)v29 && *(v26 - 7) == *(_DWORD *)(v29 + 4) )
            {
              v11 = (int)*(v26 - 6);
              if ( *((_QWORD *)v26 - 3) == *(_QWORD *)(v29 + 8)
                && *(v26 - 1) == *(_DWORD *)(v29 + 28)
                && *v26 == *(_DWORD *)(v29 + 32)
                && *(v26 - 2) == *(_DWORD *)(v29 + 24)
                && ((*((_BYTE *)v26 + 8) ^ *(_BYTE *)(v29 + 40)) & 0x10) == 0 )
              {
                if ( *(v26 - 4) != *(_DWORD *)(v29 + 16) || *(v26 - 3) != *(_DWORD *)(v29 + 20) )
                {
                  WdLogSingleEntry4(
                    7LL,
                    (unsigned int)*(v26 - 8),
                    (unsigned int)*(v26 - 7),
                    v11,
                    (unsigned int)*(v26 - 5));
                  WdLogSingleEntry4(
                    7LL,
                    (unsigned int)*(v26 - 4),
                    (unsigned int)*(v26 - 3),
                    *(unsigned int *)(v29 + 16),
                    *(unsigned int *)(v29 + 20));
                }
                UpgradeDispModeFlags(v29, (__int64)(v26 - 8));
                v27 = 1;
              }
            }
          }
        }
        else
        {
          v27 = 1;
        }
        v8 = v39;
        v30 = v26[2] & 0x1FF;
        if ( !v27 )
        {
          ++v12;
          v30 |= 0x200u;
        }
        v26[2] = v30;
        v26 += 11;
        --v42;
      }
      while ( v42 );
      v6 = a3;
    }
    if ( v12 > v41 )
    {
      v31 = 44LL * v12;
      if ( !is_mul_ok(v12, 0x2CuLL) )
        v31 = -1LL;
      v32 = (void *)operator new[](v31, 0x4B677844u, 256LL, v11);
      if ( !v32 )
      {
        WdLogSingleEntry1(6LL, v12);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate memory for the combined mode list for %I64d of D3DKMT_DISPLAYMODE.",
          v12,
          0LL,
          0LL,
          0LL,
          0LL);
        return 3221225495LL;
      }
      if ( *a2 )
      {
        memmove(v32, *a2, 44LL * *a1);
        operator delete[]((void *)*a2);
      }
      *a2 = v32;
    }
    v34 = *a1;
    if ( *a1 < v12 )
    {
      if ( v6 )
      {
        v35 = a4 + 10;
        v36 = v6;
        do
        {
          if ( *v35 >= 0x200u )
          {
            *v35 &= 0x1FFu;
            v37 = (char *)*a2;
            v38 = 44LL * v34++;
            *(_OWORD *)&v37[v38] = *(_OWORD *)(v35 - 10);
            *(_OWORD *)&v37[v38 + 16] = *(_OWORD *)(v35 - 6);
            *(_QWORD *)&v37[v38 + 32] = *((_QWORD *)v35 - 1);
            *(_DWORD *)&v37[v38 + 40] = *v35;
          }
          v35 += 11;
          --v36;
        }
        while ( v36 );
      }
      if ( v12 != v34 )
      {
        WdLogSingleEntry1(1LL, 2944LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"TotalModes == j", 2944LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    *a1 = v12;
  }
  return 0LL;
}
