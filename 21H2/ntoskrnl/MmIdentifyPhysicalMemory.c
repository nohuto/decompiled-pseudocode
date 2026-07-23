/*
 * XREFs of MmIdentifyPhysicalMemory @ 0x1408C7218
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14079763C (EtwpKernelTraceRundown.c)
 *     EtwpSetMark @ 0x1409375AC (EtwpSetMark.c)
 * Callees:
 *     MiReferencePageRuns @ 0x1402D43E0 (MiReferencePageRuns.c)
 *     MiIdentifyPfnWrapper @ 0x140353EE0 (MiIdentifyPfnWrapper.c)
 *     MiDereferencePageRuns @ 0x14037EB10 (MiDereferencePageRuns.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     EtwTraceSiloDcEvent @ 0x1405A83C0 (EtwTraceSiloDcEvent.c)
 */

__int64 __fastcall MmIdentifyPhysicalMemory(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  int v6; // r13d
  unsigned int v7; // esi
  __int64 v8; // r8
  _DWORD *v9; // r9
  unsigned int *v10; // r15
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r12
  __int64 v13; // r15
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r14
  unsigned __int16 v18; // [rsp+30h] [rbp-49h]
  __int128 v20; // [rsp+38h] [rbp-41h] BYREF
  char *v21; // [rsp+48h] [rbp-31h]
  int v22; // [rsp+50h] [rbp-29h]
  __int64 v23; // [rsp+58h] [rbp-21h]
  unsigned __int64 v24; // [rsp+60h] [rbp-19h]
  unsigned int *v25; // [rsp+68h] [rbp-11h]
  _QWORD v26[3]; // [rsp+70h] [rbp-9h] BYREF
  __int128 v27; // [rsp+88h] [rbp+Fh] BYREF

  v23 = a1;
  v26[0] = 0LL;
  v4 = a2;
  v5 = a1;
  v21 = 0LL;
  v22 = (int)a4;
  v18 = a3;
  v20 = 0LL;
  v6 = (int)a4;
  v27 = 0LL;
  v7 = 0;
  v25 = (unsigned int *)MiReferencePageRuns((__int64)&MiSystemPartition, 0, a3, a4);
  v10 = v25;
  if ( *v25 )
  {
    do
    {
      v11 = 48LL * *(_QWORD *)&v10[4 * v7 + 4] - 0x58000000000LL;
      v12 = v11 + 48LL * *(_QWORD *)&v10[4 * v7 + 6];
      v24 = v12;
      if ( v11 < v12 )
      {
        v13 = v23;
        do
        {
          v14 = 1LL;
          if ( !v6 || (*(_QWORD *)(v11 + 40) & 0x1000000000LL) != 0 || (*(_BYTE *)(v11 + 34) & 7) == 6 )
          {
            v20 = 0LL;
            v21 = 0LL;
            v15 = MiIdentifyPfnWrapper(v11, (__int64)&v20, v8, v9);
            v14 = v15;
            if ( !v6 || (v20 & 0x70) == 0x60 )
            {
              if ( v15 )
              {
                v16 = v15;
                *(_QWORD *)&v27 = &v20;
                *((_QWORD *)&v27 + 1) = 24LL;
                do
                {
                  EtwTraceSiloDcEvent((__int64)&v27, 1u, v13, a2, v18, 0x401802u);
                  ++*((_QWORD *)&v20 + 1);
                  if ( (v20 & 0xF) == 2 )
                  {
                    v21 += 8;
                  }
                  else if ( v21 && v21 != MmBadPointer )
                  {
                    v21 += 4096;
                  }
                  --v16;
                }
                while ( v16 );
                v12 = v24;
                v6 = v22;
              }
            }
          }
          v11 += 48 * v14;
        }
        while ( v11 < v12 );
        v10 = v25;
      }
      ++v7;
    }
    while ( v7 < *v10 );
    v5 = v23;
    v4 = a2;
  }
  MiDereferencePageRuns((__int64)v10);
  if ( !v6 )
  {
    LODWORD(v26[0]) &= 0xFFFFFFE0;
    v26[1] = MmPfnDatabase;
    v26[2] = MxPfnAllocation;
    *(_QWORD *)&v27 = v26;
    *((_QWORD *)&v27 + 1) = 24LL;
    EtwTraceSiloDcEvent((__int64)&v27, 1u, v5, v4, 0x27Bu, 0x401802u);
  }
  return 0LL;
}
