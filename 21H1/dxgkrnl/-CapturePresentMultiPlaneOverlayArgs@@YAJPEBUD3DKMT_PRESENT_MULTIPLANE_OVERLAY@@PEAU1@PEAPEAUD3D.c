/*
 * XREFs of ?CapturePresentMultiPlaneOverlayArgs@@YAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAU1@PEAPEAUD3DKMT_MULTIPLANE_OVERLAY@@PEAPEAUtagRECT@@@Z @ 0x1C029E9C4
 * Callers:
 *     DxgkPresentMultiPlaneOverlay @ 0x1C02A2B60 (DxgkPresentMultiPlaneOverlay.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0026580 (memmove.c)
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
  __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  SIZE_T v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct D3DKMT_MULTIPLANE_OVERLAY *v15; // rsi
  __int64 v16; // r8
  __int64 v17; // rbx
  unsigned int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  void *v21; // rdx
  char *v22; // rcx
  _OWORD *v23; // rax
  __int64 v25; // rax
  _QWORD *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  _BYTE v29[280]; // [rsp+30h] [rbp-148h] BYREF
  unsigned int v30; // [rsp+148h] [rbp-30h]
  void *Src; // [rsp+150h] [rbp-28h]

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
  v10 = v30;
  if ( v30 - 1 > 6 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(a1, 0LL);
    v26[3] = v10;
    v18 = -1073741811;
    v26[4] = -1073741811LL;
    v26[5] = PsGetCurrentProcess(v28, v27);
    WdLogEvent5_WdError(v26);
    return v18;
  }
  v11 = 120LL * v30;
  if ( v11 > 0xFFFFFFFF )
  {
    v25 = WdLogNewEntry5_WdWarning(v30, 0LL, a3);
    *(_QWORD *)(v25 + 24) = 71LL;
    WdLogEvent5_WdWarning(v25);
    return 3221225621LL;
  }
  v12 = 120LL * v30;
  if ( !is_mul_ok(v30, 0x78uLL) )
    v12 = -1LL;
  v15 = (struct D3DKMT_MULTIPLANE_OVERLAY *)operator new[](v12, 0x4B677844u, PagedPool);
  if ( !v15 )
  {
    v17 = WdLogNewEntry5_WdWarning(v14, v13, v16);
    v18 = -1073741801;
    *(_QWORD *)(v17 + 24) = -1073741801LL;
    *(_QWORD *)(v17 + 32) = PsGetCurrentProcess(v20, v19);
    WdLogEvent5_WdWarning(v17);
    operator delete[](0LL);
    operator delete[](0LL);
    return v18;
  }
  v21 = Src;
  v22 = (char *)Src + (unsigned int)v11;
  if ( v22 < Src || (unsigned __int64)v22 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v15, v21, (unsigned int)v11);
  Src = v15;
  v23 = v29;
  do
  {
    *(_OWORD *)&a2->hDevice = *v23;
    *(_OWORD *)&a2->BroadcastContext[2] = v23[1];
    *(_OWORD *)&a2->BroadcastContext[6] = v23[2];
    *(_OWORD *)&a2->BroadcastContext[10] = v23[3];
    *(_OWORD *)&a2->BroadcastContext[14] = v23[4];
    *(_OWORD *)&a2->BroadcastContext[18] = v23[5];
    *(_OWORD *)&a2->BroadcastContext[22] = v23[6];
    a2 = (struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *)((char *)a2 + 128);
    *(_OWORD *)&a2[-1].pPresentPlanes = v23[7];
    v23 += 8;
    --v8;
  }
  while ( v8 );
  *(_OWORD *)&a2->hDevice = *v23;
  *(_OWORD *)&a2->BroadcastContext[2] = v23[1];
  *(_OWORD *)&a2->BroadcastContext[6] = v23[2];
  *a3 = v15;
  *a4 = 0LL;
  operator delete[](0LL);
  operator delete[](0LL);
  return 0LL;
}
