/*
 * XREFs of _RtlCreateUserStack@24 @ 0x4B2F2050
 * Callers:
 *     <none>
 * Callees:
 *     _RtlImageNtHeader@4 @ 0x4B2BB8E0 (_RtlImageNtHeader@4.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _ZwSetInformationProcess@16 @ 0x4B2F2B40 (_ZwSetInformationProcess@16.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _LdrDeleteEnclave@4 @ 0x4B32DD00 (_LdrDeleteEnclave@4.c)
 */

NTSTATUS __cdecl RtlCreateUserStack(
        SIZE_T CommittedStackSize,
        SIZE_T MaximumStackSize,
        ULONG_PTR ZeroBits,
        SIZE_T PageSize,
        ULONG_PTR ReserveAlignment,
        PINITIAL_TEB InitialTeb)
{
  unsigned int v6; // esi
  int v7; // edx
  struct _PEB *v8; // eax
  unsigned int SizeOfStackReserve_high; // edi
  PIMAGE_NT_HEADERS v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // edi
  unsigned int MinimumStackCommit; // eax
  NTSTATUS result; // eax
  int v15; // ecx
  unsigned int v16; // edi
  char *v17; // eax
  ULONG_PTR v18; // [esp-10h] [ebp-80h]
  ULONG_PTR v19; // [esp-10h] [ebp-80h]
  ULONG v20; // [esp+0h] [ebp-70h]
  ULONG v21; // [esp+0h] [ebp-70h]
  _DWORD ProcessInformation[6]; // [esp+10h] [ebp-60h] BYREF
  int v23; // [esp+28h] [ebp-48h]
  unsigned int v24; // [esp+2Ch] [ebp-44h]
  unsigned int v25; // [esp+38h] [ebp-38h] BYREF
  unsigned int v26; // [esp+3Ch] [ebp-34h]
  NTSTATUS v27; // [esp+40h] [ebp-30h] BYREF
  int v28; // [esp+44h] [ebp-2Ch]
  struct _PEB *v29; // [esp+48h] [ebp-28h]
  NTSTATUS v30; // [esp+4Ch] [ebp-24h]
  int v31; // [esp+50h] [ebp-20h]
  PVOID BaseAddress; // [esp+54h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+58h] [ebp-18h]

  v28 = HIBYTE(HIDWORD(MaximumStackSize));
  v6 = HIDWORD(MaximumStackSize) & 0xFFFFFF;
  if ( HIBYTE(MaximumStackSize) > 0x40u )
    return -1073741811;
  if ( !v6 )
    return -1073741811;
  v7 = ZeroBits;
  if ( !(_DWORD)ZeroBits || (unsigned int)ZeroBits < v6 )
    return -1073741811;
  v26 = 2 * v6;
  v8 = NtCurrentPeb();
  v29 = v8;
  SizeOfStackReserve_high = CommittedStackSize;
  if ( !(_DWORD)CommittedStackSize || !HIDWORD(CommittedStackSize) )
  {
    ms_exc.registration.TryLevel = 0;
    v10 = RtlImageNtHeader(v8->ImageBaseAddress);
    if ( !v10 )
    {
      ms_exc.registration.TryLevel = -2;
      return -1073741701;
    }
    if ( !(_DWORD)CommittedStackSize )
      SizeOfStackReserve_high = HIDWORD(v10->OptionalHeader.SizeOfStackReserve);
    if ( !HIDWORD(CommittedStackSize) )
      HIDWORD(CommittedStackSize) = v10->OptionalHeader.SizeOfStackReserve;
    ms_exc.registration.TryLevel = -2;
    v7 = ZeroBits;
  }
  if ( !SizeOfStackReserve_high )
    SizeOfStackReserve_high = 0x4000;
  if ( SizeOfStackReserve_high >= HIDWORD(CommittedStackSize) )
    HIDWORD(CommittedStackSize) = (SizeOfStackReserve_high + 0xFFFFF) & 0xFFF00000;
  v11 = -v6 & (SizeOfStackReserve_high + v6 - 1);
  v30 = v11;
  v31 = -v7;
  v12 = -v7 & (v7 + HIDWORD(CommittedStackSize) - 1);
  ms_exc.registration.TryLevel = 1;
  MinimumStackCommit = v29->MinimumStackCommit;
  v24 = MinimumStackCommit;
  ms_exc.registration.TryLevel = -2;
  if ( MinimumStackCommit && v11 < MinimumStackCommit )
  {
    v30 = -v6 & (v6 + MinimumStackCommit - 1);
    v12 = v31 & (v7 + ((v30 + 0xFFFFF) & 0xFFF00000) - 1);
  }
  ProcessInformation[0] = (unsigned __int8)v28;
  memset(&ProcessInformation[1], 0, 12);
  ProcessInformation[4] = v12;
  ProcessInformation[5] = MaximumStackSize;
  result = ZwSetInformationProcess((HANDLE)0xFFFFFFFF, ProcessThreadStackAllocation, ProcessInformation, 0x1Cu);
  if ( result >= 0 )
  {
    *(_QWORD *)HIDWORD(ZeroBits) = 0LL;
    v15 = v23;
    *(_DWORD *)(HIDWORD(ZeroBits) + 16) = v23;
    *(_DWORD *)(HIDWORD(ZeroBits) + 8) = v15 + v12;
    BaseAddress = (PVOID)(v12 + v15 - v30);
    v16 = v12 - v30;
    v27 = v30;
    HIDWORD(v18) = &v27;
    LODWORD(v18) = 0;
    v30 = NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, v18, (PSIZE_T)0x1000, 4u, v20);
    if ( v30 < 0
      || (v17 = (char *)BaseAddress, *(_DWORD *)(HIDWORD(ZeroBits) + 12) = BaseAddress, v16 >= v26)
      && (BaseAddress = &v17[-v26],
          v25 = v26,
          HIDWORD(v19) = &v25,
          LODWORD(v19) = 0,
          v30 = NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, v19, (PSIZE_T)0x1000, 0x104u, v21),
          v30 < 0) )
    {
      LdrDeleteEnclave(*(PVOID *)(HIDWORD(ZeroBits) + 16));
      return v30;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
