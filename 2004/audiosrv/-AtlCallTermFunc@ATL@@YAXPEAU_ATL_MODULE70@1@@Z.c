/*
 * XREFs of ?AtlCallTermFunc@ATL@@YAXPEAU_ATL_MODULE70@1@@Z @ 0x1800B9010
 * Callers:
 *     ?Term@CAtlModule@ATL@@QEAAXXZ @ 0x1800BB360 (-Term@CAtlModule@ATL@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800BBD58 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

void __fastcall ATL::AtlCallTermFunc(struct ATL::_ATL_MODULE70 *a1, unsigned int a2)
{
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx

  if ( !a1 )
  {
    ATL::_AtlRaiseException(0xC0000005, a2);
    __debugbreak();
  }
  v3 = (_QWORD *)*((_QWORD *)a1 + 1);
  if ( v3 )
  {
    do
    {
      ((void (__fastcall *)(_QWORD))*v3)(v3[1]);
      v4 = (_QWORD *)v3[2];
      operator delete(v3, (const struct std::nothrow_t *)0x18);
      v3 = v4;
    }
    while ( v4 );
  }
  *((_QWORD *)a1 + 1) = 0LL;
}
