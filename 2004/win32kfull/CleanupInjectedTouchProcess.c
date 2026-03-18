/*
 * XREFs of CleanupInjectedTouchProcess @ 0x1C01DCAD0
 * Callers:
 *     _InitializeTouchInjectionWorker @ 0x1C01DD0F0 (_InitializeTouchInjectionWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CleanupInjectedTouchProcess(__int64 a1)
{
  _QWORD *v1; // rbx
  void *v3; // rsi
  __int64 v4; // rbp
  __int64 *v5; // rcx
  __int64 *v6; // rdx
  __int64 v7; // rax

  v1 = *(_QWORD **)(a1 + 896);
  v3 = (void *)v1[11];
  if ( v3 )
  {
    v4 = v1[12];
    if ( v4 )
    {
      HMAssignmentUnlock(v1 + 2);
      RIMRemoveInjectionDevice(v3, v4);
      ZwClose(v3);
    }
  }
  Win32FreePool(v1[10]);
  Win32FreePool(v1);
  v5 = (__int64 *)gpTouchInjectorProcesses;
  v6 = 0LL;
  *(_QWORD *)(a1 + 896) = 0LL;
  if ( v5 )
  {
    while ( 1 )
    {
      v7 = *v5;
      if ( v5[1] == a1 )
        break;
      v6 = v5;
      v5 = (__int64 *)*v5;
      if ( !v7 )
        return 1LL;
    }
    if ( v6 )
      *v6 = v7;
    else
      gpTouchInjectorProcesses = *v5;
    Win32FreePool(v5);
  }
  return 1LL;
}
