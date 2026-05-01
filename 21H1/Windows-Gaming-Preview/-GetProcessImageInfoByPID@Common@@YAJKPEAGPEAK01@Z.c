/*
 * XREFs of ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x18003EF0C
 * Callers:
 *     ?GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z @ 0x18003F14C (-GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z.c)
 *     ?GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x180040F80 (-GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x180041530 (-GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180001A2C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x180044200 (__security_check_cookie.c)
 *     memset_0 @ 0x1800454FC (memset_0.c)
 */

__int64 __fastcall Common::GetProcessImageInfoByPID(
        DWORD dwProcessId,
        char *a2,
        unsigned __int16 *a3,
        char *a4,
        unsigned __int16 *a5)
{
  unsigned __int16 *v5; // r14
  signed int v9; // edi
  signed int v10; // ebp
  unsigned int v11; // esi
  HANDLE v12; // r15
  signed int LastError; // eax
  signed int v14; // eax
  wchar_t *v15; // rax
  char *v16; // r8
  __int64 v17; // rcx
  _WORD *v18; // rax
  __int64 v19; // rdx
  int v20; // r14d
  __int64 v21; // r9
  WCHAR *v22; // rcx
  __int64 v23; // rbx
  DWORD dwSize; // [rsp+20h] [rbp-898h] BYREF
  unsigned __int16 *v26; // [rsp+28h] [rbp-890h]
  unsigned __int16 *v27; // [rsp+30h] [rbp-888h]
  WCHAR ExeName[1040]; // [rsp+40h] [rbp-878h] BYREF

  v5 = a5;
  v27 = a3;
  v26 = a5;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  memset_0(ExeName, 0, sizeof(ExeName));
  dwSize = 1040;
  v12 = OpenProcess(0x1000u, 0, dwProcessId);
  if ( v12 )
    goto LABEL_7;
  LastError = GetLastError();
  v9 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v9 = LastError;
  if ( v9 >= 0 )
  {
LABEL_7:
    if ( !QueryFullProcessImageNameW(v12, 0, ExeName, &dwSize) )
    {
      v14 = GetLastError();
      v9 = (unsigned __int16)v14 | 0x80070000;
      if ( v14 <= 0 )
        v9 = v14;
    }
    if ( v9 >= 0 )
    {
      v15 = wcsrchr(ExeName, 0x5Cu);
      if ( v15 )
      {
        v16 = (char *)(v15 + 1);
        *v15 = 0;
        if ( a2 )
        {
          if ( v15 == (wchar_t *)-2LL )
          {
            LODWORD(v19) = (_DWORD)v26;
            v10 = -2147024809;
          }
          else
          {
            v17 = 0x7FFFFFFFLL;
            v18 = v15 + 1;
            do
            {
              if ( !*v18 )
                break;
              ++v18;
              --v17;
            }
            while ( v17 );
            v10 = v17 == 0 ? 0x80070057 : 0;
            v19 = (0x7FFFFFFF - v17) & -(__int64)(v17 != 0);
          }
          if ( v10 >= 0 )
          {
            v20 = v19;
            v10 = StringCchCopyW(a2, *(unsigned int *)v27, v16);
            *(_DWORD *)v27 = v20 + 1;
          }
          v5 = v26;
        }
        if ( a4 )
        {
          v21 = 0x7FFFFFFFLL;
          v22 = ExeName;
          do
          {
            if ( !*v22 )
              break;
            ++v22;
            --v21;
          }
          while ( v21 );
          v11 = v21 == 0 ? 0x80070057 : 0;
          v23 = (0x7FFFFFFF - v21) & ((unsigned __int128)-(__int128)(unsigned __int64)v21 >> 64) & -(__int64)(v21 != 0);
          if ( v21 )
          {
            v11 = StringCchCopyW(a4, *(unsigned int *)v5, (char *)ExeName);
            *(_DWORD *)v5 = v23 + 1;
          }
        }
      }
      else
      {
        v9 = -2147418113;
      }
    }
    if ( v12 )
      CloseHandle(v12);
  }
  if ( v10 < 0 )
    v11 = v10;
  if ( v9 < 0 )
    return (unsigned int)v9;
  return v11;
}
