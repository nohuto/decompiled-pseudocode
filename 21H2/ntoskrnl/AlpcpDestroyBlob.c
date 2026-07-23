/*
 * XREFs of AlpcpDestroyBlob @ 0x1405E4E4C
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x1406D4D10 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveMessage @ 0x1406D73D0 (AlpcpReceiveMessage.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14021A938 (ExFreeToNPagedLookasideList.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpDestroyBlob(__int64 a1, int a2)
{
  _BYTE *v2; // rsi
  __int64 v5; // rdi

  v2 = (_BYTE *)(a1 - 48);
  v5 = AlpcpRegisteredTypes[*(unsigned __int8 *)(a1 - 48 + 17)];
  (*(void (**)(void))(v5 + 24))();
  if ( a2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 - 16);
    KeAbPostRelease(a1 - 16);
  }
  if ( (*(int (__fastcall **)(__int64))(v5 + 40))(a1) >= 0 )
  {
    if ( (v2[16] & 2) != 0 )
    {
      ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&AlpcpLookasides + *(unsigned int *)(v5 + 8), v2);
    }
    else if ( *(_QWORD *)(v5 + 48) )
    {
      (*((void (__fastcall **)(_BYTE *))&AlpcpLookasides + 16 * (unsigned __int64)*(unsigned int *)(v5 + 8) + 7))(v2);
    }
    else
    {
      ExFreePoolWithTag(v2, *(_DWORD *)(v5 + 4));
    }
  }
}
