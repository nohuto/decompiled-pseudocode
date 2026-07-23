/*
 * XREFs of KiEnableKvaShadowing @ 0x1409A0790
 * Callers:
 *     KxInitializeProcessorState @ 0x14079FF80 (KxInitializeProcessorState.c)
 *     KiInitializeBootStructures @ 0x14099D160 (KiInitializeBootStructures.c)
 * Callees:
 *     HvlRescindEnlightenments @ 0x1402521B8 (HvlRescindEnlightenments.c)
 *     KiSetAddressPolicy @ 0x1402AC2D0 (KiSetAddressPolicy.c)
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     KiInitializeDescriptorIst @ 0x1403B5D28 (KiInitializeDescriptorIst.c)
 *     KiIsKvaLeakSimulated @ 0x1403B5D78 (KiIsKvaLeakSimulated.c)
 *     KiIsKvaShadowDisabled @ 0x1403B5D8C (KiIsKvaShadowDisabled.c)
 *     KiShadowProcessorAllocation @ 0x1409A0924 (KiShadowProcessorAllocation.c)
 *     KiInitializeIdt @ 0x1409A09F8 (KiInitializeIdt.c)
 */

__int64 __fastcall KiEnableKvaShadowing(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r11
  __int16 v8; // cx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax

  if ( KiIsKvaShadowDisabled() )
  {
    BYTE1(Mm64BitPhysicalAddress) = 1;
    return 1LL;
  }
  if ( (KeFeatureBits2 & 0x18000) == 0x8000 )
    *(_QWORD *)(v2 + 11520) = 3LL;
  if ( KiIsKvaLeakSimulated() )
    KiKvaLeakageSimulate = 1;
  if ( !KiKvaLeakage && !KiKvaLeakageSimulate )
    return 1LL;
  v5 = __readcr3();
  *(_QWORD *)(v4 + 36480) = v5;
  *(_QWORD *)(v3 + 4216) = *(_QWORD *)(v3 + 4100);
  KiInitializeDescriptorIst(v4, v3);
  *(_QWORD *)(v7 + 4100) = v7 + 16896;
  if ( !*(_DWORD *)(a1 + 36) )
  {
    LOBYTE(v6) = 1;
    KiInitializeIdt(v7, v6);
    KeGetCurrentThread()->ApcState.Process->AddressPolicy = 1;
    byte_140D24D90 = 1;
    _InterlockedOr(dword_140D2527C, 0x4000u);
    KiSetAddressPolicy();
    *(_WORD *)(a1 + 36522) = 24;
    v10 = *(_QWORD *)(a1 + 34208);
    if ( (v10 & 0x40000000000LL) != 0 )
    {
      v11 = __readcr4();
      __writecr4(v11 & 0xFFFFFFFFFFFDFF7FuLL | 0x20000);
      v12 = __readcr3();
      __writecr3(v12 | 2);
      KiFlushPcid |= 1u;
      v10 = *(_QWORD *)(a1 + 34208);
    }
    if ( (v10 & 0x240000000000LL) == 0x240000000000LL )
      KiFlushPcid |= 2u;
    HvlRescindEnlightenments();
    KiKvaShadow = 1;
    KiKvaShadowMode = 2 - (KiFlushPcid != 0);
    goto LABEL_10;
  }
  if ( (unsigned int)KiShadowProcessorAllocation(a1, v7) )
  {
    v8 = *(_WORD *)(KeGetPrcb(0) + 36522);
    *(_DWORD *)(a1 + 36504) |= 2u;
    *(_WORD *)(a1 + 36522) = v8;
LABEL_10:
    if ( KiFlushPcid )
      _interlockedbittestandset64((volatile signed __int32 *)(a1 + 36480), 0x3FuLL);
    return 1LL;
  }
  return 0LL;
}
