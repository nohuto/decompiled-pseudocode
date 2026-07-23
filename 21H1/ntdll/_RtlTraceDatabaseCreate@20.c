/*
 * XREFs of _RtlTraceDatabaseCreate@20 @ 0x4B36A1A0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlInitializeCriticalSectionEx@12 @ 0x4B2DFB90 (_RtlInitializeCriticalSectionEx@12.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpTraceDatabaseAllocate@12 @ 0x4B36A468 (_RtlpTraceDatabaseAllocate@12.c)
 */

_DWORD *__userpurge RtlTraceDatabaseCreate@<eax>(
        int a1@<ecx>,
        int a2@<ebx>,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        int (__stdcall *a7)(int a1, int a2))
{
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  _DWORD *v9; // ebx
  int (__stdcall *v10)(int, int); // eax
  size_t v12; // [esp-8h] [ebp-10h]
  size_t v13; // [esp-8h] [ebp-10h]

  if ( a3 > 0x100000 )
    return 0;
  v7 = (_DWORD *)RtlpTraceDatabaseAllocate((4 * a3 + 65700) & 0xFFFF0000, a1);
  v8 = v7;
  if ( !v7 )
    return 0;
  HIDWORD(v12) = a2;
  v7[2] = a6;
  v9 = v7 + 34;
  v7[1] = a5 | 1;
  LODWORD(v12) = 64;
  v7[4] = a4;
  *v7 = -1412576052;
  v7[3] = 0;
  v7[5] = 0x10000;
  v7[6] = 0;
  v7[17] = 0;
  v7[16] = 0;
  memset(v7 + 18, 0, v12);
  RtlInitializeCriticalSectionEx((PRTL_CRITICAL_SECTION)(v8 + 7), 0, 0);
  v10 = a7;
  v8[13] = a3;
  if ( !a7 )
    v10 = RtlStackTraceHashFunction;
  v8[15] = v10;
  v8[36] = 0;
  *v9 = -1412580421;
  v8[35] = v8;
  v8[37] = 0x10000;
  LODWORD(v13) = 4 * v8[13];
  v8[3] = v9;
  v8[14] = v8 + 41;
  memset(v8 + 41, 0, v13);
  v8[38] = v8;
  v8[39] = v8 + 0x4000;
  v8[40] = &v8[v8[13] + 41];
  return v8;
}
