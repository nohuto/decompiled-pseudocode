/*
 * XREFs of ?ThreadEntryPoint@CWatchdogTimer@@CAKPEAX@Z @ 0x1800DBD50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWatchdogTimer::ThreadEntryPoint(_QWORD *Parameter)
{
  void *i; // rcx

  for ( i = (void *)Parameter[2]; ; i = (void *)Parameter[2] )
  {
    WaitForSingleObject(i, 0xFFFFFFFF);
    if ( *((_BYTE *)Parameter + 25) )
      break;
    (*(void (__fastcall **)(_QWORD *))(*Parameter + 8LL))(Parameter);
  }
  return 0LL;
}
