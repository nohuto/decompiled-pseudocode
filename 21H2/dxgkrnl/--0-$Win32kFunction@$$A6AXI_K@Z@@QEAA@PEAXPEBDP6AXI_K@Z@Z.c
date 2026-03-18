/*
 * XREFs of ??0?$Win32kFunction@$$A6AXI_K@Z@@QEAA@PEAXPEBDP6AXI_K@Z@Z @ 0x1C0029A30
 * Callers:
 *     ??0W32KIMPORTS@@QEAA@PEAX@Z @ 0x1C002916C (--0W32KIMPORTS@@QEAA@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall Win32kFunction<void (unsigned int,unsigned __int64)>::Win32kFunction<void (unsigned int,unsigned __int64)>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 ExportedRoutineByName; // rax

  ExportedRoutineByName = RtlFindExportedRoutineByName(a2, a3);
  *a1 = ExportedRoutineByName;
  if ( !ExportedRoutineByName )
    *a1 = a4;
  return a1;
}
