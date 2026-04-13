/*
 * XREFs of _TelGetStringPolicy@12 @ 0x10002890
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z @ 0x10003377 (-_Log_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z.c)
 *     ?StringCchCopyW@@YGJPAGIPBG@Z @ 0x100037B9 (-StringCchCopyW@@YGJPAGIPBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z @ 0x10003E71 (-Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z.c)
 *     @_guard_check_icall_nop@4 @ 0x10004890 (@_guard_check_icall_nop@4.c)
 */

signed int __stdcall TelGetStringPolicy(int a1, PVOID pvData, int a3)
{
  FARPROC PolicyManager_FreeGetPolicyData; // ebx
  FARPROC PolicyManager_GetPolicy; // esi
  HMODULE Library; // eax
  HMODULE v6; // edi
  wil::details::in1diag3 *v7; // ecx
  signed int v8; // esi
  int v9; // eax
  LSTATUS ValueW; // eax
  void *v11; // eax
  wil::details::in1diag3 *v13; // [esp-4h] [ebp-20h]
  unsigned int v14; // [esp+0h] [ebp-1Ch]
  const unsigned __int16 *v15; // [esp+4h] [ebp-18h]
  int v16; // [esp+8h] [ebp-14h]
  int v17; // [esp+Ch] [ebp-10h] BYREF
  int v18; // [esp+10h] [ebp-Ch]
  DWORD pcbData; // [esp+14h] [ebp-8h] BYREF
  int v20; // [esp+18h] [ebp-4h] BYREF

  PolicyManager_FreeGetPolicyData = 0;
  PolicyManager_GetPolicy = 0;
  Library = LoadLibraryExW(L"policymanager.dll", 0, 0x800u);
  v6 = Library;
  if ( Library )
  {
    PolicyManager_GetPolicy = GetProcAddress(Library, "PolicyManager_GetPolicy");
    PolicyManager_FreeGetPolicyData = GetProcAddress(v6, "PolicyManager_FreeGetPolicyData");
  }
  v20 = 0;
  v17 = 0;
  v18 = 0;
  if ( PolicyManager_GetPolicy && PolicyManager_FreeGetPolicyData )
  {
    v17 = 1;
    v18 = 2;
    v8 = ((int (__thiscall *)(FARPROC, const wchar_t *, int, int *, int *))PolicyManager_GetPolicy)(
           PolicyManager_GetPolicy,
           L"System",
           a1,
           &v17,
           &v20);
    if ( v8 >= 0 )
    {
      if ( v20 && *(_DWORD *)(v20 + 8) == 2 )
        v8 = StringCchCopyW(*(_DWORD *)(v20 + 12), v14, v15);
      else
        v8 = -2147024883;
    }
  }
  else
  {
    v9 = __o__wcsicmp(a1, L"ConfigureMicrosoft365UploadEndpoint");
    v7 = v13;
    if ( v9 )
    {
      v8 = -2147024809;
    }
    else
    {
      pcbData = 2 * a3;
      ValueW = RegGetValueW(
                 HKEY_LOCAL_MACHINE,
                 L"Software\\Policies\\Microsoft\\Windows\\DataCollection",
                 L"ConfigureMicrosoft365UploadEndpoint",
                 2u,
                 0,
                 pvData,
                 &pcbData);
      v8 = ValueW;
      if ( ValueW > 0 )
        v8 = (unsigned __int16)ValueW | 0x80070000;
    }
  }
  if ( v20 )
  {
    v11 = (void *)((int (__thiscall *)(FARPROC, int))PolicyManager_FreeGetPolicyData)(
                    PolicyManager_FreeGetPolicyData,
                    v20);
    if ( (int)v11 < 0 )
      wil::details::in1diag3::_Log_Hr(v7, v11, v14, (const char *)v15, v16);
  }
  if ( v6 )
    FreeLibrary(v6);
  if ( v8 < 0 )
    wil::details::in1diag3::Return_Hr(v7, (void *)v8, v14, (const char *)v15, v16);
  return v8;
}
