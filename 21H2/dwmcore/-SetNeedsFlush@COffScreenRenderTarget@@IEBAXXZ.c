/*
 * XREFs of ?SetNeedsFlush@COffScreenRenderTarget@@IEBAXXZ @ 0x180185DA4
 * Callers:
 *     ?Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800ED26C (-Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall COffScreenRenderTarget::SetNeedsFlush(COffScreenRenderTarget *this)
{
  __int64 i; // rbx
  __int64 v3; // rdx
  int (__fastcall ***v4)(_QWORD); // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 450); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 222) + 8 * i);
    v4 = (int (__fastcall ***)(_QWORD))(v3 + 8 + *(int *)(*(_QWORD *)(v3 + 8) + 8LL));
    if ( (**v4)(v4) >= 0 )
    {
      v5 = *(_QWORD *)(*((_QWORD *)this + 222) + 8 * i);
      v6 = v5 + 8 + *(int *)(*(_QWORD *)(v5 + 8) + 8LL);
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      if ( *(int *)(v7 + 1128) >= 0 )
        *(_BYTE *)(v7 + 1435) = 1;
    }
  }
}
