/*
 * XREFs of LdrpReleaseTlsEntry @ 0x18007E6C0
 * Callers:
 *     LdrpLoadDependentModule @ 0x180017BE0 (LdrpLoadDependentModule.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     LdrpHandleTlsData @ 0x180047C64 (LdrpHandleTlsData.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     LdrpFindTlsEntry @ 0x180019B60 (LdrpFindTlsEntry.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpReleaseTlsEntry(void *a1, _QWORD *a2)
{
  _UNKNOWN **TlsEntry; // rax
  _UNKNOWN **v5; // rbx
  _UNKNOWN ***v6; // rax
  _QWORD *v7; // rcx

  if ( !a2 )
    RtlAcquireSRWLockExclusive(&LdrpTlsLock);
  TlsEntry = LdrpFindTlsEntry(a1);
  v5 = TlsEntry;
  if ( TlsEntry )
  {
    v6 = (_UNKNOWN ***)*TlsEntry;
    if ( v6[1] != v5 || (v7 = v5[1], (_UNKNOWN **)*v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = (_UNKNOWN **)v7;
    _bittestandreset((signed __int32 *)LdrpTlsBitmap.Buffer, *((_DWORD *)v5 + 16));
  }
  if ( !a2 )
    RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( !v5 )
    return 3221226021LL;
  if ( a2 )
    *a2 = v5;
  else
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  return 0LL;
}
