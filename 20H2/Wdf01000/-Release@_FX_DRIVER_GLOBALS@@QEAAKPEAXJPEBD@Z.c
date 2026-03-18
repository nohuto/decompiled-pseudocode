/*
 * XREFs of ?Release@_FX_DRIVER_GLOBALS@@QEAAKPEAXJPEBD@Z @ 0x1C00539A8
 * Callers:
 *     FxDestroy @ 0x1C005644C (FxDestroy.c)
 *     ?_WorkItemCallback@FxWorkItemEventQueue@@KAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C008A6F0 (-_WorkItemCallback@FxWorkItemEventQueue@@KAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _FX_DRIVER_GLOBALS::Release(_FX_DRIVER_GLOBALS *this, void *Tag, int Line, const char *File)
{
  unsigned __int32 v4; // ebx

  v4 = _InterlockedDecrement(&this->Refcnt);
  if ( !v4 )
    KeSetEvent(&this->DestroyEvent.m_Event, 0, 0);
  return v4;
}
