/*
 * XREFs of ?HasForeground@CForegroundInfo@@QEAA_NAEBVCInputDest@@@Z @ 0x1C01A6440
 * Callers:
 *     <none>
 * Callees:
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C00717D8 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 */

char __fastcall CForegroundInfo::HasForeground(CForegroundInfo *this, const struct CInputDest *a2)
{
  return CInputDest::operator==((unsigned int *)this, (__int64)a2);
}
