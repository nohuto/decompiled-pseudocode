/*
 * XREFs of Win32UAFMAllocPoolWithQuota @ 0x1C013E580
 * Callers:
 *     Win32UAFMAllocPoolWithQuotaZInit @ 0x1C013E610 (Win32UAFMAllocPoolWithQuotaZInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32UAFMAllocPoolWithQuota(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbx
  int v7; // eax

  v3 = 0LL;
  if ( qword_1C0252CB0 )
    v7 = qword_1C0252CB0();
  else
    v7 = -1073741637;
  if ( v7 < 0 )
    return 0LL;
  if ( qword_1C0252CB8 )
    return qword_1C0252CB8(41LL, a1, a2, a3);
  return v3;
}
