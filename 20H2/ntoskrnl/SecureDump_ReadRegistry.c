/*
 * XREFs of SecureDump_ReadRegistry @ 0x1403CBBB8
 * Callers:
 *     SecureDump_PrepareForInit @ 0x1403CBAA0 (SecureDump_PrepareForInit.c)
 * Callees:
 *     memmove @ 0x140411040 (memmove.c)
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     IopGetRegistryValue @ 0x1407372E4 (IopGetRegistryValue.c)
 *     IopOpenRegistryKey @ 0x140766324 (IopOpenRegistryKey.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SecureDump_ReadRegistry(__int64 a1, __int64 a2, int a3, void **a4, _DWORD *a5)
{
  _DWORD *v7; // rsi
  __int64 result; // rax
  int RegistryValue; // ebx
  PVOID PoolWithTag; // rax
  HANDLE Handle; // [rsp+78h] [rbp+20h] BYREF

  Handle = 0LL;
  if ( !a4 )
    return 3221225485LL;
  v7 = a5;
  if ( !a5 )
    return 3221225485LL;
  result = IopOpenRegistryKey(&Handle, 0LL, a1, 131097LL, 0);
  if ( (int)result >= 0 )
  {
    RegistryValue = IopGetRegistryValue(Handle);
    if ( RegistryValue >= 0 )
    {
      if ( MEMORY[0xC] )
      {
        if ( a3 == MEMORY[4] )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, MEMORY[0xC], 0x706D6453u);
          *a4 = PoolWithTag;
          if ( PoolWithTag )
          {
            *v7 = MEMORY[0xC];
            memmove(*a4, (const void *)MEMORY[8], MEMORY[0xC]);
          }
          else
          {
            RegistryValue = -1073741670;
          }
        }
        else
        {
          RegistryValue = -1073741788;
        }
      }
      else
      {
        RegistryValue = -1073741820;
      }
      ExFreePoolWithTag(0LL, 0);
    }
    ObCloseHandle(Handle, 0);
    return (unsigned int)RegistryValue;
  }
  return result;
}
