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

int __thiscall RtlpHpStackTraceSerializeRemote(int this)
{
  int v1; // ebx
  int Section; // esi
  int v4; // eax
  unsigned __int64 v5; // kr08_8
  signed __int64 v6; // kr00_8
  int v7; // ecx
  int v9; // [esp+Ch] [ebp-64h] BYREF
  HANDLE Handle; // [esp+10h] [ebp-60h] BYREF
  int v11; // [esp+14h] [ebp-5Ch] BYREF
  __int64 v12; // [esp+18h] [ebp-58h] BYREF
  signed __int64 v13; // [esp+20h] [ebp-50h] BYREF
  _QWORD v14[9]; // [esp+28h] [ebp-48h] BYREF

  v1 = 0x10000;
  Handle = 0;
  v9 = 0;
  for ( LODWORD(v12) = 0x10000; ; LODWORD(v12) = (HIDWORD(v14[3]) + 0xFFFF) & 0xFFFF0000 )
  {
    HIDWORD(v12) = 0;
    memset(v14, 0, sizeof(v14));
    if ( *(_BYTE *)(this + 16) == 2 )
    {
      Section = NtCreateSection((int)&Handle, 983071, 0, (int)&v12, 4, 0x8000000, 0);
      if ( Section < 0 )
        goto LABEL_23;
      LODWORD(v14[0]) = Handle;
      v14[1] = v12;
      HIDWORD(v14[2]) = 0x20000000;
    }
    else
    {
      HIDWORD(v14[2]) = 0x8000000;
    }
    v4 = RtlpHeapPerformCrossProcessQuery(*(_DWORD *)(this + 4), (int *)v14);
    Section = v4;
    if ( v4 >= 0 )
      break;
    if ( v4 != -1073741789 )
      goto LABEL_23;
    NtClose(Handle);
  }
  if ( (v14[8] & 1) != 0 )
    *(_BYTE *)(this + 17) |= 1u;
  if ( *(_BYTE *)(this + 16) != 1 )
  {
    v11 = 0x10000;
    v13 = 0LL;
    v5 = 0LL;
    if ( v12 > 0 )
    {
      while ( v5 < HIDWORD(v14[3]) )
      {
        Section = ZwMapViewOfSection((int)Handle, -1, (int)&v9, 0, v1, (int)&v13, (int)&v11, 2, 0, 4);
        if ( Section < 0 )
          goto LABEL_23;
        v6 = v13 + (unsigned int)v11;
        if ( v6 < 0
          || (v6 < 0) ^ __OFADD__(HIDWORD(v13), HIDWORD(v6)) | (HIDWORD(v6) == 0) && (unsigned int)v6 <= HIDWORD(v14[3]) )
        {
          v7 = v11;
        }
        else
        {
          v7 = HIDWORD(v14[3]) - v13;
        }
        Section = (*(int (__thiscall **)(_DWORD, int, int, _DWORD))(this + 8))(
                    *(_DWORD *)(this + 8),
                    v9,
                    v7,
                    *(_DWORD *)(this + 12));
        if ( Section < 0 )
          goto LABEL_23;
        NtUnmapViewOfSection(-1, v9);
        v1 = v11;
        v9 = 0;
        v13 += (unsigned int)v11;
        v5 = v13;
        if ( v13 >= v12 )
          break;
      }
    }
    Section = 0;
  }
LABEL_23:
  if ( v9 )
    NtUnmapViewOfSection(-1, v9);
  if ( Handle )
    NtClose(Handle);
  return Section;
}
