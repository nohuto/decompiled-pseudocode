/*
 * XREFs of ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE$0?0@gsl@@I@Z @ 0x18028A70C
 * Callers:
 *     ?ComputeLanczosKernel@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x1801DCF5C (-ComputeLanczosKernel@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 *     ?FillLanczosUpBuffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x1801DD410 (-FillLanczosUpBuffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 *     ?FillXBRPass1Buffer@@YAJPEAVCSurfaceShaderComposer@@II@Z @ 0x1801DD4E0 (-FillXBRPass1Buffer@@YAJPEAVCSurfaceShaderComposer@@II@Z.c)
 *     ?FillXBRPass2Buffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x1801DD588 (-FillXBRPass2Buffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 *     ?UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z @ 0x18028A7E8 (-UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z.c)
 * Callees:
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x18003B108 (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@@@IEAAKXZ @ 0x1800EC208 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@@@IEAAKXZ.c)
 *     ?SetData@CD3DConstantBuffer@@QEAAJV?$span@$$CBE$0?0@gsl@@@Z @ 0x180294844 (-SetData@CD3DConstantBuffer@@QEAAJV-$span@$$CBE$0-0@gsl@@@Z.c)
 */

__int64 __fastcall CSurfaceShaderComposer::SetScratchConstantBuffer(__int64 a1, const void **a2, enum D3D11_USAGE a3)
{
  UINT v3; // ebp
  struct CD3DConstantBuffer **v4; // rbx
  __int64 v7; // rcx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  struct CD3DConstantBuffer *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int128 v16; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_DWORD *)a2;
  v4 = (struct CD3DConstantBuffer **)(a1 + 104);
  v7 = *(_QWORD *)(a1 + 104);
  if ( !v7 )
  {
LABEL_6:
    v12 = *v4;
    if ( *v4 )
    {
      *v4 = 0LL;
      CMILRefCountBaseT<IDeviceResource>::InternalRelease((volatile signed __int32 *)v12);
    }
    v13 = CD3DConstantBuffer::Create(*(struct CD3DDevice **)(a1 + 120), v3, a3, a2[1], v4);
    v11 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0x1D5u);
      return v11;
    }
    goto LABEL_9;
  }
  if ( *(_DWORD *)(v7 + 104) < v3 )
  {
    *v4 = 0LL;
    CMILRefCountBaseT<IDeviceResource>::InternalRelease((volatile signed __int32 *)v7);
    goto LABEL_6;
  }
  v16 = *(_OWORD *)a2;
  v9 = CD3DConstantBuffer::SetData(v7, &v16);
  v11 = v9;
  if ( v9 >= 0 )
  {
LABEL_9:
    *(_DWORD *)(a1 + 112) = a3;
    return v11;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x1D9u);
  return v11;
}
