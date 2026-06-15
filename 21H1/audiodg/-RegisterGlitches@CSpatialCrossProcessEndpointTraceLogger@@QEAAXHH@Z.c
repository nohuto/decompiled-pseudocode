/*
 * XREFs of ?RegisterGlitches@CSpatialCrossProcessEndpointTraceLogger@@QEAAXHH@Z @ 0x14005F8D0
 * Callers:
 *     ?CheckGlitches@CSpatialCrossProcessBaseEndpoint@@IEAAXXZ @ 0x1400604C4 (-CheckGlitches@CSpatialCrossProcessBaseEndpoint@@IEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::RegisterGlitches(
        CSpatialCrossProcessEndpointTraceLogger *this,
        int a2,
        int a3)
{
  char *v5; // rbx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  ++*((_QWORD *)this + 11);
  v6 = 1;
  if ( a2 )
  {
    v5 = (char *)this + 256;
    (**((void (__fastcall ***)(char *, __int64, int *))this + 32))((char *)this + 256, 1LL, &v6);
    (**(void (__fastcall ***)(char *, _QWORD, int *))v5)(v5, 0LL, &v6);
  }
  if ( a3 )
  {
    (**((void (__fastcall ***)(char *, __int64, int *))this + 32))((char *)this + 256, 2LL, &v6);
    (**((void (__fastcall ***)(char *, _QWORD, int *))this + 32))((char *)this + 256, 0LL, &v6);
  }
}
