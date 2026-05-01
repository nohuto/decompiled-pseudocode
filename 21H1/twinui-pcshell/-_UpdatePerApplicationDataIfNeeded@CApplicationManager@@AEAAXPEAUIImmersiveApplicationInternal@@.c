/*
 * XREFs of ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUHWND__@@W4UpdateAppDataReason@1@@Z @ 0x18006A12C
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180037490 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x180131070 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180131B70 (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000FAAC (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTYPE@1@@Z @ 0x180136CC8 (-ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTY.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::_UpdatePerApplicationDataIfNeeded(__int64 a1, __int64 a2, HWND a3, int a4)
{
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // rdi
  unsigned int v11; // r9d
  unsigned int v12; // eax
  unsigned __int64 i; // r8
  __int64 v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // rdi
  __int64 v17; // rcx
  void (__fastcall *v18)(__int64, HWND *, __int64 *); // rdi
  __int64 v19; // rdx
  __int64 v20; // [rsp+20h] [rbp-30h] BYREF
  __int64 v21; // [rsp+28h] [rbp-28h] BYREF
  __int64 v22; // [rsp+30h] [rbp-20h]
  HWND v23; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24; // [rsp+40h] [rbp-10h] BYREF
  char v25; // [rsp+48h] [rbp-8h]
  __int64 v26; // [rsp+88h] [rbp+38h] BYREF

  v21 = -1LL;
  v20 = 0LL;
  result = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a2)(
             a2,
             &GUID_b00297dd_eb90_48c8_99c0_f0b2d68213d3,
             &v20);
  if ( (int)result < 0 )
    goto LABEL_20;
  result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 24LL))(v20, &v21);
  if ( (int)result < 0 )
    goto LABEL_20;
  v9 = 0LL;
  v22 = 0LL;
  v10 = *(_QWORD *)(a1 + 1016);
  if ( !v10 )
    goto LABEL_18;
  v11 = *(_DWORD *)(a1 + 1004);
  v12 = 314159269;
  for ( i = 0LL; i < 8; ++i )
    v12 ^= (v12 >> 2) + 2080 * v12 + *((unsigned __int8 *)&v21 + i);
  v14 = (v12 & 0x7FFFFFFF) % v11;
  v15 = -1;
  while ( 1 )
  {
    result = *(unsigned int *)(v10 + 24 * v14);
    if ( (_DWORD)result == 2 && v15 == -1 )
    {
      v15 = v14;
      goto LABEL_9;
    }
    if ( !(_DWORD)result )
      break;
LABEL_9:
    if ( (_DWORD)result == 1 && *(_QWORD *)(v10 + 24 * v14 + 8) == v21 )
      goto LABEL_11;
    v14 = ((int)v14 + 1) % v11;
  }
  if ( v15 != -1 )
    v14 = v15;
LABEL_11:
  if ( *(_DWORD *)(v10 + 24 * v14) == 1 )
  {
    v16 = *(_QWORD *)(v10 + 24 * v14 + 16);
    if ( v16 )
    {
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      v9 = v16;
      v22 = v16;
    }
    if ( *(_QWORD *)(v9 + 24) || a4 )
    {
      if ( *(HWND *)(v9 + 24) == a3 && a4 == 1 )
      {
        *(_QWORD *)(v9 + 24) = 0LL;
        result = (__int64)Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(v9 + 16), 0LL);
        *(_BYTE *)(v9 + 32) = 0;
      }
    }
    else
    {
      result = (unsigned int)GetPropW(a3, L"Windows.ImmersiveShell.IdentifyAsMainCoreWindow") - 1;
      if ( (_DWORD)result )
      {
        if ( (_DWORD)result != 1 )
          goto LABEL_18;
      }
      else
      {
        result = CApplicationManagerUtility::ValidateWindowProcess(a3, 2LL);
        if ( (_BYTE)result )
          goto LABEL_18;
        SetPropW(a3, L"Windows.ImmersiveShell.IdentifyAsMainCoreWindow", HANDLE_FLAG_PROTECT_FROM_CLOSE);
      }
      v26 = 0LL;
      v18 = *(void (__fastcall **)(__int64, HWND *, __int64 *))(*(_QWORD *)a2 + 304LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      v23 = a3;
      v24 = 0LL;
      v25 = 0;
      v18(a2, &v23, &v26);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      v19 = v26;
      *(_QWORD *)(v9 + 24) = a3;
      Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(v9 + 16), v19);
      if ( !*(_BYTE *)(v9 + 36) )
        *(_BYTE *)(v9 + 32) = (unsigned int)GetPropW(a3, L"Windows.ImmersiveShell.DisableShowingMainViewOnActivation") == 0;
      *(_BYTE *)(v9 + 33) = GetPropW(a3, L"Windows.ImmersiveShell.ForceTerminateOnClose") != 0LL;
      result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    }
  }
LABEL_18:
  if ( v9 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
LABEL_20:
  v17 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return result;
}
