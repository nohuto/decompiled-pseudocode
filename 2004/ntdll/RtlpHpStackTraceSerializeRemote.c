/*
 * XREFs of RtlpHpStackTraceSerializeRemote @ 0x1801093B4
 * Callers:
 *     RtlpHpStackTraceSerialize @ 0x1801092C4 (RtlpHpStackTraceSerialize.c)
 * Callees:
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009D310 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009D350 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18009D750 (NtCreateSection.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F3DD4 (RtlpHeapPerformCrossProcessQuery.c)
 */

__int64 __fastcall RtlpHpStackTraceSerializeRemote(__int64 a1)
{
  int Section; // ebx
  int v3; // eax
  signed __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD v7[16]; // [rsp+60h] [rbp-29h] BYREF
  signed __int64 i; // [rsp+F0h] [rbp+67h]
  signed __int64 v9; // [rsp+108h] [rbp+7Fh]

  for ( i = 0x10000LL; ; i = (v7[4] + 0xFFFFLL) & 0xFFFFFFFFFFFF0000uLL )
  {
    memset(v7, 0, 0x60uLL);
    if ( *(_BYTE *)(a1 + 32) == 2 )
    {
      Section = NtCreateSection();
      if ( Section < 0 )
        return (unsigned int)Section;
      v7[0] = 0LL;
      v7[1] = i;
      LODWORD(v7[3]) = 0x20000000;
    }
    else
    {
      LODWORD(v7[3]) = 0x8000000;
    }
    v3 = RtlpHeapPerformCrossProcessQuery(*(_QWORD *)(a1 + 8), (__int64)v7);
    Section = v3;
    if ( v3 >= 0 )
      break;
    if ( v3 != -1073741789 )
      return (unsigned int)Section;
    NtClose(0LL);
  }
  if ( (v7[11] & 1) != 0 )
    *(_BYTE *)(a1 + 33) |= 1u;
  if ( *(_BYTE *)(a1 + 32) != 1 )
  {
    v9 = 0LL;
    if ( i > 0 )
    {
      v4 = 0LL;
      while ( (unsigned __int64)v4 < v7[4] )
      {
        Section = ZwMapViewOfSection();
        if ( Section < 0 )
          return (unsigned int)Section;
        v5 = (unsigned __int64)(v9 + 0x10000) <= v7[4] ? 0x10000LL : v7[4] - v9;
        Section = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 16))(0LL, v5, *(_QWORD *)(a1 + 24));
        if ( Section < 0 )
          return (unsigned int)Section;
        NtUnmapViewOfSection();
        v4 = v9 + 0x10000;
        v9 = v4;
        if ( v4 >= i )
          break;
      }
    }
    return 0;
  }
  return (unsigned int)Section;
}
