/*
 * XREFs of ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C01CF2CC
 * Callers:
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C00673C0 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?UnlockAndUnreference@CApplicationChannel@DirectComposition@@UEAAXXZ @ 0x1C0082FA0 (-UnlockAndUnreference@CApplicationChannel@DirectComposition@@UEAAXXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C005D178 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C005EEC8 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C01CF248 (-ReleaseCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::ReleaseCrossChannelVisuals(
        struct DirectComposition::CConnection *a1,
        struct DirectComposition::CrossChannelVisualData *a2)
{
  unsigned int v4; // ecx
  struct DirectComposition::CApplicationChannel *v5; // rbx
  struct DirectComposition::CrossChannelVisualData *v6; // rbx
  struct DirectComposition::CApplicationChannel *v7; // [rsp+38h] [rbp+10h] BYREF

  do
  {
    v4 = *((_DWORD *)a2 + 3);
    v7 = 0LL;
    if ( (int)DirectComposition::CApplicationChannel::ReferenceHandleAndLock(v4, &v7) >= 0 )
    {
      v5 = v7;
      DirectComposition::CApplicationChannel::ReleaseCrossChannelVisualChild(v7, *((_DWORD *)a2 + 2));
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v5)(v5);
    }
    DirectComposition::CConnection::ReleaseSystemResource((__int64)a1, *((_DWORD *)a2 + 2));
    v6 = *(struct DirectComposition::CrossChannelVisualData **)a2;
    Win32FreePool((__int64)a2);
    a2 = v6;
  }
  while ( v6 );
}
