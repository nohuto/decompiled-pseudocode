/*
 * XREFs of _CcdWriteRegistryValues @ 0x1C01605D8
 * Callers:
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C01601D4 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 *     ?_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C016047C (-_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 * Callees:
 *     _CcdOpenRegistrySubkey @ 0x1C01364B8 (_CcdOpenRegistrySubkey.c)
 */

__int64 __fastcall CcdWriteRegistryValues(const WCHAR *a1, PCWSTR SourceString, __int64 a3, int a4, __int64 a5)
{
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebp
  unsigned int v14; // r12d
  __int64 v15; // r13
  __int64 v16; // r14
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  PCWSTR Path; // [rsp+30h] [rbp-38h] BYREF
  ULONG v24; // [rsp+78h] [rbp+10h] BYREF

  Path = 0LL;
  LODWORD(v9) = -1073741823;
  if ( SourceString && *SourceString )
  {
    v24 = 0;
    v10 = CcdOpenRegistrySubkey((int)&Path, 983103, (int)a1, SourceString, &v24);
    v9 = v10;
    if ( v10 < 0 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
      v21[7] = a5;
      v21[3] = v9;
      v21[4] = a1;
      v21[5] = SourceString;
      v21[6] = a3;
      WdLogEvent5_WdError(v21);
      return (unsigned int)v9;
    }
  }
  else
  {
    Path = a1;
  }
  v13 = 0;
  v14 = a4 - 1;
  if ( v14 )
  {
    v15 = a5;
    v16 = a3 + 24;
    while ( 1 )
    {
      v17 = RtlWriteRegistryValue(
              0x40000000u,
              Path,
              *(PCWSTR *)(v16 - 8),
              *(_DWORD *)(v16 + 8) & 0xFFFFFF,
              (PVOID)(v15 + *(_QWORD *)v16),
              *(_DWORD *)(v16 + 24));
      v9 = v17;
      if ( v17 < 0 )
        break;
      ++v13;
      v16 += 56LL;
      if ( v13 >= v14 )
        goto LABEL_8;
    }
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
    v22[4] = v13;
    v22[3] = v9;
    v22[5] = SourceString;
    v22[6] = a3;
    v22[7] = v15;
    WdLogEvent5_WdError(v22);
  }
LABEL_8:
  if ( Path != a1 )
    ZwClose((HANDLE)Path);
  return (unsigned int)v9;
}
