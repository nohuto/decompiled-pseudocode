/*
 * XREFs of ?HasForeground@CForegroundInfo@@QEAA_NAEBVCInputDest@@@Z @ 0x1C019E340
 * Callers:
 *     <none>
 * Callees:
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C00553BC (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 */

char __fastcall CForegroundInfo::HasForeground(
        CForegroundInfo *this,
        const struct CInputDest *a2,
        __int64 a3,
        __int64 a4)
{
  return CInputDest::operator==((unsigned int *)this, (__int64)a2, a3, a4);
}
