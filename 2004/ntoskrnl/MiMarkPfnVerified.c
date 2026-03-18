/*
 * XREFs of MiMarkPfnVerified @ 0x14034461C
 * Callers:
 *     MiValidateInPage @ 0x1402297C0 (MiValidateInPage.c)
 *     MiSetSystemCodeProtection @ 0x1402627C8 (MiSetSystemCodeProtection.c)
 *     MiAllocateWsle @ 0x1402A3CA0 (MiAllocateWsle.c)
 *     MiRevertValidPte @ 0x1402AF480 (MiRevertValidPte.c)
 *     MiCopyPage @ 0x1402B4680 (MiCopyPage.c)
 *     MiGatherMappedPages @ 0x1402F5340 (MiGatherMappedPages.c)
 *     MiCompleteSecureProcessFault @ 0x140542CB4 (MiCompleteSecureProcessFault.c)
 *     MiValidateImagePfn @ 0x1406EBA64 (MiValidateImagePfn.c)
 *     MiFillPerSessionProtos @ 0x1408D49E0 (MiFillPerSessionProtos.c)
 *     MiSwitchToPfns @ 0x140A3DD18 (MiSwitchToPfns.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140A5D67C (MiInitializeBootLoadedDriverPfns.c)
 *     MiValidateKernelHalLargePageRange @ 0x140A901A0 (MiValidateKernelHalLargePageRange.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x1402B42D0 (MiGetPagePrivilege.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     KeSetPagePrivilege @ 0x14050DA08 (KeSetPagePrivilege.c)
 */

unsigned __int8 __fastcall MiMarkPfnVerified(ULONG_PTR a1, char a2, __int64 a3, _DWORD *a4)
{
  char v4; // di
  ULONG_PTR v6; // rbp
  unsigned __int8 v7; // si
  char v8; // dl
  int v9; // eax
  __int64 v10; // r8
  unsigned __int8 result; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  __int128 v17; // [rsp+30h] [rbp-18h] BYREF

  v4 = a2;
  v17 = 0LL;
  v6 = (__int64)(a1 + 0x58000000000LL) / 48;
  if ( (a2 & 4) != 0 )
    v7 = 17;
  else
    v7 = MiLockPageInline(
           a1,
           (unsigned __int128)((__int64)(a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64,
           a1 + 0x58000000000LL,
           a4);
  if ( (v4 & 2) != 0 && ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 3 )
    v4 &= ~2u;
  if ( (v4 & 2) != 0 && (MiFlags & 0x10000) != 0 )
  {
    if ( !(unsigned int)MI_PFN_IS_PROTO(a1) && (MiFlags & 0x8000) != 0 )
      *(_QWORD *)&v17 = (__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16;
    v9 = v4 & 1;
    v4 = v8 & 0xFE;
    if ( !v9 )
      v4 = v8;
    v10 = (unsigned int)(4 * v9 + 2);
    if ( (v4 & 0x20) != 0 )
    {
      v10 = (unsigned int)v10 | 0x40;
      if ( (*(_BYTE *)(a1 + 34) & 0x10) == 0 && (*(_DWORD *)(a1 + 16) & 4) == 0 )
        LODWORD(v10) = v10 | 0x800;
    }
    if ( (int)KeSetPagePrivilege(v6, &v17, v10) < 0 )
      KeBugCheckEx(0x1Au, 0x5150CuLL, v6, 0LL, 0LL);
  }
  result = (*(_QWORD *)(a1 + 40) >> 60) & 7;
  if ( result != 3 )
  {
    result = 0;
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0x8FFFFFFFFFFFFFFFuLL | 0x3000000000000000LL;
  }
  if ( (v4 & 1) != 0 && (MiFlags & 0x10000) != 0 )
  {
    MiGetPagePrivilege(a1, 1, (unsigned __int64 *)&v17);
    result = KeSetPagePrivilege(v6, &v17, 4LL);
  }
  if ( v7 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << (v7 + 1));
          v16 = (v15 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    result = v7;
    __writecr8(v7);
  }
  return result;
}
