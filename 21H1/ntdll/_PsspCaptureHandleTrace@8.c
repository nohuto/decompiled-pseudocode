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

NTSTATUS __fastcall PsspCaptureHandleTrace(_DWORD *a1, void *a2)
{
  NTSTATUS result; // eax
  int *v5; // ecx
  NTSTATUS v6; // edi
  int v7; // ecx
  size_t v8; // [esp-4h] [ebp-94h]
  size_t v9; // [esp-4h] [ebp-94h]
  ULONG v10; // [esp+0h] [ebp-90h]
  ULONG v11; // [esp+4h] [ebp-8Ch]
  int v13; // [esp+14h] [ebp-7Ch] BYREF
  LARGE_INTEGER MaximumSize; // [esp+18h] [ebp-78h] BYREF
  ULONG ReturnLength; // [esp+24h] [ebp-6Ch] BYREF
  HANDLE SectionHandle; // [esp+28h] [ebp-68h] BYREF
  PVOID BaseAddress; // [esp+2Ch] [ebp-64h] BYREF
  _BYTE ProcessInformation[4]; // [esp+30h] [ebp-60h] BYREF
  unsigned int v19; // [esp+34h] [ebp-5Ch]

  LODWORD(v8) = 88;
  memset(ProcessInformation, 0, v8);
  result = ZwQueryInformationProcess(a2, ProcessHandleTracing, ProcessInformation, 0x58u, &ReturnLength);
  if ( result >= 0 || result == -1073741820 )
  {
    result = RtlULongLongToUInt((int *)&MaximumSize, 80 * v19, (80 * (unsigned __int64)v19) >> 32);
    if ( result >= 0 )
    {
      result = RtlULongPtrAdd(MaximumSize.LowPart, 88, v5);
      if ( result >= 0 )
      {
        MaximumSize.HighPart = 0;
        result = NtCreateSection(
                   &SectionHandle,
                   0xF0007u,
                   (POBJECT_ATTRIBUTES)&stru_4B2A58B8,
                   &MaximumSize,
                   4u,
                   0x8000000u,
                   0);
        if ( result >= 0 )
        {
          BaseAddress = 0;
          v13 = 0;
          v6 = ZwMapViewOfSection(
                 SectionHandle,
                 (HANDLE)0xFFFFFFFF,
                 &BaseAddress,
                 0LL,
                 __PAIR64__(&v13, 0),
                 (PLARGE_INTEGER)1,
                 0,
                 (SECTION_INHERIT)4,
                 v10,
                 v11);
          if ( v6 >= 0 )
          {
            LODWORD(v9) = 88;
            memset(BaseAddress, 0, v9);
            if ( ZwQueryInformationProcess(a2, ProcessHandleTracing, BaseAddress, MaximumSize.LowPart, &ReturnLength) >= 0 )
            {
              NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, BaseAddress);
              a1[200] = ReturnLength;
              a1[201] = SectionHandle;
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
              NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, BaseAddress);
              return NtClose(SectionHandle);
            }
          }
          else
          {
            NtClose(SectionHandle);
            return v6;
          }
        }
      }
    }
  }
  return result;
}
