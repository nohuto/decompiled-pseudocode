/*
 * XREFs of ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x1C0256188
 * Callers:
 *     DxgkEscape @ 0x1C00FB2D0 (DxgkEscape.c)
 * Callees:
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z @ 0x1C0042F7C (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z.c)
 *     _DxgDbgTakeSnapshot_::_2_::_AUTO::__AUTO @ 0x1C0256144 (_DxgDbgTakeSnapshot_--_2_--_AUTO--__AUTO.c)
 */

__int64 __fastcall DxgDbgTakeSnapshot(void *a1, unsigned int a2, unsigned int *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v10; // eax
  int Snapshot; // ebx
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // eax
  void *Src[2]; // [rsp+30h] [rbp-18h] BYREF

  v4 = a2;
  if ( SeSinglePrivilegeCheck((LUID)11LL, 1) )
  {
    *(_OWORD *)Src = 0LL;
    v10 = TdrCollectBugcheckSecondaryDumpData(0LL, 0xFFFFFFFF, 0);
    if ( v10 )
    {
      v12 = v10 + 4096;
      Src[0] = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v10 + 4096), 0x52445476u);
      if ( Src[0] )
      {
        v15 = WdLogNewEntry5_WdEvent(v14, v13);
        *(_QWORD *)(v15 + 24) = a1;
        *(_QWORD *)(v15 + 32) = v4;
        WdLogEvent5_WdEvent(v15);
        v16 = TdrCollectBugcheckSecondaryDumpData((_QWORD *)Src[0], v12, 1);
        Snapshot = WdDbgCreateSnapshot(&WdDxgkSecondaryDataGUID, Src[0], v16, &Src[1], a3);
        if ( Snapshot >= 0 )
        {
          if ( (unsigned int)v4 >= *a3 )
          {
            if ( a1 )
              memmove(a1, Src[1], *a3);
            Snapshot = 0;
          }
          else
          {
            Snapshot = 1075707914;
          }
        }
      }
      else
      {
        Snapshot = -1073741801;
      }
    }
    else
    {
      Snapshot = -1073741823;
    }
    DxgDbgTakeSnapshot_::_2_::_AUTO::__AUTO((__int64)Src);
    return (unsigned int)Snapshot;
  }
  else
  {
    v8 = WdLogNewEntry5_WdEvent(v7, v6);
    *(_QWORD *)(v8 + 24) = a1;
    *(_QWORD *)(v8 + 32) = v4;
    WdLogEvent5_WdEvent(v8);
    return 3221225506LL;
  }
}
