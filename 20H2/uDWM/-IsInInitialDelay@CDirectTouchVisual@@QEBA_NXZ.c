/*
 * XREFs of ?IsInInitialDelay@CDirectTouchVisual@@QEBA_NXZ @ 0x1800A0BF4
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18009FAE4 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDirectTouchVisual::IsInInitialDelay(CDirectTouchVisual *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 49);
  result = 0;
  if ( v1 )
    return *(_BYTE *)(v1 + 72) == 0;
  return result;
}
