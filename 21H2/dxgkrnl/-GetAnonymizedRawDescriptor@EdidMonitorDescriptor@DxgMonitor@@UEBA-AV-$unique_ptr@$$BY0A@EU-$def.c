/*
 * XREFs of ?GetAnonymizedRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1C0213F70
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?EDID_V1_RemovePII@@YAJKPEAE@Z @ 0x1C0028C64 (-EDID_V1_RemovePII@@YAJKPEAE@Z.c)
 *     ?GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1C01D1EF0 (-GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU-$default_delet.c)
 */

unsigned __int8 **__fastcall DxgMonitor::EdidMonitorDescriptor::GetAnonymizedRawDescriptor(
        DxgMonitor::EdidMonitorDescriptor *a1,
        unsigned __int8 **a2,
        unsigned int *a3,
        __int64 a4)
{
  unsigned __int8 *v6; // rbx
  unsigned __int8 *v7; // rdx
  unsigned __int8 *v9; // [rsp+40h] [rbp+18h] BYREF

  DxgMonitor::EdidMonitorDescriptor::GetRawDescriptor(a1, &v9, a3, a4);
  v6 = v9;
  if ( *a3 && (v7 = v9, *a3 = 128, (int)EDID_V1_RemovePII(0x80u, v7) < 0) )
  {
    *a3 = 0;
    *a2 = 0LL;
    if ( v6 )
      operator delete[](v6);
  }
  else
  {
    *a2 = v6;
  }
  return a2;
}
