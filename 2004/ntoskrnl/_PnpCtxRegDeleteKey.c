/*
 * XREFs of _PnpCtxRegDeleteKey @ 0x1409713E4
 * Callers:
 *     PipCommitPendingOsExtensionResource @ 0x140A8DFE0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A8E1F0 (PipCommitPendingService.c)
 * Callees:
 *     _RegRtlDeleteKeyTransacted @ 0x140754B28 (_RegRtlDeleteKeyTransacted.c)
 */

__int64 __fastcall PnpCtxRegDeleteKey(__int64 a1, char *a2, const WCHAR *a3)
{
  __int64 v4; // r8
  __int64 v5; // rax

  v4 = 0LL;
  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 224);
    if ( v5 )
      v4 = *(_QWORD *)(v5 + 8);
  }
  return RegRtlDeleteKeyTransacted(a2, a3, v4);
}
