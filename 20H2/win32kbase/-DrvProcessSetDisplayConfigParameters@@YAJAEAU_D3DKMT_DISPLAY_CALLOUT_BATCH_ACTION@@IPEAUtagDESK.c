/*
 * XREFs of ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0145A7C
 * Callers:
 *     DrvProcessDxgkDisplayCallout @ 0x1C0149088 (DrvProcessDxgkDisplayCallout.c)
 * Callees:
 *     DrvGetDisplayConfigBufferSizes @ 0x1C000DD50 (DrvGetDisplayConfigBufferSizes.c)
 *     DrvQueryDisplayConfig @ 0x1C000DE40 (DrvQueryDisplayConfig.c)
 *     PALLOCMEM2 @ 0x1C003C5B0 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     xxxUserSetDisplayConfig @ 0x1C006FA20 (xxxUserSetDisplayConfig.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
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
  __int64 v14; // rdx
  _QWORD *v15; // rax
  unsigned int v16; // r13d
  unsigned int v17; // ecx
  unsigned int v18; // eax
  _DWORD *v19; // rax
  unsigned int v20; // r12d
  int v21; // esi
  unsigned int v22; // esi
  _DWORD *v23; // rcx
  unsigned int j; // edx
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // [rsp+50h] [rbp-28h] BYREF
  int v28; // [rsp+54h] [rbp-24h] BYREF
  unsigned int v29; // [rsp+58h] [rbp-20h]
  __int64 v30; // [rsp+60h] [rbp-18h]
  _DWORD *i; // [rsp+68h] [rbp-10h]
  unsigned int v32; // [rsp+C0h] [rbp+48h]
  unsigned int v33; // [rsp+C8h] [rbp+50h] BYREF
  struct tagDESKTOP *v34; // [rsp+D0h] [rbp+58h]
  _BYTE *v35; // [rsp+D8h] [rbp+60h]

  v35 = a4;
  v34 = a3;
  v5 = *((_QWORD *)a1 + 2);
  v6 = *((unsigned int *)a1 + 2);
  v8 = *(char *)a1;
  v9 = 0LL;
  v28 = -1;
  v10 = (v8 >> 31) & 4;
  v11 = (unsigned int)a2;
  v30 = v5;
  v29 = v10;
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
    WdLogEvent5_WdError(v13, v14);
    return 3221225485LL;
  }
  if ( !v5 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdAssertion(v10, a2);
    v15[3] = v6;
    v15[4] = v11;
    v15[5] = a3;
    WdLogEvent5_WdAssertion(v15);
    return 3221225485LL;
  }
  v33 = 0;
  v16 = (a2 & 0x20F) != 0 ? 4 : 2;
  result = DrvGetDisplayConfigBufferSizes(v16, (__int64)&v33);
  if ( (int)result >= 0 )
  {
    v17 = v33;
    v32 = v33;
    v18 = v6 + v33;
    v33 = v18;
    if ( v18 )
    {
      v9 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)PALLOCMEM2(200 * v18, 1936876615LL, 1);
      if ( !v9 )
        return 3221225495LL;
      v18 = v33;
      v17 = v32;
    }
    v27 = v18;
    v19 = (_DWORD *)((unsigned __int64)&v28 & -(__int64)((v16 & 4) != 0));
    for ( i = v19; ; v19 = i )
    {
      v20 = v17;
      v21 = DrvQueryDisplayConfig(v16, &v27, (__int64)v9, v19);
      if ( v21 < 0 )
        break;
      if ( v27 != v32 )
      {
        v21 = -1071774893;
        break;
      }
      v22 = 0;
      if ( (_DWORD)v6 )
      {
        while ( v22 < v20 )
        {
          v23 = (_DWORD *)((char *)v9 + 200 * v22);
          if ( v23[4] == *(_DWORD *)(v5 + 16) && v23[5] == *(_DWORD *)(v5 + 20) )
          {
            if ( v22 < v33 - 1 )
              memmove(v23, v23 + 50, 200LL * (v33 - v22 - 1));
            --v20;
          }
          else
          {
            ++v22;
          }
        }
        memmove((char *)v9 + 200 * v20, (const void *)v5, 200 * v6);
      }
      if ( (v11 & 0x10) != 0 )
      {
        for ( j = 0; j < v33; *(_QWORD *)((char *)v9 + v26 + 8) = 0LL )
        {
          v25 = j++;
          v26 = 200 * v25;
          *(_QWORD *)((char *)v9 + v26) &= 0x8004700000000000uLL;
        }
      }
      v21 = xxxUserSetDisplayConfig(v20 + (unsigned int)v6, v9, v11, v29, (__int64)v34, 0, 0LL, 0LL, v35, (__int64)a5);
      if ( v21 != -1073741772 || (v11 & 0x10) == 0 )
        break;
      v5 = v30;
      v17 = v32;
      LODWORD(v11) = v11 & 0xFFFFEDCF | 0x1220;
    }
    if ( v9 )
      Win32FreePool((__int64)v9);
    return (unsigned int)v21;
  }
  return result;
}
