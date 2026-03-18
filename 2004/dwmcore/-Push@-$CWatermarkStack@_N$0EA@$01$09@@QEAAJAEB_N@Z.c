/*
 * XREFs of ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x180179398
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800678C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18019B114 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18019B304 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800AAF50 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     memcpy_0 @ 0x1800EED1B (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<bool,64,2,10>::Push(const void **a1, _BYTE *a2)
{
  unsigned int v2; // eax
  void *v3; // rbp
  unsigned __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  void *v10; // rbx
  unsigned int v11; // eax
  void *v13; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_DWORD *)a1;
  v3 = 0LL;
  v13 = 0LL;
  if ( v2 == *((_DWORD *)a1 + 1) )
  {
    v6 = 2LL * *((unsigned int *)a1 + 1);
    if ( v6 > 0xFFFFFFFF )
    {
      v9 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024362, 0x4Cu, 0LL);
      goto LABEL_10;
    }
    if ( (unsigned int)v6 <= 0x40 )
      LODWORD(v6) = 64;
    v7 = HrMalloc(1uLL, (unsigned int)v6, &v13);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x53u, 0LL);
      v3 = v13;
      goto LABEL_10;
    }
    v10 = v13;
    memcpy_0(v13, a1[2], *(unsigned int *)a1);
    operator delete((void *)a1[2]);
    v2 = *(_DWORD *)a1;
    a1[2] = v10;
    *((_DWORD *)a1 + 1) = v6;
  }
  *((_BYTE *)a1[2] + v2) = *a2;
  ++*(_DWORD *)a1;
  v11 = *((_DWORD *)a1 + 6);
  if ( v11 <= *(_DWORD *)a1 )
    v11 = *(_DWORD *)a1;
  v9 = 0;
  *((_DWORD *)a1 + 6) = v11;
LABEL_10:
  operator delete(v3);
  return v9;
}
