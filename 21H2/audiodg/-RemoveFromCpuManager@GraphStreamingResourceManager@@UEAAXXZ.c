/*
 * XREFs of ?RemoveFromCpuManager@GraphStreamingResourceManager@@UEAAXXZ @ 0x140019500
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GraphStreamingResourceManager::RemoveFromCpuManager(GraphStreamingResourceManager *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( *((_QWORD *)this + 34) )
    (*(void (__fastcall **)(char *))(*((_QWORD *)this - 1) + 80LL))((char *)this - 8);
  if ( v1 )
    LeaveCriticalSection(v1);
}
