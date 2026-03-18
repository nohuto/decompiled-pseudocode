/*
 * XREFs of ?Initialize@CD3DConstantBuffer@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11Buffer@@@Z @ 0x18003B24C
 * Callers:
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x18003B108 (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800D5E60 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x180277788 (-AddHwProtectedResource@CD2DContext@@IEAAXXZ.c)
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

  *((_QWORD *)this + 3) = a2;
  *((_DWORD *)this + 16) = a3;
  v5 = (CD3DConstantBuffer *)((char *)this + 32);
  *((_BYTE *)this + 70) = 1;
  v9 = (struct CD3DResourceManager **)*((_QWORD *)a2 + 5);
  if ( *v9 != (struct CD3DResourceManager *)((char *)a2 + 32) )
    __fastfail(3u);
  *(_QWORD *)v5 = (char *)a2 + 32;
  *((_QWORD *)v5 + 1) = v9;
  *v9 = v5;
  *((_QWORD *)a2 + 5) = v5;
  if ( (*(unsigned __int8 (__fastcall **)(CD3DConstantBuffer *))(*(_QWORD *)this + 24LL))(this) )
    *((_BYTE *)this + 69) = 1;
  if ( *((_BYTE *)this + 68) )
  {
    *((_BYTE *)this + 68) = 1;
    ++*((_DWORD *)a2 + 18);
    if ( *((_BYTE *)this + 69) )
      CD2DContext::AddHwProtectedResource((CD2DContext *)(*((_QWORD *)a2 + 10) + 16LL));
  }
  *((_DWORD *)a2 + 12) += *((_DWORD *)this + 16);
  v10 = *((_DWORD *)a2 + 12);
  if ( *((_DWORD *)a2 + 13) < v10 )
    *((_DWORD *)a2 + 13) = v10;
  if ( *((struct ID3D11Buffer **)this + 12) != a4 )
  {
    v12 = a4;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v12);
    v12 = (struct ID3D11Buffer *)*((_QWORD *)this + 12);
    *((_QWORD *)this + 12) = a4;
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v12);
  }
  result = 0LL;
  *((_DWORD *)this + 26) = a3;
  return result;
}
