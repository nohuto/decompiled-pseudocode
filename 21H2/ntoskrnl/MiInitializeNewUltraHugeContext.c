/*
 * XREFs of MiInitializeNewUltraHugeContext @ 0x14025BDC8
 * Callers:
 *     MiGetHugePageToZero @ 0x140205FD4 (MiGetHugePageToZero.c)
 * Callees:
 *     MiStopPageAccessor @ 0x140226844 (MiStopPageAccessor.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiInitializeColorTable @ 0x14025BFE0 (MiInitializeColorTable.c)
 *     MiDeleteUltraThreadContext @ 0x140268284 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x14026A574 (MiCreateUltraThreadContext.c)
 *     MiMakeProtectionPfnCompatible @ 0x14026C61C (MiMakeProtectionPfnCompatible.c)
 *     MiGetUltraMapping @ 0x1402C6260 (MiGetUltraMapping.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInitializeNewUltraHugeContext(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v6; // r14
  ULONG_PTR v7; // rdi
  ULONG_PTR v8; // r12
  KIRQL v9; // bp
  volatile LONG *v10; // r14
  unsigned __int64 UltraMapping; // rax
  __int64 *v12; // rdx
  __int64 v13; // rcx
  __int64 **v14; // r8
  __int64 *v15; // r15
  int ProtectionPfnCompatible; // eax
  __int64 ValidPte; // rbx
  int v18; // r12d
  int v19; // eax
  int v20; // r11d
  __int64 v21; // rax
  __int64 result; // rax
  __int64 v23; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v27; // eax
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r11
  _DWORD *v30; // r9
  int v31; // edx
  bool v32; // zf
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r9
  _DWORD *v35; // r8
  int v36; // eax
  int UltraThreadContext; // [rsp+20h] [rbp-58h]
  int v38; // [rsp+24h] [rbp-54h] BYREF
  __int128 v39; // [rsp+28h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a1 + 232);
  v3 = *(_QWORD *)(a2 + 176);
  v39 = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(v2 + 72) + 16LL) + 24512LL * *(unsigned int *)(a2 + 320);
  if ( *(_BYTE *)(a2 + 68) )
  {
    v23 = v3 & 0x3FFFFF;
    v7 = 0LL;
    v8 = qword_140C52968 + 8 * v23;
    v3 = v23 << 18;
  }
  else
  {
    v7 = 48 * v3 - 0x220000000000LL;
    v8 = 0LL;
  }
  *(_DWORD *)(a2 + 96) = 512;
  *(_QWORD *)(a2 + 104) = a2 + 112;
  *(_DWORD *)(a2 + 324) = 1;
  *(_DWORD *)(a2 + 112) |= 1u;
  MiInitializeColorTable(&v39, *(unsigned int *)(a2 + 320));
  UltraThreadContext = MiCreateUltraThreadContext(a2 + 184, (unsigned int)v39, 1LL);
  if ( v7 )
  {
    v38 = 0;
    v9 = 17;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v38);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
    v10 = (volatile LONG *)(v6 + 22848);
  }
  else
  {
    v10 = (volatile LONG *)(v6 + 22848);
    v9 = ExAcquireSpinLockExclusive(v10);
  }
  if ( *(_BYTE *)(a2 + 70) )
  {
    if ( v7 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v10);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v9 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v27 = ~(unsigned __int16)(-1LL << (v9 + 1));
            v32 = (v27 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v27;
            if ( v32 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v9);
    }
    if ( UltraThreadContext )
      MiDeleteUltraThreadContext(a2 + 184);
    return 1LL;
  }
  else
  {
    if ( UltraThreadContext )
    {
      UltraMapping = MiGetUltraMapping(a2 + 184, 0LL, 0x40000LL, 1LL);
      v12 = (__int64 *)(a2 + 80);
      v13 = *(_QWORD *)(a1 + 232) + 56LL;
      v14 = *(__int64 ***)(*(_QWORD *)(a1 + 232) + 64LL);
      if ( *v14 != (__int64 *)v13 )
        __fastfail(3u);
      *v12 = v13;
      *(_QWORD *)(a2 + 88) = v14;
      *v14 = v12;
      *(_QWORD *)(v13 + 8) = v12;
      *(_QWORD *)(a2 + 312) = UltraMapping;
      *(_QWORD *)(a2 + 40) = UltraMapping;
      v15 = (__int64 *)(((UltraMapping >> 27) & 0x1FFFF8) - 0x90482600000LL);
      if ( v7 )
        ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, v7);
      else
        ProtectionPfnCompatible = 4;
      ValidPte = MiMakeValidPte(v15, v3, ProtectionPfnCompatible | 0xA4000000);
      v18 = 0;
      v19 = MiPteInShadowRange(v15);
      v20 = 0;
      if ( !v19 )
        goto LABEL_13;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v18 = 1;
        if ( HIBYTE(word_140C51864) == (_BYTE)v20 )
        {
          v32 = (ValidPte & 1) == 0;
          goto LABEL_53;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v32 = (ValidPte & 1) == 0;
LABEL_53:
        if ( !v32 )
          ValidPte |= 0x8000000000000000uLL;
      }
LABEL_13:
      *v15 = ValidPte;
      if ( v18 )
        MiWritePteShadow((__int64)v15, ValidPte);
      v21 = *(_QWORD *)(a2 + 40) + 0x3FFFFFFFLL;
      *(_DWORD *)(a2 + 64) = v20;
      *(_QWORD *)(a2 + 48) = v21;
      *(_QWORD *)(a2 + 32) = v15;
      if ( v7 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v10);
        v20 = 0;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v33 = KeGetCurrentIrql();
            if ( v33 <= 0xFu && v9 <= 0xFu && v33 >= 2u )
            {
              v34 = KeGetCurrentPrcb();
              v35 = v34->SchedulerAssist;
              v36 = ~(unsigned __int16)(-1LL << (v9 + 1));
              v32 = (v36 & v35[5]) == 0;
              v35[5] &= v36;
              if ( v32 )
              {
                KiRemoveSystemWorkPriorityKick(v34);
                v20 = 0;
              }
            }
          }
        }
        __writecr8(v9);
      }
      *(_DWORD *)(a1 + 64) = v20;
      result = 0LL;
      *(_QWORD *)(a1 + 224) = a2;
      *(_WORD *)(a1 + 216) = v20;
      return result;
    }
    if ( v7 )
    {
      MiStopPageAccessor(v7, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      MiStopPageAccessor(v8, 1uLL);
      ExReleaseSpinLockExclusiveFromDpcLevel(v10);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v28 = KeGetCurrentIrql();
          if ( v28 <= 0xFu && v9 <= 0xFu && v28 >= 2u )
          {
            v29 = KeGetCurrentPrcb();
            v30 = v29->SchedulerAssist;
            v31 = ~(unsigned __int16)(-1LL << (v9 + 1));
            v32 = (v31 & v30[5]) == 0;
            v30[5] &= v31;
            if ( v32 )
              KiRemoveSystemWorkPriorityKick(v29);
          }
        }
      }
      __writecr8(v9);
    }
    MiDeleteUltraThreadContext(a2 + 184);
    return 2LL;
  }
}
