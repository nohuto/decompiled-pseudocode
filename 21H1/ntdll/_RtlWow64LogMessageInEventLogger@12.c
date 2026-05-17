/*
 * XREFs of _RtlWow64LogMessageInEventLogger@12 @ 0x4B335A80
 * Callers:
 *     <none>
 * Callees:
 *     _LdrUnloadDll@4 @ 0x4B2CCD40 (_LdrUnloadDll@4.c)
 *     _LdrGetProcedureAddressForCaller@24 @ 0x4B2CCED0 (_LdrGetProcedureAddressForCaller@24.c)
 *     _LdrLoadDll@16 @ 0x4B2CDD70 (_LdrLoadDll@16.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __stdcall RtlWow64LogMessageInEventLogger(int a1, int a2, int a3)
{
  int result; // eax
  unsigned int v4; // esi
  int v5; // eax
  int v6; // edi
  void (__thiscall *v7)(_DWORD, int); // [esp+4h] [ebp-10h] BYREF
  void (__thiscall *v8)(_DWORD, int, int, _DWORD, int, _DWORD, int, _DWORD, int, _DWORD); // [esp+8h] [ebp-Ch] BYREF
  int (__thiscall *v9)(_DWORD, _DWORD, const wchar_t *); // [esp+Ch] [ebp-8h] BYREF
  unsigned int v10; // [esp+10h] [ebp-4h] BYREF
  int retaddr; // [esp+18h] [ebp+4h]

  result = LdrLoadDll(0, 0, (unsigned __int16 *)&dword_4B281B68, &v10);
  if ( result >= 0 )
  {
    v4 = v10;
    if ( LdrGetProcedureAddressForCaller(v10, (const void **)&dword_4B281B78, 0, &v9, 0, retaddr) >= 0 )
    {
      v4 = v10;
      if ( LdrGetProcedureAddressForCaller(v10, (const void **)&dword_4B281B70, 0, &v7, 0, retaddr) >= 0 )
      {
        v4 = v10;
        if ( LdrGetProcedureAddressForCaller(v10, (const void **)&dword_4B281B80, 0, &v8, 0, retaddr) >= 0 )
        {
          v5 = v9(v9, 0, L"Wow64 Emulation Layer");
          v6 = v5;
          if ( v5 )
          {
            v8(v8, v5, 4, 0, a3, 0, a1, 0, a2, 0);
            v7(v7, v6);
          }
        }
      }
    }
    return LdrUnloadDll(v4);
  }
  return result;
}
