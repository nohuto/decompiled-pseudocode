/*
 * XREFs of ?RealizePendingRecreateTouchInjectionDevices@@YGHPAUtagPROCESSINFO@@H@Z @ 0x149349
 * Callers:
 *     ?CheckCurrentInjectionConfiguration@@YGXXZ @ 0x149044 (-CheckCurrentInjectionConfiguration@@YGXXZ.c)
 * Callees:
 *     __InitializeTouchInjectionWorker@12 @ 0x149F23 (__InitializeTouchInjectionWorker@12.c)
 */

int __fastcall RealizePendingRecreateTouchInjectionDevices(int a1, int a2)
{
  int v4; // ebx
  _DWORD *v5; // ecx
  int v6; // eax
  _DWORD *v7; // edx
  int v9; // [esp+Ch] [ebp-4h]

  v9 = 1;
  v4 = *(_DWORD *)(a1 + 508);
  ForceUpdatePointerDeviceSystemMetrics();
  if ( gpTouchInjectorProcesses )
  {
    if ( v4 )
    {
      if ( !a2 && !*(_DWORD *)(v4 + 48) )
        return v9;
      v9 = _InitializeTouchInjectionWorker(a1);
    }
    if ( a2 )
    {
      v5 = (_DWORD *)gpTouchInjectorProcesses;
      if ( gpTouchInjectorProcesses )
      {
        do
        {
          v6 = v5[1];
          v7 = (_DWORD *)*v5;
          if ( v6 != a1 )
            *(_DWORD *)(*(_DWORD *)(v6 + 508) + 48) = 1;
          v5 = v7;
        }
        while ( v7 );
      }
    }
  }
  return v9;
}
