/*
 * XREFs of ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x18003B108
 * Callers:
 *     ?CreateResource@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x18003B0B8 (-CreateResource@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DConstantBuffer@@@Z.c)
 *     ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE$0?0@gsl@@I@Z @ 0x18028A70C (-SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV-$span@$$CBE$0-0@gsl@@I@Z.c)
 * Callees:
 *     ?Initialize@CD3DConstantBuffer@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11Buffer@@@Z @ 0x18003B24C (-Initialize@CD3DConstantBuffer@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11Buffer@@@Z.c)
 *     ?CreateBuffer@CD3DDevice@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Buffer@@@Z @ 0x18003B328 (-CreateBuffer@CD3DDevice@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11B.c)
 *     ??0CD3DConstantBuffer@@IEAA@XZ @ 0x18003B38C (--0CD3DConstantBuffer@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@@@IEAAKXZ @ 0x1800EC208 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DConstantBuffer::Create(
        struct CD3DDevice *this,
        UINT a2,
        enum D3D11_USAGE a3,
        const void *a4,
        struct CD3DConstantBuffer **a5)
{
  CD3DConstantBuffer *v8; // rax
  unsigned int v9; // ecx
  CD3DConstantBuffer *v10; // rbx
  CD3DConstantBuffer *v11; // rax
  CD3DConstantBuffer *v12; // rbx
  int v13; // eax
  unsigned int v14; // edi
  int v16; // r9d
  unsigned int v17; // [rsp+20h] [rbp-50h]
  struct ID3D11Buffer *v18; // [rsp+30h] [rbp-40h] BYREF
  const void *v19; // [rsp+38h] [rbp-38h] BYREF
  int v20; // [rsp+40h] [rbp-30h]
  int v21; // [rsp+44h] [rbp-2Ch]
  D3D11_BUFFER_DESC v22; // [rsp+48h] [rbp-28h] BYREF

  v18 = 0LL;
  v8 = (CD3DConstantBuffer *)DefaultHeap::Alloc(0x80uLL);
  v10 = v8;
  if ( !v8 )
  {
    v12 = 0LL;
    goto LABEL_15;
  }
  memset_0(v8, 0, 0x80uLL);
  v11 = CD3DConstantBuffer::CD3DConstantBuffer(v10);
  v12 = v11;
  if ( !v11 )
  {
LABEL_15:
    v14 = -2147024882;
    v16 = -2147024882;
    v17 = 29;
    goto LABEL_16;
  }
  CMILRefCountImpl::AddReference((CD3DConstantBuffer *)((char *)v11 + 16));
  v22.MiscFlags = 0;
  v22.StructureByteStride = 0;
  v20 = 0;
  v21 = 0;
  v19 = a4;
  v22.BindFlags = 4;
  v22.ByteWidth = a2;
  v22.Usage = D3D11_USAGE_DYNAMIC;
  v22.CPUAccessFlags = 0x10000;
  v13 = CD3DDevice::CreateBuffer(
          this,
          &v22,
          (const struct D3D11_SUBRESOURCE_DATA *)((unsigned __int64)&v19 & -(__int64)(a4 != 0LL)),
          &v18);
  v14 = v13;
  if ( v13 < 0 )
  {
    v17 = 49;
  }
  else
  {
    v13 = CD3DConstantBuffer::Initialize(v12, (struct CD3DDevice *)((char *)this + 1104), a2, v18);
    v14 = v13;
    if ( v13 >= 0 )
    {
      *a5 = v12;
      v12 = 0LL;
      goto LABEL_6;
    }
    v17 = 51;
  }
  v16 = v13;
LABEL_16:
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v16, v17, 0LL);
LABEL_6:
  if ( v18 )
    ((void (__fastcall *)(struct ID3D11Buffer *))v18->lpVtbl->Release)(v18);
  if ( v12 )
    CMILRefCountBaseT<IDeviceResource>::InternalRelease(v12);
  return v14;
}
