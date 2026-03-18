/*
 * XREFs of MiRecheckCombineVm @ 0x140364E80
 * Callers:
 *     MiConvertStandbyToProto @ 0x140364328 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiGetTopLevelPfn @ 0x14034D5B0 (MiGetTopLevelPfn.c)
 *     MiCombineCandidate @ 0x140366B50 (MiCombineCandidate.c)
 */

_BOOL8 __fastcall MiRecheckCombineVm(__int64 a1, __int64 a2, ULONG_PTR a3, char *a4)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // edi
  __int64 TopLevelPfn; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  char *AnyMultiplexedVm; // rax

  v6 = MiCombineCandidate();
  v10 = v6;
  if ( !v6 )
    return 0LL;
  if ( v6 == 2 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  }
  else
  {
    TopLevelPfn = MiGetTopLevelPfn(a3, v7, v8, v9);
    v12 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
    v13 = (*(_QWORD *)(TopLevelPfn + 24) >> 62) & 1LL;
    if ( TopLevelPfn != a3 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v10 != 1 )
      return !(_DWORD)v13 && a4 == (char *)(v12 + 256);
    AnyMultiplexedVm = (char *)(v12 + 1664);
  }
  return a4 == AnyMultiplexedVm;
}
