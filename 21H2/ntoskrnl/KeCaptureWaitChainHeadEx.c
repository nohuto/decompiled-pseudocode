/*
 * XREFs of KeCaptureWaitChainHeadEx @ 0x140233430
 * Callers:
 *     ExpReleaseResourceSharedForThreadLite @ 0x1402B1740 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpPrepareToWakeResourceShared @ 0x14039D2EC (ExpPrepareToWakeResourceShared.c)
 *     ExpPrepareToWakeResourceExclusive @ 0x14039D600 (ExpPrepareToWakeResourceExclusive.c)
 * Callees:
 *     RtlInsertHeadCircularList @ 0x1402334A0 (RtlInsertHeadCircularList.c)
 */

__int64 __fastcall KeCaptureWaitChainHeadEx(_QWORD **a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  _QWORD *v4; // r10
  _QWORD *v6; // rdx
  __int64 v7; // r9
  _QWORD *v8; // rcx
  _QWORD *v9; // rax

  result = 0LL;
  v4 = a3;
  *a2 = 0LL;
  v6 = *a1;
  if ( *a1 )
  {
    if ( (_QWORD *)*v6 == v6 )
    {
      *a1 = 0LL;
    }
    else
    {
      *a1 = (_QWORD *)*v6;
      v8 = (_QWORD *)*v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v9 = (_QWORD *)v6[1], (_QWORD *)*v9 != v6) )
        __fastfail(3u);
      *v9 = v8;
      v8[1] = v9;
    }
    result = RtlInsertHeadCircularList(a2, v6, a2, v6[2]);
  }
  else
  {
    v7 = 0LL;
  }
  if ( v4 )
    *v4 = v7;
  return result;
}
