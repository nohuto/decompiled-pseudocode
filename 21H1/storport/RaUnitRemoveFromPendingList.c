/*
 * XREFs of RaUnitRemoveFromPendingList @ 0x1C0008054
 * Callers:
 *     RaidUnitReleaseIrp @ 0x1C00081D8 (RaidUnitReleaseIrp.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019FC0 (__security_check_cookie.c)
 *     StorRemoveEventQueue @ 0x1C00332F4 (StorRemoveEventQueue.c)
 *     McTemplateK0dud_EtwWriteTransfer @ 0x1C0044B50 (McTemplateK0dud_EtwWriteTransfer.c)
 */

char __fastcall RaUnitRemoveFromPendingList(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  int v6; // edx
  int v7; // ecx
  int v8; // r9d
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v4 = *(_QWORD *)(v2 + 8);
  if ( *(_BYTE *)(v4 + 2) == 40 )
    v5 = *(_QWORD *)(v4 + 96);
  else
    v5 = *(_QWORD *)(v4 + 48);
  if ( (*(_BYTE *)(v5 + 16) & 2) != 0 )
  {
    LOBYTE(v2) = StorRemoveEventQueue(*(_QWORD *)(a1 + 504), v5 + 48);
    if ( StorEtwLoggingEnabled )
    {
      v10 = 0LL;
      IoGetActivityIdIrp(a2, &v10);
      LOBYTE(v2) = byte_1C0068842;
      if ( byte_1C0068842 < 0 )
        LOBYTE(v2) = McTemplateK0dud_EtwWriteTransfer(v7, v6, (unsigned int)&v10, v8, 4);
    }
  }
  return v2;
}
