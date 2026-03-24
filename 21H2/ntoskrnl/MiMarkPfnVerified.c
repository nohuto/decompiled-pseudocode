/*
 * XREFs of MiMarkPfnVerified @ 0x1402B8A04
 * Callers:
 *     MiAllocateWsle @ 0x140211CC0 (MiAllocateWsle.c)
 *     MiValidateInPage @ 0x14023B570 (MiValidateInPage.c)
 *     MiCopyPage @ 0x140240220 (MiCopyPage.c)
 *     MiGatherMappedPages @ 0x140255BC8 (MiGatherMappedPages.c)
 *     MiSetSystemCodeProtection @ 0x1402E6818 (MiSetSystemCodeProtection.c)
 *     MiRevertValidPte @ 0x140334300 (MiRevertValidPte.c)
 *     MiCompleteSecureProcessFault @ 0x140548184 (MiCompleteSecureProcessFault.c)
 *     MiValidateImagePfn @ 0x14069BD04 (MiValidateImagePfn.c)
 *     MiFillPerSessionProtos @ 0x1408D7FE0 (MiFillPerSessionProtos.c)
 *     MiSwitchToPfns @ 0x140A43AD8 (MiSwitchToPfns.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140A65FFC (MiInitializeBootLoadedDriverPfns.c)
 *     MiValidateKernelHalLargePageRange @ 0x140A92D10 (MiValidateKernelHalLargePageRange.c)
 * Callees:
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiGetPagePrivilege @ 0x1403286F0 (MiGetPagePrivilege.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     KeSetPagePrivilege @ 0x140512E78 (KeSetPagePrivilege.c)
 */

unsigned __int8 __fastcall MiMarkPfnVerified(ULONG_PTR BugCheckParameter2, char a2)
{
  char v2; // di
  ULONG_PTR v4; // rbp
  unsigned __int8 v5; // si
  char v6; // dl
  int v7; // eax
  __int64 v8; // r8
  unsigned __int8 result; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  __int128 v15; // [rsp+30h] [rbp-18h] BYREF

  v2 = a2;
  v15 = 0LL;
  v4 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
  if ( (a2 & 4) != 0 )
    v5 = 17;
  else
    v5 = MiLockPageInline(
           BugCheckParameter2,
           (unsigned __int128)((__int64)(BugCheckParameter2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64,
           BugCheckParameter2 + 0x58000000000LL);
  if ( (v2 & 2) != 0 && ((*(_QWORD *)(BugCheckParameter2 + 40) >> 60) & 7) == 3 )
    v2 &= ~2u;
  if ( (v2 & 2) != 0 && (MiFlags & 0x10000) != 0 )
  {
    if ( !(unsigned int)MI_PFN_IS_PROTO(BugCheckParameter2) && (MiFlags & 0x8000) != 0 )
      *(_QWORD *)&v15 = (__int64)(*(_QWORD *)(BugCheckParameter2 + 8) << 25) >> 16;
    v7 = v2 & 1;
    v2 = v6 & 0xFE;
    if ( !v7 )
      v2 = v6;
    v8 = (unsigned int)(4 * v7 + 2);
    if ( (v2 & 0x20) != 0 )
    {
      v8 = (unsigned int)v8 | 0x40;
      if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 0x10) == 0 && (*(_DWORD *)(BugCheckParameter2 + 16) & 4) == 0 )
        LODWORD(v8) = v8 | 0x800;
    }
    if ( (int)KeSetPagePrivilege(v4, &v15, v8) < 0 )
      KeBugCheckEx(0x1Au, 0x5150CuLL, v4, 0LL, 0LL);
  }
  result = (*(_QWORD *)(BugCheckParameter2 + 40) >> 60) & 7;
  if ( result != 3 )
  {
    result = 0;
    *(_QWORD *)(BugCheckParameter2 + 40) = *(_QWORD *)(BugCheckParameter2 + 40) & 0x8FFFFFFFFFFFFFFFuLL | 0x3000000000000000LL;
  }
  if ( (v2 & 1) != 0 && (MiFlags & 0x10000) != 0 )
  {
    MiGetPagePrivilege(BugCheckParameter2);
    result = KeSetPagePrivilege(v4, &v15, 4LL);
  }
  if ( v5 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << (v5 + 1));
          v14 = (v13 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    result = v5;
    __writecr8(v5);
  }
  return result;
}
