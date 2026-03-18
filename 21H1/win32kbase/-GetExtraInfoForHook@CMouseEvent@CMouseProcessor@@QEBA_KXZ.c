/*
 * XREFs of ?GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C005F580
 * Callers:
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C005F524 (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C005FFC0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01C3B64 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMouseProcessor::CMouseEvent::GetExtraInfoForHook(CMouseProcessor::CMouseEvent *this)
{
  _DWORD *v1; // rdx

  v1 = (_DWORD *)*((_QWORD *)this + 1);
  if ( (v1[28] & 0x20) != 0 && ((v1[26] - 4) & 0xFFFFFFFB) == 0 )
    return (unsigned __int8)v1[10] | 0xFF515700LL;
  else
    return (unsigned int)v1[10];
}
