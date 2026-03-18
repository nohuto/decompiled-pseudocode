/*
 * XREFs of MonitorGetAdvancedColorParams @ 0x1C0125568
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1C0110140 (DxgkGetAdapterDeviceDesc.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C0118150 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009754 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetAdvancedColorParams(struct HDXGMONITOR__ *a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  bool v4; // di
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGMONITOR *v11; // rbx
  __m128i v12; // xmm1
  unsigned __int64 v13; // xmm0_8
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  __int64 v17; // rcx
  bool v18; // zf
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  int v25; // eax
  struct DXGMONITOR *v26; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  if ( !a1 )
    return 3221225485LL;
  v26 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v26);
  if ( (int)result >= 0 )
  {
    v11 = v26;
    if ( !v26 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v10, v9);
      WdLogEvent5_WdAssertion(v19);
      v22 = WdLogNewEntry5_WdAssertion(v21, v20);
      WdLogEvent5_WdAssertion(v22);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v11 + 296), 1u);
    if ( a2[1] )
    {
      v23 = *((__m128i *)v11 + 44);
      *(_WORD *)a4 = 0;
      v24 = *((__m128i *)v11 + 45);
      *(_QWORD *)a3 = v23.m128i_i64[0];
      *(_QWORD *)(a3 + 8) = _mm_srli_si128(v23, 8).m128i_u64[0];
      *(_DWORD *)(a3 + 16) = v24.m128i_i32[0];
      *(_DWORD *)(a3 + 20) = v24.m128i_i32[1];
      *(_QWORD *)(a3 + 24) = _mm_srli_si128(v24, 8).m128i_u64[0];
      *(_DWORD *)(a3 + 32) = *((_DWORD *)v11 + 184);
      v25 = *((_DWORD *)v11 + 185);
      *(_DWORD *)(a3 + 36) = v25;
      *(_DWORD *)(a3 + 40) = v25;
    }
    else
    {
      v12 = *(__m128i *)((char *)v11 + 644);
      v13 = _mm_srli_si128(*(__m128i *)((char *)v11 + 628), 8).m128i_u64[0];
      *(_QWORD *)a3 = *(_QWORD *)((char *)v11 + 628);
      *(_QWORD *)(a3 + 8) = v13;
      *(_DWORD *)(a3 + 16) = v12.m128i_i32[0];
      *(_DWORD *)(a3 + 20) = v12.m128i_i32[1];
      *(_QWORD *)(a3 + 24) = _mm_srli_si128(v12, 8).m128i_u64[0];
      if ( *a2 )
      {
        v14 = *((_DWORD *)v11 + 171);
        v15 = *((_DWORD *)v11 + 170);
        v16 = *((_DWORD *)v11 + 169);
      }
      else
      {
        v14 = *((_DWORD *)v11 + 168);
        v15 = *((_DWORD *)v11 + 167);
        v16 = *((_DWORD *)v11 + 166);
      }
      *(_DWORD *)(a3 + 32) = v16;
      *(_DWORD *)(a3 + 36) = v15;
      *(_DWORD *)(a3 + 40) = v14;
      v17 = *(_QWORD *)((char *)v11 + 620);
      *(_BYTE *)a4 = *((_BYTE *)v11 + 692) != 0;
      v18 = *((_BYTE *)v11 + 700) == 0;
      *(_BYTE *)(a4 + 1) = (unsigned int)(*((_DWORD *)v11 + 174) - 3) <= 2;
      *(_BYTE *)(a4 + 4) = !v18;
      *(_BYTE *)(a4 + 2) = BYTE6(v17) != 0;
      v18 = *((_BYTE *)v11 + 703) == 0;
      *(_BYTE *)(a4 + 3) = HIBYTE(v17) != 0;
      v4 = !v18;
    }
    *(_BYTE *)(a4 + 5) = v4;
    ExReleaseResourceLite((PERESOURCE)((char *)v11 + 296));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
