/*
 * XREFs of ?GetPingPongWriteIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x1400613F4
 * Callers:
 *     ?GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x140061234 (-GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005FA1C (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetState@PingPongState@@AEBA?AW4State@1@XZ @ 0x1400615AC (-GetState@PingPongState@@AEBA-AW4State@1@XZ.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetPingPongWriteIndex(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int *a2)
{
  volatile signed __int32 **v2; // rsi
  unsigned int v3; // ebx
  unsigned __int32 v5; // edi
  unsigned __int32 State; // eax
  __int64 v7; // r11
  bool i; // zf
  unsigned __int32 v9; // r10d
  __int64 v10; // r9
  unsigned __int32 v11; // eax
  bool j; // zf
  unsigned __int32 v13; // r10d
  __int64 v14; // rax
  int v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = (volatile signed __int32 **)((char *)this + 576);
  v3 = 0;
  v5 = 16;
  State = PingPongState::GetState((char *)this + 576);
  for ( i = State == 17; ; i = v9 == State )
  {
    v9 = State;
    if ( i )
      break;
    if ( State > 0x10 )
      goto LABEL_6;
    v5 = `PingPongState::LockForWrite'::`2'::nextState[State];
    State = _InterlockedCompareExchange(v2[17], v5, State);
  }
  if ( State <= 0x10 )
    goto LABEL_7;
LABEL_6:
  v5 = 16;
LABEL_7:
  v10 = *((int *)v2 + v5 + 17);
  if ( (_DWORD)v10 == 3 )
  {
    v16 = 1;
    (**(void (__fastcall ***)(__int64, _QWORD, int *))(v7 + 1136))(v7 + 1136, 0LL, &v16);
    v3 = -2005139387;
    v11 = PingPongState::GetState(v2);
    for ( j = v11 == 17; ; j = v13 == v11 )
    {
      v13 = v11;
      if ( j || v11 > 0x10 )
        break;
      v11 = _InterlockedCompareExchange(v2[17], `PingPongState::Reset'::`2'::nextState[v11], v11);
    }
  }
  else
  {
    v14 = *(_QWORD *)(v7 + 1288);
    if ( (_DWORD)v10 != 2 )
    {
      *(_DWORD *)(*(_QWORD *)(v7 + 1288) + 4 * v10 + 48) = *(_DWORD *)(v14 + 44);
      *a2 = v10;
      return v3;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 72));
    v3 = -2005139359;
  }
  SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetPingPongWriteIndex", 613, v3, v10);
  return v3;
}
