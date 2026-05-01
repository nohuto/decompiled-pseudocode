/*
 * XREFs of sub_18003F04C @ 0x18003F04C
 * Callers:
 *     sub_18004122C @ 0x18004122C (sub_18004122C.c)
 * Callees:
 *     sub_18003EE0C @ 0x18003EE0C (sub_18003EE0C.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     memset @ 0x1800453CC (memset.c)
 */

__int64 __fastcall sub_18003F04C(DWORD dwProcessId, __int64 a2, _WORD *a3, _DWORD *a4)
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
  LPCVOID Buffer[107]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v18; // [rsp+3B8h] [rbp+2B8h]
  __int128 v19; // [rsp+3C8h] [rbp+2C8h]
  __int64 v20; // [rsp+3D8h] [rbp+2D8h]
  __int128 v21; // [rsp+3E0h] [rbp+2E0h]
  __int128 v22; // [rsp+3F0h] [rbp+2F0h]
  _BYTE v23[1024]; // [rsp+400h] [rbp+300h] BYREF
  __int128 v24; // [rsp+800h] [rbp+700h]
  char v25; // [rsp+810h] [rbp+710h]
  int v26; // [rsp+811h] [rbp+711h]
  __int16 v27; // [rsp+815h] [rbp+715h]
  char v28; // [rsp+817h] [rbp+717h]
  __int128 v29; // [rsp+818h] [rbp+718h]
  LPCVOID v30[136]; // [rsp+830h] [rbp+730h] BYREF

  memset(Buffer, 0, 0x354uLL);
  v20 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  memset(v23, 0, sizeof(v23));
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v24 = 0LL;
  v28 = 0;
  v29 = 0LL;
  memset(v30, 0, sizeof(v30));
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  if ( !a3 || !a4 )
    return 2147500035LL;
  *a3 = 0;
  v7 = OpenProcess(0x1010u, 0, dwProcessId);
  if ( v7 )
    goto LABEL_9;
  LastError = GetLastError();
  if ( LastError == 5 )
    return sub_18003EE0C(dwProcessId, 0LL, 0LL, a3, a4);
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
        if ( ReadProcessMemory(v7, Buffer[4], v30, 0x440uLL, 0LL) )
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
        if ( v10 >= 0 && v30[8] )
        {
          v14 = 2LL * (unsigned int)*a4;
          if ( LOWORD(v30[7]) < v14 )
          {
            if ( ReadProcessMemory(v7, v30[8], a3, v14, 0LL) )
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
          *a4 = (LOWORD(v30[7]) >> 1) + 1;
        }
      }
    }
    if ( v7 )
      CloseHandle(v7);
  }
  return (unsigned int)v10;
}
