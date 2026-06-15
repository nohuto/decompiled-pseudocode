/*
 * XREFs of sub_18004C840 @ 0x18004C840
 * Callers:
 *     sub_18000F930 @ 0x18000F930 (sub_18000F930.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18004C944 @ 0x18004C944 (sub_18004C944.c)
 *     sub_1800B5768 @ 0x1800B5768 (sub_1800B5768.c)
 *     sub_1800CA660 @ 0x1800CA660 (sub_1800CA660.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18004C840(__int64 a1)
{
  LPCRITICAL_SECTION v1; // rdi
  void *v2; // rcx
  signed int LockSemaphore; // esi
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // esi
  signed int LastError; // eax
  HANDLE Handles[3]; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]
  __int64 ExitCode; // [rsp+50h] [rbp+8h] BYREF
  LONG *p_LockCount; // [rsp+58h] [rbp+10h]

  ExitCode = a1;
  v1 = lpCriticalSection;
  v2 = *(void **)&lpCriticalSection[2].LockCount;
  if ( (((unsigned __int64)v2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v5 = -2004287472;
    sub_18004BD84(
      (int)retaddr,
      183,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
      -2004287472);
LABEL_22:
    sub_18004BD84((int)retaddr, 269, (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp", v5);
    return v5;
  }
  Handles[0] = (HANDLE)lpCriticalSection[2].SpinCount;
  Handles[1] = v2;
  if ( WaitForMultipleObjectsEx(2u, Handles, 0, 0xFFFFFFFF, 0) != 1 )
    goto LABEL_3;
  if ( !GetExitCodeProcess(*(HANDLE *)&v1[2].LockCount, (LPDWORD)&ExitCode) )
  {
    v6 = sub_1800B5768(retaddr, 195LL, "avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp");
    goto LABEL_21;
  }
  if ( (_DWORD)ExitCode == -1073740760 )
  {
    v5 = -2147024319;
    sub_18004BD84(
      (int)retaddr,
      197,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
      -2147024319);
    goto LABEL_22;
  }
  if ( !(_DWORD)ExitCode )
    goto LABEL_3;
  v6 = sub_1800CA660(
         retaddr,
         201LL,
         "avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
         (unsigned int)ExitCode);
LABEL_21:
  v5 = v6;
  if ( v6 < 0 )
    goto LABEL_22;
LABEL_3:
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 48));
  p_LockCount = &v1[1].LockCount;
  if ( !BYTE4(v1[2].OwningThread) )
  {
    if ( GetExitCodeProcess(*(HANDLE *)&v1[2].LockCount, (LPDWORD)&ExitCode) )
    {
      LockSemaphore = ExitCode;
      if ( (_DWORD)ExitCode == 259 )
      {
        LockSemaphore = sub_18004C944(v1);
LABEL_13:
        LODWORD(v1[2].LockSemaphore) = LockSemaphore;
        BYTE4(v1[2].OwningThread) = 1;
        goto LABEL_5;
      }
      if ( (int)ExitCode <= 0 )
        goto LABEL_13;
      v7 = (unsigned __int16)ExitCode;
    }
    else
    {
      LastError = GetLastError();
      LockSemaphore = LastError;
      LODWORD(ExitCode) = LastError;
      if ( LastError <= 0 )
        goto LABEL_13;
      v7 = (unsigned __int16)LastError;
    }
    LockSemaphore = v7 | 0x80070000;
    goto LABEL_13;
  }
  LockSemaphore = (signed int)v1[2].LockSemaphore;
LABEL_5:
  if ( LockSemaphore < 0 )
    sub_18004BD84(
      (int)retaddr,
      301,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
      LockSemaphore);
  if ( v1 != (LPCRITICAL_SECTION)-48LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 48));
  return (unsigned int)LockSemaphore;
}
