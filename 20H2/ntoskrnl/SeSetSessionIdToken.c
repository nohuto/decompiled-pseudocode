/*
 * XREFs of SeSetSessionIdToken @ 0x1406A8CE8
 * Callers:
 *     NtSetInformationToken @ 0x1406AB220 (NtSetInformationToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x14091EE60 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14091F008 (SepCopyClientTokenAndSetSilo.c)
 *     SeSetSessionIdTokenWithLinked @ 0x14091F180 (SeSetSessionIdTokenWithLinked.c)
 * Callees:
 *     MmGetSessionObjectById @ 0x140209854 (MmGetSessionObjectById.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x14068D15C (SepDereferenceLowBoxNumberEntry.c)
 *     SepSetTokenLowboxNumber @ 0x14068DF6C (SepSetTokenLowboxNumber.c)
 *     SepSetTokenSessionById @ 0x14068F030 (SepSetTokenSessionById.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall SeSetSessionIdToken(PACCESS_TOKEN Token, ULONG SessionId)
{
  NTSTATUS v2; // esi
  struct _DMA_ADAPTER *SessionObjectById; // rdi
  struct _KTHREAD *CurrentThread; // rax
  bool v7; // zf
  __int64 v9; // rdx
  signed __int32 v10[8]; // [rsp+0h] [rbp-38h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  SessionObjectById = 0LL;
  DmaAdapter = 0LL;
  if ( !SeTokenDoesNotTrackSessionObject )
    SessionObjectById = (struct _DMA_ADAPTER *)MmGetSessionObjectById(SessionId, *(__int64 *)&SessionId);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
  _InterlockedOr(v10, 0);
  if ( *((_BYTE *)Token + 204) )
  {
    v2 = -1073741525;
  }
  else
  {
    if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 )
    {
      v9 = *((_QWORD *)Token + 135);
      if ( v9 )
      {
        SepDereferenceLowBoxNumberEntry(*((_DWORD *)Token + 30), v9);
        *((_QWORD *)Token + 135) = 0LL;
      }
    }
    if ( *((_DWORD *)Token + 30) != SessionId )
    {
      SepSetTokenSessionById((__int64)Token, SessionId, 1, (__int64)SessionObjectById, &DmaAdapter);
      SessionObjectById = 0LL;
    }
    v7 = (*((_DWORD *)Token + 50) & 0x4000) == 0;
    *((_DWORD *)Token + 30) = SessionId;
    if ( !v7 )
      v2 = SepSetTokenLowboxNumber((__int64)Token, *((_QWORD *)Token + 98));
  }
  _InterlockedOr(v10, 0);
  ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
  KeLeaveCriticalRegion();
  if ( SessionObjectById )
    HalPutDmaAdapter(SessionObjectById);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  return v2;
}
