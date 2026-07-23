/*
 * XREFs of HvlEnlightenProcessor @ 0x1403A7AE8
 * Callers:
 *     HvlpInitializeBootProcessor @ 0x1404F306C (HvlpInitializeBootProcessor.c)
 *     PopHandleNextState @ 0x1409940D0 (PopHandleNextState.c)
 *     KiInitializeKernel @ 0x14099E6F0 (KiInitializeKernel.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140216B10 (MmMapIoSpaceEx.c)
 *     MmGetPhysicalAddress @ 0x140226840 (MmGetPhysicalAddress.c)
 *     HvlpGetLpcbByLpIndex @ 0x140390E48 (HvlpGetLpcbByLpIndex.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HvlSharedIsr @ 0x1404F1E80 (HvlSharedIsr.c)
 *     HvlGetLpIndexFromProcessorIndex @ 0x1404F2110 (HvlGetLpIndexFromProcessorIndex.c)
 *     HvlpSetupSchedulerAssist @ 0x1404F405C (HvlpSetupSchedulerAssist.c)
 *     HvlpGetRegister64 @ 0x1404FA190 (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x1404FA280 (HvlpSetRegister64.c)
 *     HvlpDiscoverTopologyLocal @ 0x14088E9B0 (HvlpDiscoverTopologyLocal.c)
 */

void __fastcall HvlEnlightenProcessor(char a1)
{
  struct _KPRCB *CurrentPrcb; // rdi
  int v2; // edx
  ULONG v3; // r8d
  char v4; // cl
  PHYSICAL_ADDRESS v5; // rbx
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  char v9; // bl
  int *LpcbByLpIndex; // rsi
  unsigned int LpIndexFromProcessorIndex; // eax
  __int64 v13; // rbx
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF
  PHYSICAL_ADDRESS v18; // [rsp+60h] [rbp+18h] BYREF
  __int64 v19; // [rsp+68h] [rbp+20h] BYREF

  v17 = 0LL;
  v19 = 0LL;
  if ( HvlHypervisorConnected && (!a1 || (HvlpFlags & 2) == 0) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( !a1 )
    {
      HvlpGetRegister64(589827LL, &v17);
      v2 = v17;
      v3 = (unsigned int)v17 >> 6;
      v4 = v17 & 0x3F;
      HvlpVirtualProcessorMapping[2 * CurrentPrcb->Number] = (unsigned int)v17 >> 6;
      HvlpVirtualProcessorMapping[2 * CurrentPrcb->Number + 1] = v4;
      if ( v2 != CurrentPrcb->Number )
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
      v18.QuadPart = 0LL;
      if ( (HvlpFlags & 2) != 0 )
      {
        HvlpGetRegister64(589843LL, &v18);
        v5 = v18;
        v6 = v18.QuadPart & 0xFFFFFFFFFFFFF000uLL;
        if ( CurrentPrcb->Number )
          v7 = MmMapIoSpaceEx(v6, 4096LL, 4u);
        else
          v7 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))qword_140C00720)(v6, 1LL, 4LL);
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
    if ( (HvlpFlags >> 1) & 1 )
    {
      LpIndexFromProcessorIndex = HvlGetLpIndexFromProcessorIndex(CurrentPrcb->Number);
      LpcbByLpIndex = HvlpGetLpcbByLpIndex(LpIndexFromProcessorIndex);
      if ( (v9 & 0x20) != 0 )
      {
        HvlpGetRegister64(655379LL, &v19);
        v13 = v19;
        if ( (v19 & 1) == 0 )
        {
          v13 = v19 | 1;
          HvlpSetRegister64(655379LL, v19 | 1);
        }
        v14 = v13 & 0xFFFFFFFFFFFFF000uLL;
        if ( CurrentPrcb->Number )
          v15 = MmMapIoSpaceEx(v14, 4096LL, 4u);
        else
          v15 = ((__int64 (__fastcall *)(unsigned __int64, __int64))qword_140C00720)(v14, 1LL);
        *((_QWORD *)LpcbByLpIndex + 5) = v15;
      }
    }
    if ( (HvlpFlags & 2) != 0 && (HvlpFlags & 0x20) != 0 )
    {
      v16 = ((unsigned __int64)((HvlpFlags & 0x10) == 0) << 17) | 0x30;
      HvlpSetRegister64(655360LL, v16);
      HvlpSetRegister64(655364LL, v16);
      HvlSharedIsr();
    }
    if ( (HvlpFlags & 2) != 0 )
    {
      if ( CurrentPrcb->Number )
        HvlpDiscoverTopologyLocal(v8, (unsigned int)LpcbByLpIndex[2], LpcbByLpIndex + 4, LpcbByLpIndex + 5);
    }
  }
}
