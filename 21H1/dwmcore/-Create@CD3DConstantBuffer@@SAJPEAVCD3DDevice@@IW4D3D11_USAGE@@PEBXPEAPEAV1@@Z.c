/*
 * XREFs of ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x1800A2C50
 * Callers:
 *     ?CreateResource@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x1800A2C00 (-CreateResource@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DConstantBuffer@@@Z.c)
 *     ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE$0?0@gsl@@I@Z @ 0x18024984C (-SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV-$span@$$CBE$0-0@gsl@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Initialize@CD3DConstantBuffer@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11Buffer@@@Z @ 0x1800A2D84 (-Initialize@CD3DConstantBuffer@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11Buffer@@@Z.c)
 *     ?CreateBuffer@CD3DDevice@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Buffer@@@Z @ 0x1800A2E58 (-CreateBuffer@CD3DDevice@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11B.c)
 *     ??0CD3DConstantBuffer@@IEAA@XZ @ 0x1800A2EB4 (--0CD3DConstantBuffer@@IEAA@XZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C9A60 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DConstantBuffer::Create(
        struct CD3DDevice *this,
        UINT a2,
        enum D3D11_USAGE a3,
        const void *a4,
        struct CD3DConstantBuffer **a5)
{
  CD3DConstantBuffer *v8; // rax
  __int64 v9; // rcx
  CD3DConstantBuffer *v10; // rbx
  volatile signed __int32 *v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi
  unsigned int v16; // [rsp+20h] [rbp-50h]
  struct ID3D11Buffer *v17; // [rsp+30h] [rbp-40h] BYREF
  const void *v18; // [rsp+38h] [rbp-38h] BYREF
  int v19; // [rsp+40h] [rbp-30h]
  int v20; // [rsp+44h] [rbp-2Ch]
  struct D3D11_BUFFER_DESC v21; // [rsp+48h] [rbp-28h] BYREF

  v17 = 0LL;
  v8 = (CD3DConstantBuffer *)DefaultHeap::Alloc(0x90uLL);
  v10 = v8;
  if ( v8 )
  {
    memset_0(v8, 0, 0x90uLL);
    v11 = (volatile signed __int32 *)CD3DConstantBuffer::CD3DConstantBuffer(v10);
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    _InterlockedIncrement(v11 + 2);
    v21.MiscFlags = 0;
    v21.StructureByteStride = 0;
    v19 = 0;
    v20 = 0;
    v18 = a4;
    v21.BindFlags = 4;
    v21.ByteWidth = a2;
    v21.Usage = D3D11_USAGE_DYNAMIC;
    v21.CPUAccessFlags = 0x10000;
    v12 = CD3DDevice::CreateBuffer(
            this,
            &v21,
            (const struct D3D11_SUBRESOURCE_DATA *)((unsigned __int64)&v18 & -(__int64)(a4 != 0LL)),
            &v17);
    v14 = v12;
    if ( v12 < 0 )
    {
      v16 = 49;
    }
    else
    {
      v12 = CD3DConstantBuffer::Initialize(
              (CD3DConstantBuffer *)v11,
              (struct CD3DDevice *)((char *)this + 1136),
              a2,
              v17);
      v14 = v12;
      if ( v12 >= 0 )
      {
        *a5 = (struct CD3DConstantBuffer *)v11;
        v11 = 0LL;
        goto LABEL_7;
      }
      v16 = 51;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, v16, 0LL);
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x1Du, 0LL);
  }
LABEL_7:
  if ( v17 )
    ((void (__fastcall *)(struct ID3D11Buffer *))v17->lpVtbl->Release)(v17);
  if ( v11 )
    CMILPoolResource::Release((CMILPoolResource *)v11);
  return v14;
}
