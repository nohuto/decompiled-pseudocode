/*
 * XREFs of ?FxStubInitTypes@@YAJXZ @ 0x1C0002C30
 * Callers:
 *     FxDriverEntryWorker @ 0x1C0002874 (FxDriverEntryWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 */

__int64 FxStubInitTypes(void)
{
  _QWORD *i; // rbx
  __int64 (*v2)(void); // rax

  if ( &__KMDF_TYPE_INIT_START <= (_UNKNOWN *)__KMDF_TYPE_INIT_END )
  {
    for ( i = __KMDF_TYPE_INIT_END; i < __KMDF_TYPE_INIT_END; i += 5 )
    {
      if ( *(_DWORD *)i != 40 )
      {
        DbgPrintEx(
          0x4Du,
          0,
          "FxStubInitTypes: WDF_OBJECT_CONTEXT_TYPE_INFO 0x%p, size 0x%x incorrect, expected 0x%x, status 0x%x\n",
          i,
          *(_DWORD *)i,
          40,
          -1073741820);
        return 3221225476LL;
      }
      v2 = (__int64 (*)(void))i[4];
      if ( v2 )
        i[3] = v2();
    }
    return 0LL;
  }
  else
  {
    DbgPrintEx(
      0x4Du,
      0,
      "FxStubInitTypes: invalid driver image, the address of symbol __KMDF_TYPE_INIT_START 0x%p is greater than the addre"
      "ss of symbol __KMDF_TYPE_INIT_END 0x%p, status 0x%x\n",
      &__KMDF_TYPE_INIT_START,
      __KMDF_TYPE_INIT_END,
      -1073741701);
    return 3221225595LL;
  }
}
