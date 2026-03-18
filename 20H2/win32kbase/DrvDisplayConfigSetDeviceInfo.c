/*
 * XREFs of DrvDisplayConfigSetDeviceInfo @ 0x1C01480D0
 * Callers:
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C01302D0 (NtUserDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     DrvIsWddmDriverPresent @ 0x1C000DF58 (DrvIsWddmDriverPresent.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C006C578 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     xxxUserSetDisplayConfig @ 0x1C006FA20 (xxxUserSetDisplayConfig.c)
 *     GetPathsModality @ 0x1C00A8064 (GetPathsModality.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C01485B0 (DrvDisplayConfigSetScaleFactorOverride.c)
 */

__int64 __fastcall DrvDisplayConfigSetDeviceInfo(int *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int *v5; // r14
  unsigned int *v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // r9d
  unsigned int v20; // r8d
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  int v26; // eax
  _QWORD *v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // eax
  struct D3DKMT_GETPATHSMODALITY *v33; // rsi
  int PathsModality; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rbx
  _QWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // r8
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  _QWORD *v49; // rax
  __int64 v50; // rdx
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rbp
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  int v59; // eax
  int v60; // eax
  bool v61; // zf
  int v62; // eax
  struct D3DKMT_GETPATHSMODALITY *v63; // [rsp+90h] [rbp+18h] BYREF

  if ( !(unsigned int)DrvIsWddmDriverPresent() )
    return 3221225659LL;
  v5 = (unsigned int *)(a1 + 4);
  v6 = (unsigned int *)(a1 + 2);
  result = ((__int64 (__fastcall *)(int *, _QWORD, int *, int *))qword_1C024AA50)(
             a1 + 2,
             (unsigned int)a1[4],
             a1 + 2,
             a1 + 4);
  if ( (int)result >= 0 )
  {
    v10 = *a1;
    if ( *a1 == -23 )
    {
      if ( a1[1] != 48 )
        return -1073741811LL;
    }
    else
    {
      switch ( v10 )
      {
        case -19:
          v61 = a1[1] == 24;
          break;
        case -18:
          v61 = a1[1] == 28;
          break;
        case -16:
          if ( a1[1] != 68 )
            return -1073741811LL;
          v60 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C024A918)(0LL, a1);
          v11 = v60;
          if ( v60 < 0 )
            goto LABEL_58;
          if ( v60 != 259 )
          {
            if ( v60 == 255 && gpGdiSharedMemory )
              _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
            return (unsigned int)v11;
          }
          goto LABEL_18;
        case -6:
          if ( a1[1] == 28 )
          {
            v59 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C024A918)(0LL, a1);
            v11 = v59;
            if ( v59 >= 0 )
            {
              if ( !a1[6] )
                return (unsigned int)v11;
              v19 = 4;
              v20 = 2191;
              goto LABEL_19;
            }
            goto LABEL_58;
          }
          return -1073741811LL;
        case -4:
          if ( a1[1] == 24 )
          {
            LODWORD(v11) = DrvDisplayConfigSetScaleFactorOverride(a1, 0LL);
            return (unsigned int)v11;
          }
          return -1073741811LL;
        case 5:
          if ( a1[1] != 24 )
            return -1073741811LL;
          v27 = (_QWORD *)WdLogNewEntry5_WdEvent(v8, v7, v9);
          v27[3] = *a1;
          v27[4] = a1[3];
          v27[5] = *v6;
          v27[6] = *v5;
          v27[7] = a1[5] & 1;
          WdLogEvent5_WdEvent(v27);
          v28 = ((__int64 (*)(void))qword_1C024A930)();
          v11 = v28;
          if ( v28 < 0 )
          {
            v12 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29, v31);
            v12[3] = v11;
            v12[4] = a1[3];
            v12[5] = *v6;
            v12[6] = *v5;
            v14 = a1[5] & 1;
            goto LABEL_14;
          }
          v32 = a1[5];
          v33 = 0LL;
          v63 = 0LL;
          if ( (v32 & 1) != 0 )
          {
            PathsModality = GetPathsModality(v30, &v63, 0x40u, 0);
            v38 = PathsModality;
            if ( PathsModality < 0 )
            {
              v39 = (_QWORD *)WdLogNewEntry5_WdError(v36, v35, v37);
              v39[3] = v38;
              v39[4] = a1[3];
              v39[5] = *v6;
              v39[6] = *v5;
              v39[7] = a1[5] & 1;
              WdLogEvent5_WdError(v39, v40);
              if ( (_DWORD)v38 == -1073741801 )
              {
                if ( (int)((__int64 (*)(void))qword_1C024A938)() < 0 )
                {
                  v43 = WdLogNewEntry5_WdAssertion(v42, v41);
                  WdLogEvent5_WdAssertion(v43);
                }
                return 3221225495LL;
              }
            }
            v33 = v63;
          }
          v44 = (a1[5] & 1) == 0;
          LODWORD(v44) = v44 | 0x80000000;
          v45 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))qword_1C024A900)(*(_QWORD *)v6, *v5, v44, 0LL);
          v11 = v45;
          if ( v45 >= 0 )
          {
            if ( !v33 )
              goto LABEL_40;
            v51 = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *))qword_1C024A8D0)(
                    0x40000000LL,
                    v33);
            v55 = v51;
            if ( v51 >= 0 )
              goto LABEL_40;
            v49 = (_QWORD *)WdLogNewEntry5_WdError(v53, v52, v54);
            v49[3] = v55;
          }
          else
          {
            v49 = (_QWORD *)WdLogNewEntry5_WdError(v47, v46, v48);
            v49[3] = v11;
          }
          v49[4] = a1[3];
          v49[5] = *v6;
          v49[6] = *v5;
          v49[7] = a1[5] & 1;
          WdLogEvent5_WdError(v49, v50);
LABEL_40:
          if ( (int)((__int64 (*)(void))qword_1C024A938)() < 0 )
          {
            v58 = WdLogNewEntry5_WdAssertion(v57, v56);
            WdLogEvent5_WdAssertion(v58);
          }
          FreePathsModality(v33);
          return (unsigned int)v11;
        case 8:
          if ( a1[1] != 24 )
            return -1073741811LL;
          v26 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C024A918)(0LL, a1);
          v11 = v26;
          if ( v26 < 0 )
            goto LABEL_58;
LABEL_18:
          v19 = 0;
          v20 = 2447;
LABEL_19:
          v21 = xxxUserSetDisplayConfig(0, 0LL, v20, v19, 0LL, 1, 0LL, 0LL, 0LL, a2);
          v11 = v21;
          if ( v21 >= 0 )
            return (unsigned int)v11;
          v25 = WdLogNewEntry5_WdWarning(v23, v22, v24);
          *(_QWORD *)(v25 + 24) = v11;
LABEL_59:
          WdLogEvent5_WdWarning(v25);
          return (unsigned int)v11;
        case 10:
          if ( a1[1] == 24 )
          {
            v15 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C024A918)(0LL, a1);
            v11 = v15;
            if ( v15 >= 0 )
            {
              if ( v15 == 255 )
                return (unsigned int)v11;
              goto LABEL_18;
            }
LABEL_58:
            v25 = WdLogNewEntry5_WdWarning(v17, v16, v18);
            *(_QWORD *)(v25 + 24) = a1;
            *(_QWORD *)(v25 + 32) = v11;
            goto LABEL_59;
          }
          return -1073741811LL;
        default:
          LODWORD(v11) = -1073741811;
          v12 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7, v9);
          v12[3] = -1073741811LL;
          v12[4] = *a1;
          v12[5] = a1[3];
          v12[6] = *v6;
          v14 = *v5;
LABEL_14:
          v12[7] = v14;
          WdLogEvent5_WdError(v12, v13);
          return (unsigned int)v11;
      }
      if ( !v61 )
        return -1073741811LL;
    }
    v62 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C024A918)(0LL, a1);
    v11 = v62;
    if ( v62 >= 0 )
      return (unsigned int)v11;
    goto LABEL_58;
  }
  return result;
}
