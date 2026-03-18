/*
 * XREFs of ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C003AEB4
 * Callers:
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C003AD58 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C0103020 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 * Callees:
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FAE40 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall CEnsureCurrentDxgProcess::AttachToProcess(CEnsureCurrentDxgProcess *this, struct DXGPROCESS *a2)
{
  struct DXGTHREAD *Current; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGTHREAD *v7; // r8
  __int64 v8; // rax
  __int64 result; // rax

  Current = DXGTHREAD::GetCurrent();
  *((_QWORD *)this + 1) = Current;
  v7 = Current;
  if ( Current )
  {
    *(_QWORD *)this = *((_QWORD *)Current + 1);
    result = 0LL;
    *((_QWORD *)v7 + 1) = a2;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v8 + 24) = -1073741801LL;
    WdLogEvent5_WdError(v8);
    return 3221225495LL;
  }
  return result;
}
