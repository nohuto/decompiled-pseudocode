/*
 * XREFs of _CombineModeList @ 0x1C025DDDC
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C01582AC (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C0158A94 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     _UpgradeDispModeFlags @ 0x1C025E20C (_UpgradeDispModeFlags.c)
 */

__int64 __fastcall CombineModeList(unsigned __int64 a1, __int64 a2, unsigned int a3, __int64 a4, char a5)
{
  __int64 v5; // rax
  unsigned int v6; // r12d
  void **v7; // r13
  unsigned int v8; // r8d
  unsigned int *v9; // r14
  unsigned int v10; // r9d
  unsigned int v11; // ebx
  unsigned int v12; // r15d
  unsigned int v13; // ebp
  __int64 v14; // r8
  unsigned int v15; // eax
  unsigned int v16; // r8d
  unsigned int v17; // esi
  unsigned int v18; // r12d
  unsigned int *v19; // rdi
  __int64 v20; // rax
  _DWORD *v21; // rdi
  unsigned int i; // ebp
  unsigned int *v23; // r15
  _DWORD *v24; // rsi
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  SIZE_T v29; // rax
  __int64 v30; // rdx
  PVOID v31; // rdi
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  unsigned int v36; // r9d
  _DWORD *v37; // r8
  __int64 v38; // r10
  __int64 v39; // rax
  int v40; // [rsp+20h] [rbp-58h]
  unsigned int v41; // [rsp+24h] [rbp-54h]
  unsigned int v42; // [rsp+28h] [rbp-50h]
  __int64 v43; // [rsp+30h] [rbp-48h]

  v41 = -1;
  v5 = a4;
  v6 = a3;
  v7 = (void **)a2;
  v8 = -1;
  v9 = (unsigned int *)a1;
  v40 = -1;
  if ( v6 )
  {
    v10 = *(_DWORD *)a1;
    v11 = *(_DWORD *)a1;
    v42 = *(_DWORD *)a1;
    if ( a5 )
    {
      v12 = 0;
      v13 = 0;
      a2 = v5;
      v14 = v6;
      do
      {
        v15 = v12;
        a1 = v13;
        v12 = *(_DWORD *)a2;
        v13 = *(_DWORD *)(a2 + 4);
        a2 += 44LL;
        if ( v12 <= v15 )
          v12 = v15;
        if ( v13 <= (unsigned int)a1 )
          v13 = a1;
        --v14;
      }
      while ( v14 );
      v16 = -1;
      v17 = 0;
      v11 = 0;
      if ( v10 )
      {
        v18 = -1;
        do
        {
          v19 = (unsigned int *)((char *)*v7 + 44 * v17);
          if ( v18 == -1 || (a2 = *v19, (unsigned int)a2 > v18) )
          {
            v18 = *v19;
            a2 = *v19;
          }
          if ( v16 == -1 || (a1 = v19[1], (unsigned int)a1 > v16) )
          {
            a1 = v19[1];
            v40 = v19[1];
          }
          if ( (v19[10] & 0x40) != 0 || (unsigned int)a2 <= v12 && (unsigned int)a1 <= v13 )
          {
            if ( v17 != v11 )
            {
              if ( v17 <= v11 )
              {
                v20 = WdLogNewEntry5_WdAssertion(a1, a2);
                *(_QWORD *)(v20 + 24) = 2702LL;
                WdLogEvent5_WdAssertion(v20);
              }
              a1 = (unsigned __int64)*v7;
              a2 = 44LL * v11;
              *(_OWORD *)(a2 + a1) = *(_OWORD *)v19;
              *(_OWORD *)(a2 + a1 + 16) = *((_OWORD *)v19 + 1);
              *(_QWORD *)(a2 + a1 + 32) = *((_QWORD *)v19 + 4);
              *(_DWORD *)(a2 + a1 + 40) = v19[10];
            }
            ++v11;
          }
          v16 = v40;
          ++v17;
        }
        while ( v17 < *v9 );
        v41 = v18;
        v6 = a3;
      }
      v8 = v40;
      v5 = a4;
      *v9 = v11;
    }
    if ( v6 )
    {
      v21 = (_DWORD *)(v5 + 32);
      v43 = v6;
      do
      {
        LOBYTE(a2) = 0;
        if ( (v21[2] & 0x40) != 0 || *(v21 - 8) <= v41 && *(v21 - 7) <= v8 )
        {
          for ( i = 0; i < *v9; ++i )
          {
            v23 = v21 - 8;
            v24 = (char *)*v7 + 44 * i;
            if ( *(v21 - 8) == *v24
              && v23[1] == v24[1]
              && *(v21 - 6) == v24[2]
              && *(v21 - 5) == v24[3]
              && *(v21 - 1) == v24[7]
              && *v21 == v24[8]
              && *(v21 - 2) == v24[6]
              && ((*((_BYTE *)v21 + 8) ^ *((_BYTE *)v24 + 40)) & 0x10) == 0 )
            {
              if ( *(v21 - 4) != v24[4] || *(v21 - 3) != v24[5] )
              {
                v25 = (_QWORD *)WdLogNewEntry5_WdDmmEvent((unsigned int)(v21[2] ^ v24[10]), a2);
                v25[3] = *v23;
                v25[4] = v23[1];
                v25[5] = (int)*(v21 - 6);
                v25[6] = (unsigned int)*(v21 - 5);
                WdLogEvent5_WdDmmEvent(v25);
                v28 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v27, v26);
                v28[3] = (unsigned int)*(v21 - 4);
                v28[4] = (unsigned int)*(v21 - 3);
                v28[5] = (unsigned int)v24[4];
                v28[6] = (unsigned int)v24[5];
                WdLogEvent5_WdDmmEvent(v28);
              }
              UpgradeDispModeFlags(v24, v21 - 8);
              LOBYTE(a2) = 1;
            }
          }
        }
        else
        {
          LOBYTE(a2) = 1;
        }
        v8 = v40;
        a1 = (unsigned __int8)v21[2];
        if ( !(_BYTE)a2 )
        {
          ++v11;
          a1 = (unsigned int)a1 | 0x100;
        }
        v21[2] = a1;
        v21 += 11;
        --v43;
      }
      while ( v43 );
      v6 = a3;
    }
    if ( v11 > v42 )
    {
      v29 = 44LL * v11;
      if ( !is_mul_ok(v11, 0x2CuLL) )
        v29 = -1LL;
      v31 = operator new[](v29, 0x4B677844u, PagedPool);
      if ( !v31 )
      {
        v34 = WdLogNewEntry5_WdLowResource(a1, v30, v32, v33);
        *(_QWORD *)(v34 + 24) = v11;
        WdLogEvent5_WdLowResource(v34);
        return 3221225495LL;
      }
      a2 = (__int64)*v7;
      if ( *v7 )
      {
        memmove(v31, (const void *)a2, 44LL * *v9);
        operator delete[](*v7);
      }
      *v7 = v31;
    }
    v36 = *v9;
    if ( *v9 < v11 )
    {
      if ( v6 )
      {
        v37 = (_DWORD *)(a4 + 40);
        v38 = v6;
        do
        {
          if ( *v37 >= 0x100u )
          {
            *v37 = (unsigned __int8)*v37;
            a1 = (unsigned __int64)*v7;
            a2 = 44LL * v36++;
            *(_OWORD *)(a2 + a1) = *(_OWORD *)(v37 - 10);
            *(_OWORD *)(a2 + a1 + 16) = *(_OWORD *)(v37 - 6);
            *(_QWORD *)(a2 + a1 + 32) = *((_QWORD *)v37 - 1);
            *(_DWORD *)(a2 + a1 + 40) = *v37;
          }
          v37 += 11;
          --v38;
        }
        while ( v38 );
      }
      if ( v11 != v36 )
      {
        v39 = WdLogNewEntry5_WdAssertion(a1, a2);
        *(_QWORD *)(v39 + 24) = 2841LL;
        WdLogEvent5_WdAssertion(v39);
      }
    }
    *v9 = v11;
  }
  return 0LL;
}
