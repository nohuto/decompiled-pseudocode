/*
 * XREFs of ?s_WnfCallback@WnfHelper@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180371F20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WnfHelper::s_WnfCallback(
        struct _WNF_STATE_NAME a1,
        int a2,
        struct _WNF_TYPE_ID *a3,
        _QWORD *a4,
        const void *a5,
        unsigned int a6)
{
  unsigned int v6; // ebx

  v6 = 0;
  if ( a4 )
  {
    if ( a2 )
    {
      if ( a1 == WNF_ACC_EC_ENABLED )
        (*(void (__fastcall **)(_QWORD, const void *, _QWORD))(*(_QWORD *)*a4 + 24LL))(*a4, a5, a6);
    }
    else
    {
      return (unsigned int)-1073741762;
    }
  }
  return v6;
}
