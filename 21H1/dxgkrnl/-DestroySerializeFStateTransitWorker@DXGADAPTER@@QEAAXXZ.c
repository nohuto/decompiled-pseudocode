/*
 * XREFs of ?DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ @ 0x1C02084C0
 * Callers:
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C0177C34 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C020B838 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::DestroySerializeFStateTransitWorker(DXGADAPTER *this)
{
  if ( *((_QWORD *)this + 348) )
  {
    if ( *((_QWORD *)this + 448) )
    {
      *((_BYTE *)this + 3592) = 1;
      KeSetEvent((PRKEVENT)((char *)this + 3464), 0, 0);
      ZwWaitForSingleObject(*((HANDLE *)this + 448), 0, 0LL);
      ZwClose(*((HANDLE *)this + 448));
      *((_QWORD *)this + 448) = 0LL;
    }
  }
}
