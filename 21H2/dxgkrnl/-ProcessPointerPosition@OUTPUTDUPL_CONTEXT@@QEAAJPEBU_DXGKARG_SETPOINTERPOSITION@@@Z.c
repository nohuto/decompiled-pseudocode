/*
 * XREFs of ?ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C032796C
 * Callers:
 *     ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C01E3200 (-ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0224964 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C031FC2C (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C0327D4C (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessPointerPosition(
        OUTPUTDUPL_CONTEXT *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        __int64 a3)
{
  int updated; // ebx
  _QWORD v7[10]; // [rsp+50h] [rbp-58h] BYREF

  if ( *((_DWORD *)this + 80) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = 2012LL;
    return 0LL;
  }
  else
  {
    updated = DXGDXGIKEYEDMUTEX::OpenLocalMutex(*((_QWORD *)this + *((unsigned int *)this + 11) + 6), 2, a3);
    if ( updated >= 0 )
    {
      memset(v7, 0, 0x48uLL);
      v7[1] = 0LL;
      v7[3] = 0LL;
      LODWORD(v7[0]) = 1;
      v7[4] = a2;
      LODWORD(v7[2]) = 2;
      updated = OUTPUTDUPL_CONTEXT::ProcessUpdateHighLevel(this, (struct _OUTPUTDUPL_UPDATE_INFO *)v7);
      DXGDXGIKEYEDMUTEX::CloseLocalMutex(*((_QWORD *)this + *((unsigned int *)this + 11) + 6), 2, 0LL);
    }
    else
    {
      WdLogSingleEntry2(2LL, *((_QWORD *)this + *((unsigned int *)this + 11) + 6), this);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to open local mutex of TYPE_OTHER for global mutex 0x%I64x in OUTPUTDUPL_CONTEXT 0x%I64x",
        *((_QWORD *)this + *((unsigned int *)this + 11) + 6),
        (__int64)this,
        0LL,
        0LL,
        0LL);
    }
    return (unsigned int)updated;
  }
}
