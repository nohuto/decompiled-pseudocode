/*
 * XREFs of MiRaisedIrqlFault @ 0x1402F641C
 * Callers:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 * Callees:
 *     MiNoFaultFound @ 0x14022B5D8 (MiNoFaultFound.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     KeInvalidAccessAllowed @ 0x1402F6560 (KeInvalidAccessAllowed.c)
 *     MiCheckSystemNxFault @ 0x1403185E8 (MiCheckSystemNxFault.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiGenerateAccessViolation @ 0x140542A40 (MiGenerateAccessViolation.c)
 *     MiTransientCombineAddress @ 0x140557734 (MiTransientCombineAddress.c)
 */

__int64 __fastcall MiRaisedIrqlFault(ULONG_PTR *a1)
{
  ULONG_PTR v2; // rcx
  _DWORD *MmInternal; // rcx
  ULONG_PTR v4; // rdx
  _BYTE *v6; // rax
  ULONG_PTR v7; // rsi
  __int64 v8; // rbx
  unsigned __int64 *i; // r14
  ULONG_PTR v10; // rax
  ULONG_PTR v11; // rax
  unsigned __int64 v12; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v14; // rax
  __int64 v15; // rbx
  ULONG_PTR v16; // rdx
  ULONG_PTR v17; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1[2];
  if ( (v2 & 1) == 0 && (unsigned __int8)KeInvalidAccessAllowed(v2, 1LL) == 1 )
    return 3221225477LL;
  if ( (a1[10] & 0x20) != 0 )
    KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 0xEuLL);
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  if ( MmInternal && MmInternal[3120] )
  {
    v4 = *a1;
    if ( KeGetCurrentIrql() != 2 )
      KeBugCheckEx(0x50u, v4, a1[1], KeGetCurrentIrql(), 0xAuLL);
    if ( v4 < 0xFFFFF6FB40000000uLL || v4 > 0xFFFFF6FB7FFFFFFFuLL )
      KeBugCheckEx(0x50u, v4, a1[1], a1[2], 0xBuLL);
    return 3221225477LL;
  }
  v6 = (_BYTE *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (a1[2] & 1) != 0 && *v6 == 1 )
    return 3221225477LL;
  if ( (a1[2] & 1) == 0 )
  {
    if ( (unsigned __int8)KeInvalidAccessAllowed(a1[2], 0LL) != 1 )
      goto LABEL_20;
    return 3221225477LL;
  }
  if ( *v6 == 3 || *v6 == 6 )
    return 3221225477LL;
LABEL_20:
  if ( (unsigned int)MiTransientCombineAddress(KeGetCurrentThread(), *a1) == 1 )
    return 3221225477LL;
  v7 = *a1;
  if ( *a1 >= 0xFFFF800000000000uLL )
  {
    v8 = 3LL;
    for ( i = a1 + 6; ; --i )
    {
      v10 = MI_READ_PTE_LOCK_FREE(*i);
      if ( (v10 & 1) == 0 )
        goto LABEL_32;
      if ( (v10 & 0x80u) != 0LL )
      {
        if ( (a1[1] & 2) != 0 && (v10 & 0x800) == 0 )
          KeBugCheckEx(0xBEu, v7, v10, a1[2], 0xFuLL);
        MiCheckSystemNxFault(a1, v10, 3LL);
        v16 = *a1;
        if ( *a1 >= 0xFFFFF68000000000uLL && v16 <= 0xFFFFF6FFFFFFFFFFuLL )
          KeBugCheckEx(0x50u, v16, a1[1], a1[2], 8uLL);
        return 0LL;
      }
      if ( !v8 )
        break;
      --v8;
    }
    v11 = MI_READ_PTE_LOCK_FREE(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v17 = v11;
    v12 = v11;
    if ( (v11 & 1) != 0 )
    {
      if ( (a1[1] & 2) != 0 )
      {
        if ( (v11 & 0x200) != 0 )
          return 3489660934LL;
        if ( (v11 & 0x800) == 0 )
          KeBugCheckEx(0xBEu, v7, v11, a1[2], 0xAuLL);
      }
      MiCheckSystemNxFault(a1, v17, 0LL);
      if ( MiPteInShadowRange((unsigned __int64)&v17)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v14 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v17 >> 3) & 0x1FF));
          if ( (v14 & 0x20) != 0 )
            v12 |= 0x20uLL;
          if ( (v14 & 0x42) != 0 )
            v12 |= 0x42uLL;
        }
        else
        {
          v12 = v17;
        }
      }
      v15 = (v12 >> 12) & 0xFFFFFFFFFLL;
      if ( *(_WORD *)(48 * v15 - 0x58000000000LL + 32) > 1u
        || (*(_BYTE *)(48 * v15 - 0x58000000000LL) & 1) == 0
        || (*(_BYTE *)(48 * v15 - 0x58000000000LL + 35) & 8) != 0 )
      {
        MiNoFaultFound(
          (__int64)a1,
          (volatile signed __int64 *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
          *a1,
          a1[2],
          1u,
          v17);
        return 0LL;
      }
    }
LABEL_32:
    if ( (unsigned int)MiGenerateAccessViolation(a1) )
      return 3221225477LL;
  }
  return 3489660934LL;
}
