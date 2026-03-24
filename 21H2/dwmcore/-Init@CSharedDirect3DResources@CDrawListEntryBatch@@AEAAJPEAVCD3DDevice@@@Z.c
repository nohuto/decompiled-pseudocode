/*
 * XREFs of ?Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDevice@@@Z @ 0x18002B808
 * Callers:
 *     ?Create@CSharedDirect3DResources@CDrawListEntryBatch@@SAJPEAVCD3DDevice@@PEAPEAV12@@Z @ 0x18002B570 (-Create@CSharedDirect3DResources@CDrawListEntryBatch@@SAJPEAVCD3DDevice@@PEAPEAV12@@Z.c)
 * Callees:
 *     ?Initialize@?$CTypedConstantBuffer@ULightNoOpConstantBuffer@@@@QEAAJPEAVCD3DDevice@@W4D3D11_USAGE@@@Z @ 0x18002B604 (-Initialize@-$CTypedConstantBuffer@ULightNoOpConstantBuffer@@@@QEAAJPEAVCD3DDevice@@W4D3D11_USAG.c)
 *     ?Initialize@?$CTypedConstantBuffer@ULightPSConstantBuffer@@@@QEAAJPEAVCD3DDevice@@W4D3D11_USAGE@@@Z @ 0x18002B688 (-Initialize@-$CTypedConstantBuffer@ULightPSConstantBuffer@@@@QEAAJPEAVCD3DDevice@@W4D3D11_USAGE@.c)
 *     ?Initialize@?$CTypedConstantBuffer@ULightVSConstantBuffer@@@@QEAAJPEAVCD3DDevice@@W4D3D11_USAGE@@@Z @ 0x18002B708 (-Initialize@-$CTypedConstantBuffer@ULightVSConstantBuffer@@@@QEAAJPEAVCD3DDevice@@W4D3D11_USAGE@.c)
 *     ?Initialize@?$CTypedConstantBuffer@M@@QEAAJPEAVCD3DDevice@@W4D3D11_USAGE@@@Z @ 0x18002B788 (-Initialize@-$CTypedConstantBuffer@M@@QEAAJPEAVCD3DDevice@@W4D3D11_USAGE@@@Z.c)
 *     ?Initialize@CD3DDynamicAppendBuffer@@QEAAJPEAVCD3DDevice@@I@Z @ 0x18002B960 (-Initialize@CD3DDynamicAppendBuffer@@QEAAJPEAVCD3DDevice@@I@Z.c)
 *     ?Initialize@CTypedConstantBufferBase@@IEAAJPEAVCD3DDevice@@AEBUD3D11_BUFFER_DESC@@AEBUD3D11_SUBRESOURCE_DATA@@@Z @ 0x18002BA80 (-Initialize@CTypedConstantBufferBase@@IEAAJPEAVCD3DDevice@@AEBUD3D11_BUFFER_DESC@@AEBUD3D11_SUBR.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawListEntryBatch::CSharedDirect3DResources::Init(
        CDrawListEntryBatch::CSharedDirect3DResources *this,
        struct CD3DDevice *a2)
{
  int v4; // eax
  unsigned int v5; // ecx
  int v6; // ebx
  struct ID3D11Buffer **v7; // rcx
  int v8; // eax
  unsigned int v10; // [rsp+20h] [rbp-58h]
  D3D11_SUBRESOURCE_DATA v11; // [rsp+30h] [rbp-48h] BYREF
  struct D3D11_BUFFER_DESC v12; // [rsp+40h] [rbp-38h] BYREF

  v4 = CD3DDynamicAppendBuffer::Initialize(
         (CDrawListEntryBatch::CSharedDirect3DResources *)((char *)this + 16),
         a2,
         0x27100u);
  v6 = v4;
  if ( v4 < 0 )
  {
    v10 = 44;
    goto LABEL_21;
  }
  v4 = CD3DDynamicAppendBuffer::Initialize(
         (CDrawListEntryBatch::CSharedDirect3DResources *)((char *)this + 64),
         a2,
         0x3E80u);
  v6 = v4;
  if ( v4 < 0 )
  {
    v10 = 45;
    goto LABEL_21;
  }
  v4 = CD3DDynamicAppendBuffer::Initialize(
         (CDrawListEntryBatch::CSharedDirect3DResources *)((char *)this + 112),
         a2,
         0x3A980u);
  v6 = v4;
  if ( v4 < 0 )
  {
    v10 = 46;
    goto LABEL_21;
  }
  v7 = (struct ID3D11Buffer **)((char *)this + 160);
  v6 = 0;
  if ( !*((_QWORD *)this + 20) )
  {
    *(_QWORD *)&v12.ByteWidth = 192LL;
    v11.pSysMem = (char *)this + 176;
    *(_QWORD *)&v12.BindFlags = 4LL;
    *(_QWORD *)&v12.MiscFlags = 0LL;
    *(_QWORD *)&v11.SysMemPitch = 0LL;
    v8 = CTypedConstantBufferBase::Initialize(v7, a2, &v12, &v11);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v7, 0LL, 0, v8, 0x44u, 0LL);
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v7, 0LL, 0, v6, 0x2Fu, 0LL);
    return (unsigned int)v6;
  }
  v4 = CTypedConstantBuffer<float>::Initialize((struct ID3D11Buffer **)this + 48, a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    v10 = 52;
    goto LABEL_21;
  }
  v4 = CTypedConstantBuffer<LightVSConstantBuffer>::Initialize((struct ID3D11Buffer **)this + 52, a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    v10 = 53;
    goto LABEL_21;
  }
  v4 = CTypedConstantBuffer<LightPSConstantBuffer>::Initialize((struct ID3D11Buffer **)this + 88, a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    v10 = 54;
    goto LABEL_21;
  }
  v4 = CTypedConstantBuffer<LightNoOpConstantBuffer>::Initialize((struct ID3D11Buffer **)this + 120, a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    v10 = 55;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, v10, 0LL);
  }
  return (unsigned int)v6;
}
