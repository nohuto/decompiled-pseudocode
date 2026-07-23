/*
 * XREFs of PsspCaptureIptTrace @ 0x180114D50
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180113CB0 (PssNtCaptureSnapshot.c)
 * Callees:
 *     NtClose @ 0x18009D7E0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009DB00 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009DB40 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18009DF40 (NtCreateSection.c)
 *     memset @ 0x1800A4740 (memset.c)
 *     GetProcessIptTrace @ 0x180117F2C (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x180118088 (GetProcessIptTraceSize.c)
 */

NTSTATUS __fastcall PsspCaptureIptTrace(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax
  size_t v5; // rdi
  NTSTATUS v6; // esi
  int ProcessIptTrace; // eax
  _DWORD *v8; // rdx
  int v9; // edi
  int v10; // eax
  PVOID BaseAddress; // [rsp+50h] [rbp-20h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+58h] [rbp-18h] BYREF
  ULONG_PTR ViewSize[2]; // [rsp+60h] [rbp-10h] BYREF
  size_t Size; // [rsp+B0h] [rbp+40h] BYREF
  HANDLE SectionHandle; // [rsp+B8h] [rbp+48h] BYREF

  BaseAddress = 0LL;
  LODWORD(Size) = 0;
  SectionHandle = 0LL;
  MaximumSize.QuadPart = 0LL;
  ViewSize[0] = 0LL;
  result = GetProcessIptTraceSize(a2, &Size);
  if ( result >= 0 )
  {
    v5 = (unsigned int)Size;
    if ( (_DWORD)Size )
    {
      MaximumSize.LowPart = Size;
      result = NtCreateSection(
                 &SectionHandle,
                 0xF0007u,
                 (POBJECT_ATTRIBUTES)&stru_18013FE98,
                 &MaximumSize,
                 4u,
                 0x8000000u,
                 0LL);
      if ( result >= 0 )
      {
        v6 = ZwMapViewOfSection(
               SectionHandle,
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               &BaseAddress,
               0LL,
               0LL,
               0LL,
               ViewSize,
               ViewShare,
               0,
               4u);
        if ( v6 >= 0 )
        {
          memset(BaseAddress, 0, v5);
          ProcessIptTrace = GetProcessIptTrace(a2, BaseAddress, (unsigned int)v5);
          v8 = BaseAddress;
          v9 = ProcessIptTrace;
          if ( ProcessIptTrace >= 0 )
          {
            *(_QWORD *)(a1 + 1128) = SectionHandle;
            v10 = v8[1];
            *(_DWORD *)(a1 + 4) |= 0x10u;
            *(_DWORD *)(a1 + 1136) = v10 + 8;
            NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v8);
            return 0;
          }
          else
          {
            NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
            NtClose(SectionHandle);
            return v9;
          }
        }
        else
        {
          NtClose(SectionHandle);
          return v6;
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
