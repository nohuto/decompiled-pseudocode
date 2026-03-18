/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C003F190
 * Callers:
 *     FxStubDriverUnload @ 0x1C003F2A0 (FxStubDriverUnload.c)
 *     FxDriverEntryWorker @ 0x1C003F314 (FxDriverEntryWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

void FxStubDriverUnloadCommon(void)
{
  char *v0; // rbx
  char *v1; // rdi
  char *i; // rax
  void (__fastcall *v3)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, char *); // rax

  v0 = (char *)&__KMDF_CLASS_BIND_END;
  if ( off_1C006A8F8 != &__KMDF_CLASS_BIND_START )
  {
    v1 = (char *)off_1C006A8F8 + 80;
    while ( 1 )
    {
      for ( i = v0 + 8; i <= v1 && !*(_QWORD *)v0; i += 8 )
        v0 = i;
      if ( v0 < v1 )
      {
        if ( v0 + 80 > v1 || *(_DWORD *)v0 != 80 )
        {
LABEL_17:
          DbgPrintEx(0x4Du, 0, "FxGetNextClassBindInfo failed\n");
          break;
        }
      }
      else
      {
        v0 = v1;
      }
      if ( !v0 )
        goto LABEL_17;
      if ( v0 >= v1 )
        break;
      v3 = (void (__fastcall *)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, char *))*((_QWORD *)v0 + 8);
      if ( v3 )
        v3(WdfVersionUnbindClass, &WdfBindInfo, WdfDriverGlobals, v0);
      else
        WdfVersionUnbindClass(&WdfBindInfo, WdfDriverGlobals, v0);
      v0 += *(unsigned int *)v0;
    }
  }
  WdfVersionUnbind(&DestinationString, &WdfBindInfo, WdfDriverGlobals);
}
