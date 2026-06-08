/*
 * XREFs of ?FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z @ 0x1C0002934
 * Callers:
 *     FxDriverEntryWorker @ 0x1C00027D4 (FxDriverEntryWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EA90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxStubBindClasses(struct _WDF_BIND_INFO *a1)
{
  unsigned int v1; // edi
  char *i; // rbx
  __int64 (__fastcall *v4)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, char *); // rax
  int v5; // eax
  const wchar_t *v6; // rcx

  v1 = 0;
  if ( &__KMDF_CLASS_BIND_START <= (_UNKNOWN *)__KMDF_CLASS_BIND_END )
  {
    for ( i = __KMDF_CLASS_BIND_END; ; i += 80 )
    {
      if ( i >= __KMDF_CLASS_BIND_END )
        return v1;
      if ( i + 4 > __KMDF_CLASS_BIND_END )
      {
        DbgPrintEx(
          0x4Du,
          0,
          "FxStubBindClasses: invalid driver image.\nNot enough space for WDF_CLASS_BIND_INFO.Size field.\n");
        return 3221225595LL;
      }
      if ( *(_DWORD *)i != 80 )
      {
        v6 = L"(null)";
        v1 = -1073741820;
        if ( *((_QWORD *)i + 1) )
          v6 = (const wchar_t *)*((_QWORD *)i + 1);
        DbgPrintEx(
          0x4Du,
          0,
          "FxStubBindClasses: WDF_CLASS_BIND_INFO 0x%p, class %S, size 0x%x incorrect, expected 0x%Ix, status 0x%x\n",
          i,
          v6,
          *(_DWORD *)i,
          80LL,
          -1073741820);
        return v1;
      }
      if ( i + 80 > __KMDF_CLASS_BIND_END )
        break;
      v4 = (__int64 (__fastcall *)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, char *))*((_QWORD *)i + 7);
      off_1C0013148 = i;
      if ( v4 )
      {
        v5 = v4(WdfVersionBindClass, &WdfBindInfo, WdfDriverGlobals, i);
        v1 = v5;
        if ( v5 < 0 )
        {
          DbgPrintEx(
            0x4Du,
            0,
            "FxStubBindClasses: ClientBindClass %p, WDF_CLASS_BIND_INFO 0x%p, class %S, returned status 0x%x\n",
            *((const void **)i + 7),
            i,
            *((const wchar_t **)i + 1),
            v5);
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
            i,
            *((const wchar_t **)i + 1),
            v1);
          return v1;
        }
      }
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
