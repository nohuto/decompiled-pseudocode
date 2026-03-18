/*
 * XREFs of ?RemovePostCompositionConfig@@YAXPEAU_POST_COMPOSITION_CONFIG_QUEUE@@H@Z @ 0x1C02142A4
 * Callers:
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C00DF53C (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 * Callees:
 *     ?GetPreviousConfigIndex@@YAHH@Z @ 0x1C00DF92C (-GetPreviousConfigIndex@@YAHH@Z.c)
 *     ?GetNextConfigIndex@@YAHH@Z @ 0x1C0165644 (-GetNextConfigIndex@@YAHH@Z.c)
 */

void __fastcall RemovePostCompositionConfig(struct _POST_COMPOSITION_CONFIG_QUEUE *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // eax

  v3 = (int)a2;
  if ( *(_DWORD *)a1 == -1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v4 + 24) = 8870LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( *((_DWORD *)a1 + 1) == -1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v5 + 24) = 8871LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = 9 * v3;
  *(_OWORD *)((char *)a1 + 4 * v6 + 8) = 0LL;
  *(_OWORD *)((char *)a1 + 4 * v6 + 24) = 0LL;
  *((_DWORD *)a1 + v6 + 10) = 0;
  v7 = *((_DWORD *)a1 + 1);
  if ( *(_DWORD *)a1 == (_DWORD)v3 )
  {
    if ( v7 == (_DWORD)v3 )
    {
      *((_DWORD *)a1 + 1) = -1;
      *(_DWORD *)a1 = -1;
    }
    else
    {
      *(_DWORD *)a1 = GetPreviousConfigIndex(v3);
    }
  }
  else if ( v7 == (_DWORD)v3 )
  {
    *((_DWORD *)a1 + 1) = GetNextConfigIndex(v3);
  }
}
