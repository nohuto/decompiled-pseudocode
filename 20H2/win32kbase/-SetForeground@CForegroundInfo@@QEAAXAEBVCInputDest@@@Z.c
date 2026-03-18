/*
 * XREFs of ?SetForeground@CForegroundInfo@@QEAAXAEBVCInputDest@@@Z @ 0x1C019E360
 * Callers:
 *     <none>
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00A89D0 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 */

void __fastcall CForegroundInfo::SetForeground(
        CForegroundInfo *this,
        const struct CInputDest *a2,
        __int64 a3,
        __int64 a4)
{
  CInputDest::operator=((__int64)this, (__int64)a2, a3, a4);
}
