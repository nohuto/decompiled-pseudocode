/*
 * XREFs of _PsspCaptureIptTrace@8 @ 0x4B38717C
 * Callers:
 *     _PssNtCaptureSnapshot@16 @ 0x4B386310 (_PssNtCaptureSnapshot@16.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _GetProcessIptTrace@12 @ 0x4B3898E3 (_GetProcessIptTrace@12.c)
 *     _GetProcessIptTraceSize@8 @ 0x4B3899B0 (_GetProcessIptTraceSize@8.c)
 */

NTSTATUS __fastcall PsspCaptureIptTrace(_DWORD *a1, int a2)
{
  NTSTATUS result; // eax
  int v4; // esi
  NTSTATUS v5; // ebx
  int ProcessIptTrace; // esi
  _DWORD *v7; // ecx
  int v8; // eax
  SIZE_T v9; // [esp-14h] [ebp-44h]
  size_t v10; // [esp-4h] [ebp-34h]
  ULONG v11; // [esp+0h] [ebp-30h]
  ULONG v12; // [esp+4h] [ebp-2Ch]
  LARGE_INTEGER MaximumSize; // [esp+10h] [ebp-20h] BYREF
  int v14; // [esp+1Ch] [ebp-14h]
  int v15; // [esp+20h] [ebp-10h] BYREF
  size_t Size; // [esp+24h] [ebp-Ch] BYREF
  HANDLE SectionHandle; // [esp+2Ch] [ebp-4h] BYREF

  v14 = a2;
  Size = 0LL;
  SectionHandle = 0;
  MaximumSize.QuadPart = 0LL;
  v15 = 0;
  result = GetProcessIptTraceSize(a2, &Size);
  if ( result >= 0 )
  {
    v4 = Size;
    if ( (_DWORD)Size )
    {
      MaximumSize.LowPart = Size;
      result = NtCreateSection(
                 &SectionHandle,
                 0xF0007u,
                 (POBJECT_ATTRIBUTES)&stru_4B2A58A0,
                 &MaximumSize,
                 4u,
                 0x8000000u,
                 0);
      if ( result >= 0 )
      {
        HIDWORD(v9) = &v15;
        LODWORD(v9) = 0;
        v5 = ZwMapViewOfSection(
               SectionHandle,
               (HANDLE)0xFFFFFFFF,
               (PVOID *)&Size + 1,
               0LL,
               v9,
               (PLARGE_INTEGER)1,
               0,
               (SECTION_INHERIT)4,
               v11,
               v12);
        if ( v5 >= 0 )
        {
          LODWORD(v10) = v4;
          memset((void *)HIDWORD(Size), 0, v10);
          ProcessIptTrace = GetProcessIptTrace(v14, HIDWORD(Size), v4);
          if ( ProcessIptTrace >= 0 )
          {
            v7 = (_DWORD *)HIDWORD(Size);
            a1[242] = SectionHandle;
            v8 = v7[1];
            a1[1] |= 0x10u;
            a1[243] = v8 + 8;
            NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, v7);
            return 0;
          }
          else
          {
            NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, (PVOID)HIDWORD(Size));
            NtClose(SectionHandle);
            return ProcessIptTrace;
          }
        }
        else
        {
          NtClose(SectionHandle);
          return v5;
        }
      }
    }
    else
    {
      return -1073741275;
    }
  }
  return result;
}
