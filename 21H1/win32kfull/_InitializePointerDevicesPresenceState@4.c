/*
 * XREFs of _InitializePointerDevicesPresenceState@4 @ 0xEC964
 * Callers:
 *     ?InitiateWin32kCleanup@@YGHXZ @ 0xCCE00 (-InitiateWin32kCleanup@@YGHXZ.c)
 * Callees:
 *     _ClosePointerDeviceProcessEvents@0 @ 0xD4B8E (_ClosePointerDeviceProcessEvents@0.c)
 */

void __stdcall InitializePointerDevicesPresenceState(int a1)
{
  struct _LIST_ENTRY *Flink; // edi
  struct _LIST_ENTRY *v2; // ebx
  struct _LIST_ENTRY *v3; // ecx
  struct _LIST_ENTRY *Blink; // eax
  struct _LIST_ENTRY *v5; // [esp+Ch] [ebp+8h]

  if ( a1 )
  {
    InitializeListHead(&gPointerDeviceClients);
  }
  else
  {
    Flink = gPointerDeviceClients.Flink;
    if ( !IsListEmpty(&gPointerDeviceClients) )
    {
      do
      {
        v2 = Flink;
        v5 = Flink - 1;
        HMAssignmentUnlock(&Flink[-1]);
        v3 = Flink->Flink;
        Flink = v3;
        if ( v3->Blink != v2 || (Blink = v2->Blink, Blink->Flink != v2) )
          __fastfail(3u);
        Blink->Flink = v3;
        v3->Blink = Blink;
        Win32FreePool(v5);
      }
      while ( Flink != &gPointerDeviceClients );
    }
    ClosePointerDeviceProcessEvents();
  }
}
