/*
 * XREFs of ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x1C0160270
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EE230 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0009634 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C0024340 (__report_rangecheckfailure.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1C0036F64 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x1C003D3E4 (-RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 *     DpiGetPnpRegistryKeyName @ 0x1C0161B30 (DpiGetPnpRegistryKeyName.c)
 *     DpiGetDriverFullPath @ 0x1C0170B8C (DpiGetDriverFullPath.c)
 *     DpiGetDriverStorePath @ 0x1C02C1DD8 (DpiGetDriverStorePath.c)
 */

__int64 __fastcall DxgkpQueryRegistry(struct DXGADAPTER *a1, unsigned int *a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  unsigned int v7; // r9d
  __int64 v8; // r10
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  _DWORD *v13; // r14
  __int64 v14; // r11
  _OWORD *v15; // rax
  unsigned __int16 *v16; // rcx
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  int PnpRegistryKeyName; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  size_t **v28; // r9
  unsigned __int16 v29; // cx
  unsigned __int16 *v30; // r8
  unsigned int v31; // r15d
  __int64 v32; // rdx
  unsigned __int16 *v33; // r10
  unsigned int v34; // eax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // eax
  PVOID v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  unsigned __int16 *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rcx
  char *v54; // rax
  __int16 v55; // r9
  _WORD *v56; // rax
  unsigned int v57; // eax
  PVOID P[2]; // [rsp+30h] [rbp-D0h] BYREF
  int (*v59)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+40h] [rbp-C0h] BYREF
  int v60; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v61; // [rsp+50h] [rbp-B0h]
  char *v62; // [rsp+58h] [rbp-A8h]
  unsigned int v63; // [rsp+60h] [rbp-A0h]
  __int64 v64; // [rsp+68h] [rbp-98h]
  int v65; // [rsp+70h] [rbp-90h]
  __int64 v66; // [rsp+78h] [rbp-88h]
  int v67; // [rsp+80h] [rbp-80h]
  __int128 v68; // [rsp+88h] [rbp-78h]
  __int128 v69; // [rsp+98h] [rbp-68h]
  __int64 v70; // [rsp+A8h] [rbp-58h]
  unsigned __int16 v71[264]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int16 v72[264]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v3 = (unsigned int)a3;
  LODWORD(v5) = -1073741811;
  if ( (unsigned int)a3 >= 0x228 )
  {
    v7 = a2[1];
    v8 = 4LL;
    if ( v7 >= 4 )
    {
      v42 = WdLogNewEntry5_WdWarning(a1, a1, a3);
      *(_QWORD *)(v42 + 32) = 2804LL;
    }
    else
    {
      if ( *((int *)a1 + 576) < 0x2000 )
        v9 = 1;
      else
        v9 = *((_DWORD *)a1 + 70);
      v10 = a2[133];
      if ( (unsigned int)v10 >= v9 )
      {
        v42 = WdLogNewEntry5_WdWarning(v10, a1, a3);
        *(_QWORD *)(v42 + 32) = 2811LL;
      }
      else
      {
        v11 = *a2;
        v12 = 360 * v10;
        v13 = a2 + 134;
        a2[134] = v3 - 544;
        v14 = *(_QWORD *)(v12 + *((_QWORD *)a1 + 320) + 8);
        if ( (unsigned int)v11 <= 1 )
        {
          v15 = a2 + 2;
          v16 = v71;
          do
          {
            v17 = v15[1];
            *(_OWORD *)v16 = *v15;
            v18 = v15[2];
            *((_OWORD *)v16 + 1) = v17;
            v19 = v15[3];
            *((_OWORD *)v16 + 2) = v18;
            v20 = v15[4];
            *((_OWORD *)v16 + 3) = v19;
            v21 = v15[5];
            *((_OWORD *)v16 + 4) = v20;
            v22 = v15[6];
            *((_OWORD *)v16 + 5) = v21;
            v23 = v15[7];
            v15 += 8;
            *((_OWORD *)v16 + 6) = v22;
            v16 += 64;
            *((_OWORD *)v16 - 1) = v23;
            --v8;
          }
          while ( v8 );
          *(_QWORD *)v16 = *(_QWORD *)v15;
          v71[259] = 0;
          P[0] = 0LL;
          PnpRegistryKeyName = DpiGetPnpRegistryKeyName(v14, (unsigned int)((_DWORD)v11 != 1) + 2, P);
          v5 = PnpRegistryKeyName;
          if ( PnpRegistryKeyName < 0 )
          {
            v39 = WdLogNewEntry5_WdWarning(v26, v25, v27);
          }
          else
          {
            v28 = (size_t **)P[0];
            v29 = v71[0];
            v30 = v71;
            v31 = 0;
            LODWORD(v32) = 0;
            v33 = (unsigned __int16 *)*((_QWORD *)P[0] + 1);
            if ( v71[0] )
            {
              do
              {
                v34 = v32;
                if ( v29 != 92 )
                  v34 = v31;
                v32 = (unsigned int)(v32 + 1);
                v31 = v34;
                v29 = v71[v32];
              }
              while ( v29 );
              if ( v34 )
              {
                if ( 2 * (unsigned __int64)v34 >= 0x208 )
                  _report_rangecheckfailure();
                v71[v34] = 0;
                LODWORD(v5) = RtlStringCbCopyW(v72, 0x208uLL, v28[1]);
                if ( (int)v5 < 0 )
                  goto LABEL_61;
                v49 = 260LL;
                v51 = v72;
                v48 = 260LL;
                do
                {
                  if ( !*v51 )
                    break;
                  ++v51;
                  --v48;
                }
                while ( v48 );
                LODWORD(v5) = v48 == 0 ? 0xC000000D : 0;
                if ( v48 )
                  v52 = 260 - v48;
                else
                  v52 = 0LL;
                if ( v48 )
                {
                  v48 = (__int64)&v72[v52];
                  v53 = 260 - v52;
                  if ( 260 != v52 )
                  {
                    v50 = 2147483646LL;
                    v54 = (char *)L"\\" - v48;
                    do
                    {
                      if ( !v50 )
                        break;
                      v55 = *(_WORD *)&v54[v48];
                      if ( !v55 )
                        break;
                      *(_WORD *)v48 = v55;
                      --v50;
                      v48 += 2LL;
                      --v53;
                    }
                    while ( v53 );
                  }
                  v56 = (_WORD *)(v48 - 2);
                  if ( v53 )
                    v56 = (_WORD *)v48;
                  v49 = -v53;
                  LODWORD(v5) = v49 == 0 ? 0x80000005 : 0;
                  *v56 = 0;
                }
                if ( (int)v5 < 0 || (LODWORD(v5) = RtlStringCbCatW(v72, v48, (size_t *)v71), (int)v5 < 0) )
                {
LABEL_61:
                  v39 = WdLogNewEntry5_WdWarning(v49, v48, v50);
                  *(_QWORD *)(v39 + 24) = (int)v5;
                  *(_QWORD *)(v39 + 32) = 2881LL;
                  goto LABEL_18;
                }
                v30 = &v71[v31 + 1];
                v33 = v72;
              }
            }
            v61 = v30;
            v59 = DxgkpRegistryQueryRoutine;
            v63 = a2[132] << 24;
            v60 = 276;
            v70 = 0LL;
            v62 = (char *)(a2 + 136);
            v64 = 0LL;
            v65 = 0;
            v66 = 0LL;
            v67 = 0;
            v68 = 0LL;
            v69 = 0LL;
            v35 = RtlQueryRegistryValuesEx(0LL, v33, &v59, a2, 0LL);
            v5 = v35;
            if ( v35 >= 0 )
              goto LABEL_19;
            v39 = WdLogNewEntry5_WdWarning(v37, v36, v38);
            *(_QWORD *)(v39 + 32) = 2902LL;
          }
          *(_QWORD *)(v39 + 24) = v5;
LABEL_18:
          WdLogEvent5_WdWarning(v39);
          goto LABEL_19;
        }
        if ( (unsigned int)(v11 - 2) > 1 )
        {
          v42 = WdLogNewEntry5_WdWarning(v12, a1, v11);
          *(_QWORD *)(v42 + 32) = 2941LL;
          goto LABEL_27;
        }
        if ( !a2[132] && (v7 & 1) == 0 )
        {
          if ( (_DWORD)v11 == 2 )
          {
            LODWORD(v5) = DpiGetDriverStorePath(v14, a2 + 136, a2 + 134);
          }
          else
          {
            *(_OWORD *)P = 0LL;
            LODWORD(v5) = DpiGetDriverFullPath(v14, P);
            if ( (int)v5 < 0 )
            {
LABEL_39:
              v39 = WdLogNewEntry5_WdWarning(v44, v43, v45);
              *(_QWORD *)(v39 + 24) = (int)v5;
              *(_QWORD *)(v39 + 32) = 2935LL;
              goto LABEL_18;
            }
            v46 = RtlStringCbCopyUnicodeString((char *)a2 + 544, (unsigned int)*v13, (const struct _UNICODE_STRING *)P);
            v47 = P[1];
            LODWORD(v5) = v46;
            *v13 = LOWORD(P[0]);
            ExFreePoolWithTag(v47, 0);
          }
          if ( (int)v5 >= 0 )
          {
LABEL_19:
            if ( (_DWORD)v5 == -2147483643 )
            {
              LODWORD(v5) = 0;
              v57 = *a2 - 2;
              a2[135] = 1;
              if ( v57 <= 1 || (a2[1] & 1) != 0 )
                *v13 += 16;
              return (unsigned int)v5;
            }
            if ( !(_DWORD)v5 )
            {
              a2[135] = 0;
              return (unsigned int)v5;
            }
LABEL_21:
            a2[135] = 2;
            return (unsigned int)v5;
          }
          goto LABEL_39;
        }
        v42 = WdLogNewEntry5_WdWarning(v12, a1, v11);
        *(_QWORD *)(v42 + 32) = 2914LL;
      }
    }
LABEL_27:
    *(_QWORD *)(v42 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v42);
    goto LABEL_21;
  }
  v41 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a1, a3);
  v41[3] = v3;
  v41[4] = -1073741811LL;
  v41[5] = 2796LL;
  WdLogEvent5_WdWarning(v41);
  return 3221225485LL;
}
