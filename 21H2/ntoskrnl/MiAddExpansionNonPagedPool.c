/*
 * XREFs of MiAddExpansionNonPagedPool @ 0x1403B63A4
 * Callers:
 *     MiFreeLargeInitializationCodePages @ 0x1403BD3F0 (MiFreeLargeInitializationCodePages.c)
 *     MiInitializeNonPagedPool @ 0x140A4F39C (MiInitializeNonPagedPool.c)
 * Callees:
 *     MiReturnPhysicalPoolPages @ 0x14021B214 (MiReturnPhysicalPoolPages.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiChangePageAttribute @ 0x14030EF34 (MiChangePageAttribute.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiAddExpansionNonPagedPool(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // r8
  unsigned __int64 v4; // rsi
  __int64 v5; // rdx
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r15
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // r9
  unsigned __int8 v12; // al
  _DWORD *v13; // r9
  char v14; // cl
  unsigned __int64 v15; // r14
  char v16; // cl
  char v17; // al
  char v18; // cl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  bool v23; // zf

  if ( a2 )
  {
    v2 = MiSwizzleInvalidPte(128LL);
    v4 = 48 * v3 - 0x58000000000LL;
    v6 = 0LL;
    v7 = v4 + 48 * v5;
    v8 = -1;
    do
    {
      if ( v8 != *((_DWORD *)MiSearchNumaNodeTable((__int64)(v4 + 0x58000000000LL) / 48) + 2) )
      {
        if ( v6 )
        {
          MiReturnPhysicalPoolPages(v6, 0);
          v6 = 0LL;
        }
        v8 = *((_DWORD *)MiSearchNumaNodeTable((__int64)(v4 + 0x58000000000LL) / 48) + 2);
      }
      v12 = MiLockPageInline(v4, v9, v10, v11);
      v14 = *(_BYTE *)(v4 + 34) & 0xC7;
      v15 = v12;
      *(_QWORD *)(v4 + 40) &= ~0x8000000000000000uLL;
      *(_BYTE *)(v4 + 34) = v14;
      v16 = *(_BYTE *)(v4 + 35) & 0xDF;
      *(_BYTE *)(v4 + 35) = v16;
      *(_WORD *)(v4 + 32) = 0;
      *(_QWORD *)(v4 + 24) &= 0xC000000000000000uLL;
      *(_QWORD *)(v4 + 16) = v2;
      *(_QWORD *)(v4 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
      v17 = v16;
      v18 = *(_BYTE *)(v4 + 34);
      *(_BYTE *)(v4 + 35) = v17 | 0x10;
      *(_QWORD *)(v4 + 40) &= 0xFFFFFFF000000000uLL;
      if ( (v18 & 0xC0) != 0x40 )
      {
        MiChangePageAttribute(v4, 1LL, 3LL, v13);
        v18 = *(_BYTE *)(v4 + 34);
      }
      *(_QWORD *)(v4 + 8) = -8LL;
      *(_BYTE *)(v4 + 34) = v18 & 0xF8 | 5;
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
            v23 = (v22 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v22;
            if ( v23 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v15);
      *(_QWORD *)v4 = v6;
      v6 = v4;
      v4 += 48LL;
    }
    while ( v4 < v7 );
    MiReturnPhysicalPoolPages(v6, 0);
  }
}
