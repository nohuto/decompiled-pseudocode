/*
 * XREFs of ?ndisBindBuilderCleanup@@YAXXZ @ 0x1C01245EC
 * Callers:
 *     ?ndisBindBuilderInitialize@@YAJXZ @ 0x1C0144E04 (-ndisBindBuilderInitialize@@YAJXZ.c)
 *     ?ndisBindInitialize@@YAJXZ @ 0x1C0144EC4 (-ndisBindInitialize@@YAJXZ.c)
 * Callees:
 *     ??1NdisBindBuilderGlobal@@QEAA@XZ @ 0x1C012395C (--1NdisBindBuilderGlobal@@QEAA@XZ.c)
 */

void ndisBindBuilderCleanup(void)
{
  PVOID v0; // rbx

  v0 = qword_1C00E4498;
  if ( qword_1C00E4498 )
  {
    NdisBindBuilderGlobal::~NdisBindBuilderGlobal((NdisBindBuilderGlobal *)qword_1C00E4498);
    ExFreePoolWithTag(v0, 0x4742444Eu);
    qword_1C00E4498 = 0LL;
  }
}
