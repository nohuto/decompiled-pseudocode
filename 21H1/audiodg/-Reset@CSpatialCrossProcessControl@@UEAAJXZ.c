/*
 * XREFs of ?Reset@CSpatialCrossProcessControl@@UEAAJXZ @ 0x140062C60
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0pqx_EventWriteTransfer @ 0x140058C70 (McTemplateU0pqx_EventWriteTransfer.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005FA1C (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x140062BC8 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140062BFC (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ResetStream@CSpatialCrossProcessBaseEndpoint@@IEAAJXZ @ 0x140062D64 (-ResetStream@CSpatialCrossProcessBaseEndpoint@@IEAAJXZ.c)
 */

__int64 __fastcall CSpatialCrossProcessControl::Reset(CSpatialCrossProcessControl *this)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  int v4; // ebx
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
LABEL_10:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessControl::Reset", 64, (unsigned int)v4, v2);
    goto LABEL_11;
  }
  v2 = 1LL;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v3 + 1288) + 64LL), 0, 0) & 0xFFFFFF81) != 1 )
  {
    v4 = -2005139387;
    goto LABEL_10;
  }
  if ( CSpatialCrossProcessBaseEndpoint::IsRunning(*((CSpatialCrossProcessBaseEndpoint **)this + 1)) )
  {
    v4 = -2005139434;
    goto LABEL_10;
  }
  *(_QWORD *)(*((_QWORD *)this + 1) + 136LL) = 0LL;
  *(_QWORD *)(*((_QWORD *)this + 1) + 144LL) = 0LL;
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 1) + 128LL), v2);
  v4 = CSpatialCrossProcessBaseEndpoint::ResetStream(*((CSpatialCrossProcessBaseEndpoint **)this + 1));
  if ( (byte_140085401 & 4) != 0 )
    McTemplateU0pqx_EventWriteTransfer(v6, v5, (__int64)this, 8);
  if ( v4 < 0 )
    goto LABEL_10;
LABEL_11:
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v4;
}
