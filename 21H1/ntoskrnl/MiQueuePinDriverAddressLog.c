/*
 * XREFs of MiQueuePinDriverAddressLog @ 0x1403A0D34
 * Callers:
 *     MmBuildMdlForNonPagedPool @ 0x14023A430 (MmBuildMdlForNonPagedPool.c)
 *     MiGetPhysicalAddress @ 0x14033BB94 (MiGetPhysicalAddress.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     RtlInterlockedSetClearRun @ 0x14034F770 (RtlInterlockedSetClearRun.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiQueuePinDriverAddressLog(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v4; // r13
  unsigned __int8 CurrentIrql; // bp
  unsigned __int8 v6; // cl
  unsigned int v7; // esi
  unsigned int v8; // edi
  unsigned int v9; // r8d
  unsigned int v10; // edx
  int v11; // r9d
  char *v12; // r10
  unsigned int v13; // r11d
  unsigned int v14; // ecx
  __int64 *v15; // rsi
  __int64 i; // rax
  int v17; // ebx
  int v18; // edi
  unsigned int v19; // edi
  unsigned int v20; // r8d
  int v21; // edx
  unsigned __int64 v22; // rax
  int v23; // edi
  _DWORD *SchedulerAssist; // r9
  unsigned int SizeOfBitMap; // edx
  char *v26; // rdx
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v28; // r8
  int v29; // eax
  bool v30; // zf
  unsigned __int64 v31; // [rsp+20h] [rbp-48h]
  unsigned __int64 v32; // [rsp+78h] [rbp+10h] BYREF
  int v33; // [rsp+88h] [rbp+20h]

  v32 = a2;
  v4 = a3;
  if ( PoAllProcIntrDisabled || (KiBugCheckActive & 3) != 0 || KdEnteredDebugger )
    return;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    v6 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && v6 <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (v6 + 1)) & 4;
      }
    }
  }
  v7 = -1;
  if ( (word_140C2A1F2 & 1) == 0 )
    goto LABEL_63;
  do
  {
    v8 = v7 + 1;
    v9 = v8 < stru_140C2A080.SizeOfBitMap ? v8 : 0;
    v10 = stru_140C2A080.SizeOfBitMap - 1;
    v11 = ((__int64)stru_140C2A080.Buffer & 4) != 0LL ? 0x20 : 0;
    v12 = (char *)stru_140C2A080.Buffer - (((__int64)stru_140C2A080.Buffer & 4) != 0LL ? 4 : 0);
    while ( 1 )
    {
      v33 = 0;
      v13 = v11 + v10;
      v14 = v11 + v9;
      if ( v10 - v9 != -1 )
        break;
      v7 = -1;
LABEL_47:
      if ( !v9 )
        goto LABEL_17;
      SizeOfBitMap = v8 + 1;
      if ( v8 + 1 > stru_140C2A080.SizeOfBitMap )
        SizeOfBitMap = stru_140C2A080.SizeOfBitMap;
      v10 = SizeOfBitMap - 1;
      v9 = 0;
    }
    v15 = (__int64 *)&v12[8 * ((unsigned __int64)v14 >> 6)];
    for ( i = ((1LL << (v14 & 0x3F)) - 1) | *v15; i == -1; i = *v15 )
    {
      if ( ++v15 > (__int64 *)&v12[8 * ((unsigned __int64)v13 >> 6)] )
        goto LABEL_40;
    }
    _BitScanForward64((unsigned __int64 *)&i, ~i);
    v7 = i + ((unsigned int)(((char *)v15 - v12) >> 3) << 6);
    v33 = i;
    if ( v7 > v13 )
    {
LABEL_40:
      v7 = -1;
      goto LABEL_47;
    }
    if ( v7 == -1 )
      goto LABEL_47;
    v7 -= v11;
LABEL_17:
    ;
  }
  while ( v7 != -1 && !(unsigned int)RtlInterlockedSetClearRun((__int64)&stru_140C2A080, v7, 1u) );
  if ( v7 >= 0x800 )
  {
LABEL_63:
    v26 = (char *)&unk_140C2A198;
    if ( !(_BYTE)KdDebuggerEnabled )
      v26 = (char *)&unk_140C2A190;
    _InterlockedAdd((volatile signed __int32 *)&v26[32 * v4 + (CurrentIrql > 2u ? 0x10 : 0)], 1u);
    goto LABEL_37;
  }
  v17 = MiFlags;
  v31 = a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( (((unsigned int)MiFlags >> 4) & 3) != 0 )
  {
    if ( (((unsigned int)MiFlags >> 4) & 3) == 1 )
      v18 = (v31 ^ (v31 ^ (2 * v4)) & 2) & 0xFFFFFCFE | 0x101;
    else
      v18 = (v31 ^ (v31 ^ (2 * v4)) & 2) & 0xFFFFFCFE | 0x201;
  }
  else
  {
    v18 = (v31 ^ (v31 ^ (2 * v4)) & 2) & 0xFFFFFCFE | 1;
  }
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentIrql == 2 )
      v19 = v18 & 0xFFFFFF3F | 0x40;
    else
      v19 = v18 & 0xFFFFFF3F | 0x80;
  }
  else
  {
    v19 = v18 & 0xFFFFFF3F;
  }
  LODWORD(v31) = v19;
  if ( (_BYTE)KdDebuggerEnabled )
  {
    if ( (_BYTE)KdDebuggerNotPresent )
      v19 = v19 & 0xFFFFF3FF | 0x400;
    else
      v19 = v19 & 0xFFFFF3FF | 0x800;
    LODWORD(v31) = v19;
  }
  v20 = v19;
  if ( (v32 & 1) != 0 )
  {
    if ( ((v32 >> 11) & 1) != 0 )
    {
      v19 |= 8u;
      LODWORD(v31) = v19;
    }
    v21 = v20 | 8;
    if ( ((v32 >> 11) & 1) == 0 )
      v21 = v20;
    if ( (v32 & 0x8000000000000000uLL) == 0 )
    {
      v19 = v21 | 0x10;
      LODWORD(v31) = v21 | 0x10;
    }
    v22 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v32) >> 12) & 0xFFFFFFFFFLL;
    if ( (v17 & 0x8000000) == 0
      || (*(_QWORD *)(48 * v22 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0
      || *(_WORD *)(48 * v22 - 0x57FFFFFFFE0LL) <= 1u )
    {
      goto LABEL_36;
    }
    v23 = v19 | 0x20;
  }
  else
  {
    v23 = v19 | 4;
  }
  LODWORD(v31) = v23;
LABEL_36:
  MiPinDriverAddressLog[v7] = v31;
LABEL_37:
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v28 = CurrentPrcb->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v30 = (v29 & v28[5]) == 0;
        v28[5] &= v29;
        if ( v30 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
  }
}
