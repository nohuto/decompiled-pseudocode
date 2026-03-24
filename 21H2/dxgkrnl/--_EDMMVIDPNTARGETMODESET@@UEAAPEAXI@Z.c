/*
 * XREFs of ??_EDMMVIDPNTARGETMODESET@@UEAAPEAXI@Z @ 0x1C00052D0
 * Callers:
 *     ??_EDMMVIDPNTARGETMODESET@@WBI@EAAPEAXI@Z @ 0x1C00291D0 (--_EDMMVIDPNTARGETMODESET@@WBI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGETMODESET@@WFI@EAAPEAXI@Z @ 0x1C00291E0 (--_EDMMVIDPNTARGETMODESET@@WFI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGETMODESET@@WGI@EAAPEAXI@Z @ 0x1C00291F0 (--_EDMMVIDPNTARGETMODESET@@WGI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGETMODESET@@WHI@EAAPEAXI@Z @ 0x1C0029200 (--_EDMMVIDPNTARGETMODESET@@WHI@EAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 */

int *__fastcall DMMVIDPNTARGETMODESET::`vector deleting destructor'(int *P, __int64 a2)
{
  char v2; // si
  int *v3; // rbx
  int **v4; // rdi
  int *v5; // rax
  int *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  v2 = a2;
  *(_QWORD *)P = &DMMVIDPNTARGETMODESET::`vftable'{for `SetElement'};
  v3 = P;
  P[32] |= 0x6D640000u;
  *((_QWORD *)P + 14) = 0LL;
  *((_QWORD *)P + 3) = &DMMVIDPNTARGETMODESET::`vftable'{for `IndexedSet<DMMVIDPNTARGETMODE>'};
  *((_QWORD *)P + 15) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)P + 13) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)P + 11) = &ReferenceCounted::`vftable';
  if ( P[24] )
  {
    v8 = WdLogNewEntry5_WdError(P, a2);
    *(_QWORD *)(v8 + 24) = v3[24];
    WdLogEvent5_WdError(v8);
  }
  *((_QWORD *)v3 + 3) = &Set<DMMVIDEOPRESENTSOURCE>::`vftable';
  v4 = (int **)(v3 + 12);
  *((_QWORD *)v3 + 4) = &DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::`vftable';
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == (int *)v4 )
      break;
    if ( *((int ***)v5 + 1) != v4 || (v7 = *(int **)v5, *(int **)(*(_QWORD *)v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v7;
    *((_QWORD *)v7 + 1) = v4;
    P = v5 + 14;
    --*((_QWORD *)v3 + 8);
    *(_QWORD *)v5 = 0LL;
    *((_QWORD *)v5 + 1) = 0LL;
    if ( v5 != (int *)-56LL )
      (**(void (__fastcall ***)(int *, __int64))P)(P, 1LL);
  }
  if ( *((_QWORD *)v3 + 8) )
  {
    v9 = WdLogNewEntry5_WdAssertion(P, a2);
    *(_QWORD *)(v9 + 24) = 394LL;
    WdLogEvent5_WdAssertion(v9);
  }
  *(_QWORD *)v3 = &SetElement::`vftable';
  if ( (v2 & 1) != 0 )
    ExFreePoolWithTag(v3, 0);
  return v3;
}
