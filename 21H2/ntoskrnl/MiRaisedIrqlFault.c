/*
 * XREFs of MiRaisedIrqlFault @ 0x1402307A0
 * Callers:
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 * Callees:
 *     KeInvalidAccessAllowed @ 0x140230BA0 (KeInvalidAccessAllowed.c)
 *     MiCheckSystemNxFault @ 0x140247C5C (MiCheckSystemNxFault.c)
 *     MiNoFaultFound @ 0x14027B0B8 (MiNoFaultFound.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiGenerateAccessViolation @ 0x1405A7258 (MiGenerateAccessViolation.c)
 *     MiTransientCombineAddress @ 0x1405B63F0 (MiTransientCombineAddress.c)
 */

__int64 __fastcall MiRaisedIrqlFault(ULONG_PTR *a1)
{
  ULONG_PTR v2; // rcx
  _DWORD *MmInternal; // rcx
  ULONG_PTR v4; // rdx
  ULONG_PTR v5; // rcx
  _BYTE *v6; // rax
  ULONG_PTR v8; // rsi
  __int64 v9; // rbx
  _QWORD *i; // r14
  ULONG_PTR v11; // rax
  __int64 v12; // rbp
  ULONG_PTR v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // rax
  ULONG_PTR v16; // rdx
  ULONG_PTR v17; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1[2];
  if ( (v2 & 1) == 0 && (unsigned __int8)KeInvalidAccessAllowed(v2, 1LL) )
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
  v5 = a1[2];
  v6 = (_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v5 & 1) != 0 )
  {
    if ( *v6 == 1 || *v6 == 3 || *v6 == 6 )
      return 3221225477LL;
  }
  else if ( (unsigned __int8)KeInvalidAccessAllowed(v5, 0LL) )
  {
    return 3221225477LL;
  }
  if ( (unsigned int)MiTransientCombineAddress(KeGetCurrentThread(), *a1) || (unsigned int)MiGenerateAccessViolation(a1) )
    return 3221225477LL;
  v8 = *a1;
  if ( *a1 >= 0xFFFF800000000000uLL )
  {
    v9 = 3LL;
    for ( i = a1 + 6; ; --i )
    {
      v11 = MI_READ_PTE_LOCK_FREE(*i);
      if ( (v11 & 1) == 0 )
        return 3489660934LL;
      if ( (v11 & 0x80u) != 0LL )
      {
        if ( (a1[1] & 2) != 0 && (v11 & 0x800) == 0 )
          KeBugCheckEx(0xBEu, v8, v11, a1[2], 0xFuLL);
        MiCheckSystemNxFault(a1, v11, 3LL);
        v16 = *a1;
        if ( *a1 >= 0xFFFFF68000000000uLL && v16 <= 0xFFFFF6FFFFFFFFFFuLL )
          KeBugCheckEx(0x50u, v16, a1[1], a1[2], 8uLL);
        return 0LL;
      }
      if ( !v9 )
        break;
      --v9;
    }
    v12 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v13 = MI_READ_PTE_LOCK_FREE(v12);
    v17 = v13;
    v14 = v13;
    if ( (v13 & 1) == 0 )
      return 3489660934LL;
    if ( (a1[1] & 2) != 0 )
    {
      if ( (v13 & 0x200) != 0 )
        return 3489660934LL;
      if ( (v13 & 0x800) == 0 )
        KeBugCheckEx(0xBEu, v8, v13, a1[2], 0xAuLL);
    }
    MiCheckSystemNxFault(a1, v13, 0LL);
    v15 = MI_READ_PTE_LOCK_FREE(&v17);
    if ( *(_WORD *)(48 * ((v15 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 32) > 1u
      || (*(_BYTE *)(48 * ((v15 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) & 1) == 0
      || (*(_BYTE *)(48 * ((v15 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 35) & 8) != 0 )
    {
      MiNoFaultFound((_DWORD)a1, v12, *a1, a1[2], 1, v14);
      return 0LL;
    }
  }
  return 3489660934LL;
}
