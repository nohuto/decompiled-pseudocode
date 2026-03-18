/*
 * XREFs of RealInternalRemoveProp @ 0x1C0092990
 * Callers:
 *     <none>
 * Callees:
 *     UserGlobalAtomTableCallout @ 0x1C002941C (UserGlobalAtomTableCallout.c)
 *     ??0?$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ @ 0x1C0029534 (--0-$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ.c)
 *     UserDeleteAtomFromAtomTable @ 0x1C0029580 (UserDeleteAtomFromAtomTable.c)
 *     _FindProp @ 0x1C0092A28 (_FindProp.c)
 */

__int64 __fastcall RealInternalRemoveProp(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // r8d
  __int16 v6; // r10d^2
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rcx
  struct _RTL_ATOM_TABLE *v10; // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  result = FindProp(a1, a2, a3);
  v7 = result;
  if ( result )
  {
    v8 = *(_QWORD *)result;
    if ( !v5 && ((*(_BYTE *)(result + 10) & 2) != 0 || v6 == 1) )
    {
      CLockDomainExclusive<DLT_JOB>::CLockDomainExclusive<DLT_JOB>((__int64)v11);
      v10 = (struct _RTL_ATOM_TABLE *)UserGlobalAtomTableCallout();
      if ( v10 )
        UserDeleteAtomFromAtomTable(v10, *(_WORD *)(v7 + 8));
    }
    --*(_DWORD *)(a1 + 4);
    result = v8;
    v9 = 2LL * *(unsigned int *)(a1 + 4);
    *(_OWORD *)v7 = *(_OWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 4) + 8);
    *(_OWORD *)(a1 + 8 * v9 + 8) = 0LL;
  }
  return result;
}
