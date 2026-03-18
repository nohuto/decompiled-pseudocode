/*
 * XREFs of ?Push@?$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilDepthMode@@@Z @ 0x1800CFF14
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180091060 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x1800CF85C (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800438FC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<enum MilDepthMode::Enum,64,2,10>::Push(unsigned int *a1, _DWORD *a2)
{
  void *v2; // rsi
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // ebx
  unsigned __int64 v9; // rbp
  int v10; // eax
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  void *v13; // rbx
  void *v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  v14 = 0LL;
  v5 = *a1;
  if ( *a1 != a1[1] )
    goto LABEL_2;
  v9 = 2LL * a1[1];
  if ( v9 > 0xFFFFFFFF )
  {
    v7 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0LL, -2147024362, 0x64u);
    goto LABEL_5;
  }
  if ( (unsigned int)v9 <= 0x40 )
    LODWORD(v9) = 64;
  v10 = HrMalloc(4uLL, (unsigned int)v9, &v14);
  v7 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x6Bu);
    goto LABEL_14;
  }
  v12 = 4LL * *a1;
  if ( v12 > 0xFFFFFFFF )
  {
    v7 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, -2147024362, 0x6Du);
LABEL_14:
    v2 = v14;
    goto LABEL_5;
  }
  v13 = v14;
  memcpy_0(v14, *((const void **)a1 + 2), (unsigned int)v12);
  DefaultHeap::Free(*((void **)a1 + 2));
  v5 = *a1;
  *((_QWORD *)a1 + 2) = v13;
  a1[1] = v9;
LABEL_2:
  *(_DWORD *)(*((_QWORD *)a1 + 2) + 4LL * v5) = *a2;
  ++*a1;
  v6 = a1[6];
  if ( v6 <= *a1 )
    v6 = *a1;
  v7 = 0;
  a1[6] = v6;
LABEL_5:
  DefaultHeap::Free(v2);
  return v7;
}
