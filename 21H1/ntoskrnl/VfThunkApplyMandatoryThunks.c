/*
 * XREFs of VfThunkApplyMandatoryThunks @ 0x1409D5AFC
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x1409D6B28 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     MmIsSessionAddress @ 0x14035ADE0 (MmIsSessionAddress.c)
 *     MmGetNextSession @ 0x14035D920 (MmGetNextSession.c)
 *     MmDetachSession @ 0x14035DA40 (MmDetachSession.c)
 *     MmAttachSession @ 0x14035DAE0 (MmAttachSession.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MmQuitNextSession @ 0x140656300 (MmQuitNextSession.c)
 *     MmIsDriverLoadedCurrentSession @ 0x140779A78 (MmIsDriverLoadedCurrentSession.c)
 *     ViThunkApplyMandatoryThunksCurrentSession @ 0x1409D5DBC (ViThunkApplyMandatoryThunksCurrentSession.c)
 */

__int64 __fastcall VfThunkApplyMandatoryThunks(__int64 a1, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // edi
  struct _DMA_ADAPTER *i; // rcx
  _KPROCESS *NextSession; // rax
  struct _DMA_ADAPTER *v8; // rbx
  _OWORD v10[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v10, 0, sizeof(v10));
  if ( !a2 )
    return ViThunkApplyMandatoryThunksCurrentSession(a1, a2);
  LOBYTE(v4) = MmIsSessionAddress(*(_QWORD *)(a1 + 48));
  if ( !v4 )
    return ViThunkApplyMandatoryThunksCurrentSession(a1, a2);
  v5 = 1;
  for ( i = 0LL; ; i = v8 )
  {
    NextSession = (_KPROCESS *)MmGetNextSession(i);
    v8 = (struct _DMA_ADAPTER *)NextSession;
    if ( !NextSession )
      break;
    if ( (int)MmAttachSession(NextSession, (__int64)v10) >= 0 )
    {
      v5 = 1;
      if ( MmIsDriverLoadedCurrentSession(*(_QWORD *)(a1 + 48)) )
        v5 = ViThunkApplyMandatoryThunksCurrentSession(a1, a2);
      MmDetachSession((__int64)v8, (__int64)v10);
      if ( !v5 )
      {
        MmQuitNextSession(v8);
        return v5;
      }
    }
  }
  return v5;
}
