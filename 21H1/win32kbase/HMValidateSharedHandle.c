/*
 * XREFs of HMValidateSharedHandle @ 0x1C006DE88
 * Callers:
 *     NtUserGetHDevName @ 0x1C002DE60 (NtUserGetHDevName.c)
 *     UserGetHDevFromMonitor @ 0x1C002F854 (UserGetHDevFromMonitor.c)
 *     NtUserGetDpiForMonitor @ 0x1C006DA80 (NtUserGetDpiForMonitor.c)
 *     ValidateHmonitor @ 0x1C006DE70 (ValidateHmonitor.c)
 *     NtUserGetUniformSpaceMapping @ 0x1C00A7360 (NtUserGetUniformSpaceMapping.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C013AB90 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C013ADF0 (NtUserInitializePointerDeviceInjectionEx.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
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
    || (v2 = (char *)qword_1C0250D48 + (unsigned int)(unsigned __int16)a1 * dword_1C0250D50,
        GetDomainLockRef(14LL),
        v4 = gpKernelHandleTable,
        v5 = a1 >> 16,
        v6 = 3LL * (unsigned int)((v2 - (char *)qword_1C0250D48) >> 5),
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
