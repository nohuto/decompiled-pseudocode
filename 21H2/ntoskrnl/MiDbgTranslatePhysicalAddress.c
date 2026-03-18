/*
 * XREFs of MiDbgTranslatePhysicalAddress @ 0x1405A4C68
 * Callers:
 *     MiDbgCopyMemory @ 0x14028FA14 (MiDbgCopyMemory.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x14026C61C (MiMakeProtectionPfnCompatible.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     KeFlushSingleTb @ 0x1402EA644 (KeFlushSingleTb.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KeFlushSingleCurrentTb @ 0x1403AD304 (KeFlushSingleCurrentTb.c)
 *     MiFreezeIoPfnNode @ 0x140591724 (MiFreezeIoPfnNode.c)
 *     MiCheckPhysicalAddressRange @ 0x1405A473C (MiCheckPhysicalAddressRange.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x1405A4FB8 (MiDbgUnTranslatePhysicalAddress.c)
 */

unsigned __int64 __fastcall MiDbgTranslatePhysicalAddress(unsigned __int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v3; // r12
  int v4; // ebp
  __int16 v7; // bx
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 v11; // r11
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r12
  int v15; // esi
  unsigned __int8 CurrentIrql; // r10
  __int64 v17; // rcx
  __int64 v18; // r15
  int ProtectionPfnCompatible; // eax
  __int64 v20; // r9
  __int64 v21; // r15
  __int64 v22; // r8
  int v23; // ecx
  char v24; // di
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned int v29; // r8d
  volatile signed __int64 *v30; // rsi
  unsigned __int64 ValidPte; // rax
  _DWORD v33[14]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v34; // [rsp+78h] [rbp+20h]

  v3 = qword_140C52BC8;
  v4 = 0;
  v7 = a1;
  if ( !qword_140C52BC8 || !(unsigned int)MiCheckPhysicalAddressRange(a1, 1LL) )
    return 0LL;
  v12 = 2LL;
  v13 = v9 >> 12;
  v14 = v3 << 25 >> 16;
  v34 = v13;
  *(_DWORD *)a3 = 0;
  v15 = v11 + (((unsigned __int8)v11 & a2) != 0 ? 3 : 0);
  if ( (a2 & 4) != 0 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v11) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v8 = SchedulerAssist[5] | ~((unsigned __int8)(v11 << ((unsigned __int8)v11 + CurrentIrql)) - (_BYTE)v11) & 4u;
      SchedulerAssist[5] = v8;
      v12 = 2LL;
    }
  }
  *(_BYTE *)(a3 + 4) = CurrentIrql;
  if ( v13 <= qword_140C50840 )
  {
    v17 = 6 * v13;
    if ( (*(_QWORD *)(8 * v17 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
    {
      v18 = 8 * v17 - 0x220000000000LL;
      if ( (a2 & 4) != 0 )
      {
        *(_DWORD *)a3 = v11;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
        {
          if ( (a2 & 0x41) != 0 || (KiBugCheckActive & 3) == 0 )
            return 0LL;
          dword_140C52BD0 += v11;
          *(_DWORD *)a3 = 4;
        }
      }
      else
      {
        *(_DWORD *)a3 = 2;
        v33[0] = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(v33, v8, v12, (__int64)SchedulerAssist);
          while ( *(__int64 *)(v18 + 24) < 0 );
        }
      }
      *(_QWORD *)(a3 + 8) = v18;
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v15, v18);
      v20 = v34;
      v15 = ProtectionPfnCompatible | 8;
      if ( (*(_BYTE *)(v18 + 34) & 0xC0) != 0xC0 )
        v15 = ProtectionPfnCompatible;
      goto LABEL_51;
    }
    v13 = v34;
  }
  v21 = a3 + 16;
  v22 = a3 + 16;
  if ( (a2 & 4) != 0 )
  {
    *(_DWORD *)a3 = 8;
    if ( !(unsigned int)MiFreezeIoPfnNode(v13, v11, v22) )
      return 0LL;
  }
  else
  {
    *(_DWORD *)a3 = 16;
    MiFreezeIoPfnNode(v13, 0, v22);
  }
  v23 = 3;
  v20 = v34;
  if ( !*(_QWORD *)v21
    || (v23 = *(unsigned __int16 *)(*(_QWORD *)v21
                                  + 2
                                  * ((v34 & ((1LL << ((unsigned __int8)dword_140C50720 - 12)) - 1))
                                   - *(_QWORD *)(*(_QWORD *)v21 + 24LL))
                                  + 80) >> 14,
        v23 == 3) )
  {
    if ( (a2 & 4) == 0 )
      v4 = v23;
    v23 = v4;
    if ( (a2 & 0x28) == 0 )
      goto LABEL_38;
    v24 = a2 & 0xD7;
  }
  else
  {
    v24 = a2 & 0xC7;
    if ( v23 )
    {
      if ( v23 == 2 )
        a2 = v24 | 0x20;
      else
        a2 = v24 | 8;
      goto LABEL_38;
    }
  }
  a2 = v24 | 0x10;
LABEL_38:
  if ( (a2 & 8) == 0 )
  {
    if ( (a2 & 0x10) != 0 )
    {
      v25 = __readcr4();
      if ( (v25 & 0x20080) != 0 )
      {
        __writecr4(v25 ^ 0x80);
        __writecr4(v25);
      }
      else
      {
        v26 = __readcr3();
        __writecr3(v26);
      }
      v15 |= 8u;
    }
    else
    {
      if ( (a2 & 0x20) == 0 )
      {
LABEL_58:
        MiDbgUnTranslatePhysicalAddress(a3);
        return 0LL;
      }
      v27 = __readcr4();
      if ( (v27 & 0x20080) != 0 )
      {
        __writecr4(v27 ^ 0x80);
        __writecr4(v27);
      }
      else
      {
        v28 = __readcr3();
        __writecr3(v28);
      }
      v15 |= 0x18u;
    }
  }
  if ( v23 == 3 )
    ++dword_140C52BD0;
LABEL_51:
  v29 = v15 | 0xA0000000;
  v30 = (volatile signed __int64 *)qword_140C52BC8;
  ValidPte = MiMakeValidPte(qword_140C52BC8, v20, v29);
  if ( (a2 & 0x41) != 0 )
    byte_140C52BC0 = 1;
  if ( _InterlockedCompareExchange64(v30, ValidPte, 0LL) )
    goto LABEL_58;
  *(_DWORD *)a3 |= 0x20u;
  if ( (*(_DWORD *)a3 & 0x12) != 0 )
    KeFlushSingleTb(v14, 0, 1u);
  else
    KeFlushSingleCurrentTb(v14, 0);
  return v14 + (v7 & 0xFFF);
}
