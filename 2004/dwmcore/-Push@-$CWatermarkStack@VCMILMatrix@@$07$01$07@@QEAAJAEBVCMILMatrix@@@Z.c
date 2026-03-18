/*
 * XREFs of ?Push@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z @ 0x180082F14
 * Callers:
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800828C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x1800AA9A4 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800AAF50 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     memcpy_0 @ 0x1800EED1B (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CMILMatrix,8,2,8>::Push(unsigned int *a1, __int64 a2)
{
  void *v2; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // eax
  unsigned int v9; // ebx
  unsigned __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  void *v15; // rbx
  void *v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  v16 = 0LL;
  v5 = *a1;
  if ( (_DWORD)v5 != a1[1] )
    goto LABEL_2;
  v11 = 2LL * a1[1];
  if ( v11 > 0xFFFFFFFF )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024362, 0x4Cu, 0LL);
    goto LABEL_5;
  }
  if ( (unsigned int)v11 <= 8 )
    LODWORD(v11) = 8;
  v12 = HrMalloc(0x44uLL, (unsigned int)v11, &v16);
  v9 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x53u, 0LL);
    goto LABEL_14;
  }
  v14 = 68LL * *a1;
  if ( v14 > 0xFFFFFFFF )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024362, 0x55u, 0LL);
LABEL_14:
    v2 = v16;
    goto LABEL_5;
  }
  v15 = v16;
  memcpy_0(v16, *((const void **)a1 + 2), (unsigned int)v14);
  operator delete(*((void **)a1 + 2));
  v5 = *a1;
  *((_QWORD *)a1 + 2) = v15;
  a1[1] = v11;
LABEL_2:
  v6 = *((_QWORD *)a1 + 2);
  v7 = 68 * v5;
  *(_OWORD *)(v7 + v6) = *(_OWORD *)a2;
  *(_OWORD *)(v7 + v6 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(v7 + v6 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(v7 + v6 + 48) = *(_OWORD *)(a2 + 48);
  *(_DWORD *)(v7 + v6 + 64) = *(_DWORD *)(a2 + 64);
  ++*a1;
  v8 = a1[6];
  if ( v8 <= *a1 )
    v8 = *a1;
  v9 = 0;
  a1[6] = v8;
LABEL_5:
  operator delete(v2);
  return v9;
}
