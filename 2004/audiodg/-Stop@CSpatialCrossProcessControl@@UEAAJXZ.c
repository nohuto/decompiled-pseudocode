/*
 * XREFs of ?Stop@CSpatialCrossProcessControl@@UEAAJXZ @ 0x140062EF0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0pqx_EventWriteTransfer @ 0x140058C70 (McTemplateU0pqx_EventWriteTransfer.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005FA1C (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x140062BC8 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140062BFC (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall CSpatialCrossProcessControl::Stop(CSpatialCrossProcessControl *this)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)(*((_QWORD *)this + 1) + 32LL);
  v9 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = *((_QWORD *)this + 1);
  if ( !*(_BYTE *)(v3 + 96) )
  {
    v4 = -2005139437;
LABEL_7:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessControl::Stop", 161, v4, v2);
    goto LABEL_10;
  }
  v2 = 1LL;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v3 + 1288) + 64LL), 0, 0) & 0xFFFFFF81) != 1 )
  {
    v4 = -2005139387;
    goto LABEL_7;
  }
  if ( !CSpatialCrossProcessBaseEndpoint::IsRunning(*((CSpatialCrossProcessBaseEndpoint **)this + 1)) )
  {
    v4 = -2005139433;
    goto LABEL_7;
  }
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 1) + 128LL), v2);
  v6 = *(_QWORD *)(*((_QWORD *)this + 1) + 1288LL);
  _InterlockedAnd((volatile signed __int32 *)(v6 + 64), 0xFFFFFFF5);
  v4 = 0;
  if ( (byte_140085401 & 4) != 0 )
    McTemplateU0pqx_EventWriteTransfer(v6, v5, (__int64)this, 7);
LABEL_10:
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
