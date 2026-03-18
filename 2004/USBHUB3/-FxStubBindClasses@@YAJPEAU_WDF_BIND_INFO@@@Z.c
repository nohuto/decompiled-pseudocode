/*
 * XREFs of ?FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z @ 0x1C003EB5C
 * Callers:
 *     FxDriverEntryWorker @ 0x1C003EA34 (FxDriverEntryWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxStubBindClasses(struct _WDF_BIND_INFO *a1)
{
  unsigned int v1; // edi
  char *v3; // rbx
  bool i; // cf
  char *v5; // rsi
  __int64 (__fastcall *v6)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, char *); // rax
  int v7; // eax
  const wchar_t *v8; // rcx

  v1 = 0;
  if ( &__KMDF_CLASS_BIND_START <= (_UNKNOWN *)__KMDF_CLASS_BIND_END )
  {
    v3 = __KMDF_CLASS_BIND_END;
    for ( i = 0; ; i = v5 < __KMDF_CLASS_BIND_END )
    {
      if ( !i )
        return v1;
      if ( v3 + 4 > __KMDF_CLASS_BIND_END )
      {
        DbgPrintEx(
          0x4Du,
          0,
          "FxStubBindClasses: invalid driver image.\nNot enough space for WDF_CLASS_BIND_INFO.Size field.\n");
        return 3221225595LL;
      }
      if ( *(_DWORD *)v3 != 80 )
      {
        v8 = L"(null)";
        v1 = -1073741820;
        if ( *((_QWORD *)v3 + 1) )
          v8 = (const wchar_t *)*((_QWORD *)v3 + 1);
        DbgPrintEx(
          0x4Du,
          0,
          "FxStubBindClasses: WDF_CLASS_BIND_INFO 0x%p, class %S, size 0x%x incorrect, expected 0x%Ix, status 0x%x\n",
          v3,
          v8,
          *(_DWORD *)v3,
          80LL,
          -1073741820);
        return v1;
      }
      v5 = v3 + 80;
      if ( v3 + 80 > __KMDF_CLASS_BIND_END )
        break;
      v6 = (__int64 (__fastcall *)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, char *))*((_QWORD *)v3 + 7);
      off_1C0069838 = v3;
      if ( v6 )
      {
        v7 = v6(WdfVersionBindClass, &WdfBindInfo, WdfDriverGlobals, v3);
        v1 = v7;
        if ( v7 < 0 )
        {
          DbgPrintEx(
            0x4Du,
            0,
            "FxStubBindClasses: ClientBindClass %p, WDF_CLASS_BIND_INFO 0x%p, class %S, returned status 0x%x\n",
            *((const void **)v3 + 7),
            v3,
            *((const wchar_t **)v3 + 1),
            v7);
          return v1;
        }
      }
      else
      {
        v1 = WdfVersionBindClass(&WdfBindInfo, WdfDriverGlobals, v3);
        if ( (v1 & 0x80000000) != 0 )
        {
          DbgPrintEx(
            0x4Du,
            0,
            "FxStubBindClasses: VersionBindClass WDF_CLASS_BIND_INFO 0x%p, class %S, returned status 0x%x\n",
            v3,
            *((const wchar_t **)v3 + 1),
            v1);
          return v1;
        }
      }
      v3 += 80;
    }
    DbgPrintEx(0x4Du, 0, "FxStubBindClasses: invalid driver image.\nNot enough space for WDF_CLASS_BIND_INFO.\n");
  }
  else
  {
    DbgPrintEx(
      0x4Du,
      0,
      "FxStubBindClasses: invalid driver image, the address of symbol __KMDF_CLASS_BIND_START 0x%p is greater than the ad"
      "dress of symbol __KMDF_CLASS_BIND_END 0x%p, status 0x%x\n",
      &__KMDF_CLASS_BIND_START,
      __KMDF_CLASS_BIND_END,
      -1073741701);
  }
  return 3221225595LL;
}
