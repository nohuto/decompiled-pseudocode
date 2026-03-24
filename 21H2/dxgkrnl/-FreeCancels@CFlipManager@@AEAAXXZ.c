/*
 * XREFs of ?FreeCancels@CFlipManager@@AEAAXXZ @ 0x1C006B3A0
 * Callers:
 *     ?MarkInvalid@CFlipManager@@MEAAXXZ @ 0x1C006B790 (-MarkInvalid@CFlipManager@@MEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipManager::FreeCancels(CFlipManager *this)
{
  _QWORD *v1; // rbx
  void (__fastcall ***v2)(_QWORD, __int64); // r8
  _QWORD *v3; // rdx
  __int64 v4; // rcx
  _QWORD *v5; // rax

  v1 = (_QWORD *)((char *)this + 152);
  while ( (_QWORD *)*v1 != v1 )
  {
    v2 = (void (__fastcall ***)(_QWORD, __int64))((*v1 - 8LL) & -(__int64)(*v1 != 0LL));
    v3 = (_QWORD *)((unsigned __int64)(v2 + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)v2 >> 64));
    v4 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3
      || (v5 = *(_QWORD **)(((unsigned __int64)(v2 + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)v2 >> 64)) + 8),
          (_QWORD *)*v5 != v3) )
    {
      __fastfail(3u);
    }
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    v3[1] = v3;
    *v3 = v3;
    if ( v2 )
      (**v2)(v2, 1LL);
  }
}
