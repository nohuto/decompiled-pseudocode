/*
 * XREFs of Win32UAFMAllocPoolWithPriorityImpl @ 0x1C0220C80
 * Callers:
 *     <none>
 * Callees:
 *     ?AdjustSize@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z @ 0x1C0220360 (-AdjustSize@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z.c)
 *     ?GenerateCookie@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIXZ @ 0x1C022041C (-GenerateCookie@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIX.c)
 *     ?AllocatePriority@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KIW4_EX_POOL_PRIORITY@@@Z @ 0x1C02DD890 (-AllocatePriority@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KIW4_EX_POOL_.c)
 */

char *__fastcall Win32UAFMAllocPoolWithPriorityImpl(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  unsigned __int64 v5; // rax
  NSInstrumentation::CLeakTrackingAllocator *v6; // rcx
  unsigned int v7; // r8d
  enum _EX_POOL_PRIORITY v8; // r9d
  enum _POOL_TYPE v9; // r10d
  char *v10; // rbx
  _DWORD *Priority; // rdi
  ULONG Cookie; // eax

  v5 = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize(a2);
  v10 = 0LL;
  if ( v5 )
  {
    Priority = NSInstrumentation::CLeakTrackingAllocator::AllocatePriority(v6, v9, v5, v7, v8);
    if ( Priority )
    {
      Cookie = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie();
      Priority[3] = Cookie;
      v10 = (char *)(Priority + 4);
      *a5 = Cookie - 1;
    }
  }
  return v10;
}
