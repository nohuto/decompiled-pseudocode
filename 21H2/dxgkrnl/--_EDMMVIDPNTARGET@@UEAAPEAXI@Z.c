/*
 * XREFs of ??_EDMMVIDPNTARGET@@UEAAPEAXI@Z @ 0x1C00051A0
 * Callers:
 *     ??_EDMMVIDPNTARGET@@WCA@EAAPEAXI@Z @ 0x1C0029290 (--_EDMMVIDPNTARGET@@WCA@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGET@@WDA@EAAPEAXI@Z @ 0x1C00292A0 (--_EDMMVIDPNTARGET@@WDA@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGET@@WFA@EAAPEAXI@Z @ 0x1C00292B0 (--_EDMMVIDPNTARGET@@WFA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00055D4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00083B8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall DMMVIDPNTARGET::`vector deleting destructor'(_QWORD *P, __int64 a2)
{
  char v2; // si
  char *v3; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // rax
  __int64 v10; // rax

  v2 = a2;
  *P = &DMMVIDPNTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  v3 = (char *)(P + 13);
  P[4] = &DMMVIDPNTARGET::`vftable'{for `ContainedBy<DMMVIDPNTARGETSET>'};
  P[6] = &DMMVIDPNTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGET>'};
  P[8] = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  P[10] = &DMMVIDPNTARGET::`vftable'{for `NonReferenceCounted'};
  v5 = P[13];
  if ( v5 )
  {
    if ( (unsigned __int64)*(int *)(v5 + 96) > 1 )
    {
      v9 = WdLogNewEntry5_WdError(P, a2);
      *(_QWORD *)(v9 + 24) = *(_QWORD *)v3;
      *(_QWORD *)(v9 + 32) = P;
      WdLogEvent5_WdError(v9);
    }
    *(_QWORD *)(*(_QWORD *)v3 + 112LL) = 0LL;
  }
  if ( P[14] )
  {
    v10 = WdLogNewEntry5_WdError(P, a2);
    *(_QWORD *)(v10 + 24) = *((unsigned int *)P + 6);
    WdLogEvent5_WdError(v10);
  }
  ReferenceCounted::Release((ReferenceCounted *)(P[12] + 64LL));
  v6 = P[15];
  if ( v6 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 16LL))(v6, 1LL);
  v7 = P[14];
  if ( v7 )
    ReferenceCounted::Release((ReferenceCounted *)(v7 + 88));
  P[14] = 0LL;
  auto_rc<DMMVIDPNTARGETMODESET>::reset(v3, 0LL);
  *((_DWORD *)P + 14) |= 0x6D640000u;
  P[5] = 0LL;
  P[10] = &SetElement::`vftable';
  P[6] = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  P[4] = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *P = &SetElement::`vftable';
  if ( (v2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
