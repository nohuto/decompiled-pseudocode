/*
 * XREFs of ?NotifyTokenInFrame@CCompositionSwapchainBuffer@@UEAAJAEBVCToken@@PEA_N@Z @ 0x1C0066680
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z @ 0x1C0065C18 (-NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z.c)
 *     ?UpdateAttributes@CCompositionSwapchainBuffer@@IEAA_NAEBVCFlipContentToken@@@Z @ 0x1C0066754 (-UpdateAttributes@CCompositionSwapchainBuffer@@IEAA_NAEBVCFlipContentToken@@@Z.c)
 */

__int64 __fastcall CCompositionSwapchainBuffer::NotifyTokenInFrame(
        CCompositionSwapchainBuffer *this,
        const struct CToken *a2,
        bool *a3)
{
  int v4; // ebp
  const struct CToken *v7; // rsi
  int v8; // ebx
  unsigned int v9; // ecx
  __int64 v10; // rax

  v4 = 0;
  *a3 = 0;
  v7 = 0LL;
  if ( (*(unsigned int (__fastcall **)(const struct CToken *))(*(_QWORD *)a2 + 64LL))(a2) == 4 )
    v7 = a2;
  else
    v4 = -1073741811;
  v8 = 0;
  if ( v4 < 0 )
    v8 = v4;
  if ( v8 >= 0 )
  {
    v9 = *((_DWORD *)v7 + 24);
    if ( v9 >= *((_DWORD *)this + 60) )
      v8 = -1073741811;
    if ( v8 >= 0 )
    {
      v10 = *((_QWORD *)v7 + 13);
      *((_QWORD *)this + 83) = v10;
      *((_DWORD *)this + 61) = v10;
      if ( *((_DWORD *)this + 87) != v9 )
      {
        *((_DWORD *)this + 87) = v9;
        *a3 = 1;
      }
      if ( CCompositionSwapchainBuffer::UpdateAttributes(this, v7) )
        *a3 = 1;
      CCompositionBuffer::NotifyDirty(
        this,
        *((const struct IRegion **)v7 + 10),
        (const struct CToken *)((char *)v7 + 52));
    }
  }
  return (unsigned int)v8;
}
