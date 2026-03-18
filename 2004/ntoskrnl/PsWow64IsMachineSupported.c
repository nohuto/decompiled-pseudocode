/*
 * XREFs of PsWow64IsMachineSupported @ 0x1406B5AC0
 * Callers:
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 *     PsWow64GetSupportedArchitectures @ 0x1406B5930 (PsWow64GetSupportedArchitectures.c)
 *     CmpSetVersionData @ 0x1407914CC (CmpSetVersionData.c)
 * Callees:
 *     RtlWow64GetEquivalentMachineCHPE @ 0x1402FDE38 (RtlWow64GetEquivalentMachineCHPE.c)
 *     PsQuerySystemDllInfo @ 0x1406B5B0C (PsQuerySystemDllInfo.c)
 */

__int64 __fastcall PsWow64IsMachineSupported(__int16 a1)
{
  __int16 EquivalentMachineCHPE; // ax
  int v2; // r9d
  __int16 v3; // cx
  int v4; // edx
  __int64 SystemDllInfo; // rax
  int v6; // edx
  __int16 v7; // r8

  if ( !a1 )
    return 0LL;
  EquivalentMachineCHPE = RtlWow64GetEquivalentMachineCHPE(a1);
  if ( EquivalentMachineCHPE != v3 )
    return 0LL;
  v4 = v2;
  while ( 1 )
  {
    SystemDllInfo = PsQuerySystemDllInfo((unsigned int)v4);
    if ( SystemDllInfo )
    {
      if ( *(_WORD *)(SystemDllInfo + 2) == v7 )
        break;
    }
    v4 = v6 + 1;
    if ( v4 >= 6 )
      return 0LL;
  }
  return 1LL;
}
