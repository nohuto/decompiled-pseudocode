/*
 * XREFs of ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C001C070
 * Callers:
 *     <none>
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0081030 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C01426FC (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

RGNMEMOBJ *__fastcall RGNMEMOBJ::RGNMEMOBJ(RGNMEMOBJ *this)
{
  __int64 v2; // rbx
  void *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rax

  *((_DWORD *)this + 2) = 0;
  if ( !gpTypeIsolation[7] )
    goto LABEL_11;
  v2 = NSInstrumentation::CTypeIsolation<28672,112>::Allocate();
  if ( v2 )
  {
    v3 = RGNMEMOBJ::s_pSCANLookAsideList;
    if ( qword_1C0252C50 && (int)qword_1C0252C50() >= 0 && qword_1C0252C58 )
      v4 = qword_1C0252C58(v3);
    else
      v4 = 0LL;
    *(_QWORD *)(v2 + 88) = v4;
    if ( !v4 )
    {
      REGION::vDeleteREGION((REGION *)v2);
LABEL_11:
      v2 = 0LL;
    }
  }
  *(_QWORD *)this = v2;
  if ( v2 )
  {
    v5 = *(_QWORD *)(v2 + 88);
    *(_DWORD *)(v2 + 80) = 16;
    *(_DWORD *)(v2 + 84) = 1;
    *(_QWORD *)(v2 + 96) = 0LL;
    *(_QWORD *)(v2 + 104) = 0LL;
    *(_DWORD *)v5 = 0;
    *(_DWORD *)(v5 + 4) = 0x80000000;
    *(_QWORD *)(v5 + 8) = 0x7FFFFFFFLL;
    *(_QWORD *)(v2 + 40) = v5 + 16;
    *(_DWORD *)(*(_QWORD *)this + 24LL) = 112;
    *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
    v6 = (_QWORD *)(*(_QWORD *)this + 48LL);
    v6[1] = v6;
    *v6 = v6;
  }
  return this;
}
