/*
 * XREFs of SeSetSessionIdToken @ 0x1406E4A08
 * Callers:
 *     NtSetInformationToken @ 0x1406F7D00 (NtSetInformationToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140917F80 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SepCopyClientTokenAndSetSilo @ 0x1409180E8 (SepCopyClientTokenAndSetSilo.c)
 *     SeSetSessionIdTokenWithLinked @ 0x140918260 (SeSetSessionIdTokenWithLinked.c)
 * Callees:
 *     MmGetSessionObjectById @ 0x14025B084 (MmGetSessionObjectById.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1405EE698 (SepDereferenceLowBoxNumberEntry.c)
 *     SepSetTokenLowboxNumber @ 0x14067833C (SepSetTokenLowboxNumber.c)
 *     SepSetTokenSessionById @ 0x1406F7AEC (SepSetTokenSessionById.c)
 */

NTSTATUS __stdcall SeSetSessionIdToken(PACCESS_TOKEN Token, ULONG SessionId)
{
  NTSTATUS v2; // esi
  struct _DMA_ADAPTER *SessionObjectById; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int v7; // r8d
  bool v8; // zf
  __int64 v10; // rdx
  signed __int32 v11[8]; // [rsp+0h] [rbp-38h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  SessionObjectById = 0LL;
  DmaAdapter = 0LL;
  if ( !SeTokenDoesNotTrackSessionObject )
    SessionObjectById = (struct _DMA_ADAPTER *)MmGetSessionObjectById(SessionId);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
  _InterlockedOr(v11, 0);
  if ( *((_BYTE *)Token + 204) )
  {
    v2 = -1073741525;
  }
  else
  {
    if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 )
    {
      v10 = *((_QWORD *)Token + 135);
      if ( v10 )
      {
        SepDereferenceLowBoxNumberEntry(*((_DWORD *)Token + 30), v10);
        *((_QWORD *)Token + 135) = 0LL;
      }
    }
    if ( *((_DWORD *)Token + 30) != SessionId )
    {
      LOBYTE(v7) = 1;
      SepSetTokenSessionById((_DWORD)Token, SessionId, v7, (_DWORD)SessionObjectById, (__int64)&DmaAdapter);
      SessionObjectById = 0LL;
    }
    v8 = (*((_DWORD *)Token + 50) & 0x4000) == 0;
    *((_DWORD *)Token + 30) = SessionId;
    if ( !v8 )
      v2 = SepSetTokenLowboxNumber((__int64)Token, *((_QWORD *)Token + 98));
  }
  _InterlockedOr(v11, 0);
  ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
  KeLeaveCriticalRegion();
  if ( SessionObjectById )
    HalPutDmaAdapter(SessionObjectById);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  return v2;
}
