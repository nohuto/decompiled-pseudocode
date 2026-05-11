/*
 * XREFs of USBHwGetSetProperty @ 0x1C002C638
 * Callers:
 *     USBHwGetSetByte @ 0x1C002C790 (USBHwGetSetByte.c)
 *     USBHwGetSetShort @ 0x1C002C840 (USBHwGetSetShort.c)
 *     USBHwGetSetMemory @ 0x1C002C900 (USBHwGetSetMemory.c)
 *     USBCntrlGetSetGEQ @ 0x1C00316B0 (USBCntrlGetSetGEQ.c)
 *     USBCntrlGetSetProcessingUnitValue @ 0x1C0031870 (USBCntrlGetSetProcessingUnitValue.c)
 *     USBCntrlMuxSource @ 0x1C0031920 (USBCntrlMuxSource.c)
 *     USBCntrlGetSetMixerLevels @ 0x1C00319D0 (USBCntrlGetSetMixerLevels.c)
 *     USBType1SetSampleRate @ 0x1C00321E0 (USBType1SetSampleRate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00133D0 (_guard_dispatch_icall_nop.c)
 *     USBHwSubmitUrbToUsbdSynch @ 0x1C002C4B0 (USBHwSubmitUrbToUsbdSynch.c)
 */

__int64 __fastcall USBHwGetSetProperty(
        __int64 a1,
        USHORT a2,
        ULONG a3,
        UCHAR a4,
        __int16 a5,
        __int16 a6,
        __int16 a7,
        __int16 a8,
        void *a9,
        ULONG a10)
{
  unsigned int v14; // esi
  __int64 v15; // rbx
  __int64 v16; // rbx
  struct _URB *v17; // rdi
  __int64 v18; // rdx
  __int64 (__fastcall *v19)(__int64, __int64, __int64); // rax
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned int v22; // eax

  v14 = -1073741670;
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  ++*(_DWORD *)(v15 + 84);
  v16 = v15 + 64;
  v17 = (struct _URB *)ExpInterlockedPopEntrySList((PSLIST_HEADER)v16);
  if ( v17
    || (v18 = *(unsigned int *)(v16 + 44),
        v19 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v16 + 48),
        v20 = *(unsigned int *)(v16 + 40),
        v21 = *(unsigned int *)(v16 + 36),
        ++*(_DWORD *)(v16 + 24),
        (v17 = (struct _URB *)v19(v21, v18, v20)) != 0LL) )
  {
    v17->UrbSelectConfiguration.Interface.InterfaceHandle = 0LL;
    v17->UrbControlTransfer.UrbLink = 0LL;
    v17->UrbHeader.Length = 136;
    v17->UrbControlTransfer.TransferBufferLength = a10;
    v17->UrbSelectInterface.Interface.InterfaceHandle = a9;
    v17->UrbControlFeatureRequest.FeatureSelector = a6 | (a5 << 8);
    v17->UrbControlDescriptorRequest.LanguageId = a8 | (a7 << 8);
    v17->UrbHeader.Function = a2;
    v17->UrbControlTransfer.SetupPacket[0] = 0;
    v17->UrbControlTransfer.SetupPacket[1] = a4;
    v17->UrbPipeRequest.Reserved = a3;
    v22 = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(a1 + 40), v17, 0LL);
    ++*(_DWORD *)(v16 + 28);
    v14 = v22;
    if ( ExQueryDepthSList((PSLIST_HEADER)v16) < *(_WORD *)(v16 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v16, (PSLIST_ENTRY)v17);
    }
    else
    {
      ++*(_DWORD *)(v16 + 32);
      (*(void (__fastcall **)(struct _URB *))(v16 + 56))(v17);
    }
  }
  return v14;
}
