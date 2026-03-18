/*
 * XREFs of ?UpdateAnimateValues@CScalar@@UEAAXXZ @ 0x18023B910
 * Callers:
 *     ??1CScalar@@MEAA@XZ @ 0x18023B7CC (--1CScalar@@MEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CScalar::UpdateAnimateValues(CScalar *this)
{
  unsigned int v1; // edi
  unsigned int v3; // eax

  v1 = 0;
  if ( *((_DWORD *)this + 8) )
  {
    do
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, char *))(**(_QWORD **)(*((_QWORD *)this + 1) + 16LL * v1) + 96LL))(
        *(_QWORD *)(*((_QWORD *)this + 1) + 16LL * v1),
        *(unsigned int *)(*((_QWORD *)this + 1) + 16LL * v1 + 8),
        18LL,
        (char *)this + 48);
      v3 = *((_DWORD *)this + 8);
      ++v1;
    }
    while ( v1 < v3 );
    if ( v3 )
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this - 6) + 424LL) + 448LL) |= 2u;
  }
  CBaseAnimation::UnregisterAnimateResource((CScalar *)((char *)this - 64));
}
