/*
 * XREFs of PsspWalkHandleTable @ 0x4B3882F7
 * Callers:
 *     _PsspCaptureHandleInformation@12 @ 0x4B387CF4 (_PsspCaptureHandleInformation@12.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtQueryObject@20 @ 0x4B2F2A60 (_NtQueryObject@20.c)
 *     _ZwDuplicateObject@28 @ 0x4B2F2D40 (_ZwDuplicateObject@28.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __wcsicmp @ 0x4B2F7990 (__wcsicmp.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __fastcall PsspWalkHandleTable(
        int a1,
        int a2,
        unsigned int a3,
        char a4,
        int (__thiscall *a5)(_DWORD, int, int, _DWORD, char, char *, _WORD *, _BYTE *, _BYTE *, int),
        int a6)
{
  int result; // eax
  int v7; // esi
  int v8; // ebx
  int v9; // edi
  unsigned int v10; // esi
  char v12; // [esp+1Ch] [ebp-31Ch]
  int v13; // [esp+20h] [ebp-318h] BYREF
  int v14; // [esp+24h] [ebp-314h]
  int v15; // [esp+28h] [ebp-310h]
  HANDLE Handle; // [esp+2Ch] [ebp-30Ch] BYREF
  char ObjectInformation[4]; // [esp+30h] [ebp-308h] BYREF
  wchar_t *String1; // [esp+34h] [ebp-304h]
  _WORD v19[260]; // [esp+D0h] [ebp-268h] BYREF
  _BYTE v20[56]; // [esp+2D8h] [ebp-60h] BYREF
  _BYTE v21[36]; // [esp+310h] [ebp-28h] BYREF

  result = a1;
  v7 = a2;
  v14 = a2;
  v8 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      v9 = 0;
      Handle = 0;
      v12 = 0;
      v13 = 0;
      if ( ZwDuplicateObject(result, *(_DWORD *)(v7 + 4 * v8), -1, (int)&Handle, 0, 0, 2) < 0 )
        goto LABEL_18;
      v9 = 4;
      if ( NtQueryObject(Handle, ObjectTypeInformation, ObjectInformation, 0xA0u, 0) >= 0 )
        break;
      NtClose(Handle);
LABEL_19:
      result = a1;
      if ( ++v8 >= a3 )
        return result;
    }
    if ( (a4 & 8) != 0 )
    {
      memset(v19, 0, sizeof(v19));
      if ( _wcsicmp(String1, L"File") )
      {
        if ( NtQueryObject(Handle, (OBJECT_INFORMATION_CLASS)1, v19, 0x208u, 0) < 0 )
          v19[4] = 0;
      }
    }
    if ( (a4 & 0x10) != 0 && NtQueryObject(Handle, ObjectBasicInformation, v20, 0x38u, 0) >= 0 )
      v9 = 20;
    v13 = 0;
    if ( (a4 & 0x20) != 0 )
    {
      v10 = 0;
      v15 = 0;
      while ( _wcsicmp(String1, (&off_4B281930)[v10]) )
      {
        ++v15;
        v10 += 3;
        if ( v10 >= 18 )
          goto LABEL_16;
      }
      v15 *= 12;
      if ( (*(int (__thiscall **)(_DWORD, HANDLE, _BYTE *, int, int *))((char *)&off_4B281934 + v15))(
             *(int (__stdcall **)(int, int, int, int))((char *)&off_4B281934 + v15),
             Handle,
             v21,
             32,
             &v13) < 0 )
      {
LABEL_16:
        v7 = v14;
        goto LABEL_17;
      }
      v7 = v14;
      if ( v13 )
      {
        v9 |= 0x20u;
        v12 = byte_4B281938[v15];
      }
    }
LABEL_17:
    NtClose(Handle);
LABEL_18:
    result = a5(
               a5,
               a6,
               v9,
               *(_DWORD *)(v7 + 4 * v8),
               v12,
               (v9 & 4) != 0 ? ObjectInformation : 0,
               (v9 & 4) != 0 ? v19 : 0,
               (v9 & 0x10) != 0 ? v20 : 0,
               (v9 & 0x20) != 0 ? v21 : 0,
               (v9 & 0x20) != 0 ? v13 : 0);
    if ( !(_BYTE)result )
      return result;
    goto LABEL_19;
  }
  return result;
}
