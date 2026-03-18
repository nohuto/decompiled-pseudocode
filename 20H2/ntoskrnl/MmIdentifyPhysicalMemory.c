/*
 * XREFs of MmIdentifyPhysicalMemory @ 0x1408C98F8
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14078D08C (EtwpKernelTraceRundown.c)
 *     EtwpSetMark @ 0x140939C0C (EtwpSetMark.c)
 * Callees:
 *     MiIdentifyPfnWrapper @ 0x14021F240 (MiIdentifyPfnWrapper.c)
 *     MiReferencePageRuns @ 0x140300EC0 (MiReferencePageRuns.c)
 *     MiDereferencePageRuns @ 0x14037E940 (MiDereferencePageRuns.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     EtwTraceSiloDcEvent @ 0x1405A6760 (EtwTraceSiloDcEvent.c)
 */

__int64 __fastcall MmIdentifyPhysicalMemory(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  int v6; // r13d
  unsigned int v7; // esi
  unsigned int *v8; // r15
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r12
  __int64 v11; // r15
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r14
  unsigned __int16 v16; // [rsp+30h] [rbp-49h]
  __int128 v18; // [rsp+38h] [rbp-41h] BYREF
  char *v19; // [rsp+48h] [rbp-31h]
  int v20; // [rsp+50h] [rbp-29h]
  __int64 v21; // [rsp+58h] [rbp-21h]
  unsigned __int64 v22; // [rsp+60h] [rbp-19h]
  unsigned int *v23; // [rsp+68h] [rbp-11h]
  _QWORD v24[3]; // [rsp+70h] [rbp-9h] BYREF
  __int128 v25; // [rsp+88h] [rbp+Fh] BYREF

  v21 = a1;
  v24[0] = 0LL;
  v4 = a2;
  v5 = a1;
  v19 = 0LL;
  v20 = (int)a4;
  v16 = a3;
  v18 = 0LL;
  v6 = (int)a4;
  v25 = 0LL;
  v7 = 0;
  v23 = (unsigned int *)MiReferencePageRuns((__int64)&MiSystemPartition, 0, a3, a4);
  v8 = v23;
  if ( *v23 )
  {
    do
    {
      v9 = 48LL * *(_QWORD *)&v8[4 * v7 + 4] - 0x58000000000LL;
      v10 = v9 + 48LL * *(_QWORD *)&v8[4 * v7 + 6];
      v22 = v10;
      if ( v9 < v10 )
      {
        v11 = v21;
        do
        {
          v12 = 1LL;
          if ( !v6 || (*(_QWORD *)(v9 + 40) & 0x1000000000LL) != 0 || (*(_BYTE *)(v9 + 34) & 7) == 6 )
          {
            v18 = 0LL;
            v19 = 0LL;
            v13 = MiIdentifyPfnWrapper(v9, (__int64)&v18);
            v12 = v13;
            if ( !v6 || (v18 & 0x70) == 0x60 )
            {
              if ( v13 )
              {
                v14 = v13;
                *(_QWORD *)&v25 = &v18;
                *((_QWORD *)&v25 + 1) = 24LL;
                do
                {
                  EtwTraceSiloDcEvent((__int64)&v25, 1u, v11, a2, v16, 0x401802u);
                  ++*((_QWORD *)&v18 + 1);
                  if ( (v18 & 0xF) == 2 )
                  {
                    v19 += 8;
                  }
                  else if ( v19 && v19 != MmBadPointer )
                  {
                    v19 += 4096;
                  }
                  --v14;
                }
                while ( v14 );
                v10 = v22;
                v6 = v20;
              }
            }
          }
          v9 += 48 * v12;
        }
        while ( v9 < v10 );
        v8 = v23;
      }
      ++v7;
    }
    while ( v7 < *v8 );
    v5 = v21;
    v4 = a2;
  }
  MiDereferencePageRuns((__int64)v8);
  if ( !v6 )
  {
    LODWORD(v24[0]) &= 0xFFFFFFE0;
    v24[1] = MmPfnDatabase;
    v24[2] = MxPfnAllocation;
    *(_QWORD *)&v25 = v24;
    *((_QWORD *)&v25 + 1) = 24LL;
    EtwTraceSiloDcEvent((__int64)&v25, 1u, v5, v4, 0x27Bu, 0x401802u);
  }
  return 0LL;
}
