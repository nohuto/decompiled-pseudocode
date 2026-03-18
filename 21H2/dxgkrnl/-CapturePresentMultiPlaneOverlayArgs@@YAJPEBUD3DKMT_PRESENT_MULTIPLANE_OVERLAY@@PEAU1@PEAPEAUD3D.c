/*
 * XREFs of ?CapturePresentMultiPlaneOverlayArgs@@YAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAU1@PEAPEAUD3DKMT_MULTIPLANE_OVERLAY@@PEAPEAUtagRECT@@@Z @ 0x1C0318DC4
 * Callers:
 *     DxgkPresentMultiPlaneOverlay @ 0x1C031A190 (DxgkPresentMultiPlaneOverlay.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 */

__int64 __fastcall CapturePresentMultiPlaneOverlayArgs(
        const struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *a1,
        struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *a2,
        struct D3DKMT_MULTIPLANE_OVERLAY **a3,
        struct tagRECT **a4)
{
  _OWORD *v7; // rax
  __int64 v8; // r14
  __int64 v9; // rdx
  unsigned int v10; // edi
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct D3DKMT_MULTIPLANE_OVERLAY *v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  void *v19; // rdx
  char *v20; // rcx
  _OWORD *v21; // rax
  __int64 v22; // rbx
  __int64 CurrentProcess; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  _BYTE v29[280]; // [rsp+60h] [rbp-148h] BYREF
  unsigned int v30; // [rsp+178h] [rbp-30h]
  void *Src; // [rsp+180h] [rbp-28h]

  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *)MmUserProbeAddress;
  v7 = v29;
  v8 = 2LL;
  v9 = 2LL;
  do
  {
    *v7 = *(_OWORD *)&a1->hDevice;
    v7[1] = *(_OWORD *)&a1->BroadcastContext[2];
    v7[2] = *(_OWORD *)&a1->BroadcastContext[6];
    v7[3] = *(_OWORD *)&a1->BroadcastContext[10];
    v7[4] = *(_OWORD *)&a1->BroadcastContext[14];
    v7[5] = *(_OWORD *)&a1->BroadcastContext[18];
    v7[6] = *(_OWORD *)&a1->BroadcastContext[22];
    v7 += 8;
    *(v7 - 1) = *(_OWORD *)&a1->BroadcastContext[26];
    a1 = (const struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *)((char *)a1 + 128);
    --v9;
  }
  while ( v9 );
  *v7 = *(_OWORD *)&a1->hDevice;
  v7[1] = *(_OWORD *)&a1->BroadcastContext[2];
  v7[2] = *(_OWORD *)&a1->BroadcastContext[6];
  if ( v30 - 1 > 6 )
  {
    v22 = v30;
    CurrentProcess = PsGetCurrentProcess(v30, 0LL, a3, a4);
    WdLogSingleEntry3(2LL, v22, -1073741811LL, CurrentProcess);
    v28 = PsGetCurrentProcess(v25, v24, v26, v27);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting multi plane overlay plane count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      v22,
      -1073741811LL,
      v28,
      0LL,
      0LL);
    return 3221225485LL;
  }
  else
  {
    v10 = 120 * v30;
    if ( 120 * (unsigned __int64)v30 > 0xFFFFFFFF )
    {
      WdLogSingleEntry1(3LL, 71LL);
      return 3221225621LL;
    }
    else
    {
      v11 = 120LL * v30;
      if ( !is_mul_ok(v30, 0x78uLL) )
        v11 = -1LL;
      v14 = (struct D3DKMT_MULTIPLANE_OVERLAY *)operator new[](v11, 0x4B677844u, 256LL, (__int64)a4);
      if ( v14 )
      {
        v19 = Src;
        v20 = (char *)Src + v10;
        if ( v20 < Src || (unsigned __int64)v20 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v14, v19, v10);
        Src = v14;
        v21 = v29;
        do
        {
          *(_OWORD *)&a2->hDevice = *v21;
          *(_OWORD *)&a2->BroadcastContext[2] = v21[1];
          *(_OWORD *)&a2->BroadcastContext[6] = v21[2];
          *(_OWORD *)&a2->BroadcastContext[10] = v21[3];
          *(_OWORD *)&a2->BroadcastContext[14] = v21[4];
          *(_OWORD *)&a2->BroadcastContext[18] = v21[5];
          *(_OWORD *)&a2->BroadcastContext[22] = v21[6];
          a2 = (struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *)((char *)a2 + 128);
          *(_OWORD *)&a2[-1].pPresentPlanes = v21[7];
          v21 += 8;
          --v8;
        }
        while ( v8 );
        *(_OWORD *)&a2->hDevice = *v21;
        *(_OWORD *)&a2->BroadcastContext[2] = v21[1];
        *(_OWORD *)&a2->BroadcastContext[6] = v21[2];
        *a3 = v14;
        *a4 = 0LL;
        operator delete[](0LL);
        operator delete[](0LL);
        return 0LL;
      }
      else
      {
        v17 = PsGetCurrentProcess(v13, v12, v15, v16);
        WdLogSingleEntry2(3LL, -1073741801LL, v17);
        operator delete[](0LL);
        operator delete[](0LL);
        return 3221225495LL;
      }
    }
  }
}
