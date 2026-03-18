/*
 * XREFs of MonitorGetAdvancedColorParams @ 0x1C01A6650
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C01659C0 (DxgkGetMonitorInternalInfo.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C01A3640 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0010D08 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 */

__int64 __fastcall MonitorGetAdvancedColorParams(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  __m128i v9; // xmm1
  unsigned __int64 v10; // xmm0_8
  bool v11; // zf
  int v12; // eax
  int v13; // edx
  int v14; // r9d
  __int64 v15; // rdx
  unsigned int v16; // eax
  bool v17; // al
  __int64 v18; // r8
  unsigned int v19; // edx
  unsigned int v20; // ebx
  __m128i v22; // xmm0
  __m128i v23; // xmm1
  int v24; // eax
  __int64 v25; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared(&v25, a1);
  v7 = v25;
  if ( v25 )
  {
    v8 = *(_QWORD *)(v25 + 224);
    if ( a2[1] )
    {
      v22 = *(__m128i *)(v8 + 344);
      *(_WORD *)a4 = 0;
      v23 = *(__m128i *)(v8 + 360);
      *(_QWORD *)a3 = v22.m128i_i64[0];
      *(_QWORD *)(a3 + 8) = _mm_srli_si128(v22, 8).m128i_u64[0];
      *(_DWORD *)(a3 + 16) = v23.m128i_i32[0];
      *(_DWORD *)(a3 + 20) = v23.m128i_i32[1];
      *(_QWORD *)(a3 + 24) = _mm_srli_si128(v23, 8).m128i_u64[0];
      *(_DWORD *)(a3 + 32) = *(_DWORD *)(v8 + 376);
      v24 = *(_DWORD *)(v8 + 380);
      *(_DWORD *)(a3 + 36) = v24;
      *(_DWORD *)(a3 + 40) = v24;
      v17 = 0;
    }
    else
    {
      v9 = *(__m128i *)(v8 + 252);
      v10 = _mm_srli_si128(*(__m128i *)(v8 + 236), 8).m128i_u64[0];
      *(_QWORD *)a3 = *(_QWORD *)(v8 + 236);
      *(_QWORD *)(a3 + 8) = v10;
      *(_DWORD *)(a3 + 16) = v9.m128i_i32[0];
      *(_DWORD *)(a3 + 20) = v9.m128i_i32[1];
      v9.m128i_i64[0] = _mm_srli_si128(v9, 8).m128i_u64[0];
      *(_DWORD *)(a3 + 24) = v9.m128i_i32[0];
      v11 = *a2 == 0;
      *(_DWORD *)(a3 + 28) = v9.m128i_i32[1];
      if ( v11 )
      {
        v12 = *(_DWORD *)(v8 + 320);
        v13 = *(_DWORD *)(v8 + 316);
        v14 = *(_DWORD *)(v8 + 312);
      }
      else
      {
        v12 = *(_DWORD *)(v8 + 332);
        v13 = *(_DWORD *)(v8 + 328);
        v14 = *(_DWORD *)(v8 + 324);
      }
      *(_DWORD *)(a3 + 32) = v14;
      *(_DWORD *)(a3 + 36) = v13;
      *(_DWORD *)(a3 + 40) = v12;
      v15 = *(_QWORD *)(v8 + 228);
      v16 = *(_DWORD *)(v8 + 336) - 1;
      *(_BYTE *)a4 = 0;
      *(_BYTE *)(a4 + 1) = v16 <= 2;
      *(_BYTE *)(a4 + 4) = *(_BYTE *)(v8 + 268);
      *(_BYTE *)(a4 + 2) = BYTE6(v15) != 0;
      v11 = *(_BYTE *)(v8 + 341) == 0;
      *(_BYTE *)(a4 + 3) = HIBYTE(v15) != 0;
      v17 = !v11;
    }
    *(_BYTE *)(a4 + 5) = v17;
    v18 = *(_QWORD *)(v7 + 224);
    v19 = *(_DWORD *)(v18 + 388);
    if ( !v19 )
      v19 = *(_DWORD *)(v18 + 316) / 0x2710u;
    *(_DWORD *)(a3 + 44) = v19;
    v20 = 0;
    if ( v7 )
    {
      ExReleaseResourceLite((PERESOURCE)(v7 + 24));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v20 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
  }
  return v20;
}
