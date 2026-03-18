/*
 * XREFs of ?DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z @ 0x1C01DFCD8
 * Callers:
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C01DFA98 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C001DAD4 (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01A442C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkGetPreferredVidPnSourceList(const struct _LUID *a1, unsigned int a2, char *a3, char *a4)
{
  const struct _LUID *v6; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v8; // rax
  unsigned int v9; // ebx
  DXGADAPTER *v10; // rbp
  int v11; // eax
  __int64 v12; // rsi
  ADAPTER_DISPLAY *v13; // r13
  int v14; // esi
  unsigned int v15; // edx
  __int64 v16; // rbp
  unsigned int v17; // ecx
  char *v18; // r15
  __int64 v19; // r11
  signed __int64 v20; // rdi
  unsigned int v21; // eax
  unsigned int v22; // ebp
  unsigned int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // edx
  __int64 LowPart; // rbp
  const wchar_t *v28; // r9
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 HighPart; // rcx
  __int64 v34; // [rsp+58h] [rbp-F0h]
  unsigned __int64 v36; // [rsp+68h] [rbp-E0h] BYREF
  _BYTE v37[144]; // [rsp+70h] [rbp-D8h] BYREF

  v6 = a1;
  Global = DXGGLOBAL_GetGlobal();
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *v6, &v36);
  v9 = 0;
  v10 = v8;
  if ( v8 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v37, v8, 0LL);
    DXGADAPTER::ReleaseReference(v10);
    v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v37, 0LL);
    LODWORD(v12) = v11;
    if ( v11 < 0 )
    {
      LowPart = v11;
      WdLogSingleEntry3(2LL, v6->HighPart, v6->LowPart, v11);
      v28 = L"Failed to acquire adapter core access on adapter 0x%I64x%08I64x, Statue = 0x%I64x.";
    }
    else
    {
      v13 = (ADAPTER_DISPLAY *)*((_QWORD *)v10 + 349);
      if ( v13 )
      {
        v14 = 0;
        v15 = 0;
        if ( !a2 )
        {
LABEL_18:
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v37);
          return v9;
        }
        do
        {
          v16 = v15;
          v17 = *(_DWORD *)&a4[4 * v15];
          if ( v17 != -1 )
          {
            if ( v17 >= *((_DWORD *)v13 + 24) )
            {
              LODWORD(v12) = -1071774972;
              WdLogSingleEntry4(2LL, *(unsigned int *)&a4[4 * v15], v6->HighPart, v6->LowPart, -1071774972LL);
              v29 = *(unsigned int *)&a4[4 * v16];
              v28 = L"Caller specified VidPn source 0x%I64x exceeds the MAX VidPn source on adapter 0x%I64x%08I64x, returning 0x%I64x.";
              LowPart = v6->LowPart;
              v30 = -1071774972LL;
              HighPart = v6->HighPart;
              goto LABEL_32;
            }
            v14 |= 1 << v17;
          }
          ++v15;
        }
        while ( v15 < a2 );
        v18 = a4;
        v19 = a2;
        v20 = a3 - a4;
        v34 = a2;
        do
        {
          if ( *(_DWORD *)v18 == -1 )
          {
            v21 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(v13, *(_DWORD *)&v18[v20]);
            v22 = v21;
            if ( v21 != -1 )
            {
              if ( v21 >= *((_DWORD *)v13 + 24) )
              {
                WdLogSingleEntry1(1LL, 8907LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"VidPnSourceId < pDisplayCore->GetNumVidPnSources()",
                  8907LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v19 = v34;
              }
              if ( ((1 << v22) & v14) == 0 )
              {
                *(_DWORD *)v18 = v22;
                v14 |= 1 << v22;
              }
            }
          }
          v18 += 4;
          v34 = --v19;
        }
        while ( v19 );
        v6 = a1;
        v23 = 0;
        v24 = a2;
        v25 = 0;
        while ( *(_DWORD *)a4 != -1 )
        {
LABEL_17:
          ++v25;
          a4 += 4;
          if ( v25 >= v24 )
            goto LABEL_18;
        }
        while ( v23 < *((_DWORD *)v13 + 24) )
        {
          if ( !_bittest(&v14, v23) )
          {
            *(_DWORD *)a4 = v23;
            v14 |= 1 << v23;
            v24 = a2;
            ++v23;
            goto LABEL_17;
          }
          ++v23;
        }
        v12 = -1071774975LL;
        WdLogSingleEntry3(2LL, a1->HighPart, a1->LowPart, -1071774975LL);
        v28 = L"All the VidPn sources are used on adapter 0x%I64x%08I64x, returning 0x%I64x.";
      }
      else
      {
        v12 = -1073741811LL;
        WdLogSingleEntry3(2LL, v6->HighPart, v6->LowPart, -1073741811LL);
        v28 = L"Caller specified adapter 0x%I64x%08I64x is NOT a display adapter, returning 0x%I64x.";
      }
      LowPart = v12;
    }
    v29 = v6->HighPart;
    v30 = 0LL;
    HighPart = v6->LowPart;
LABEL_32:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v28, v29, HighPart, LowPart, v30, 0LL);
    v9 = v12;
    goto LABEL_18;
  }
  WdLogSingleEntry3(2LL, v6->HighPart, v6->LowPart, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to find adapter from LUID 0x%I64x%08I64x, returning 0x%I64x.",
    v6->HighPart,
    v6->LowPart,
    -1073741811LL,
    0LL,
    0LL);
  return 3221225485LL;
}
