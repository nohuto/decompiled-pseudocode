/*
 * XREFs of MiRecheckCombineVm @ 0x140227DF0
 * Callers:
 *     MiConvertStandbyToProto @ 0x140227490 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiGetTopLevelPfn @ 0x14026B1C0 (MiGetTopLevelPfn.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiCombineCandidate @ 0x1403137B0 (MiCombineCandidate.c)
 */

_BOOL8 __fastcall MiRecheckCombineVm(__int64 a1, __int64 a2, ULONG_PTR a3, __int64 a4)
{
  int v6; // eax
  int v7; // edi
  __int64 TopLevelPfn; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 AnyMultiplexedVm; // rax

  v6 = MiCombineCandidate();
  v7 = v6;
  if ( !v6 )
    return 0LL;
  if ( v6 == 2 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(2LL);
  }
  else
  {
    TopLevelPfn = MiGetTopLevelPfn(a3);
    v9 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
    v10 = (*(_QWORD *)(TopLevelPfn + 24) >> 62) & 1LL;
    if ( TopLevelPfn != a3 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v7 != 1 )
      return !(_DWORD)v10 && a4 == v9 + 192;
    AnyMultiplexedVm = v9 + 1664;
  }
  return a4 == AnyMultiplexedVm;
}
