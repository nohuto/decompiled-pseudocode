/*
 * XREFs of MiCauseOverCommitPopup @ 0x140550630
 * Callers:
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     MiPageFileNoFreeSpace @ 0x140543E74 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     IoRaiseInformationalHardError @ 0x140505EB0 (IoRaiseInformationalHardError.c)
 */

char __fastcall MiCauseOverCommitPopup(__int64 a1)
{
  int v1; // eax
  NTSTATUS v2; // ecx

  if ( *(_QWORD *)(a1 + 7592) != *(_QWORD *)(a1 + 6216) )
  {
    v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 6228));
    if ( v1 > 1 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 6228));
      return v1;
    }
    v2 = -1073741112;
LABEL_8:
    LOBYTE(v1) = IoRaiseInformationalHardError(v2, 0LL, 0LL);
    return v1;
  }
  v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 6224));
  if ( v1 <= 1 )
  {
    v2 = -1073741523;
    goto LABEL_8;
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 6224));
  return v1;
}
