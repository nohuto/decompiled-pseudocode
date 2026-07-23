/*
 * XREFs of _RtlpHpStackTraceSerializeRemote@4 @ 0x4B36E83D
 * Callers:
 *     _RtlpHpStackTraceSerialize@12 @ 0x4B36E775 (_RtlpHpStackTraceSerialize@12.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpHeapPerformCrossProcessQuery@8 @ 0x4B358165 (_RtlpHeapPerformCrossProcessQuery@8.c)
 */

NTSTATUS __thiscall RtlpHpStackTraceSerializeRemote(int this)
{
  int v1; // ebx
  NTSTATUS v3; // esi
  NTSTATUS v4; // eax
  SIZE_T v5; // kr08_8
  signed __int64 v6; // kr00_8
  int v7; // ecx
  ULONG_PTR v9; // [esp-1Ch] [ebp-8Ch]
  SIZE_T v10; // [esp-14h] [ebp-84h]
  size_t v11; // [esp-4h] [ebp-74h]
  ULONG v12; // [esp+4h] [ebp-6Ch]
  PVOID BaseAddress; // [esp+Ch] [ebp-64h] BYREF
  HANDLE SectionHandle; // [esp+10h] [ebp-60h] BYREF
  int v15; // [esp+14h] [ebp-5Ch] BYREF
  LARGE_INTEGER MaximumSize; // [esp+18h] [ebp-58h] BYREF
  SIZE_T CommitSize; // [esp+20h] [ebp-50h] BYREF
  HANDLE v18[2]; // [esp+28h] [ebp-48h] BYREF
  LARGE_INTEGER v19; // [esp+30h] [ebp-40h]
  int v20; // [esp+3Ch] [ebp-34h]
  unsigned int v21; // [esp+44h] [ebp-2Ch]
  char v22; // [esp+68h] [ebp-8h]

  v1 = 0x10000;
  SectionHandle = 0;
  BaseAddress = 0;
  for ( MaximumSize.LowPart = 0x10000; ; MaximumSize.LowPart = (v21 + 0xFFFF) & 0xFFFF0000 )
  {
    LODWORD(v11) = 72;
    MaximumSize.HighPart = 0;
    memset(v18, 0, v11);
    if ( *(_BYTE *)(this + 16) == 2 )
    {
      v3 = NtCreateSection(&SectionHandle, 0xF001Fu, 0, &MaximumSize, 4u, 0x8000000u, 0);
      if ( v3 < 0 )
        goto LABEL_23;
      v18[0] = SectionHandle;
      v19 = MaximumSize;
      v20 = 0x20000000;
    }
    else
    {
      v20 = 0x8000000;
    }
    v4 = RtlpHeapPerformCrossProcessQuery(*(HANDLE *)(this + 4), v18);
    v3 = v4;
    if ( v4 >= 0 )
      break;
    if ( v4 != -1073741789 )
      goto LABEL_23;
    NtClose(SectionHandle);
  }
  if ( (v22 & 1) != 0 )
    *(_BYTE *)(this + 17) |= 1u;
  if ( *(_BYTE *)(this + 16) != 1 )
  {
    v15 = 0x10000;
    CommitSize = 0LL;
    v5 = 0LL;
    if ( MaximumSize.QuadPart > 0 )
    {
      while ( v5 < v21 )
      {
        HIDWORD(v10) = &v15;
        LODWORD(v10) = &CommitSize;
        HIDWORD(v9) = v1;
        LODWORD(v9) = 0;
        v3 = ZwMapViewOfSection(
               SectionHandle,
               (HANDLE)0xFFFFFFFF,
               &BaseAddress,
               v9,
               v10,
               (PLARGE_INTEGER)2,
               0,
               (SECTION_INHERIT)4,
               HIDWORD(v11),
               v12);
        if ( v3 < 0 )
          goto LABEL_23;
        v6 = CommitSize + (unsigned int)v15;
        if ( v6 < 0
          || (v6 < 0) ^ __OFADD__(HIDWORD(CommitSize), HIDWORD(v6)) | (HIDWORD(v6) == 0) && (unsigned int)v6 <= v21 )
        {
          v7 = v15;
        }
        else
        {
          v7 = v21 - CommitSize;
        }
        v3 = (*(int (__thiscall **)(_DWORD, PVOID, int, _DWORD))(this + 8))(
               *(_DWORD *)(this + 8),
               BaseAddress,
               v7,
               *(_DWORD *)(this + 12));
        if ( v3 < 0 )
          goto LABEL_23;
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, BaseAddress);
        v1 = v15;
        BaseAddress = 0;
        CommitSize += (unsigned int)v15;
        v5 = CommitSize;
        if ( (__int64)CommitSize >= MaximumSize.QuadPart )
          break;
      }
    }
    v3 = 0;
  }
LABEL_23:
  if ( BaseAddress )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, BaseAddress);
  if ( SectionHandle )
    NtClose(SectionHandle);
  return v3;
}
