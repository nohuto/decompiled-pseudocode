/*
 * XREFs of ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C020A838
 * Callers:
 *     xxxRegisterSiblingFrostWindow @ 0x1C020AD30 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 *     InternalSetProp @ 0x1C002481C (InternalSetProp.c)
 */

__int64 __fastcall SetFrostProp(struct tagWND *a1, __int64 a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1378LL), 1LL) )
    return (unsigned int)InternalSetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1378LL), a2, 5u);
  return v3;
}
