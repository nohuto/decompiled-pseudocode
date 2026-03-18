/*
 * XREFs of ?CallCheckMultiPlaneOverlaySupport2DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C02E3BFC
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015E960 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DdiCheckMultiPlaneOverlaySupport2@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT2@@@Z @ 0x1C02C5E20 (-DdiCheckMultiPlaneOverlaySupport2@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPP.c)
 */

__int64 __fastcall CallCheckMultiPlaneOverlaySupport2DDI(
        __int64 a1,
        unsigned __int64 a2,
        void **a3,
        DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *Pool2,
        int *a5,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a6)
{
  ADAPTER_DISPLAY *v6; // r13
  void **v7; // rsi
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 CurrentProcess; // rax
  unsigned int v12; // ebx
  UINT *p_LayerIndex; // r10
  signed __int64 v14; // r12
  int v15; // eax
  _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT2 v17; // [rsp+20h] [rbp-E0h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h]
  _BYTE v19[336]; // [rsp+48h] [rbp-B8h] BYREF
  int v20; // [rsp+198h] [rbp+98h]

  v6 = (ADAPTER_DISPLAY *)Pool2;
  v7 = a3;
  P = 0LL;
  v8 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)a2;
  v20 = 0;
  *a5 = 0;
  a6->Value = 0;
  v9 = (unsigned int)a1;
  if ( (unsigned int)a1 <= 3 )
  {
    Pool2 = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *)v19;
    P = v19;
    if ( (_DWORD)a1 )
    {
      memset(v19, 0, 112LL * (unsigned int)a1);
      Pool2 = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *)P;
    }
  }
  else
  {
    a2 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)a1;
    v10 = (unsigned int)a1;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)a1 < 0x70 )
    {
LABEL_7:
      CurrentProcess = PsGetCurrentProcess(a1, a2, a3, Pool2);
      v12 = -1073741801;
      WdLogSingleEntry3(3LL, v10, -1073741801LL, CurrentProcess);
      goto LABEL_18;
    }
    Pool2 = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *)ExAllocatePool2(
                                                           256LL,
                                                           112LL * (unsigned int)a1,
                                                           1265072196LL,
                                                           Pool2);
    P = Pool2;
  }
  v20 = v9;
  v10 = v9;
  if ( !Pool2 )
    goto LABEL_7;
  if ( (_DWORD)v9 )
  {
    p_LayerIndex = &Pool2->LayerIndex;
    v14 = (char *)v8 - (char *)v7;
    do
    {
      a3 = *(void ***)((char *)v7 + v14);
      *(_QWORD *)(p_LayerIndex - 3) = *v7;
      *(p_LayerIndex - 1) = *((_DWORD *)a3 + 4);
      *p_LayerIndex = *(_DWORD *)a3;
      *(_OWORD *)(p_LayerIndex + 2) = *(_OWORD *)((char *)a3[3] + 4);
      *(_OWORD *)(p_LayerIndex + 6) = *(_OWORD *)((char *)a3[3] + 20);
      *(_OWORD *)(p_LayerIndex + 10) = *(_OWORD *)((char *)a3[3] + 36);
      p_LayerIndex[14] = *((_DWORD *)a3[3] + 13);
      p_LayerIndex[17] = *((_DWORD *)a3[3] + 18);
      p_LayerIndex[1] ^= (p_LayerIndex[1] ^ *(_DWORD *)a3[3]) & 1;
      p_LayerIndex[1] ^= ((unsigned __int8)p_LayerIndex[1] ^ (unsigned __int8)*(_DWORD *)a3[3]) & 2;
      p_LayerIndex[15] ^= (p_LayerIndex[15] ^ *((_DWORD *)a3[3] + 14)) & 1;
      if ( *((_DWORD *)a3[3] + 19) == 1 )
      {
        p_LayerIndex[22] = 1;
      }
      else if ( *((_DWORD *)a3[3] + 19) == 2 )
      {
        p_LayerIndex[22] = 2;
      }
      ++v7;
      p_LayerIndex += 28;
      --v10;
    }
    while ( v10 );
  }
  *(&v17.PlaneCount + 1) = 0;
  *(_QWORD *)&v17.Supported = 0LL;
  v17.PlaneCount = v9;
  v17.pPlanes = Pool2;
  v15 = ADAPTER_DISPLAY::DdiCheckMultiPlaneOverlaySupport2(v6, &v17, (__int64)a3);
  if ( v15 >= 0 )
  {
    *a5 = v17.Supported;
    a6->0 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO::$43CBAF6548F05A2D98998924C7DC2020::$7E5D53739D5A0755634D9029F4E2827E)v17.ReturnInfo.0;
  }
  v12 = v15;
LABEL_18:
  if ( P != v19 && P )
    ExFreePoolWithTag(P, 0);
  return v12;
}
