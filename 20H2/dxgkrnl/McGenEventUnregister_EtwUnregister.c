/*
 * XREFs of McGenEventUnregister_EtwUnregister @ 0x1C0043AC4
 * Callers:
 *     DxgkEtwShutdown @ 0x1C0043AA0 (DxgkEtwShutdown.c)
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C0266F70 (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall McGenEventUnregister_EtwUnregister(REGHANDLE *a1)
{
  REGHANDLE v2; // rcx
  NTSTATUS result; // eax

  v2 = *a1;
  if ( !v2 )
    return 0;
  result = EtwUnregister(v2);
  *a1 = 0LL;
  return result;
}
