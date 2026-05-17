/*
 * XREFs of _PsspCaptureHandleTrace@8 @ 0x4B387016
 * Callers:
 *     _PsspCaptureProcessInformation@12 @ 0x4B38727C (_PsspCaptureProcessInformation@12.c)
 * Callees:
 *     _RtlULongPtrAdd@12 @ 0x4B2A9463 (_RtlULongPtrAdd@12.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

NTSTATUS __fastcall PsspCaptureHandleTrace(_DWORD *a1, int a2)
{
  NTSTATUS result; // eax
  int *v5; // ecx
  int v6; // edi
  int v7; // ecx
  int v9; // [esp+14h] [ebp-7Ch] BYREF
  int v10[3]; // [esp+18h] [ebp-78h] BYREF
  int v11; // [esp+24h] [ebp-6Ch] BYREF
  HANDLE Handle; // [esp+28h] [ebp-68h] BYREF
  void *v13; // [esp+2Ch] [ebp-64h] BYREF
  _DWORD v14[23]; // [esp+30h] [ebp-60h] BYREF

  memset(v14, 0, 0x58u);
  result = ZwQueryInformationProcess(a2, 32, (int)v14, 88, (int)&v11);
  if ( result >= 0 || result == -1073741820 )
  {
    result = RtlULongLongToUInt(v10, 80 * v14[1], (80 * (unsigned __int64)v14[1]) >> 32);
    if ( result >= 0 )
    {
      result = RtlULongPtrAdd(v10[0], 88, v5);
      if ( result >= 0 )
      {
        v10[1] = 0;
        result = NtCreateSection((int)&Handle, 983047, (int)dword_4B2A58B8, (int)v10, 4, 0x8000000, 0);
        if ( result >= 0 )
        {
          v13 = 0;
          v9 = 0;
          v6 = ZwMapViewOfSection((int)Handle, -1, (int)&v13, 0, 0, 0, (int)&v9, 1, 0, 4);
          if ( v6 >= 0 )
          {
            memset(v13, 0, 0x58u);
            if ( ZwQueryInformationProcess(a2, 32, (int)v13, v10[0], (int)&v11) >= 0 )
            {
              NtUnmapViewOfSection(-1, (int)v13);
              a1[200] = v11;
              a1[201] = Handle;
              while ( 1 )
              {
                v7 = MEMORY[0x7FFE0018];
                if ( MEMORY[0x7FFE0018] == MEMORY[0x7FFE001C] )
                  break;
                _mm_pause();
              }
              result = 0;
              a1[202] = MEMORY[0x7FFE0014];
              a1[203] = v7;
            }
            else
            {
              NtUnmapViewOfSection(-1, (int)v13);
              return NtClose(Handle);
            }
          }
          else
          {
            NtClose(Handle);
            return v6;
          }
        }
      }
    }
  }
  return result;
}
