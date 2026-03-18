/*
 * XREFs of VfThunkApplyMandatoryThunks @ 0x1409DBB7C
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x1409DCBA8 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     MmIsSessionAddress @ 0x14021F1C0 (MmIsSessionAddress.c)
 *     MmDetachSession @ 0x14023C8A0 (MmDetachSession.c)
 *     MmAttachSession @ 0x14023C940 (MmAttachSession.c)
 *     MmGetNextSession @ 0x1402537E0 (MmGetNextSession.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MmQuitNextSession @ 0x1406E3830 (MmQuitNextSession.c)
 *     MmIsDriverLoadedCurrentSession @ 0x14078A488 (MmIsDriverLoadedCurrentSession.c)
 *     ViThunkApplyMandatoryThunksCurrentSession @ 0x1409DBE3C (ViThunkApplyMandatoryThunksCurrentSession.c)
 */

__int64 __fastcall VfThunkApplyMandatoryThunks(__int64 a1, unsigned int a2)
{
  unsigned int v4; // edi
  struct _DMA_ADAPTER *i; // rcx
  ULONG_PTR NextSession; // rax
  struct _DMA_ADAPTER *v7; // rbx
  _OWORD v9[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v9, 0, sizeof(v9));
  if ( !a2 || !MmIsSessionAddress(*(_QWORD *)(a1 + 48)) )
    return ViThunkApplyMandatoryThunksCurrentSession(a1, a2);
  v4 = 1;
  for ( i = 0LL; ; i = v7 )
  {
    NextSession = MmGetNextSession(i);
    v7 = (struct _DMA_ADAPTER *)NextSession;
    if ( !NextSession )
      break;
    if ( (int)MmAttachSession(NextSession) >= 0 )
    {
      v4 = 1;
      if ( MmIsDriverLoadedCurrentSession(*(_QWORD *)(a1 + 48)) )
        v4 = ViThunkApplyMandatoryThunksCurrentSession(a1, a2);
      MmDetachSession((__int64)v7, (__int64)v9);
      if ( !v4 )
      {
        MmQuitNextSession(v7);
        return v4;
      }
    }
  }
  return v4;
}
