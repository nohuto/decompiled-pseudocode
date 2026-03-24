/*
 * XREFs of _lambda_4498cf4aa093f7a41b3920419f3e92d9_::operator() @ 0x1C025ACFC
 * Callers:
 *     _lambda_4498cf4aa093f7a41b3920419f3e92d9_::_lambda_invoker_cdecl_ @ 0x1C025A900 (_lambda_4498cf4aa093f7a41b3920419f3e92d9_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00065B8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000D178 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0019DF8 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     DxgkInvalidateDeviceState @ 0x1C00527C8 (DxgkInvalidateDeviceState.c)
 */

__int64 __fastcall lambda_4498cf4aa093f7a41b3920419f3e92d9_::operator()(__int64 a1, __int64 a2, unsigned int *a3)
{
  struct _LUID *v5; // rdx
  int v6; // r9d
  unsigned int v7; // eax
  void *v8; // rbx
  int v10; // [rsp+20h] [rbp-30h]
  _BYTE v11[8]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+38h] [rbp-18h]
  char v13; // [rsp+40h] [rbp-10h]
  __int64 v14; // [rsp+60h] [rbp+10h] BYREF

  v14 = a1;
  v12 = a2;
  v13 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
  if ( (*(_DWORD *)(a2 + 348) & 0x100) != 0 && !*(_BYTE *)(a2 + 2609) && *(_DWORD *)(a2 + 200) == 1 )
  {
    LODWORD(v14) = 0;
    if ( DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)a2, v5, (unsigned int *)&v14, 0LL) )
    {
      v7 = *a3;
      if ( (_DWORD)v14 == *a3 )
      {
        LODWORD(v14) = v6 & v14;
        HIDWORD(v14) &= v6;
        DxgkLogCodePointPacketForSession(0x71u, v7, *(_DWORD *)(a2 + 320), *(_DWORD *)(a2 + 316), v6 & v10, v14);
        v8 = *(void **)(a2 + 216);
        ObfReferenceObject(v8);
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
        DxgkInvalidateDeviceState((__int64)v8);
        ObfDereferenceObject(v8);
      }
    }
  }
  if ( v13 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
  return 0LL;
}
