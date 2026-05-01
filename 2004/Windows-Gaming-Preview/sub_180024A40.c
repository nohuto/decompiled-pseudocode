/*
 * XREFs of sub_180024A40 @ 0x180024A40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180024A40(PINIT_ONCE InitOnce, PVOID Parameter, PVOID *Context)
{
  DWORD CurrentProcessId; // eax
  HANDLE v4; // rax
  void *v5; // rbx
  LPVOID v6; // rcx
  DWORD ReturnLength; // [rsp+30h] [rbp-20h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-18h] BYREF
  void *TokenHandle; // [rsp+40h] [rbp-10h] BYREF
  _BYTE v11[8]; // [rsp+48h] [rbp-8h] BYREF
  int TokenInformation; // [rsp+78h] [rbp+28h] BYREF

  ppv = 0LL;
  if ( CoCreateInstance(&stru_180050090, 0LL, 1u, &stru_180051BE0, &ppv) >= 0 )
    (*(void (__fastcall **)(LPVOID, __int64, _BYTE *))(*(_QWORD *)ppv + 32LL))(ppv, 4LL, v11);
  CurrentProcessId = GetCurrentProcessId();
  v4 = OpenProcess(0x1000u, 0, CurrentProcessId);
  v5 = v4;
  if ( v4 )
  {
    if ( OpenProcessToken(v4, 8u, &TokenHandle) )
    {
      TokenInformation = 0;
      GetTokenInformation(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &ReturnLength);
      CloseHandle(TokenHandle);
    }
    CloseHandle(v5);
  }
  v6 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return 1LL;
}
