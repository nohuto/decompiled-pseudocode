/*
 * XREFs of ?DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ @ 0x1C020C43C
 * Callers:
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C01862B0 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C020F7B4 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::DestroySerializeFStateTransitWorker(DXGADAPTER *this)
{
  if ( *((_QWORD *)this + 351) )
  {
    if ( *((_QWORD *)this + 452) )
    {
      *((_BYTE *)this + 3624) = 1;
      KeSetEvent((PRKEVENT)((char *)this + 3488), 0, 0);
      ZwWaitForSingleObject(*((HANDLE *)this + 452), 0, 0LL);
      ZwClose(*((HANDLE *)this + 452));
      *((_QWORD *)this + 452) = 0LL;
    }
  }
}
