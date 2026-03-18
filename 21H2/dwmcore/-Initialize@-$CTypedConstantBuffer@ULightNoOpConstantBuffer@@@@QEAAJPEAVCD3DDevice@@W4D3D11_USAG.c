/*
 * XREFs of ?Initialize@?$CTypedConstantBuffer@ULightNoOpConstantBuffer@@@@QEAAJPEAVCD3DDevice@@W4D3D11_USAGE@@@Z @ 0x1800F6B88
 * Callers:
 *     ?Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDevice@@@Z @ 0x18003C908 (-Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ?Initialize@CTypedConstantBufferBase@@IEAAJPEAVCD3DDevice@@AEBUD3D11_BUFFER_DESC@@AEBUD3D11_SUBRESOURCE_DATA@@@Z @ 0x18003B8BC (-Initialize@CTypedConstantBufferBase@@IEAAJPEAVCD3DDevice@@AEBUD3D11_BUFFER_DESC@@AEBUD3D11_SUBR.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CTypedConstantBuffer<LightNoOpConstantBuffer>::Initialize(
        struct ID3D11Buffer **a1,
        struct CD3DDevice *a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rcx
  struct D3D11_SUBRESOURCE_DATA v6; // [rsp+30h] [rbp-38h] BYREF
  struct D3D11_BUFFER_DESC v7; // [rsp+40h] [rbp-28h] BYREF

  v2 = 0;
  if ( !*a1 )
  {
    v7.CPUAccessFlags = 0;
    v7.MiscFlags = 0;
    v7.StructureByteStride = 0;
    *(_QWORD *)&v6.SysMemPitch = 0LL;
    v6.pSysMem = a1 + 2;
    v7.ByteWidth = 272;
    v7.Usage = D3D11_USAGE_IMMUTABLE;
    v7.BindFlags = 4;
    v3 = CTypedConstantBufferBase::Initialize(a1, a2, &v7, &v6);
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0LL, v3, 0x44u);
  }
  return v2;
}
