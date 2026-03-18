/*
 * XREFs of ?GetMaxOutstandingFrames@CSyncLockGroup@@IEBAIXZ @ 0x1801BFCFC
 * Callers:
 *     ?SyncLockTargets@CSyncLockGroup@@UEAAX_N@Z @ 0x1801BFEA0 (-SyncLockTargets@CSyncLockGroup@@UEAAX_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSyncLockGroup::GetMaxOutstandingFrames(CSyncLockGroup *this)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rsi
  unsigned int v3; // edi
  unsigned int v4; // eax

  v1 = (_QWORD *)*((_QWORD *)this + 2);
  v2 = (_QWORD *)*((_QWORD *)this + 3);
  v3 = CCommonRegistryData::m_parallelModePolicy == 2;
  while ( v1 != v2 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 64LL))(*v1);
    if ( v3 <= v4 )
      v3 = v4;
    ++v1;
  }
  return v3;
}
