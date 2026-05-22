/*
 * XREFs of ?_Tidy@?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@AEAAXXZ @ 0x18009C4F4
 * Callers:
 *     ??_GDockDeviceCollection@@UEAAPEAXI@Z @ 0x18009BD10 (--_GDockDeviceCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::deque<GetInputReportResult>::_Tidy(_QWORD *a1)
{
  const struct std::nothrow_t *v2; // rdx
  void *v3; // rcx
  __int64 v4; // rdi
  void *v5; // rcx
  void *v6; // rcx

  while ( 1 )
  {
    v2 = (const struct std::nothrow_t *)a1[4];
    if ( !v2 )
      break;
    v3 = *(void **)(*(_QWORD *)(a1[1] + 8 * ((a1[2] - 1LL) & ((unsigned __int64)v2 + a1[3] - 1))) + 8LL);
    if ( v3 )
    {
      operator delete(v3, v2);
      v2 = (const struct std::nothrow_t *)a1[4];
    }
    a1[4] = (char *)v2 - 1;
    if ( v2 == (const struct std::nothrow_t *)1 )
      a1[3] = 0LL;
  }
  v4 = a1[2];
  while ( v4 )
  {
    --v4;
    v5 = *(void **)(a1[1] + 8 * v4);
    if ( v5 )
      std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x18);
  }
  v6 = (void *)a1[1];
  if ( v6 )
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)(8LL * a1[2]));
  a1[2] = 0LL;
  a1[1] = 0LL;
}
