/*
 * XREFs of ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014E29C
 * Callers:
 *     DrvProcessDxgkDisplayCallout @ 0x1C01518A8 (DrvProcessDxgkDisplayCallout.c)
 * Callees:
 *     xxxUserSetDisplayConfig @ 0x1C0053340 (xxxUserSetDisplayConfig.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C00960A0 (DrvGetDisplayConfigBufferSizes.c)
 *     DrvQueryDisplayConfig @ 0x1C0096190 (DrvQueryDisplayConfig.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 */

__int64 __fastcall DrvProcessSetDisplayConfigParameters(
        struct _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *a1,
        __int64 a2,
        struct tagDESKTOP *a3,
        unsigned __int8 *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int64 v5; // r15
  __int64 v6; // r14
  int v8; // ecx
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 result; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  unsigned int v15; // r13d
  unsigned int v16; // ecx
  unsigned int v17; // eax
  _DWORD *v18; // rax
  unsigned int v19; // r12d
  __int64 v20; // rdx
  int v21; // esi
  __int64 v22; // r8
  unsigned int v23; // esi
  _DWORD *v24; // rcx
  unsigned int j; // edx
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // [rsp+50h] [rbp-28h] BYREF
  int v29; // [rsp+54h] [rbp-24h] BYREF
  unsigned int v30; // [rsp+58h] [rbp-20h]
  __int64 v31; // [rsp+60h] [rbp-18h]
  _DWORD *i; // [rsp+68h] [rbp-10h]
  unsigned int v33; // [rsp+C0h] [rbp+48h]
  unsigned int v34; // [rsp+C8h] [rbp+50h] BYREF
  struct tagDESKTOP *v35; // [rsp+D0h] [rbp+58h]
  _BYTE *v36; // [rsp+D8h] [rbp+60h]

  v36 = a4;
  v35 = a3;
  v5 = *((_QWORD *)a1 + 2);
  v6 = *((unsigned int *)a1 + 2);
  v8 = *(char *)a1;
  v9 = 0LL;
  v29 = -1;
  v10 = (v8 >> 31) & 4;
  v11 = (unsigned int)a2;
  v31 = v5;
  v30 = v10;
  if ( (a2 & 0xF) != 0 )
  {
    if ( (a2 & 0x30) == 0 )
      return xxxUserSetDisplayConfig(
               v6,
               (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)v5,
               a2,
               v10,
               (__int64)a3,
               0,
               0LL,
               0LL,
               a4,
               (__int64)a5);
    v13 = WdLogNewEntry5_WdError(v10, a2, a3);
    *(_QWORD *)(v13 + 24) = v11;
    *(_QWORD *)(v13 + 32) = a3;
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  if ( !v5 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdAssertion(v10, a2, a3, a4);
    v14[3] = v6;
    v14[4] = v11;
    v14[5] = a3;
    WdLogEvent5_WdAssertion(v14);
    return 3221225485LL;
  }
  v34 = 0;
  v15 = (a2 & 0x20F) != 0 ? 4 : 2;
  result = DrvGetDisplayConfigBufferSizes(v15, (__int64)&v34, (__int64)a3);
  if ( (int)result >= 0 )
  {
    v16 = v34;
    v33 = v34;
    v17 = v6 + v34;
    v34 = v17;
    if ( v17 )
    {
      v9 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)PALLOCMEM2(200 * v17, 0x73726447u, 1);
      if ( !v9 )
        return 3221225495LL;
      v17 = v34;
      v16 = v33;
    }
    v28 = v17;
    v18 = (_DWORD *)((unsigned __int64)&v29 & -(__int64)((v15 & 4) != 0));
    for ( i = v18; ; v18 = i )
    {
      v19 = v16;
      v21 = DrvQueryDisplayConfig(v15, &v28, (__int64)v9, v18);
      if ( v21 < 0 )
        break;
      if ( v28 != v33 )
      {
        v21 = -1071774893;
        break;
      }
      v23 = 0;
      if ( (_DWORD)v6 )
      {
        while ( v23 < v19 )
        {
          v24 = (_DWORD *)((char *)v9 + 200 * v23);
          if ( v24[4] == *(_DWORD *)(v5 + 16) && v24[5] == *(_DWORD *)(v5 + 20) )
          {
            if ( v23 < v34 - 1 )
              memmove(v24, v24 + 50, 200LL * (v34 - v23 - 1));
            --v19;
          }
          else
          {
            ++v23;
          }
        }
        memmove((char *)v9 + 200 * v19, (const void *)v5, 200 * v6);
      }
      if ( (v11 & 0x10) != 0 )
      {
        for ( j = 0; j < v34; *(_QWORD *)((char *)v9 + v27 + 8) = 0LL )
        {
          v26 = j++;
          v27 = 200 * v26;
          *(_QWORD *)((char *)v9 + v27) &= 0x8004700000000000uLL;
        }
      }
      v21 = xxxUserSetDisplayConfig(v19 + (unsigned int)v6, v9, v11, v30, (__int64)v35, 0, 0LL, 0LL, v36, (__int64)a5);
      if ( v21 != -1073741772 || (v11 & 0x10) == 0 )
        break;
      v5 = v31;
      v16 = v33;
      LODWORD(v11) = v11 & 0xFFFFEDCF | 0x1220;
    }
    if ( v9 )
      Win32FreePool((__int64)v9, v20, v22);
    return (unsigned int)v21;
  }
  return result;
}
