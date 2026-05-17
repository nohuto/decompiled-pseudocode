/*
 * XREFs of _LdrMapAndVerifyResourceFile@36 @ 0x4B2B91A5
 * Callers:
 *     _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0 (_LdrLoadAlternateResourceModuleEx@20.c)
 * Callees:
 *     _LdrpVerifyAlternateResourceModuleEx@24 @ 0x4B2B874D (_LdrpVerifyAlternateResourceModuleEx@24.c)
 *     _LdrpMapResourceFile@24 @ 0x4B2B961A (_LdrpMapResourceFile@24.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _LdrpTraceLoadMUIDll@8 @ 0x4B33FAF1 (_LdrpTraceLoadMUIDll@8.c)
 */

int __fastcall LdrMapAndVerifyResourceFile(
        int a1,
        int a2,
        char a3,
        int a4,
        wchar_t *String1,
        int a6,
        HANDLE *a7,
        _DWORD *a8,
        int *a9)
{
  int v10; // eax
  int v11; // esi
  int v12; // edi
  int v14; // eax
  int v15; // [esp+10h] [ebp-10h] BYREF
  HANDLE Handle; // [esp+14h] [ebp-Ch] BYREF
  int v17; // [esp+18h] [ebp-8h] BYREF
  int v18; // [esp+1Ch] [ebp-4h]

  v18 = a1;
  *a7 = 0;
  Handle = 0;
  v15 = 0;
  *a8 = 0;
  v17 = 0;
  *a9 = 0;
  if ( RtlGetCurrentServiceSessionId() )
    v10 = (int)NtCurrentPeb()->SharedData + 555;
  else
    v10 = 2147353477;
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v14 = (int)NtCurrentPeb()->SharedData + 554;
    else
      v14 = 2147353476;
    LdrpTraceLoadMUIDll(a2, *(unsigned __int8 *)v14);
  }
  v11 = LdrpMapResourceFile(a3, &Handle, &v15, &v17);
  if ( v11 >= 0 )
  {
    v12 = v15 | 1;
    if ( LdrpVerifyAlternateResourceModuleEx(v18, v15 | 1, a2, String1, a4, a6) )
    {
      *a7 = Handle;
      *a8 = v17;
      *a9 = v12;
    }
    else
    {
      NtUnmapViewOfSection(-1, v15);
      NtClose(Handle);
      return -1073020926;
    }
  }
  return v11;
}
