/*
 * XREFs of MiMarkPfnVerified @ 0x14026C644
 * Callers:
 *     MiGatherMappedPages @ 0x14028B330 (MiGatherMappedPages.c)
 *     MiCopyPage @ 0x1402E7D60 (MiCopyPage.c)
 *     MiAllocateWsle @ 0x140322F10 (MiAllocateWsle.c)
 *     MiRevertValidPte @ 0x14032E130 (MiRevertValidPte.c)
 *     MiValidateInPage @ 0x140338080 (MiValidateInPage.c)
 *     MiSetSystemCodeProtection @ 0x14033EF50 (MiSetSystemCodeProtection.c)
 *     MiInitializeBootLoadedDriverPfnRange @ 0x1403CA414 (MiInitializeBootLoadedDriverPfnRange.c)
 *     MiProtectDriverSectionPte @ 0x140582320 (MiProtectDriverSectionPte.c)
 *     MiCompleteSecureProcessFault @ 0x1405A6E74 (MiCompleteSecureProcessFault.c)
 *     MiValidateImagePfn @ 0x1406F3408 (MiValidateImagePfn.c)
 *     MiFillPerSessionProtos @ 0x140983680 (MiFillPerSessionProtos.c)
 *     MiCreateDescriptorPfns @ 0x140AF5940 (MiCreateDescriptorPfns.c)
 *     MiValidateKernelHalLargePageRange @ 0x140B52BA0 (MiValidateKernelHalLargePageRange.c)
 * Callees:
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MiGetPagePrivilege @ 0x140313B20 (MiGetPagePrivilege.c)
 *     MiSetPfnIdentity @ 0x14033C300 (MiSetPfnIdentity.c)
 *     KeSetPagePrivilege @ 0x14039FDB0 (KeSetPagePrivilege.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall MiMarkPfnVerified(ULONG_PTR BugCheckParameter2, char a2)
{
  char v2; // bl
  ULONG_PTR v4; // rbp
  unsigned __int8 v5; // si
  __int64 v6; // rax
  int v7; // r8d
  __int64 v8; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  __int128 v15; // [rsp+30h] [rbp-18h] BYREF

  v2 = a2;
  v15 = 0LL;
  v4 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4);
  if ( (a2 & 4) != 0 )
    v5 = 17;
  else
    v5 = MiLockPageInline(BugCheckParameter2);
  if ( (v2 & 2) != 0 )
  {
    if ( ((*(_QWORD *)(BugCheckParameter2 + 40) >> 60) & 7) == 3 )
      v2 &= ~2u;
    if ( (v2 & 2) != 0 && (MiFlags & 0x8000) != 0 )
    {
      if ( *(__int64 *)(BugCheckParameter2 + 40) >= 0 && (MiFlags & 0x4000) != 0 )
        *(_QWORD *)&v15 = (__int64)(*(_QWORD *)(BugCheckParameter2 + 8) << 25) >> 16;
      v7 = v2 & 1;
      if ( (v2 & 1) != 0 )
        v2 &= ~1u;
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
  }
  LOBYTE(v6) = (*(_QWORD *)(BugCheckParameter2 + 40) >> 60) & 7;
  if ( (_BYTE)v6 != 3 )
  {
    MiSetPfnIdentity(BugCheckParameter2, 3LL);
    v6 = *(_QWORD *)(BugCheckParameter2 + 16);
  }
  if ( (v2 & 1) != 0 && (MiFlags & 0x8000) != 0 )
  {
    MiGetPagePrivilege(BugCheckParameter2);
    LOBYTE(v6) = KeSetPagePrivilege(v4, &v15, 4LL);
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
          v12 = ~(unsigned __int16)(-1LL << (v5 + 1));
          v13 = (v12 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v12;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    LOBYTE(v6) = v5;
    __writecr8(v5);
  }
  return v6;
}
