/*
 * XREFs of ?SetLogicalForegroundProcess@CRotationManagerSync@@UEAAXPEAUHWND__@@W4WindowType@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180071D50
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@@@Z @ 0x180071EB0 (-_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRotationManagerSync::SetLogicalForegroundProcess(_QWORD *a1, HWND a2, int a3, __int64 a4)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  DWORD dwProcessId; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 == 1 || a4 )
  {
    v8 = a1[11];
    if ( v8 )
    {
      a1[11] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( a3 == 1 )
    {
      dwProcessId = 0;
      GetWindowThreadProcessId(a2, &dwProcessId);
      CRotationManagerSync::_SetAutoRotationConfiguration(
        (CRotationManagerSync *)(a1 - 9),
        dwProcessId,
        0LL,
        ORIENTATION_PREFERENCE_NONE);
    }
    else
    {
      v9 = a1[11];
      if ( v9 != a4 )
      {
        if ( a4 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
          v9 = a1[11];
        }
        a1[11] = a4;
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      (*(void (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
    }
  }
}
