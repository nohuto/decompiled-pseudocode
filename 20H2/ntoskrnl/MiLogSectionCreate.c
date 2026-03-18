/*
 * XREFs of MiLogSectionCreate @ 0x1408CA090
 * Callers:
 *     MiSegmentDelete @ 0x140681F74 (MiSegmentDelete.c)
 *     MiCreatePagingFileMap @ 0x1406826EC (MiCreatePagingFileMap.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140313A28 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14052FB1C (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x140542F54 (MiInitPerfMemoryFlags.c)
 */

_QWORD *__fastcall MiLogSectionCreate(__int64 *a1, int a2)
{
  __int64 v2; // rsi
  _QWORD *v3; // rbx
  int v5; // r15d
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned int inited; // eax
  _QWORD *result; // rax
  __int128 v10; // [rsp+30h] [rbp-40h] BYREF
  __int64 v11; // [rsp+40h] [rbp-30h]
  __int128 *v12; // [rsp+48h] [rbp-28h] BYREF
  int v13; // [rsp+50h] [rbp-20h]
  int v14; // [rsp+54h] [rbp-1Ch]
  __int128 *v15; // [rsp+58h] [rbp-18h] BYREF
  int v16; // [rsp+60h] [rbp-10h]
  int v17; // [rsp+64h] [rbp-Ch]

  v2 = *a1;
  v3 = a1 + 16;
  v10 = 0LL;
  v11 = 0LL;
  v5 = *(_DWORD *)(v2 + 48);
  do
  {
    v6 = v3[1];
    if ( v6 )
    {
      v7 = *((unsigned int *)v3 + 11);
      *(_QWORD *)&v10 = v3[1];
      *((_QWORD *)&v10 + 1) = v6 + 8 * v7;
      if ( a2 == 1 )
      {
        v14 = 0;
        LODWORD(v11) = v5;
        v12 = &v10;
        v13 = 24;
        EtwTraceKernelEvent((__int64)&v12, 1u, 0x20400001u, 0x249u, 0x401902u);
        if ( (*(_WORD *)(v2 + 12) & 0x1000) != 0 && (BYTE4(PerfGlobalGroupMask[0]) & 1) != 0 )
        {
          inited = MiInitPerfMemoryFlags(1, 2);
          MiLogPerfMemoryRangeEvent(v6, 0LL, inited, *((unsigned int *)v3 + 11));
        }
      }
      else
      {
        LODWORD(v11) = -1;
        v17 = 0;
        v15 = &v10;
        v16 = 24;
        EtwTraceKernelEvent((__int64)&v15, 1u, 0x20400001u, 0x24Fu, 0x1401902u);
      }
    }
    result = (_QWORD *)v3[2];
    v3 = result;
  }
  while ( result );
  return result;
}
