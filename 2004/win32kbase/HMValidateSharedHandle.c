/*
 * XREFs of HMValidateSharedHandle @ 0x1C0078CE8
 * Callers:
 *     NtUserGetUniformSpaceMapping @ 0x1C0012BB0 (NtUserGetUniformSpaceMapping.c)
 *     NtUserGetHDevName @ 0x1C002F050 (NtUserGetHDevName.c)
 *     UserGetHDevFromMonitor @ 0x1C003E0D4 (UserGetHDevFromMonitor.c)
 *     NtUserGetDpiForMonitor @ 0x1C0078AB0 (NtUserGetDpiForMonitor.c)
 *     ValidateHmonitor @ 0x1C0078CD0 (ValidateHmonitor.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C0134EF0 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C0135150 (NtUserInitializePointerDeviceInjectionEx.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 */

__int64 __fastcall HMValidateSharedHandle(unsigned __int64 a1)
{
  char *v2; // rdi
  __int64 v3; // rcx
  _QWORD *v4; // r14
  unsigned __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 result; // rax

  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1)
    || (v2 = (char *)qword_1C024AD48 + (unsigned int)(unsigned __int16)a1 * dword_1C024AD50,
        GetDomainLockRef(14LL),
        v4 = gpKernelHandleTable,
        v5 = a1 >> 16,
        v6 = 3LL * (unsigned int)((v2 - (char *)qword_1C024AD48) >> 5),
        (_WORD)v5 != *((_WORD *)v2 + 13))
    && (_WORD)v5 != 0xFFFF
    && ((_WORD)v5 || !PsGetCurrentProcessWow64Process(v3))
    || (v2[25] & 1) != 0
    || v2[24] != 12
    || (result = v4[v6]) == 0 )
  {
    UserSetLastError(1461LL);
    return 0LL;
  }
  return result;
}
