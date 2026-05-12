/*
 * XREFs of RaUnitWaitForRemoveLock @ 0x1C0019120
 * Callers:
 *     RaidDeleteBusEnumerator @ 0x1C0016540 (RaidDeleteBusEnumerator.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C001C818 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitAdapterRemove @ 0x1C0046A40 (RaUnitAdapterRemove.c)
 *     RaUnitDisableDeviceIrp @ 0x1C0047450 (RaUnitDisableDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C00742F0 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     WPP_SF_ @ 0x1C003324C (WPP_SF_.c)
 */

__int64 __fastcall RaUnitWaitForRemoveLock(__int64 a1)
{
  ULONG MaximumProcessorCount; // eax
  int v3; // r8d
  __int64 v4; // rdi
  __int64 v5; // r9
  __int64 v6; // r10
  __int32 v7; // eax
  unsigned int v8; // esi
  __int64 v9; // r8
  __int64 v10; // rax

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v3 = 0;
  v4 = MaximumProcessorCount;
  if ( MaximumProcessorCount )
  {
    v5 = 0LL;
    v6 = MaximumProcessorCount;
    do
    {
      v7 = _InterlockedExchange((volatile __int32 *)(v5 + *(_QWORD *)(a1 + 32)), 1);
      v5 += 64LL;
      v3 += v7 / 2;
      --v6;
    }
    while ( v6 );
  }
  if ( v3 + _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 912), v3 - 0x10000000) - 0x10000000 > 0 )
  {
    v8 = KeWaitForSingleObject((PVOID)(a1 + 464), Executive, 0, 0, 0LL);
    if ( v8 == 258
      && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 11LL, &WPP_1d1aba59324333a8091b21d0ef225891_Traceguids);
    }
  }
  else
  {
    v8 = 0;
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 912), 0x10000000u);
  if ( (_DWORD)v4 )
  {
    v9 = 0LL;
    v10 = v4;
    do
    {
      _InterlockedExchange((volatile __int32 *)(v9 + *(_QWORD *)(a1 + 32)), 0);
      v9 += 64LL;
      --v10;
    }
    while ( v10 );
  }
  return v8;
}
