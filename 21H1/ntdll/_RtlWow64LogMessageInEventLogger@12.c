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
  PVOID v4; // esi
  int v5; // eax
  int v6; // edi
  PVOID v7; // [esp+4h] [ebp-10h] BYREF
  PVOID v8; // [esp+8h] [ebp-Ch] BYREF
  PVOID ProcedureAddress; // [esp+Ch] [ebp-8h] BYREF
  PVOID DllHandle; // [esp+10h] [ebp-4h] BYREF
  PVOID *retaddr; // [esp+18h] [ebp+4h]

  result = LdrLoadDll(0, 0, (PUNICODE_STRING)&stru_4B281B68, &DllHandle);
  if ( result >= 0 )
  {
    v4 = DllHandle;
    if ( LdrGetProcedureAddressForCaller(DllHandle, (PANSI_STRING)&stru_4B281B78, 0, &ProcedureAddress, 0, retaddr) >= 0 )
    {
      v4 = DllHandle;
      if ( LdrGetProcedureAddressForCaller(DllHandle, (PANSI_STRING)&stru_4B281B70, 0, &v7, 0, retaddr) >= 0 )
      {
        v4 = DllHandle;
        if ( LdrGetProcedureAddressForCaller(DllHandle, (PANSI_STRING)&stru_4B281B80, 0, &v8, 0, retaddr) >= 0 )
        {
          v5 = ((int (__thiscall *)(PVOID, _DWORD, const wchar_t *))ProcedureAddress)(
                 ProcedureAddress,
                 0,
                 L"Wow64 Emulation Layer");
          v6 = v5;
          if ( v5 )
          {
            ((void (__thiscall *)(PVOID, int, int, _DWORD, int, _DWORD, int, _DWORD, int, _DWORD))v8)(
              v8,
              v5,
              4,
              0,
              a3,
              0,
              a1,
              0,
              a2,
              0);
            ((void (__thiscall *)(PVOID, int))v7)(v7, v6);
          }
        }
      }
    }
    return LdrUnloadDll(v4);
  }
  return result;
}
