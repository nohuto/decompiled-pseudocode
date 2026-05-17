/*
 * XREFs of _LdrpCodeAuthzInitialize@0 @ 0x4B2E82F2
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _RtlAppendUnicodeToString@8 @ 0x4B2BFE00 (_RtlAppendUnicodeToString@8.c)
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _LdrUnloadDll@4 @ 0x4B2CCD40 (_LdrUnloadDll@4.c)
 *     _LdrGetProcedureAddressForCaller@24 @ 0x4B2CCED0 (_LdrGetProcedureAddressForCaller@24.c)
 *     _LdrLoadDll@16 @ 0x4B2CDD70 (_LdrLoadDll@16.c)
 *     _RtlAppendUnicodeStringToString@8 @ 0x4B2D10A0 (_RtlAppendUnicodeStringToString@8.c)
 *     _RtlFormatCurrentUserKeyPath@4 @ 0x4B2D3860 (_RtlFormatCurrentUserKeyPath@4.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryKey@20 @ 0x4B2F2AC0 (_ZwQueryKey@20.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __stdcall LdrpCodeAuthzInitialize()
{
  int v0; // ebx
  __int16 v1; // ax
  unsigned int v2; // eax
  int v4; // esi
  int Key; // esi
  int ValueKey; // esi
  unsigned int v7; // esi
  char v8; // [esp+Fh] [ebp-121h]
  HANDLE Handle; // [esp+10h] [ebp-120h] BYREF
  HANDLE v10; // [esp+14h] [ebp-11Ch] BYREF
  _BYTE v11[4]; // [esp+18h] [ebp-118h] BYREF
  int v12; // [esp+1Ch] [ebp-114h] BYREF
  int v13; // [esp+20h] [ebp-110h] BYREF
  int Heap; // [esp+24h] [ebp-10Ch]
  HANDLE v15; // [esp+28h] [ebp-108h] BYREF
  unsigned int v16; // [esp+2Ch] [ebp-104h] BYREF
  int v17; // [esp+30h] [ebp-100h] BYREF
  _BYTE v18[4]; // [esp+34h] [ebp-FCh] BYREF
  UNICODE_STRING UnicodeString; // [esp+38h] [ebp-F8h] BYREF
  _DWORD v20[6]; // [esp+40h] [ebp-F0h] BYREF
  _BYTE v21[20]; // [esp+58h] [ebp-D8h] BYREF
  int v22; // [esp+6Ch] [ebp-C4h]
  _BYTE v23[4]; // [esp+88h] [ebp-A8h] BYREF
  int v24; // [esp+8Ch] [ebp-A4h]
  int v25; // [esp+90h] [ebp-A0h]
  unsigned int v26; // [esp+94h] [ebp-9Ch]
  _BYTE v27[4]; // [esp+D8h] [ebp-58h] BYREF
  int v28; // [esp+DCh] [ebp-54h]
  int v29; // [esp+E0h] [ebp-50h]
  int v30; // [esp+E4h] [ebp-4Ch]
  int retaddr; // [esp+134h] [ebp+4h]

  v0 = 0;
  v16 = 0;
  v12 = 0;
  if ( LdrpIsSecureProcess )
    return 0;
  RtlImageNtHeaderEx(3, (unsigned int)NtCurrentPeb()->ImageBaseAddress, 0, 0, &v17);
  v1 = *(_WORD *)(v17 + 92);
  if ( v1 != 3 && v1 != 2 )
    return 0;
  if ( (int)ZwOpenKey(&v15, 3, dword_4B2813B0) < 0
    || (v4 = ZwQueryValueKey(v15, &dword_4B281A88, 2, v27, 80, v18), NtClose(v15), v4 < 0)
    || v28 != 4
    || v29 != 4
    || !v30 )
  {
    v8 = 0;
    v10 = 0;
    if ( (int)ZwOpenKey(&v10, 131097, &unk_4B3A33B0) >= 0 )
    {
      Key = ZwQueryKey(v10, 2, v21, 48, v11);
      NtClose(v10);
      if ( (Key != -2147483643 ? Key : 0) >= 0 )
      {
        if ( v22 )
          goto LABEL_26;
      }
    }
    if ( (int)ZwOpenKey(&Handle, 1, dword_4B281398) >= 0 )
    {
      if ( (int)ZwQueryValueKey(Handle, &dword_4B281390, 2, v23, 80, v11) >= 0 && v24 == 4 && v25 == 4 && v26 > 1 )
      {
        v8 = 1;
        ZwQueryValueKey(Handle, &dword_4B281A80, 2, v23, 80, v11);
      }
      NtClose(Handle);
      if ( v8 )
        goto LABEL_26;
    }
    if ( RtlFormatCurrentUserKeyPath(&UnicodeString) >= 0 )
    {
      LOWORD(v13) = 0;
      v2 = UnicodeString.Length + 120;
      if ( v2 <= 0xFFFE )
      {
        HIWORD(v13) = UnicodeString.Length + 120;
        Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, (unsigned __int16)v2);
        if ( Heap )
        {
          if ( RtlAppendUnicodeStringToString((unsigned __int16 *)&v13, (const void **)&UnicodeString) >= 0
            && RtlAppendUnicodeToString(
                 (unsigned __int16 *)&v13,
                 L"\\Software\\Policies\\Microsoft\\Windows\\Safer\\CodeIdentifiers") >= 0 )
          {
            v20[0] = 24;
            v20[2] = &v13;
            v20[1] = 0;
            v20[3] = 64;
            v20[4] = 0;
            v20[5] = 0;
            if ( (int)ZwOpenKey(&Handle, 1, v20) >= 0 )
            {
              ValueKey = ZwQueryValueKey(Handle, &dword_4B281390, 2, v23, 80, v11);
              NtClose(Handle);
              if ( ValueKey >= 0 && v24 == 4 && v25 == 4 && v26 > 1 )
                v8 = 1;
            }
          }
          RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, Heap);
        }
      }
      RtlFreeAnsiString(&UnicodeString);
      if ( v8 )
      {
LABEL_26:
        if ( LdrLoadDll(0, 0, (unsigned __int16 *)&dword_4B281A78, &v16) >= 0 )
        {
          v7 = v16;
          if ( LdrGetProcedureAddressForCaller(v16, (const void **)&dword_4B281A90, 0, &v12, 0, retaddr) >= 0 && v12 )
          {
            LdrpSaferIsDllAllowedRoutine = __ROR4__(v12 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x1F);
            LdrpAdvapi32DllHandle = v7;
          }
          else
          {
            LdrUnloadDll(v7);
            return -1073741511;
          }
        }
        else
        {
          return -1073741515;
        }
      }
    }
  }
  return v0;
}
