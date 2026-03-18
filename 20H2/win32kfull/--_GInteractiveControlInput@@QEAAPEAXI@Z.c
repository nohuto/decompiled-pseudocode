/*
 * XREFs of ??_GInteractiveControlInput@@QEAAPEAXI@Z @ 0x1C0256490
 * Callers:
 *     ?CleanQueue@InteractiveControlDevice@@QEAAXK@Z @ 0x1C0256518 (-CleanQueue@InteractiveControlDevice@@QEAAXK@Z.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C0256834 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C02574F0 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 * Callees:
 *     <none>
 */

InteractiveControlInput *__fastcall InteractiveControlInput::`scalar deleting destructor'(
        InteractiveControlInput *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 10);
  if ( v4 )
  {
    Win32FreePool(v4);
    *((_QWORD *)this + 10) = 0LL;
    *((_DWORD *)this + 22) = 0;
  }
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
