/*
 * XREFs of sub_18011F470 @ 0x18011F470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18011F470(__int64 a1)
{
  struct _TP_WORK *v2; // rcx
  __int64 v3; // rcx

  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 16));
  *(_BYTE *)(a1 + 104) = 1;
  ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 16));
  v2 = *(struct _TP_WORK **)(a1 + 96);
  if ( v2 )
  {
    WaitForThreadpoolWorkCallbacks(v2, 1);
    CloseThreadpoolWork(*(PTP_WORK *)(a1 + 96));
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  v3 = qword_18019F760;
  qword_18019F760 = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
