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
        void *a1,
        int a2,
        int a3,
        int a4,
        wchar_t *String1,
        int a6,
        HANDLE *a7,
        _DWORD *a8,
        unsigned int *a9)
{
  int v11; // eax
  int v12; // esi
  unsigned int v13; // edi
  int v15; // eax
  PVOID BaseAddress; // [esp+10h] [ebp-10h] BYREF
  HANDLE Handle; // [esp+14h] [ebp-Ch] BYREF
  int v18; // [esp+18h] [ebp-8h] BYREF
  void *v19; // [esp+1Ch] [ebp-4h]

  v19 = a1;
  *a7 = 0;
  Handle = 0;
  BaseAddress = 0;
  *a8 = 0;
  v18 = 0;
  *a9 = 0;
  if ( RtlGetCurrentServiceSessionId() )
    v11 = (int)NtCurrentPeb()->SharedData + 555;
  else
    v11 = 2147353477;
  if ( (*(_BYTE *)v11 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v15 = (int)NtCurrentPeb()->SharedData + 554;
    else
      v15 = 2147353476;
    LdrpTraceLoadMUIDll(a2, *(unsigned __int8 *)v15);
  }
  v12 = LdrpMapResourceFile(a1, a2, a3, &Handle, &BaseAddress, &v18);
  if ( v12 >= 0 )
  {
    v13 = (unsigned int)BaseAddress | 1;
    if ( LdrpVerifyAlternateResourceModuleEx(v19, (void *)((unsigned int)BaseAddress | 1), a2, String1, a4, a6) )
    {
      *a7 = Handle;
      *a8 = v18;
      *a9 = v13;
    }
    else
    {
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, BaseAddress);
      NtClose(Handle);
      return -1073020926;
    }
  }
  return v12;
}
