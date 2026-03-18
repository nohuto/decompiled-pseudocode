/*
 * XREFs of ?UpdateIndependentFlipState@CCompositionSwapchainBuffer@@IEAA_NAEBVCFlipContentToken@@@Z @ 0x1C00835B8
 * Callers:
 *     ?NotifyFlipContentTokenInFrame@CCompositionSwapchainBuffer@@IEAAJPEBVCFlipContentToken@@PEA_N@Z @ 0x1C0083154 (-NotifyFlipContentTokenInFrame@CCompositionSwapchainBuffer@@IEAAJPEBVCFlipContentToken@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSwapchainBuffer::UpdateIndependentFlipState(
        CCompositionSwapchainBuffer *this,
        const struct CFlipContentToken *a2)
{
  int v2; // eax
  char v3; // bl

  v2 = *((_DWORD *)this + 96);
  v3 = 0;
  if ( v2 == -1 )
    return 1;
  if ( v2 == 1 )
  {
    if ( *((_BYTE *)a2 + 306) )
    {
      *((_DWORD *)this + 96) = -1;
    }
    else
    {
      if ( !*((_BYTE *)a2 + 305) || *((_QWORD *)a2 + 41) != *((_QWORD *)this + 67) )
        return v3;
      *((_DWORD *)this + 96) = 2;
    }
    return 1;
  }
  if ( (unsigned int)(v2 - 3) > 1 )
    return v3;
  if ( !(*(unsigned __int8 (__fastcall **)(const struct CFlipContentToken *))(*(_QWORD *)a2 + 144LL))(a2) )
  {
    *((_DWORD *)this + 96) = -1;
    return 1;
  }
  *((_DWORD *)this + 96) = 4;
  if ( !(*(unsigned __int8 (__fastcall **)(const struct CFlipContentToken *))(*(_QWORD *)a2 + 144LL))(a2)
    || *((_BYTE *)a2 + 307)
    || (*(unsigned __int8 (__fastcall **)(CCompositionSwapchainBuffer *))(*(_QWORD *)this + 192LL))(this) )
  {
    return 1;
  }
  return v3;
}
