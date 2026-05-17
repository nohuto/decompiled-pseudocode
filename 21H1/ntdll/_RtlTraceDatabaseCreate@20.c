/*
 * XREFs of _RtlTraceDatabaseCreate@20 @ 0x4B36A1A0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlInitializeCriticalSectionEx@12 @ 0x4B2DFB90 (_RtlInitializeCriticalSectionEx@12.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpTraceDatabaseAllocate@12 @ 0x4B36A468 (_RtlpTraceDatabaseAllocate@12.c)
 */

_DWORD *__thiscall RtlTraceDatabaseCreate(
        void *this,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        int (__stdcall *a6)(int a1, int a2))
{
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  _DWORD *v8; // ebx
  int (__stdcall *v9)(int, int); // eax
  size_t v11; // [esp-8h] [ebp-10h]

  if ( a2 > 0x100000 )
    return 0;
  v6 = (_DWORD *)RtlpTraceDatabaseAllocate(this);
  v7 = v6;
  if ( !v6 )
    return 0;
  v6[2] = a5;
  v8 = v6 + 34;
  v6[1] = a4 | 1;
  v6[4] = a3;
  *v6 = -1412576052;
  v6[3] = 0;
  v6[5] = 0x10000;
  v6[6] = 0;
  v6[17] = 0;
  v6[16] = 0;
  memset(v6 + 18, 0, 0x40u);
  RtlInitializeCriticalSectionEx(v7 + 7, 0, 0);
  v9 = a6;
  v7[13] = a2;
  if ( !a6 )
    v9 = RtlStackTraceHashFunction;
  v7[15] = v9;
  v7[36] = 0;
  *v8 = -1412580421;
  v7[35] = v7;
  v7[37] = 0x10000;
  v11 = 4 * v7[13];
  v7[3] = v8;
  v7[14] = v7 + 41;
  memset(v7 + 41, 0, v11);
  v7[38] = v7;
  v7[39] = v7 + 0x4000;
  v7[40] = &v7[v7[13] + 41];
  return v7;
}
