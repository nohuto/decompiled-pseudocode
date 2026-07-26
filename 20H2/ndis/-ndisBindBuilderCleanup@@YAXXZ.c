/*
 * XREFs of ?ndisBindBuilderCleanup@@YAXXZ @ 0x1C01245FC
 * Callers:
 *     ?ndisBindBuilderInitialize@@YAJXZ @ 0x1C0144E30 (-ndisBindBuilderInitialize@@YAJXZ.c)
 *     ?ndisBindInitialize@@YAJXZ @ 0x1C0144EF0 (-ndisBindInitialize@@YAJXZ.c)
 * Callees:
 *     ??1NdisBindBuilderGlobal@@QEAA@XZ @ 0x1C012396C (--1NdisBindBuilderGlobal@@QEAA@XZ.c)
 */

void ndisBindBuilderCleanup(void)
{
  PVOID v0; // rbx

  v0 = qword_1C00E45D8;
  if ( qword_1C00E45D8 )
  {
    NdisBindBuilderGlobal::~NdisBindBuilderGlobal((NdisBindBuilderGlobal *)qword_1C00E45D8);
    ExFreePoolWithTag(v0, 0x4742444Eu);
    qword_1C00E45D8 = 0LL;
  }
}
