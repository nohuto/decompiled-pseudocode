/*
 * XREFs of ?ReleaseInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x14006DB20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x140062A60 (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14006868C (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CheckGlitches@CSpatialCrossProcessBaseEndpoint@@IEAAXXZ @ 0x140069134 (-CheckGlitches@CSpatialCrossProcessBaseEndpoint@@IEAAXXZ.c)
 *     ?CommitRead@CSpatialCrossProcessBaseEndpoint@@IEAAJI@Z @ 0x14006937C (-CommitRead@CSpatialCrossProcessBaseEndpoint@@IEAAJI@Z.c)
 */

void __fastcall CSpatialCrossProcessServerInputEndpoint::ReleaseInputDataPointer(
        CSpatialCrossProcessServerInputEndpoint *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  CSpatialCrossProcessBaseEndpoint *v4; // rdi
  char v6; // bp
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // si
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // r9

  v4 = (CSpatialCrossProcessServerInputEndpoint *)((char *)this - 1424);
  v6 = a2;
  if ( (byte_140090581 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(
      (__int64)this,
      *((unsigned __int8 *)this + 72),
      (__int64)this - 1424,
      7,
      a2,
      *((_BYTE *)this + 72),
      *((_DWORD *)this + 16));
  CSpatialCrossProcessBaseEndpoint::CheckGlitches(v4, a2, a3, a4);
  v9 = 0;
  if ( *((_BYTE *)this + 72) )
  {
    (*(void (__fastcall **)(CSpatialCrossProcessBaseEndpoint *, _QWORD))(*(_QWORD *)v4 + 88LL))(
      v4,
      *((unsigned int *)this + 17));
    v10 = *((_DWORD *)this + 16);
    *((_BYTE *)this + 72) = 0;
    v13 = CSpatialCrossProcessBaseEndpoint::CommitRead(v4, v10, v11, v12);
    v9 = v13;
    if ( v13 < 0 )
      SpatialCPTraceLoggingErrorHelper(
        "CSpatialCrossProcessServerInputEndpoint::ReleaseInputDataPointer",
        364,
        (unsigned int)v13,
        v14);
  }
  *((_DWORD *)this + 19) = -2147418113;
  *((_BYTE *)this - 96) = 0;
  if ( (byte_140090581 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v8, v7, (__int64)v4, 8, v6, v9, 0);
}
