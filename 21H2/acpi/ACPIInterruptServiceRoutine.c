/*
 * XREFs of ACPIInterruptServiceRoutine @ 0x1C0057E60
 * Callers:
 *     <none>
 * Callees:
 *     ACPIReadGpeStatusRegister @ 0x1C001FEBC (ACPIReadGpeStatusRegister.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C00200A4 (ACPIGpeEnableDisableEvents.c)
 *     READ_PM1_STATUS @ 0x1C00246E8 (READ_PM1_STATUS.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     ACPIPccSciReceived @ 0x1C0031270 (ACPIPccSciReceived.c)
 *     CLEAR_PM1_STATUS_BITS @ 0x1C003158A (CLEAR_PM1_STATUS_BITS.c)
 */

bool __fastcall ACPIInterruptServiceRoutine(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  int v4; // ebx
  __int64 v5; // rdx
  int v6; // edi
  int v7; // esi
  signed __int32 v8; // eax
  unsigned int v9; // esi
  signed __int32 v10; // edx

  v3 = 0;
  v4 = (unsigned __int16)(READ_PM1_STATUS() & (*((_WORD *)AcpiInformation + 56) | 0x8401));
  if ( *((_WORD *)AcpiInformation + 51) )
  {
    while ( (*((_BYTE *)GpeCurEnable + v3) & (unsigned __int8)ACPIReadGpeStatusRegister(v3)) == 0 )
    {
      if ( ++v3 >= *((unsigned __int16 *)AcpiInformation + 51) )
        goto LABEL_6;
    }
    v4 |= 0x10000u;
  }
LABEL_6:
  if ( (AcpiOverrideAttributes & 0x200) != 0 && !v4 )
    v4 = 0x10000;
  if ( ACPIPccSciReceived() )
    v4 |= 0x20000u;
  v6 = v4 & 0x11;
  if ( (v4 & 0x11) != 0 )
  {
    CLEAR_PM1_STATUS_BITS(v4 & 0x11);
    if ( (v4 & 1) != 0 )
      (*(void (**)(void))(PmHalDispatchTable + 8))();
    v4 &= ~v6;
  }
  if ( v4 )
  {
    v7 = v4 | 0x10000;
    if ( (v4 & ~*(_DWORD *)(a2 + 88)) != 0 )
      v7 = v4;
    if ( (v7 & 0x10000) != 0 )
      ACPIGpeEnableDisableEvents(0, v5);
    CLEAR_PM1_STATUS_BITS(v7);
    v8 = *(_DWORD *)(a2 + 88);
    v9 = v7 | 0x80000000;
    do
    {
      v10 = v8;
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 88), v9 | v8, v8);
    }
    while ( v10 != v8 );
    v6 |= v9 & ~v8;
    if ( v6 < 0 )
      KeInsertQueueDpc((PRKDPC)(a2 + 96), 0LL, 0LL);
  }
  return v6 != 0;
}
