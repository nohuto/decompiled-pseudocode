/*
 * XREFs of _RtlpHpTagQueryHeapsRemote@12 @ 0x4B370210
 * Callers:
 *     _RtlpHpTagQueryTags@12 @ 0x4B370317 (_RtlpHpTagQueryTags@12.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpHeapPerformCrossProcessQuery@8 @ 0x4B358165 (_RtlpHeapPerformCrossProcessQuery@8.c)
 */

NTSTATUS __fastcall RtlpHpTagQueryHeapsRemote(void *a1, unsigned int a2, _DWORD *a3)
{
  NTSTATUS v5; // edi
  void *v6; // ecx
  unsigned int v7; // ecx
  PVOID v8; // esi
  ULONG_PTR v10; // [esp-1Ch] [ebp-90h]
  SIZE_T v11; // [esp-14h] [ebp-88h]
  size_t v12; // [esp-4h] [ebp-78h]
  size_t v13; // [esp-4h] [ebp-78h]
  ULONG v14; // [esp+0h] [ebp-74h]
  ULONG v15; // [esp+4h] [ebp-70h]
  HANDLE v16[2]; // [esp+10h] [ebp-64h] BYREF
  LARGE_INTEGER v17; // [esp+18h] [ebp-5Ch]
  int v18; // [esp+24h] [ebp-50h]
  size_t Size; // [esp+2Ch] [ebp-48h]
  LARGE_INTEGER MaximumSize; // [esp+58h] [ebp-1Ch] BYREF
  unsigned int v21; // [esp+60h] [ebp-14h] BYREF
  void *v22; // [esp+64h] [ebp-10h]
  HANDLE SectionHandle; // [esp+68h] [ebp-Ch] BYREF
  PVOID BaseAddress; // [esp+6Ch] [ebp-8h] BYREF

  v22 = a1;
  SectionHandle = 0;
  BaseAddress = 0;
  MaximumSize.QuadPart = (a2 + 0xFFFF) & 0xFFFF0000;
  v5 = NtCreateSection(&SectionHandle, 0xF001Fu, 0, &MaximumSize, 4u, 0x8000000u, 0);
  if ( v5 < 0 )
    goto LABEL_7;
  v21 = a2;
  HIDWORD(v11) = &v21;
  LODWORD(v11) = 0;
  HIDWORD(v10) = a2;
  LODWORD(v10) = 0;
  v5 = ZwMapViewOfSection(
         SectionHandle,
         (HANDLE)0xFFFFFFFF,
         &BaseAddress,
         v10,
         v11,
         (PLARGE_INTEGER)2,
         0,
         (SECTION_INHERIT)4,
         v14,
         v15);
  if ( v5 < 0 )
    goto LABEL_7;
  LODWORD(v12) = 72;
  qmemcpy(BaseAddress, a1, 0x20u);
  memset(v16, 0, v12);
  v16[0] = SectionHandle;
  v17 = MaximumSize;
  v6 = (void *)*((_DWORD *)v22 + 1);
  v18 = 0x40000000;
  v5 = RtlpHeapPerformCrossProcessQuery(v6, v16);
  if ( v5 < 0 )
  {
LABEL_7:
    v8 = BaseAddress;
  }
  else
  {
    v7 = Size;
    v8 = BaseAddress;
    *a3 = Size;
    if ( v7 <= a2 )
    {
      LODWORD(v13) = v7;
      memcpy(v22, v8, v13);
      v5 = 0;
    }
    else
    {
      v5 = -1073741789;
    }
  }
  if ( v8 )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, v8);
  if ( SectionHandle )
    NtClose(SectionHandle);
  return v5;
}
