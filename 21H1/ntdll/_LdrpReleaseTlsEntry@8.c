/*
 * XREFs of _LdrpReleaseTlsEntry@8 @ 0x4B2A7CB1
 * Callers:
 *     _LdrpLoadDependentModule@24 @ 0x4B2CB610 (_LdrpLoadDependentModule@24.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _LdrpHandleTlsData@4 @ 0x4B2D0CD1 (_LdrpHandleTlsData@4.c)
 * Callees:
 *     @LdrpFindTlsEntry@4 @ 0x4B2A7D3A (@LdrpFindTlsEntry@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

int __fastcall LdrpReleaseTlsEntry(int a1, _DWORD *a2)
{
  _DWORD *TlsEntry; // eax
  _DWORD *v5; // esi
  int v6; // eax
  _DWORD *v7; // ecx

  if ( !a2 )
    RtlAcquireSRWLockExclusive(&LdrpTlsLock);
  TlsEntry = (_DWORD *)LdrpFindTlsEntry(a1);
  v5 = TlsEntry;
  if ( TlsEntry )
  {
    v6 = *TlsEntry;
    if ( *(_DWORD **)(*v5 + 4) != v5 || (v7 = (_DWORD *)v5[1], (_DWORD *)*v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    *(_DWORD *)(v6 + 4) = v7;
    *((_BYTE *)LdrpTlsBitmap.Buffer + (v5[9] >> 3)) &= ~(1 << (v5[9] & 7));
  }
  if ( !a2 )
    RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( !v5 )
    return -1073741275;
  if ( a2 )
    *a2 = v5;
  else
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  return 0;
}
