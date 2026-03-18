/*
 * XREFs of ?DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C0320304
 * Callers:
 *     ??1OUTPUTDUPL_SESSION_MGR@@QEAA@XZ @ 0x1C0160088 (--1OUTPUTDUPL_SESSION_MGR@@QEAA@XZ.c)
 *     ??1ADAPTER_DISPLAY@@QEAA@XZ @ 0x1C02BED0C (--1ADAPTER_DISPLAY@@QEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ??_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z @ 0x1C0055A7C (--_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z.c)
 *     ??1OUTPUTDUPL_MGR@@QEAA@XZ @ 0x1C031F118 (--1OUTPUTDUPL_MGR@@QEAA@XZ.c)
 */

__int64 __fastcall DestroyOutputDuplManager(OUTPUTDUPL_MGR **a1)
{
  OUTPUTDUPL_MGR **v2; // rbx

  if ( a1 )
  {
    if ( *((_BYTE *)a1 + 88) )
    {
      v2 = a1 - 3;
      if ( a1 != (OUTPUTDUPL_MGR **)24 )
      {
        OUTPUTDUPL_MGR::~OUTPUTDUPL_MGR(a1);
        v2[2] = 0LL;
        operator delete(v2);
      }
    }
    else
    {
      OUTPUTDUPL_MGR::`scalar deleting destructor'((OUTPUTDUPL_MGR *)a1);
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid parameter for the function DestroyOutputDuplManager pOutputDuplMgr = 0x%I64x.",
      0LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
