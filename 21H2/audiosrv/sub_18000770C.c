/*
 * XREFs of sub_18000770C @ 0x18000770C
 * Callers:
 *     sub_180006524 @ 0x180006524 (sub_180006524.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800C3D30 @ 0x1800C3D30 (sub_1800C3D30.c)
 */

void __fastcall sub_18000770C(LPCRITICAL_SECTION lpCriticalSection)
{
  ULONG_PTR SpinCount; // rcx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rdi
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  __int64 v6; // rcx

  EnterCriticalSection(lpCriticalSection);
  while ( *(_QWORD *)&lpCriticalSection[1].LockCount )
    sub_1800C3D30(&lpCriticalSection[1], 0LL);
  LeaveCriticalSection(lpCriticalSection);
  SpinCount = lpCriticalSection[1].SpinCount;
  if ( SpinCount )
    _o_free(SpinCount);
  DebugInfo = lpCriticalSection[1].DebugInfo;
  if ( DebugInfo )
  {
    v4 = *(_QWORD *)&lpCriticalSection[1].LockCount;
    v5 = 0LL;
    if ( v4 )
    {
      do
      {
        v6 = *((_QWORD *)&DebugInfo->Type + v5);
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        ++v5;
      }
      while ( v5 < v4 );
      DebugInfo = lpCriticalSection[1].DebugInfo;
    }
    _o_free(DebugInfo);
  }
  DeleteCriticalSection(lpCriticalSection);
}
