/*
 * XREFs of HvlEnlightenProcessor @ 0x1403B6B58
 * Callers:
 *     HvlpInitializeBootProcessor @ 0x140544754 (HvlpInitializeBootProcessor.c)
 *     PopHandleNextState @ 0x140A4B5A0 (PopHandleNextState.c)
 *     KiInitializeKernel @ 0x140A580F0 (KiInitializeKernel.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     HvlpGetLpcbByLpIndex @ 0x14039E528 (HvlpGetLpcbByLpIndex.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HvlSharedIsr @ 0x140459B00 (HvlSharedIsr.c)
 *     HvlGetLpIndexFromProcessorIndex @ 0x140459BC0 (HvlGetLpIndexFromProcessorIndex.c)
 *     HvlpSetupSchedulerAssist @ 0x1405456C0 (HvlpSetupSchedulerAssist.c)
 *     HvlpGetRegister64 @ 0x14054BFF0 (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x14054C0E0 (HvlpSetRegister64.c)
 *     HvlpDiscoverTopologyLocal @ 0x140931294 (HvlpDiscoverTopologyLocal.c)
 */

void __fastcall HvlEnlightenProcessor(char a1)
{
  struct _KPRCB *CurrentPrcb; // rsi
  ULONG LowPart; // edx
  ULONG v3; // r8d
  char v4; // cl
  PHYSICAL_ADDRESS v5; // rbx
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  char v9; // bl
  int *LpcbByLpIndex; // rdi
  unsigned int LpIndexFromProcessorIndex; // eax
  __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  PHYSICAL_ADDRESS v16; // [rsp+48h] [rbp+10h] BYREF
  __int64 v17; // [rsp+50h] [rbp+18h] BYREF

  v16.QuadPart = 0LL;
  v17 = 0LL;
  if ( HvlHypervisorConnected && (!a1 || (HvlpFlags & 2) == 0) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( !a1 )
    {
      HvlpGetRegister64(589827LL, &v16);
      LowPart = v16.LowPart;
      v3 = v16.LowPart >> 6;
      v4 = v16.LowPart & 0x3F;
      HvlpVirtualProcessorMapping[2 * CurrentPrcb->Number] = v16.LowPart >> 6;
      HvlpVirtualProcessorMapping[2 * CurrentPrcb->Number + 1] = v4;
      if ( LowPart != CurrentPrcb->Number )
        HvlpVirtualProcessorsIdentityMapped = 0;
      if ( v3 < 0x10 )
      {
        if ( v3 > ((HvlpFlags >> 8) & 0xF) )
          HvlpFlags ^= ((unsigned __int16)HvlpFlags ^ (unsigned __int16)((_WORD)v3 << 8)) & 0xF00;
      }
      else
      {
        HvlEnlightenments &= ~0x80u;
        HvlpEnlightenments &= ~0x80u;
      }
    }
    if ( (HvlpFlags & 0x80000) != 0 )
    {
      v16.QuadPart = 0LL;
      if ( (HvlpFlags & 2) != 0 )
      {
        HvlpGetRegister64(589843LL, &v16);
        v5 = v16;
        v6 = v16.QuadPart & 0xFFFFFFFFFFFFF000uLL;
        if ( CurrentPrcb->Number )
          v7 = MmMapIoSpaceEx(v6, 4096LL, 4u);
        else
          v7 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))qword_140C01D70)(v6, 1LL, 4LL);
        CurrentPrcb->VirtualApicAssist = (void *)v7;
      }
      else
      {
        v5.QuadPart = MmGetPhysicalAddress(CurrentPrcb->VirtualApicAssist).QuadPart & 0xFFFFFFFFFFFFF000uLL;
      }
      HvlpSetRegister64(589843LL, v5.QuadPart | 1);
    }
    HvlpSetupSchedulerAssist(CurrentPrcb);
    v9 = HvlpFlags;
    LpcbByLpIndex = 0LL;
    if ( (HvlpFlags & 2) != 0 )
    {
      LpIndexFromProcessorIndex = HvlGetLpIndexFromProcessorIndex(CurrentPrcb->Number);
      LpcbByLpIndex = HvlpGetLpcbByLpIndex(LpIndexFromProcessorIndex);
      if ( (v9 & 0x20) != 0 )
      {
        HvlpGetRegister64(655379LL, &v17);
        v12 = v17;
        if ( (v17 & 1) == 0 )
        {
          v12 = v17 | 1;
          HvlpSetRegister64(655379LL, v17 | 1);
        }
        v13 = v12 & 0xFFFFFFFFFFFFF000uLL;
        if ( CurrentPrcb->Number )
          v14 = MmMapIoSpaceEx(v13, 4096LL, 4u);
        else
          v14 = ((__int64 (__fastcall *)(unsigned __int64, __int64))qword_140C01D70)(v13, 1LL);
        *((_QWORD *)LpcbByLpIndex + 5) = v14;
      }
    }
    if ( (HvlpFlags & 2) != 0 && (HvlpFlags & 0x20) != 0 )
    {
      v15 = ((unsigned __int64)((HvlpFlags & 0x10) == 0) << 17) | 0x30;
      HvlpSetRegister64(655360LL, v15);
      HvlpSetRegister64(655364LL, v15);
      HvlSharedIsr();
    }
    if ( (HvlpFlags & 2) != 0 )
    {
      if ( CurrentPrcb->Number )
        HvlpDiscoverTopologyLocal(v8, (unsigned int)LpcbByLpIndex[2], LpcbByLpIndex + 4, LpcbByLpIndex + 5);
    }
  }
}
