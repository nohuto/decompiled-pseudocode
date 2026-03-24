/*
 * XREFs of _CcdWriteStrValueToRegistry @ 0x1C0167704
 * Callers:
 *     ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C0136A94 (--$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOP.c)
 *     ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C01476E8 (--$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCO.c)
 *     ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C0167604 (-SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TO.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0028F00 (memset.c)
 */

__int64 __fastcall CcdWriteStrValueToRegistry(HANDLE KeyHandle, PUNICODE_STRING ValueName, PCANSI_STRING SourceString)
{
  unsigned __int16 v6; // ax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int16 v9; // di
  wchar_t *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  wchar_t *v15; // rsi
  __int64 v16; // rbx
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF

  v6 = RtlxAnsiStringToUnicodeSize(SourceString);
  v9 = v6;
  if ( v6 )
  {
    v10 = (wchar_t *)operator new[](v6 + 2LL, 0x63644356u, PagedPool);
    v15 = v10;
    if ( v10 )
    {
      memset(v10, 0, v9 + 2LL);
      DestinationString.Length = 0;
      *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
      DestinationString.MaximumLength = v9;
      DestinationString.Buffer = v15;
      LODWORD(v16) = RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 0);
      if ( (int)v16 >= 0 )
      {
        v17 = ZwSetValueKey(KeyHandle, ValueName, 0, 1u, DestinationString.Buffer, v9 + 2);
        v16 = v17;
        if ( v17 < 0 )
        {
          v23 = WdLogNewEntry5_WdError(v19, v18);
          *(_QWORD *)(v23 + 24) = v16;
          WdLogEvent5_WdError(v23);
        }
      }
      operator delete[](v15);
      return (unsigned int)v16;
    }
    else
    {
      v22 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
      *(_QWORD *)(v22 + 24) = v9;
      WdLogEvent5_WdLowResource(v22);
      return 3221225495LL;
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v21);
    return 3221225485LL;
  }
}
