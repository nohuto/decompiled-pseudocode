/*
 * XREFs of LdrpResGetResourceDirectory @ 0x1405ED184
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x140226068 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     RtlULongLongAdd @ 0x1402F1E70 (RtlULongLongAdd.c)
 *     RtlImageNtHeaderEx @ 0x1403276D0 (RtlImageNtHeaderEx.c)
 *     LdrpSectionTableFromVirtualAddress @ 0x1405ED6DC (LdrpSectionTableFromVirtualAddress.c)
 */

NTSTATUS __fastcall LdrpResGetResourceDirectory(
        ULONGLONG ullAugend,
        ULONG64 Size,
        __int16 a3,
        ULONGLONG *a4,
        PIMAGE_NT_HEADERS *a5)
{
  ULONGLONG v5; // rdi
  int v6; // ebx
  char v7; // r15
  bool v8; // r14
  int v9; // r12d
  NTSTATUS result; // eax
  int v11; // r9d
  PIMAGE_NT_HEADERS v12; // r13
  _IMAGE_OPTIONAL_HEADER64 *p_OptionalHeader; // rcx
  unsigned __int16 Magic; // ax
  unsigned int v15; // eax
  unsigned int v16; // esi
  ULONGLONG v17; // rdx
  ULONG64 v18; // r14
  unsigned int *v19; // rax
  unsigned __int64 v20; // r8
  int v21; // eax
  int v22; // ecx
  ULONGLONG pullResult; // [rsp+40h] [rbp-138h] BYREF
  ULONGLONG v24; // [rsp+48h] [rbp-130h]
  __int128 v25; // [rsp+50h] [rbp-128h]
  __int128 v26; // [rsp+60h] [rbp-118h]
  __int128 v27; // [rsp+70h] [rbp-108h]
  __int128 v28; // [rsp+80h] [rbp-F8h]
  __int128 v29; // [rsp+90h] [rbp-E8h]
  __int128 v30; // [rsp+A0h] [rbp-D8h]
  __int128 v31; // [rsp+B0h] [rbp-C8h]
  __int128 ullAddend; // [rsp+C0h] [rbp-B8h]
  __int128 v33; // [rsp+D0h] [rbp-A8h]
  __int128 v34; // [rsp+E0h] [rbp-98h]
  __int128 v35; // [rsp+F0h] [rbp-88h]
  __int128 v36; // [rsp+100h] [rbp-78h]
  __int128 v37; // [rsp+110h] [rbp-68h]
  __int128 v38; // [rsp+120h] [rbp-58h]
  __int128 v39; // [rsp+130h] [rbp-48h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+180h] [rbp+8h] BYREF
  ULONG64 v41; // [rsp+188h] [rbp+10h]
  ULONGLONG *v42; // [rsp+198h] [rbp+20h]

  v42 = a4;
  v41 = Size;
  v5 = ullAugend;
  v6 = 0;
  v24 = 0LL;
  OutHeaders = 0LL;
  v7 = 1;
  v8 = 1;
  pullResult = 0LL;
  if ( !ullAugend || !a4 || !a5 )
    return -1073741811;
  if ( (ullAugend & 3) != 0 )
  {
    v5 = ullAugend & 0xFFFFFFFFFFFFFFFCuLL;
    v8 = !(ullAugend & 1);
  }
  v9 = a3 & 0x1000;
  result = RtlImageNtHeaderEx(v9 == 0, (PVOID)v5, Size, &OutHeaders);
  if ( result >= 0 )
  {
    v12 = OutHeaders;
    p_OptionalHeader = &OutHeaders->OptionalHeader;
    Magic = OutHeaders->OptionalHeader.Magic;
    if ( Magic == 267 )
    {
      v25 = *(_OWORD *)&p_OptionalHeader->Magic;
      v26 = *(_OWORD *)&OutHeaders->OptionalHeader.AddressOfEntryPoint;
      v27 = *(_OWORD *)&OutHeaders->OptionalHeader.SectionAlignment;
      v28 = *(_OWORD *)&OutHeaders->OptionalHeader.MajorSubsystemVersion;
      v29 = *(_OWORD *)&OutHeaders->OptionalHeader.CheckSum;
      v30 = *(_OWORD *)&OutHeaders->OptionalHeader.SizeOfStackCommit;
      v31 = *(_OWORD *)&OutHeaders->OptionalHeader.SizeOfHeapCommit;
      ullAddend = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
      v33 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[2].VirtualAddress;
      v34 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[4].VirtualAddress;
      v35 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[6].VirtualAddress;
      v36 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[8].VirtualAddress;
      v37 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[10].VirtualAddress;
      v38 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[12].VirtualAddress;
    }
    else
    {
      if ( Magic != 523 )
        return -1073741701;
      v25 = *(_OWORD *)&p_OptionalHeader->Magic;
      v26 = *(_OWORD *)&OutHeaders->OptionalHeader.AddressOfEntryPoint;
      v27 = *(_OWORD *)&OutHeaders->OptionalHeader.SectionAlignment;
      v28 = *(_OWORD *)&OutHeaders->OptionalHeader.MajorSubsystemVersion;
      v29 = *(_OWORD *)&OutHeaders->OptionalHeader.CheckSum;
      v30 = *(_OWORD *)&OutHeaders->OptionalHeader.SizeOfStackCommit;
      v31 = *(_OWORD *)&OutHeaders->OptionalHeader.SizeOfHeapCommit;
      ullAddend = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
      v33 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[2].VirtualAddress;
      v34 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[4].VirtualAddress;
      v35 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[6].VirtualAddress;
      v36 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[8].VirtualAddress;
      v37 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[10].VirtualAddress;
      v38 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[12].VirtualAddress;
      v39 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[14].VirtualAddress;
      v7 = 0;
    }
    v15 = HIDWORD(v31);
    if ( v7 )
      v15 = HIDWORD(v30);
    if ( v15 <= 2 )
      return -1073741687;
    v16 = v33;
    if ( v7 )
      v16 = ullAddend;
    if ( !v16 )
      return -1073741687;
    if ( v5 < 0x7FFFFFFEFFFFLL && v5 + v16 >= 0x7FFFFFFEFFFFLL )
      return -1073741701;
    if ( v8 || v16 < HIDWORD(v28) )
    {
      if ( RtlULongLongAdd(v5, v16, &pullResult) < 0 )
        return -1073741701;
      v17 = pullResult;
      v24 = pullResult;
      v18 = v41;
    }
    else
    {
      v18 = v41;
      v19 = (unsigned int *)LdrpSectionTableFromVirtualAddress(v5, v41, (_DWORD)OutHeaders, v11, v16, v9 != 0);
      if ( !v19 )
        return -1073741701;
      if ( !v19[4] )
        return -1073741687;
      v17 = v5 + v19[5] - (unsigned __int64)v19[3] + v16;
      v24 = v17;
    }
    if ( !v17 )
      return -1073741687;
    if ( v9 )
    {
      if ( v17 <= v5 )
        return -1073741701;
      v20 = (v5 & 0xFFFFFFFFFFFFFFFCuLL) + v18;
      if ( v17 + 16 > v20 )
        return -1073741701;
      v21 = *(unsigned __int16 *)(v17 + 12);
      v22 = *(unsigned __int16 *)(v17 + 14);
      if ( !__PAIR32__(v22, v21) )
        return -1073741686;
      if ( v17 + 8LL * (unsigned int)(v21 + v22) > v20 )
        return -1073741701;
    }
    *v42 = v17;
    *a5 = v12;
    return v6;
  }
  return result;
}
