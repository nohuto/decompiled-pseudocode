/*
 * XREFs of ?NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z @ 0x1C001C3FC
 * Callers:
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C001C388 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0004758 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::NotifyTokenInFrame(
        CCompositionSurface *this,
        const struct CToken *a2,
        bool *a3)
{
  int Buffer; // ebp
  __int64 v6; // r11
  struct CCompositionBuffer *v7; // rsi
  CCompositionSurface *v8; // rbx
  CCompositionSurface *v10; // rax
  void (__fastcall ***v11)(_QWORD, __int64); // rcx
  CCompositionSurface *v12; // r8
  CCompositionSurface **v13; // rdx
  struct CCompositionBuffer *v14; // [rsp+38h] [rbp+10h] BYREF

  v14 = 0LL;
  *a3 = 0;
  Buffer = CCompositionSurface::FindBuffer(this, *((_QWORD *)a2 + 5), &v14);
  if ( Buffer >= 0 )
  {
    v7 = v14;
    Buffer = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, __int64, bool *))(*(_QWORD *)v14 + 120LL))(
               v14,
               v6,
               a3);
    if ( Buffer >= 0 && *a3 )
    {
      v8 = (CCompositionSurface *)*((_QWORD *)v7 + 3);
      while ( v8 != (CCompositionSurface *)((char *)this + 64) )
      {
        v10 = *(CCompositionSurface **)v8;
        v11 = (void (__fastcall ***)(_QWORD, __int64))((char *)v8 - 24);
        v12 = v8;
        v8 = v10;
        if ( *((CCompositionSurface **)v10 + 1) != v12
          || (v13 = (CCompositionSurface **)*((_QWORD *)v12 + 1), *v13 != v12) )
        {
          __fastfail(3u);
        }
        *v13 = v10;
        *((_QWORD *)v10 + 1) = v13;
        --*((_DWORD *)this + 20);
        if ( v11 )
          (**v11)(v11, 1LL);
      }
    }
  }
  return (unsigned int)Buffer;
}
