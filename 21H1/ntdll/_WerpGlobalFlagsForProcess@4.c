/*
 * XREFs of _WerpGlobalFlagsForProcess@4 @ 0x4B33B104
 * Callers:
 *     _RtlReportSilentProcessExit@8 @ 0x4B2DD910 (_RtlReportSilentProcessExit@8.c)
 * Callees:
 *     _RtlQueryImageFileKeyOption@24 @ 0x4B2A6C80 (_RtlQueryImageFileKeyOption@24.c)
 *     _RtlAppendUnicodeToString@8 @ 0x4B2BFE00 (_RtlAppendUnicodeToString@8.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _WerpPathTail@4 @ 0x4B33B28F (_WerpPathTail@4.c)
 */

int __thiscall WerpGlobalFlagsForProcess(void *this)
{
  int v2; // eax
  const unsigned __int16 *v3; // esi
  _WORD *v4; // ecx
  int v5; // edx
  int v7; // edi
  _DWORD v9[134]; // [esp+10h] [ebp-240h] BYREF
  _DWORD v10[6]; // [esp+228h] [ebp-28h] BYREF
  int v11; // [esp+240h] [ebp-10h] BYREF
  int v12; // [esp+244h] [ebp-Ch] BYREF
  int Heap; // [esp+248h] [ebp-8h]
  HANDLE Handle; // [esp+24Ch] [ebp-4h] BYREF

  Handle = 0;
  memset(v9, 0, 0x214u);
  v11 = 0;
  v12 = 0;
  Heap = 0;
  if ( (ZwQueryInformationProcess((int)this, 43, (int)v9, 528, 0) & 0xC0000000) != 0xC0000000 )
  {
    v2 = WerpPathTail(v9[1]);
    v3 = (const unsigned __int16 *)v2;
    if ( v2 )
    {
      v4 = (_WORD *)v2;
      v5 = v2 + 2;
      while ( *v4++ )
        ;
      v7 = 2 * (((int)v4 - v5) >> 1) + 194;
      Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, v7);
      if ( Heap )
      {
        HIWORD(v12) = v7;
        if ( RtlAppendUnicodeToString(
               (unsigned __int16 *)&v12,
               L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\") >= 0
          && RtlAppendUnicodeToString((unsigned __int16 *)&v12, v3) >= 0 )
        {
          v10[0] = 24;
          v10[2] = &v12;
          v10[1] = 0;
          v10[3] = 64;
          v10[4] = 0;
          v10[5] = 0;
          if ( ZwOpenKey((int)&Handle, 1, (int)v10) >= 0 )
            RtlQueryImageFileKeyOption((int)Handle, (int)L"GlobalFlag", 4, &v11, 4u, 0);
        }
      }
    }
  }
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0;
  }
  if ( Heap )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v11;
}
