/*
 * XREFs of ?GetCpuManager@@YAJPEAPEAVCpuManager@@@Z @ 0x14003F1DC
 * Callers:
 *     ?AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z @ 0x140003AE0 (-AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetCpuManager(struct CpuManager **a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( qword_140090360 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_140090360 + 8LL))(qword_140090360);
    *a1 = (struct CpuManager *)qword_140090360;
  }
  else
  {
    return (unsigned int)-2147023728;
  }
  return v2;
}
