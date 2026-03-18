/*
 * XREFs of _CleanupInjectedTouchProcess@4 @ 0x149BA0
 * Callers:
 *     __InitializeTouchInjectionWorker@12 @ 0x149F23 (__InitializeTouchInjectionWorker@12.c)
 * Callees:
 *     <none>
 */

int __stdcall CleanupInjectedTouchProcess(int a1)
{
  _DWORD *v2; // esi
  void *v3; // edi
  _DWORD *v4; // eax
  _DWORD *v5; // ecx
  int v7; // [esp+14h] [ebp+8h]

  v2 = *(_DWORD **)(a1 + 508);
  v3 = (void *)v2[20];
  if ( v3 )
  {
    v7 = v2[21];
    if ( v7 )
    {
      HMAssignmentUnlock(v2 + 4);
      RIMRemoveInjectionDevice(v3, v7);
      ZwClose(v3);
    }
  }
  Win32FreePool(v2[19]);
  Win32FreePool(v2);
  v4 = (_DWORD *)gpTouchInjectorProcesses;
  v5 = 0;
  *(_DWORD *)(a1 + 508) = 0;
  while ( v4 )
  {
    if ( v4[1] == a1 )
    {
      if ( v5 )
        *v5 = *v4;
      else
        gpTouchInjectorProcesses = *v4;
      Win32FreePool(v4);
      return 1;
    }
    v5 = v4;
    v4 = (_DWORD *)*v4;
  }
  return 1;
}
