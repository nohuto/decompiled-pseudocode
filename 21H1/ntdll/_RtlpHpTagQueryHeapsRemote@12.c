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

int __fastcall RtlpHpTagQueryHeapsRemote(void *a1, unsigned int a2, _DWORD *a3)
{
  int Section; // edi
  int v6; // ecx
  size_t v7; // ecx
  void *v8; // esi
  int v10[18]; // [esp+10h] [ebp-64h] BYREF
  unsigned int v11; // [esp+58h] [ebp-1Ch] BYREF
  int v12; // [esp+5Ch] [ebp-18h]
  unsigned int v13; // [esp+60h] [ebp-14h] BYREF
  void *v14; // [esp+64h] [ebp-10h]
  HANDLE Handle; // [esp+68h] [ebp-Ch] BYREF
  void *Src; // [esp+6Ch] [ebp-8h] BYREF

  v14 = a1;
  Handle = 0;
  Src = 0;
  v11 = (a2 + 0xFFFF) & 0xFFFF0000;
  v12 = 0;
  Section = NtCreateSection((int)&Handle, 983071, 0, (int)&v11, 4, 0x8000000, 0);
  if ( Section < 0 )
    goto LABEL_7;
  v13 = a2;
  Section = ZwMapViewOfSection((int)Handle, -1, (int)&Src, 0, a2, 0, (int)&v13, 2, 0, 4);
  if ( Section < 0 )
    goto LABEL_7;
  qmemcpy(Src, a1, 0x20u);
  memset(v10, 0, sizeof(v10));
  v10[0] = (int)Handle;
  v10[2] = v11;
  v6 = *((_DWORD *)v14 + 1);
  v10[3] = v12;
  v10[5] = 0x40000000;
  Section = RtlpHeapPerformCrossProcessQuery(v6, v10);
  if ( Section < 0 )
  {
LABEL_7:
    v8 = Src;
  }
  else
  {
    v7 = v10[7];
    v8 = Src;
    *a3 = v10[7];
    if ( v7 <= a2 )
    {
      memcpy(v14, v8, v7);
      Section = 0;
    }
    else
    {
      Section = -1073741789;
    }
  }
  if ( v8 )
    NtUnmapViewOfSection(-1, (int)v8);
  if ( Handle )
    NtClose(Handle);
  return Section;
}
