/*
 * XREFs of ??_ECFlipToken@@MEAAPEAXI@Z @ 0x1C00055A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Discard@CFlipToken@@UEAAXXZ @ 0x1C00069D0 (-Discard@CFlipToken@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

PVOID __fastcall CFlipToken::`vector deleting destructor'(PVOID P, char a2)
{
  bool v2; // zf
  void (__fastcall ***v5)(_QWORD); // rcx

  v2 = *((_DWORD *)P + 6) == 6;
  *(_QWORD *)P = &CFlipToken::`vftable';
  if ( !v2 )
    CFlipToken::Discard((CFlipToken *)P);
  v5 = (void (__fastcall ***)(_QWORD))*((_QWORD *)P + 10);
  *(_QWORD *)P = &CToken::`vftable';
  if ( v5 )
    (**v5)(v5);
  ObfDereferenceObject(*((PVOID *)P + 4));
  v2 = *((_DWORD *)P + 6) == 6;
  *(_QWORD *)P = &CTokenBase::`vftable';
  if ( !v2 )
    *((_DWORD *)P + 6) = 6;
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
