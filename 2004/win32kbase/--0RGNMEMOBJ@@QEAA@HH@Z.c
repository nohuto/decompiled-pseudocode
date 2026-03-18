/*
 * XREFs of ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C0015040
 * Callers:
 *     NtGdiCreateRectRgn @ 0x1C0014A40 (NtGdiCreateRectRgn.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C0014FA0 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     GreCreateRectRgn @ 0x1C014F830 (GreCreateRectRgn.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0081030 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C01426FC (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

RGNMEMOBJ *__fastcall RGNMEMOBJ::RGNMEMOBJ(RGNMEMOBJ *this, __int64 a2, int a3)
{
  __int64 v4; // rbx
  void *v5; // rsi
  int v6; // eax
  __int64 v7; // rax
  _QWORD *v8; // rax

  *((_DWORD *)this + 2) = 0;
  if ( a3 == 1 )
  {
    if ( gpTypeIsolation[7] )
      v4 = NSInstrumentation::CTypeIsolation<28672,112>::Allocate();
    else
      v4 = 0LL;
    if ( v4 )
    {
      v5 = RGNMEMOBJ::s_pSCANLookAsideList;
      v6 = qword_1C0252C50 ? qword_1C0252C50() : -1073741637;
      v7 = v6 >= 0 && qword_1C0252C58 ? qword_1C0252C58(v5) : 0LL;
      *(_QWORD *)(v4 + 88) = v7;
      if ( !v7 )
      {
        REGION::vDeleteREGION((REGION *)v4);
        v4 = 0LL;
      }
    }
    *(_QWORD *)this = v4;
    if ( v4 )
    {
      *(_DWORD *)(v4 + 24) = 112;
      *(_DWORD *)(*(_QWORD *)this + 80LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
      v8 = (_QWORD *)(*(_QWORD *)this + 48LL);
      v8[1] = v8;
      *v8 = v8;
    }
  }
  else
  {
    *(_QWORD *)this = 0LL;
  }
  return this;
}
