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

HANDLE __fastcall PsspWalkHandleTable(
        HANDLE SourceProcessHandle,
        int a2,
        unsigned int a3,
        char a4,
        int (__thiscall *a5)(_DWORD, int, int, _DWORD, char, _BYTE *, _BYTE *, _BYTE *, _BYTE *, int),
        int a6)
{
  HANDLE result; // eax
  int v7; // esi
  int v8; // ebx
  int v9; // edi
  unsigned int v10; // esi
  size_t v11; // [esp-4h] [ebp-33Ch]
  char v13; // [esp+1Ch] [ebp-31Ch]
  int v14; // [esp+20h] [ebp-318h] BYREF
  int v15; // [esp+24h] [ebp-314h]
  int v16; // [esp+28h] [ebp-310h]
  HANDLE TargetHandle; // [esp+2Ch] [ebp-30Ch] BYREF
  _BYTE ObjectInformation[4]; // [esp+30h] [ebp-308h] BYREF
  wchar_t *String1; // [esp+34h] [ebp-304h]
  _BYTE v20[8]; // [esp+D0h] [ebp-268h] BYREF
  __int16 v21; // [esp+D8h] [ebp-260h]
  _BYTE v22[56]; // [esp+2D8h] [ebp-60h] BYREF
  _BYTE v23[36]; // [esp+310h] [ebp-28h] BYREF

  result = SourceProcessHandle;
  v7 = a2;
  v15 = a2;
  v8 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      v9 = 0;
      TargetHandle = 0;
      v13 = 0;
      v14 = 0;
      if ( ZwDuplicateObject(result, *(HANDLE *)(v7 + 4 * v8), (HANDLE)0xFFFFFFFF, &TargetHandle, 0, 0, 2u) < 0 )
        goto LABEL_18;
      v9 = 4;
      if ( NtQueryObject(TargetHandle, ObjectTypeInformation, ObjectInformation, 0xA0u, 0) >= 0 )
        break;
      NtClose(TargetHandle);
LABEL_19:
      result = SourceProcessHandle;
      if ( ++v8 >= a3 )
        return result;
    }
    if ( (a4 & 8) != 0 )
    {
      LODWORD(v11) = 520;
      memset(v20, 0, v11);
      if ( _wcsicmp(String1, L"File") )
      {
        if ( NtQueryObject(TargetHandle, ObjectNameInformation, v20, 0x208u, 0) < 0 )
          v21 = 0;
      }
    }
    if ( (a4 & 0x10) != 0 && NtQueryObject(TargetHandle, ObjectBasicInformation, v22, 0x38u, 0) >= 0 )
      v9 = 20;
    v14 = 0;
    if ( (a4 & 0x20) != 0 )
    {
      v10 = 0;
      v16 = 0;
      while ( _wcsicmp(String1, (&off_4B281930)[v10]) )
      {
        ++v16;
        v10 += 3;
        if ( v10 >= 18 )
          goto LABEL_16;
      }
      v16 *= 12;
      if ( (*(int (__thiscall **)(_DWORD, HANDLE, _BYTE *, int, int *))((char *)&off_4B281934 + v16))(
             *(int (__stdcall **)(HANDLE, PVOID, int, PULONG))((char *)&off_4B281934 + v16),
             TargetHandle,
             v23,
             32,
             &v14) < 0 )
      {
LABEL_16:
        v7 = v15;
        goto LABEL_17;
      }
      v7 = v15;
      if ( v14 )
      {
        v9 |= 0x20u;
        v13 = byte_4B281938[v16];
      }
    }
LABEL_17:
    NtClose(TargetHandle);
LABEL_18:
    result = (HANDLE)a5(
                       a5,
                       a6,
                       v9,
                       *(_DWORD *)(v7 + 4 * v8),
                       v13,
                       (v9 & 4) != 0 ? ObjectInformation : 0,
                       (v9 & 4) != 0 ? v20 : 0,
                       (v9 & 0x10) != 0 ? v22 : 0,
                       (v9 & 0x20) != 0 ? v23 : 0,
                       (v9 & 0x20) != 0 ? v14 : 0);
    if ( !(_BYTE)result )
      return result;
    goto LABEL_19;
  }
  return result;
}
