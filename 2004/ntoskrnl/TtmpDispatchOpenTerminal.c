/*
 * XREFs of TtmpDispatchOpenTerminal @ 0x1408FDAD4
 * Callers:
 *     TtmDispatchApi @ 0x1408FD2B4 (TtmDispatchApi.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     TtmiOpenDefaultTerminal @ 0x1408FA444 (TtmiOpenDefaultTerminal.c)
 *     TtmiAcquireCurrentSession @ 0x1408FBBEC (TtmiAcquireCurrentSession.c)
 *     TtmiLogError @ 0x1408FF6C0 (TtmiLogError.c)
 */

__int64 __fastcall TtmpDispatchOpenTerminal(__int64 a1, HANDLE *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdi
  HANDLE *v7; // r9
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  v4 = TtmiAcquireCurrentSession((__int64)&v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = a2;
    v6 = v9;
    v5 = TtmiOpenDefaultTerminal(v9, *(_DWORD *)(a1 + 8), KeGetCurrentThread()->PreviousMode, v7);
  }
  else
  {
    TtmiLogError("TtmpDispatchOpenTerminal", 154LL, (unsigned int)v4, (unsigned int)v4);
    v6 = v9;
  }
  if ( v6 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  return v5;
}
