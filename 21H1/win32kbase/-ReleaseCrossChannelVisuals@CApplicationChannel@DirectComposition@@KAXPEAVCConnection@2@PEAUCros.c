/*
 * XREFs of ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C01D75CC
 * Callers:
 *     ?UnlockAndUnreference@CApplicationChannel@DirectComposition@@UEAAXXZ @ 0x1C0009640 (-UnlockAndUnreference@CApplicationChannel@DirectComposition@@UEAAXXZ.c)
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C00B3C90 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C00B8C98 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C00BA528 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C01D7548 (-ReleaseCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::ReleaseCrossChannelVisuals(
        struct DirectComposition::CConnection *a1,
        struct DirectComposition::CrossChannelVisualData *a2)
{
  unsigned int v4; // ecx
  struct DirectComposition::CApplicationChannel *v5; // rbx
  struct DirectComposition::CrossChannelVisualData *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  struct DirectComposition::CApplicationChannel *v9; // [rsp+38h] [rbp+10h] BYREF

  do
  {
    v4 = *((_DWORD *)a2 + 3);
    v9 = 0LL;
    if ( (int)DirectComposition::CApplicationChannel::ReferenceHandleAndLock(v4, &v9) >= 0 )
    {
      v5 = v9;
      DirectComposition::CApplicationChannel::ReleaseCrossChannelVisualChild(v9, *((_DWORD *)a2 + 2));
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v5)(v5);
    }
    DirectComposition::CConnection::ReleaseSystemResource((__int64)a1, *((_DWORD *)a2 + 2));
    v6 = *(struct DirectComposition::CrossChannelVisualData **)a2;
    Win32FreePool((__int64)a2, v7, v8);
    a2 = v6;
  }
  while ( v6 );
}
