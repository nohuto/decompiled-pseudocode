/*
 * XREFs of MiMarkPfnVerified @ 0x140306818
 * Callers:
 *     MiAllocateWsle @ 0x140211190 (MiAllocateWsle.c)
 *     MiRevertValidPte @ 0x14021C800 (MiRevertValidPte.c)
 *     MiCopyPage @ 0x140221A00 (MiCopyPage.c)
 *     MiValidateInPage @ 0x140282810 (MiValidateInPage.c)
 *     MiSetSystemCodeProtection @ 0x1402BB7F8 (MiSetSystemCodeProtection.c)
 *     MiGatherMappedPages @ 0x14035131C (MiGatherMappedPages.c)
 *     MiCompleteSecureProcessFault @ 0x140542664 (MiCompleteSecureProcessFault.c)
 *     MiValidateImagePfn @ 0x1406CA7E4 (MiValidateImagePfn.c)
 *     MiFillPerSessionProtos @ 0x1408D3690 (MiFillPerSessionProtos.c)
 *     MiSwitchToPfns @ 0x140A44AE0 (MiSwitchToPfns.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140A5E5DC (MiInitializeBootLoadedDriverPfns.c)
 *     MiValidateKernelHalLargePageRange @ 0x140A90BB0 (MiValidateKernelHalLargePageRange.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x140221650 (MiGetPagePrivilege.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KeSetPagePrivilege @ 0x14050D3B8 (KeSetPagePrivilege.c)
 */

unsigned __int8 __fastcall MiMarkPfnVerified(ULONG_PTR a1, unsigned int a2)
{
  unsigned int v2; // edi
  ULONG_PTR v4; // r8
  ULONG_PTR v5; // rbp
  unsigned __int8 v6; // si
  char v7; // dl
  int v8; // eax
  __int64 v9; // r8
  unsigned __int8 result; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  __int128 v16; // [rsp+30h] [rbp-18h] BYREF

  v2 = a2;
  v16 = 0LL;
  v4 = a1 + 0x58000000000LL;
  v5 = (__int64)(a1 + 0x58000000000LL) / 48;
  if ( (a2 & 4) != 0 )
    v6 = 17;
  else
    v6 = MiLockPageInline(
           a1,
           (unsigned __int128)((__int64)(a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64,
           v4);
  if ( (v2 & 2) != 0 && ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 3 )
    v2 &= ~2u;
  if ( (v2 & 2) != 0 && (MiFlags & 0x10000) != 0 )
  {
    if ( !(unsigned int)MI_PFN_IS_PROTO(a1, v2, v4) && (MiFlags & 0x8000) != 0 )
      *(_QWORD *)&v16 = (__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16;
    v8 = v2 & 1;
    LOBYTE(v2) = v7 & 0xFE;
    if ( !v8 )
      LOBYTE(v2) = v7;
    v9 = (unsigned int)(4 * v8 + 2);
    if ( (v2 & 0x20) != 0 )
    {
      v9 = (unsigned int)v9 | 0x40;
      if ( (*(_BYTE *)(a1 + 34) & 0x10) == 0 && (*(_DWORD *)(a1 + 16) & 4) == 0 )
        LODWORD(v9) = v9 | 0x800;
    }
    if ( (int)KeSetPagePrivilege(v5, &v16, v9) < 0 )
      KeBugCheckEx(0x1Au, 0x5150CuLL, v5, 0LL, 0LL);
  }
  result = (*(_QWORD *)(a1 + 40) >> 60) & 7;
  if ( result != 3 )
  {
    result = 0;
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0x8FFFFFFFFFFFFFFFuLL | 0x3000000000000000LL;
  }
  if ( (v2 & 1) != 0 && (MiFlags & 0x10000) != 0 )
  {
    MiGetPagePrivilege(a1, 1, (unsigned __int64 *)&v16);
    result = KeSetPagePrivilege(v5, &v16, 4LL);
  }
  if ( v6 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << (v6 + 1));
          v15 = (v14 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    result = v6;
    __writecr8(v6);
  }
  return result;
}
