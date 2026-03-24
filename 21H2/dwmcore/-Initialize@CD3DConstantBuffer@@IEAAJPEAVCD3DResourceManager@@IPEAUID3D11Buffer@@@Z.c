/*
 * XREFs of ?Initialize@CD3DConstantBuffer@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11Buffer@@@Z @ 0x18002C0D0
 * Callers:
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x18002BF9C (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A9824 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C930C (-InternalRelease@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?AddHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x18023B18C (-AddHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 */

__int64 __fastcall CD3DConstantBuffer::Initialize(
        CD3DConstantBuffer *this,
        struct CD3DResourceManager *a2,
        int a3,
        struct ID3D11Buffer *a4)
{
  struct CD3DResourceManager *v5; // rdx
  struct CD3DResourceManager **v9; // rcx
  unsigned int v10; // eax
  __int64 result; // rax
  struct ID3D11Buffer *v12; // [rsp+30h] [rbp+8h] BYREF

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 20) = a3;
  v5 = (CD3DConstantBuffer *)((char *)this + 40);
  *((_BYTE *)this + 86) = 1;
  v9 = (struct CD3DResourceManager **)*((_QWORD *)a2 + 5);
  if ( *v9 != (struct CD3DResourceManager *)((char *)a2 + 32) )
    __fastfail(3u);
  *(_QWORD *)v5 = (char *)a2 + 32;
  *((_QWORD *)v5 + 1) = v9;
  *v9 = v5;
  *((_QWORD *)a2 + 5) = v5;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 24LL))((char *)this + 24) )
    *((_BYTE *)this + 85) = 1;
  if ( *((_BYTE *)this + 84) )
  {
    *((_BYTE *)this + 84) = 1;
    ++*((_DWORD *)a2 + 18);
    if ( *((_BYTE *)this + 85) )
      CD2DContext::AddHwProtectedResource((CD2DContext *)(*((_QWORD *)a2 + 10) + 16LL));
  }
  *((_DWORD *)a2 + 12) += *((_DWORD *)this + 20);
  v10 = *((_DWORD *)a2 + 12);
  if ( *((_DWORD *)a2 + 13) < v10 )
    *((_DWORD *)a2 + 13) = v10;
  if ( *((struct ID3D11Buffer **)this + 14) != a4 )
  {
    v12 = a4;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v12);
    v12 = (struct ID3D11Buffer *)*((_QWORD *)this + 14);
    *((_QWORD *)this + 14) = a4;
    Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v12);
  }
  result = 0LL;
  *((_DWORD *)this + 30) = a3;
  return result;
}
