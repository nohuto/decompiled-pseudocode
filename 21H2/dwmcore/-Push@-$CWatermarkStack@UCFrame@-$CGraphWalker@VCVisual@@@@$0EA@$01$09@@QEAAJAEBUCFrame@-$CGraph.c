/*
 * XREFs of ?Push@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCVisual@@@@$0EA@$01$09@@QEAAJAEBUCFrame@?$CGraphWalker@VCVisual@@@@@Z @ 0x1800158F0
 * Callers:
 *     ?GotoFirstChild@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x180015800 (-GotoFirstChild@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV-$vector@PEAVCVisual@@V-$all.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x180042320 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800F47DB (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CGraphWalker<CVisual>::CFrame,64,2,10>::Push(unsigned int *a1, _OWORD *a2)
{
  void *v2; // rsi
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // ebx
  unsigned __int64 v9; // rbp
  int v10; // eax
  unsigned int v11; // ecx
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
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, -2147024362, 0x4Cu, 0LL);
    goto LABEL_5;
  }
  if ( (unsigned int)v9 <= 0x40 )
    LODWORD(v9) = 64;
  v10 = HrMalloc(0x10uLL, (unsigned int)v9, &v14);
  v7 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x53u, 0LL);
    goto LABEL_14;
  }
  v12 = 16LL * *a1;
  if ( v12 > 0xFFFFFFFF )
  {
    v7 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024362, 0x55u, 0LL);
LABEL_14:
    v2 = v14;
    goto LABEL_5;
  }
  v13 = v14;
  memcpy_0(v14, *((const void **)a1 + 2), (unsigned int)v12);
  operator delete(*((void **)a1 + 2));
  v5 = *a1;
  *((_QWORD *)a1 + 2) = v13;
  a1[1] = v9;
LABEL_2:
  *(_OWORD *)(*((_QWORD *)a1 + 2) + 16LL * v5) = *a2;
  ++*a1;
  v6 = a1[6];
  if ( v6 <= *a1 )
    v6 = *a1;
  v7 = 0;
  a1[6] = v6;
LABEL_5:
  operator delete(v2);
  return v7;
}
