/*
 * XREFs of CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_0758695e4094b81417177289bdc77534___ @ 0x180178D08
 * Callers:
 *     ?NotifyApplicationWindows@CImmersiveApp@@UEAAJI_K_JW4NOTIFY_IMMERSIVE_APPLICATION_WINDOWS_OPTION@@W4NOTIFY_IMMERSIVE_APPLICATION_WINDOWS_DELIVERY_TYPE@@@Z @ 0x18017F8D0 (-NotifyApplicationWindows@CImmersiveApp@@UEAAJI_K_JW4NOTIFY_IMMERSIVE_APPLICATION_WINDOWS_OPTION.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@I_K_JW4DELIVERY_METHOD@1@@Z @ 0x18015AEB8 (-NotifyWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@I_K_JW4DELIVERY_METHOD@1@@Z.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_0758695e4094b81417177289bdc77534___(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v2; // r12
  unsigned __int64 v3; // r15
  __int64 result; // rax
  char v6; // r14
  __int64 v7; // rcx
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned int v12; // ebp
  HWND v13; // rax

  v2 = *(_QWORD *)(a1 + 176);
  v3 = 0LL;
  result = a1;
  v6 = 1;
  while ( v3 < v2 )
  {
    if ( !v6 )
      break;
    v6 = 1;
    v7 = *(_QWORD *)(*(_QWORD *)(result + 168) + 8 * v3);
    v8 = *(_DWORD *)(a2 + 24);
    if ( v8 != 1 )
    {
      v6 = 0;
      if ( (unsigned int)(v8 - 2) > 1 )
        continue;
    }
    v9 = *(_DWORD *)(a2 + 32);
    v10 = *(_QWORD *)(a2 + 16);
    v11 = *(_QWORD *)(a2 + 8);
    v12 = *(_DWORD *)a2;
    v13 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
    CApplicationManagerUtility::NotifyWindow(v13, v12, v11, v10, v9);
    result = a1;
    ++v3;
  }
  return result;
}
