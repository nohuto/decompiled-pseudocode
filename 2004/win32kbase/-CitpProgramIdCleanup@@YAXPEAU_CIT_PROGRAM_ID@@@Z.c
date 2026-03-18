/*
 * XREFs of ?CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C0037B1C
 * Callers:
 *     ?CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C003590C (-CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     CitProcessCallout @ 0x1C009E2D8 (CitProcessCallout.c)
 *     ?CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C01F9D10 (-CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x1C01FA294 (-CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z.c)
 *     ?CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z @ 0x1C01FA2FC (-CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

void __fastcall CitpProgramIdCleanup(struct _CIT_PROGRAM_ID *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)a1;
  if ( v2 )
  {
    Win32FreePool(v2);
    *(_QWORD *)a1 = 0LL;
  }
  v3 = *((_QWORD *)a1 + 1);
  if ( v3 )
  {
    Win32FreePool(v3);
    *((_QWORD *)a1 + 1) = 0LL;
  }
}
