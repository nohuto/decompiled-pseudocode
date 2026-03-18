/*
 * XREFs of ?SetStateOnDevice@CWARPDrawListEntry@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1801A65B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetShaderResourceView@CDrawListBitmap@@QEBAPEAUID3D11ShaderResourceView@@PEAUPixelFormatInfo@@@Z @ 0x180047ACC (-GetShaderResourceView@CDrawListBitmap@@QEBAPEAUID3D11ShaderResourceView@@PEAUPixelFormatInfo@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWARPDrawListEntry::SetStateOnDevice(
        CWARPDrawListEntry *this,
        struct CD3DBatchExecutionContext *a2,
        unsigned int *a3)
{
  unsigned int v4; // ebx
  CDrawListBitmap *v5; // rcx
  struct ID3D11ShaderResourceView *ShaderResourceView; // rax
  __int64 v8; // rcx
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  v5 = (CWARPDrawListEntry *)((char *)this + 240);
  if ( *(_OWORD *)v5 != 0LL )
  {
    v10[0] = CDrawListBitmap::GetShaderResourceView(v5, 0LL);
    v4 = 1;
  }
  if ( *((_QWORD *)this + 43) || *((_QWORD *)this + 44) )
  {
    ShaderResourceView = CDrawListBitmap::GetShaderResourceView((CWARPDrawListEntry *)((char *)this + 344), 0LL);
    v8 = v4++;
    v10[v8] = ShaderResourceView;
  }
  if ( v4 )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *))(**((_QWORD **)a2 + 2) + 64LL))(
      *((_QWORD *)a2 + 2),
      0LL,
      v4,
      v10);
  return 0LL;
}
