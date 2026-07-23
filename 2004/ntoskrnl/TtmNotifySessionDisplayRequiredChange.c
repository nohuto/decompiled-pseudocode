/*
 * XREFs of TtmNotifySessionDisplayRequiredChange @ 0x1408FB6B0
 * Callers:
 *     PopNotifySessionDisplayRequired @ 0x140760CB0 (PopNotifySessionDisplayRequired.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ZwUpdateWnfStateData @ 0x1403F6F80 (ZwUpdateWnfStateData.c)
 *     PoSessionEngagementUpdate @ 0x140576C60 (PoSessionEngagementUpdate.c)
 *     TtmpAcquireSessionById @ 0x1408FC218 (TtmpAcquireSessionById.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x1408FD070 (TtmpUpdateDisplayRequiredPowerRequest.c)
 *     TtmiLogError @ 0x1408FF6C0 (TtmiLogError.c)
 *     TtmiLogSessionDisplayRequiredDereference @ 0x140900610 (TtmiLogSessionDisplayRequiredDereference.c)
 *     TtmiLogSessionDisplayRequiredReference @ 0x14090079C (TtmiLogSessionDisplayRequiredReference.c)
 */

__int64 __fastcall TtmNotifySessionDisplayRequiredChange(unsigned int a1, unsigned int a2, char a3)
{
  unsigned int v4; // r14d
  bool v6; // si
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  char v15; // al
  __int64 v16; // rcx
  unsigned int ExplicitScope; // [rsp+80h] [rbp+40h] BYREF
  char Buffer; // [rsp+90h] [rbp+50h] BYREF
  __int64 v20; // [rsp+98h] [rbp+58h] BYREF

  ExplicitScope = a1;
  v20 = 0LL;
  v4 = 0;
  Buffer = 0;
  v6 = 0;
  v7 = TtmpAcquireSessionById(&v20, a1);
  v9 = v20;
  v10 = v7;
  if ( v7 < 0 )
  {
    v11 = (unsigned int)v7;
    v12 = 3854LL;
LABEL_3:
    TtmiLogError("TtmNotifySessionDisplayRequiredChange", v12, v11, 0xFFFFFFFFLL);
    goto LABEL_15;
  }
  LOBYTE(v8) = a3;
  TtmpUpdateDisplayRequiredPowerRequest(v20, a2, v8);
  v13 = *(_DWORD *)(v9 + 20);
  if ( a3 )
  {
    if ( v13 == -1 )
    {
      v10 = -1073741675;
      v12 = 3906LL;
      v11 = 3221225621LL;
      goto LABEL_3;
    }
    v14 = v13 + 1;
    v6 = v14 == 1;
  }
  else
  {
    if ( !v13 )
    {
      v10 = -1073741811;
      v12 = 3886LL;
      v11 = 3221225485LL;
      goto LABEL_3;
    }
    v14 = v13 - 1;
    v6 = v14 == 0;
  }
  v10 = 0;
  *(_DWORD *)(v9 + 20) = v14;
  if ( v6 )
  {
    v15 = Buffer;
    if ( *(_DWORD *)(v9 + 20) )
      v15 = 1;
    Buffer = v15;
  }
LABEL_15:
  if ( v9 )
  {
    v4 = *(_DWORD *)(v9 + 20);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( v6 )
  {
    ZwUpdateWnfStateData(&WNF_PO_DISPLAY_REQUEST_ACTIVE, &Buffer, 1u, 0LL, &ExplicitScope, 0, 0);
    LOBYTE(v16) = Buffer;
    PoSessionEngagementUpdate(v16);
  }
  if ( a3 )
    return TtmiLogSessionDisplayRequiredReference(ExplicitScope, v4, v10);
  else
    return TtmiLogSessionDisplayRequiredDereference(ExplicitScope, v4, v10);
}
