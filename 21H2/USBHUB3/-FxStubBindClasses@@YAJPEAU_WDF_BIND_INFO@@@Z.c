/*
 * XREFs of ?FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z @ 0x1C003F43C
 * Callers:
 *     FxDriverEntryWorker @ 0x1C003F314 (FxDriverEntryWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxStubBindClasses(struct _WDF_BIND_INFO *a1)
{
  unsigned int v1; // edi
  unsigned int *i; // rcx
  unsigned int *j; // rax
  unsigned int *v5; // rbx
  __int64 (__fastcall *v6)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, unsigned int *); // rax
  int v7; // eax

  v1 = 0;
  if ( &__KMDF_CLASS_BIND_START <= &__KMDF_CLASS_BIND_END )
  {
    for ( i = (unsigned int *)&__KMDF_CLASS_BIND_END; ; i = (unsigned int *)((char *)v5 + *v5) )
    {
      for ( j = i + 2; j <= (unsigned int *)&__KMDF_CLASS_BIND_END && !*(_QWORD *)i; j += 2 )
        i = j;
      if ( i >= (unsigned int *)&__KMDF_CLASS_BIND_END )
        return v1;
      if ( i + 20 > (unsigned int *)&__KMDF_CLASS_BIND_END )
        break;
      if ( *i != 80 )
        break;
      v5 = i;
      if ( !i )
        break;
      v6 = (__int64 (__fastcall *)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, unsigned int *))*((_QWORD *)i + 7);
      off_1C006A8F8 = i;
      if ( v6 )
      {
        v7 = v6(WdfVersionBindClass, &WdfBindInfo, WdfDriverGlobals, i);
        v1 = v7;
        if ( v7 < 0 )
        {
          DbgPrintEx(
            0x4Du,
            0,
            "FxStubBindClasses: ClientBindClass %p, WDF_CLASS_BIND_INFO 0x%p, class %S, returned status 0x%x\n",
            *((const void **)v5 + 7),
            v5,
            *((const wchar_t **)v5 + 1),
            v7);
          return v1;
        }
      }
      else
      {
        v1 = WdfVersionBindClass(&WdfBindInfo, WdfDriverGlobals, i);
        if ( (v1 & 0x80000000) != 0 )
        {
          DbgPrintEx(
            0x4Du,
            0,
            "FxStubBindClasses: VersionBindClass WDF_CLASS_BIND_INFO 0x%p, class %S, returned status 0x%x\n",
            v5,
            *((const wchar_t **)v5 + 1),
            v1);
          return v1;
        }
      }
    }
    DbgPrintEx(0x4Du, 0, "FxGetNextClassBindInfo failed\n");
  }
  else
  {
    DbgPrintEx(
      0x4Du,
      0,
      "FxStubBindClasses: invalid driver image, the address of symbol __KMDF_CLASS_BIND_START 0x%p is greater than the ad"
      "dress of symbol __KMDF_CLASS_BIND_END 0x%p, status 0x%x\n",
      &__KMDF_CLASS_BIND_START,
      &__KMDF_CLASS_BIND_END,
      -1073741701);
  }
  return 3221225595LL;
}
