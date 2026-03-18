/*
 * XREFs of ?ClearInputPanelRects@DelayZoneTelemetry@@QEAAXXZ @ 0x1C0008748
 * Callers:
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1C00086A4 (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 *     ?ClearSession@DelayZoneTelemetry@@QEAAXXZ @ 0x1C01B9F9C (-ClearSession@DelayZoneTelemetry@@QEAAXXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

void __fastcall DelayZoneTelemetry::ClearInputPanelRects(DelayZoneTelemetry *this)
{
  char *v1; // rdi
  char *v2; // rbx
  char *v3; // rax
  char *v4; // rcx
  char **v5; // rdx

  v1 = (char *)this + 12288;
  v2 = (char *)*((_QWORD *)this + 1536);
  while ( v2 != v1 )
  {
    v3 = *(char **)v2;
    v4 = v2;
    v2 = v3;
    if ( *((char **)v3 + 1) != v4 || (v5 = (char **)*((_QWORD *)v4 + 1), *v5 != v4) )
      __fastfail(3u);
    *v5 = v3;
    *((_QWORD *)v3 + 1) = v5;
    Win32FreePool(v4);
  }
}
