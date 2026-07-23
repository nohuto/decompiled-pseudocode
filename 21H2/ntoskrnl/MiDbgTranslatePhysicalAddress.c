/*
 * XREFs of MiDbgTranslatePhysicalAddress @ 0x140546430
 * Callers:
 *     MiDbgCopyMemory @ 0x140545AE4 (MiDbgCopyMemory.c)
 * Callees:
 *     KeFlushSingleTb @ 0x1402599A8 (KeFlushSingleTb.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140282D50 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402E020C (MiMakeProtectionPfnCompatible.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     KeFlushSingleCurrentTb @ 0x14038A028 (KeFlushSingleCurrentTb.c)
 *     MiCheckPhysicalAddressRange @ 0x14054581C (MiCheckPhysicalAddressRange.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x140546804 (MiDbgUnTranslatePhysicalAddress.c)
 */

unsigned __int64 __fastcall MiDbgTranslatePhysicalAddress(unsigned __int64 a1, char a2, __int64 a3)
{
  __int64 v3; // r15
  __int16 v6; // bx
  unsigned __int64 v7; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // r8
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r12
  int v12; // esi
  unsigned __int8 CurrentIrql; // r10
  __int64 v14; // rdx
  __int64 v15; // rbp
  int ProtectionPfnCompatible; // eax
  _QWORD *v17; // rdx
  int v18; // r8d
  unsigned __int64 v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  unsigned __int64 v22; // r9
  char v23; // di
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned int v28; // r8d
  volatile signed __int64 *v29; // rsi
  unsigned __int64 ValidPte; // rax
  _DWORD v32[14]; // [rsp+20h] [rbp-38h] BYREF

  v3 = qword_140C4E8C8;
  v6 = a1;
  if ( !qword_140C4E8C8 || !(unsigned int)MiCheckPhysicalAddressRange(a1, 1LL) )
    return 0LL;
  v9 = 2LL;
  v10 = v3 << 25 >> 16;
  v11 = v7 >> 12;
  *(_DWORD *)a3 = 0;
  v12 = (a2 & 1) != 0 ? 4 : 1;
  if ( (a2 & 4) != 0 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
      v9 = 2LL;
    }
  }
  *(_BYTE *)(a3 + 4) = CurrentIrql;
  if ( v11 <= 0xFFFFFFFFFLL )
  {
    v14 = 0x4000000000000LL;
    if ( (*(_QWORD *)(48 * v11 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
    {
      v15 = 48 * v11 - 0x58000000000LL;
      if ( (a2 & 4) != 0 )
      {
        *(_DWORD *)a3 = 1;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
        {
          if ( (a2 & 0x41) != 0 || (KiBugCheckActive & 3) == 0 )
            return 0LL;
          ++dword_140C4E8D0;
          *(_DWORD *)a3 = 4;
        }
      }
      else
      {
        v32[0] = 0;
        *(_DWORD *)a3 = 2;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(v32, v14, v9, (__int64)SchedulerAssist);
          while ( *(__int64 *)(v15 + 24) < 0 );
        }
      }
      *(_QWORD *)(a3 + 8) = v15;
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v12, 48 * v11 - 0x58000000000LL);
      v12 = ProtectionPfnCompatible | 8;
      if ( (*(_BYTE *)(v15 + 34) & 0xC0) != 0xC0 )
        v12 = ProtectionPfnCompatible;
      goto LABEL_67;
    }
  }
  if ( (a2 & 4) != 0 )
  {
    *(_DWORD *)a3 = 8;
    if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4EC80) )
      return 0LL;
  }
  else
  {
    *(_DWORD *)a3 = 16;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4EC80);
  }
  v17 = (_QWORD *)*((_QWORD *)&xmmword_140C4EC88 + 1);
  v18 = 3;
  while ( v17 )
  {
    v19 = v17[5];
    if ( v11 < v19 )
    {
      v17 = (_QWORD *)*v17;
    }
    else
    {
      if ( v11 < v19 + 512 )
        break;
      v17 = (_QWORD *)v17[1];
    }
  }
  if ( !v17 )
    goto LABEL_36;
  v20 = 0LL;
  v18 = *(unsigned __int16 *)(v17[6] + 2 * ((v11 & 0xFFFFFFFFFLL) - v17[5])) >> 14;
  if ( v18 != 3 )
    v20 = v17;
  if ( !v20 )
  {
LABEL_36:
    v21 = (_QWORD *)qword_140C4EC98;
    while ( v21 )
    {
      v22 = v21[5];
      if ( v11 < v22 )
      {
        v21 = (_QWORD *)*v21;
      }
      else
      {
        if ( v11 < v22 + 512 )
        {
          v18 = *(unsigned __int16 *)(v21[6] + 2 * ((v11 & 0xFFFFFFFFFLL) - v22)) >> 14;
          break;
        }
        v21 = (_QWORD *)v21[1];
      }
    }
  }
  if ( v18 == 3 )
  {
    v18 = 0;
    if ( (a2 & 4) == 0 )
      v18 = 3;
    if ( (a2 & 0x28) == 0 )
      goto LABEL_50;
    v23 = a2 & 0xD7;
  }
  else
  {
    v23 = a2 & 0xC7;
    if ( v18 )
    {
      if ( v18 == 2 )
        a2 = v23 | 0x20;
      else
        a2 = v23 | 8;
      goto LABEL_50;
    }
  }
  a2 = v23 | 0x10;
LABEL_50:
  if ( (a2 & 8) == 0 )
  {
    if ( (a2 & 0x10) != 0 )
    {
      v24 = __readcr4();
      if ( (v24 & 0x20080) != 0 )
      {
        __writecr4(v24 ^ 0x80);
        __writecr4(v24);
      }
      else
      {
        v25 = __readcr3();
        __writecr3(v25);
      }
      v12 |= 8u;
    }
    else
    {
      if ( (a2 & 0x20) == 0 )
      {
LABEL_74:
        MiDbgUnTranslatePhysicalAddress(a3);
        return 0LL;
      }
      v26 = __readcr4();
      if ( (v26 & 0x20080) != 0 )
      {
        __writecr4(v26 ^ 0x80);
        __writecr4(v26);
      }
      else
      {
        v27 = __readcr3();
        __writecr3(v27);
      }
      v12 |= 0x18u;
    }
  }
  if ( v18 == 3 )
    ++dword_140C4E8D0;
LABEL_67:
  v28 = v12 | 0xA0000000;
  v29 = (volatile signed __int64 *)qword_140C4E8C8;
  ValidPte = MiMakeValidPte(qword_140C4E8C8, v11, v28);
  if ( (a2 & 0x41) != 0 )
    byte_140C4E8C0 = 1;
  if ( _InterlockedCompareExchange64(v29, ValidPte, 0LL) )
    goto LABEL_74;
  *(_DWORD *)a3 |= 0x20u;
  if ( (*(_DWORD *)a3 & 0x12) != 0 )
    KeFlushSingleTb(v10, 0, 1u);
  else
    KeFlushSingleCurrentTb(v10, 0);
  return v10 + (v6 & 0xFFF);
}
