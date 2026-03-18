/*
 * XREFs of ?ReaderUnregistered@DataProviderProxy@@QEAAXXZ @ 0x180181418
 * Callers:
 *     ?UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x18018072C (-UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DataProviderProxy::ReaderUnregistered(DataProviderProxy *this)
{
  char *v1; // rdi

  --*((_DWORD *)this + 16);
  v1 = (char *)this + 8;
  (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 1) + 72LL))(
    (char *)this + 8,
    *((unsigned int *)this + 16));
  if ( !*((_DWORD *)this + 16) )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 32LL))(v1);
}
