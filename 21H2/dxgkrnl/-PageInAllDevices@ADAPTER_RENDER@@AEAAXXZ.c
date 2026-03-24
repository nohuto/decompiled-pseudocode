/*
 * XREFs of ?PageInAllDevices@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0216480
 * Callers:
 *     ?ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0216B14 (-ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ADAPTER_RENDER::PageInAllDevices(ADAPTER_RENDER *this)
{
  char *v2; // rdi
  __int64 v3; // rbp
  char *i; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax

  v2 = (char *)this + 144;
  v3 = 2LL;
  do
  {
    for ( i = *(char **)v2; i != v2 && i; i = *(char **)i )
    {
      if ( (*(int (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 80) + 8LL) + 872LL))(
             *((_QWORD *)this + 81),
             *((_QWORD *)i + 95)) < 0 )
      {
        v7 = WdLogNewEntry5_WdAssertion(v6, v5);
        *(_QWORD *)(v7 + 24) = 2941LL;
        WdLogEvent5_WdAssertion(v7);
      }
    }
    v2 = (char *)this + 160;
    --v3;
  }
  while ( v3 );
}
