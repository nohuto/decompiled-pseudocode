/*
 * XREFs of MiInitializeEnclavePfn @ 0x14054AC68
 * Callers:
 *     MiAddPagesToEnclave @ 0x140549344 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D22E8 (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x1408D2A30 (MiCreateHardwareEnclave.c)
 * Callees:
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInitializeEnclavePfn(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  char v4; // di
  __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rcx
  char v9; // al
  unsigned __int8 v10; // dl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v14; // zf

  v4 = a3;
  v6 = 48 * a1 - 0x58000000000LL;
  v7 = (unsigned __int8)MiLockPageInline(v6, a2, a3, a4);
  *(_BYTE *)(v6 + 34) = *(_BYTE *)(v6 + 34) & 0xF8 | 6;
  v8 = *(_QWORD *)(v6 + 24) & 0xC000000000000001uLL;
  *(_WORD *)(v6 + 32) = 1;
  v9 = *(_BYTE *)(v6 + 34);
  *(_QWORD *)(v6 + 24) = v8 | 1;
  *(_BYTE *)(v6 + 34) = v9 | 0x10;
  *(_QWORD *)(v6 + 8) = a2;
  *(_QWORD *)(v6 + 16) = MiSwizzleInvalidPte(32LL * (v4 & 0x1F));
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( ((unsigned __int8)KiIrqlFlags & v10) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (v10 + (unsigned __int8)v7));
        v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v14 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
