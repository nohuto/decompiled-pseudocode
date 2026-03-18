/*
 * XREFs of UserAssociateHwnd @ 0x1C01E825C
 * Callers:
 *     EngCreateWnd @ 0x1C0286790 (EngCreateWnd.c)
 *     EngDeleteWnd @ 0x1C0286C70 (EngDeleteWnd.c)
 * Callees:
 *     InternalSetProp @ 0x1C00C7238 (InternalSetProp.c)
 */

__int64 __fastcall UserAssociateHwnd(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v3 = 0;
  v4 = ValidateHwnd(a1);
  if ( v4 )
  {
    v5 = (unsigned __int16)atomWndObj;
    if ( a2 )
    {
      if ( (unsigned int)InternalSetProp(v4, (unsigned __int16)atomWndObj, a2, 5u) )
      {
        ++HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink);
        return 1;
      }
    }
    else
    {
      v6 = *(_QWORD *)(v4 + 144);
      if ( atomWndObj == word_1C0339F54 )
        *(_QWORD *)(*(_QWORD *)(v4 + 40) + 312LL) = 0LL;
      if ( RealInternalRemoveProp(v6, v5, 1LL) )
      {
        --HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink);
        return 1;
      }
    }
  }
  return v3;
}
