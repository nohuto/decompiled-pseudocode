/*
 * XREFs of GreHintDCWnd @ 0x1C00E7730
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00482D8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     UpdateRedirectedDCE @ 0x1C00E75F0 (UpdateRedirectedDCE.c)
 * Callees:
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C0272F18 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C0272FF4 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreHintDCWnd(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v6; // rbp
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  __m128 v20; // xmm0
  unsigned __int16 v21[12]; // [rsp+20h] [rbp-18h] BYREF

  v6 = a2;
  LOBYTE(a2) = 1;
  v8 = HmgShareLockEx(a1, a2, 0LL);
  v9 = v8;
  if ( !v8 )
    return 0LL;
  *(_QWORD *)(v8 + 464) = v6;
  v10 = *(_QWORD *)(v8 + 496);
  if ( !v10 || *(int *)(v10 + 112) < 0 )
  {
    v21[0] = 0;
    if ( v6 && (unsigned int)UserIsWindowGdiScaled(v6, v21) && v21[0] != 96 )
    {
      v20 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels(v21[0], v16, v17, v18));
      v20.m128_f32[0] = v20.m128_f32[0] / 96.0;
      DC::vSetDpiScaling(v9, _mm_unpacklo_ps(v20, v20).m128_u64[0]);
    }
    else
    {
      v19 = *(_DWORD *)(v9 + 520);
      if ( (v19 & 1) != 0 )
      {
        *(_DWORD *)(v9 + 36) |= 0x10u;
        *(_QWORD *)(v9 + 524) = 0LL;
        *(_DWORD *)(v9 + 520) = v19 & 0xFFFFFFF8 | 4;
        *(_QWORD *)(v9 + 532) = 0LL;
        DC::vUpdateCachedDPIScaleValue((DC *)v9);
      }
    }
  }
  *(_QWORD *)(v9 + 472) = a3;
  if ( a3 && (v14 = ValidateHwnd(a3)) != 0 && (v15 = *(_QWORD *)(v14 + 16)) != 0 )
    v11 = **(_QWORD **)(v15 + 424);
  else
    v11 = 0LL;
  *(_QWORD *)(v9 + 480) = v11;
  *(_DWORD *)(v9 + 488) = a4;
  *(_DWORD *)(v9 + 492) = a5;
  *(_DWORD *)v21 = 0;
  v12 = *(_QWORD *)v9;
  HmgDecrementShareReferenceCountEx(v9, v21);
  if ( *(_DWORD *)v21 )
    bDeleteDCInternalEx(v12, 0LL);
  return 1LL;
}
