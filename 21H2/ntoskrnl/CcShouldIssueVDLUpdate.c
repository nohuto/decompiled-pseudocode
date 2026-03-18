/*
 * XREFs of CcShouldIssueVDLUpdate @ 0x14023A1D8
 * Callers:
 *     CcWriteBehindInternal @ 0x140288760 (CcWriteBehindInternal.c)
 * Callees:
 *     <none>
 */

char __fastcall CcShouldIssueVDLUpdate(__int64 a1)
{
  char v1; // dl
  __int64 v2; // rax
  _QWORD *v3; // rax
  bool v4; // r8
  bool v5; // al
  __int64 v7; // rax

  v1 = 1;
  if ( CcEnablePerVolumeLazyWriter == 1 )
    v2 = *(_QWORD *)(a1 + 592);
  else
    v2 = *(_QWORD *)(a1 + 528);
  v3 = (_QWORD *)(v2 + 1104);
  v4 = *(_DWORD *)(a1 + 4) > 1u && (_QWORD *)*v3 != v3;
  v5 = 0;
  if ( (*(_DWORD *)(a1 + 152) & 0x400) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 40);
    if ( *(_QWORD *)(a1 + 48) >= v7 && v7 != 0x7FFFFFFFFFFFFFFFLL && *(_QWORD *)(a1 + 8) )
      v5 = 1;
  }
  if ( *(_DWORD *)(a1 + 516) || !v5 || v4 )
    return 0;
  return v1;
}
