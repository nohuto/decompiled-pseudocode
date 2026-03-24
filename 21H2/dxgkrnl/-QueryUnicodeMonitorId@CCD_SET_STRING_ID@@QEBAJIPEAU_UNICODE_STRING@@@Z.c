/*
 * XREFs of ?QueryUnicodeMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_UNICODE_STRING@@@Z @ 0x1C0130324
 * Callers:
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C012FBCC (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 * Callees:
 *     ?QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z @ 0x1C01329BC (-QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::QueryUnicodeMonitorId(
        CCD_SET_STRING_ID *this,
        unsigned int a2,
        struct _UNICODE_STRING *a3)
{
  __int64 v4; // rsi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  NTSTATUS v10; // eax
  _QWORD *v12; // rax
  _STRING SourceString; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  SourceString = 0LL;
  v6 = CCD_SET_STRING_ID::QueryMonitorId(this, a2, &SourceString);
  v9 = v6;
  if ( v6 < 0 || (v10 = RtlAnsiStringToUnicodeString(a3, &SourceString, 1u), v9 = v10, v10 < 0) )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7);
    v12[3] = v9;
    v12[4] = v4;
    v12[5] = a3;
    v12[6] = this;
    WdLogEvent5_WdError(v12);
  }
  return (unsigned int)v9;
}
