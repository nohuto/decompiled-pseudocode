/*
 * XREFs of ?DpiBrightness3Get@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_OUT@@@Z @ 0x1C02CF660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C011F120 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C011F39C (DpiAcquireCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightness3Get(_QWORD *a1, unsigned int a2, struct _DXGK_BRIGHTNESS_GET_OUT *a3)
{
  __int64 v3; // rdi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 (__fastcall *v13)(_QWORD, _QWORD, struct _DXGK_BRIGHTNESS_GET_OUT *); // rax

  v3 = a1[8];
  KeWaitForSingleObject((PVOID)(v3 + 4464), Executive, 0, 0, 0LL);
  v7 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 0);
  v10 = v7;
  if ( v7 >= 0 )
  {
    v12 = 0LL;
    if ( *(_WORD *)(v3 + 4738) == 3 )
      v12 = v3 + 4736;
    if ( v12 )
    {
      v13 = *(__int64 (__fastcall **)(_QWORD, _QWORD, struct _DXGK_BRIGHTNESS_GET_OUT *))(v12 + 40);
      if ( v13 )
        LODWORD(v10) = v13(*(_QWORD *)(v12 + 8), a2, a3);
      else
        LODWORD(v10) = -1073741661;
    }
    else
    {
      LODWORD(v10) = -1073741637;
    }
    DpiReleaseCoreSyncAccessSafe((__int64)a1, 0);
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = v10;
    WdLogEvent5_WdError(v11);
  }
  KeReleaseMutex((PRKMUTEX)(v3 + 4464), 0);
  return (unsigned int)v10;
}
