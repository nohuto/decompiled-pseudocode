/*
 * XREFs of ?GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z @ 0x18003F14C
 * Callers:
 *     ?GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18004144C (-GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 * Callees:
 *     ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x18003EF0C (-GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z.c)
 *     __security_check_cookie @ 0x1800443F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800456EC (memset_0.c)
 */

__int64 __fastcall Common::GetProcessWorkingDirectoryByPID(
        DWORD dwProcessId,
        __int64 a2,
        char *a3,
        unsigned __int16 *a4)
{
  HANDLE v7; // rdi
  signed int LastError; // eax
  int v10; // ebx
  NTSTATUS InformationProcess; // eax
  signed int v12; // eax
  signed int v13; // eax
  SIZE_T v14; // r9
  signed int v15; // eax
  _OWORD ProcessInformation[3]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE Buffer[32]; // [rsp+60h] [rbp-A0h] BYREF
  LPCVOID lpBaseAddress; // [rsp+80h] [rbp-80h]
  __int128 v19; // [rsp+3B8h] [rbp+2B8h]
  __int128 v20; // [rsp+3C8h] [rbp+2C8h]
  __int64 v21; // [rsp+3D8h] [rbp+2D8h]
  __int128 v22; // [rsp+3E0h] [rbp+2E0h]
  __int128 v23; // [rsp+3F0h] [rbp+2F0h]
  _BYTE v24[1024]; // [rsp+400h] [rbp+300h] BYREF
  __int128 v25; // [rsp+800h] [rbp+700h]
  char v26; // [rsp+810h] [rbp+710h]
  int v27; // [rsp+811h] [rbp+711h]
  __int16 v28; // [rsp+815h] [rbp+715h]
  char v29; // [rsp+817h] [rbp+717h]
  __int128 v30; // [rsp+818h] [rbp+718h]
  _BYTE v31[56]; // [rsp+830h] [rbp+730h] BYREF
  unsigned __int16 v32; // [rsp+868h] [rbp+768h]
  LPCVOID v33; // [rsp+870h] [rbp+770h]

  memset_0(Buffer, 0, 0x354uLL);
  v21 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  memset_0(v24, 0, sizeof(v24));
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v25 = 0LL;
  v29 = 0;
  v30 = 0LL;
  memset_0(v31, 0, 0x440uLL);
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  if ( !a3 || !a4 )
    return 2147500035LL;
  *(_WORD *)a3 = 0;
  v7 = OpenProcess(0x1010u, 0, dwProcessId);
  if ( v7 )
    goto LABEL_9;
  LastError = GetLastError();
  if ( LastError == 5 )
    return Common::GetProcessImageInfoByPID(dwProcessId, 0LL, 0LL, a3, a4);
  v10 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v10 = LastError;
  if ( v10 >= 0 )
  {
LABEL_9:
    InformationProcess = NtQueryInformationProcess(v7, ProcessBasicInformation, ProcessInformation, 0x30u, 0LL);
    v10 = 0;
    if ( InformationProcess < 0 )
      v10 = InformationProcess | 0x10000000;
    if ( v10 >= 0 )
    {
      if ( ReadProcessMemory(v7, *((LPCVOID *)&ProcessInformation[0] + 1), Buffer, 0x7C8uLL, 0LL) )
      {
        v10 = 0;
      }
      else
      {
        v12 = GetLastError();
        v10 = (unsigned __int16)v12 | 0x80070000;
        if ( v12 <= 0 )
          v10 = v12;
      }
      if ( v10 >= 0 )
      {
        if ( ReadProcessMemory(v7, lpBaseAddress, v31, 0x440uLL, 0LL) )
        {
          v10 = 0;
        }
        else
        {
          v13 = GetLastError();
          v10 = (unsigned __int16)v13 | 0x80070000;
          if ( v13 <= 0 )
            v10 = v13;
        }
        if ( v10 >= 0 && v33 )
        {
          v14 = 2LL * *(unsigned int *)a4;
          if ( v32 < v14 )
          {
            if ( ReadProcessMemory(v7, v33, a3, v14, 0LL) )
            {
              v10 = 0;
            }
            else
            {
              v15 = GetLastError();
              v10 = (unsigned __int16)v15 | 0x80070000;
              if ( v15 <= 0 )
                v10 = v15;
            }
          }
          else
          {
            v10 = -2147024774;
          }
          *(_DWORD *)a4 = (v32 >> 1) + 1;
        }
      }
    }
    if ( v7 )
      CloseHandle(v7);
  }
  return (unsigned int)v10;
}
