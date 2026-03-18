/*
 * XREFs of ?GetRedirectedFlipFenceValue@DXGSYNCOBJECT@@QEBA_KXZ @ 0x1C00487D0
 * Callers:
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C00EAB10 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall DXGSYNCOBJECT::GetRedirectedFlipFenceValue(DXGSYNCOBJECT *this, __int64 a2)
{
  __int64 v3; // rax

  if ( *((_DWORD *)this + 48) != 3 )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 346LL;
    WdLogEvent5_WdAssertion(v3);
  }
  return *((_QWORD *)this + 14);
}
