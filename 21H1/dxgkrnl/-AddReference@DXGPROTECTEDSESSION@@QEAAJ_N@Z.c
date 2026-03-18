/*
 * XREFs of ?AddReference@DXGPROTECTEDSESSION@@QEAAJ_N@Z @ 0x1C0045718
 * Callers:
 *     ?CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C027280C (-CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAP.c)
 *     ?Initialize@DXGPROTECTEDSESSION@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1I@Z @ 0x1C0283D10 (-Initialize@DXGPROTECTEDSESSION@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1I@Z.c)
 *     ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1C0283EC0 (-Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z.c)
 *     ?QueueSignal@DXGPROTECTEDSESSION@@QEAAJXZ @ 0x1C0283F30 (-QueueSignal@DXGPROTECTEDSESSION@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGPROTECTEDSESSION::AddReference(DXGPROTECTEDSESSION *this, __int64 a2)
{
  unsigned __int32 v3; // ebx
  __int64 v4; // rax

  v3 = _InterlockedIncrement((volatile signed __int32 *)this + 18);
  if ( v3 == 1 && !(_BYTE)a2 )
  {
    v4 = WdLogNewEntry5_WdCriticalError(this, a2);
    *(_QWORD *)(v4 + 24) = 275LL;
    *(_QWORD *)(v4 + 32) = 47LL;
    *(_QWORD *)(v4 + 40) = this;
    *(_OWORD *)(v4 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v4);
  }
  return v3;
}
