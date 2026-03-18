/*
 * XREFs of KiSetIdealProcessorThread @ 0x14035D00C
 * Callers:
 *     KeSetIdealProcessorThreadEx @ 0x14035CE74 (KeSetIdealProcessorThreadEx.c)
 *     KiAdaptThreadIdealProcessorForProcessIdealSetChange @ 0x140572094 (KiAdaptThreadIdealProcessorForProcessIdealSetChange.c)
 * Callees:
 *     KiCheckPrcbAffinityEx @ 0x140291EB8 (KiCheckPrcbAffinityEx.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x140292818 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiAcquireThreadStateLock @ 0x140344DD0 (KiAcquireThreadStateLock.c)
 *     KiReleaseThreadStateLock @ 0x14035D0F8 (KiReleaseThreadStateLock.c)
 */

__int64 __fastcall KiSetIdealProcessorThread(__int64 a1, int a2, char a3, _DWORD *a4)
{
  unsigned int v4; // edi
  int v8; // eax
  _WORD *v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r9
  __int64 v12; // rcx
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int32 *v15; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v14[0] = 0LL;
  v15 = 0LL;
  if ( !a3 && (*(_DWORD *)(a1 + 116) & 8) != 0 )
  {
    v9 = *(_WORD **)(a1 + 552);
    v8 = *(_DWORD *)(a1 + 196);
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 588);
    v9 = *(_WORD **)(a1 + 576);
  }
  if ( a4 )
    *a4 = v8;
  v10 = KiProcessorBlock[a2];
  if ( KiCheckPrcbAffinityEx(v9, v10) )
  {
    if ( (*(_DWORD *)(a1 + 116) & 8) == 0 || a3 )
    {
      KiAcquireThreadStateLock(a1, (__int64)v14, &v15, v11);
      *(_DWORD *)(a1 + 588) = a2;
      *(_WORD *)(a1 + 584) = *(unsigned __int8 *)(v10 + 208);
      if ( !a3 )
      {
        *(_DWORD *)(a1 + 196) = a2;
        *(_WORD *)(a1 + 560) = *(unsigned __int8 *)(v10 + 208);
      }
      KiUpdateSharedReadyQueueAffinityThread(v10, a1);
      KiReleaseThreadStateLock(v12, v14[0], v15);
    }
    else
    {
      *(_DWORD *)(a1 + 196) = a2;
      *(_WORD *)(a1 + 560) = *(unsigned __int8 *)(v10 + 208);
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v4;
}
