/*
 * XREFs of ?Invalidate@CD3DResource@@IEAAXXZ @ 0x1800D4124
 * Callers:
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x1800D407C (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DResource::Invalidate(CD3DResource *this)
{
  __int64 i; // rdi
  void (__fastcall ***v3)(_QWORD, char *); // rcx

  if ( *((_BYTE *)this + 86) )
  {
    *((_BYTE *)this + 86) = 0;
    for ( i = (__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 3; (int)i > 0; LODWORD(i) = i - 1 )
    {
      v3 = *(void (__fastcall ****)(_QWORD, char *))(*((_QWORD *)this + 11) + 8LL * (unsigned int)(i - 1));
      (**v3)(v3, (char *)this + 24);
    }
  }
}
