/*
 * XREFs of ?CreatePathPersistentMonitorsIfNeeded@@YAJIPEBUD3DKMT_GETPATHSMODALITY@@PEAG@Z @ 0x1C004B960
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0098260 (DrvSetDisplayConfig.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreatePathPersistentMonitorsIfNeeded(
        __int64 a1,
        const struct D3DKMT_GETPATHSMODALITY *a2,
        unsigned __int16 *a3)
{
  __int64 v5; // rbp
  unsigned int i; // r14d
  __int64 v7; // rdi
  __int64 v8; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  int v12; // eax
  _QWORD *v13; // rax
  _QWORD *v14; // rax

  LODWORD(v5) = 0;
  if ( a3 )
    *a3 = 0;
  for ( i = 0; i < *((unsigned __int16 *)a2 + 10); ++i )
  {
    v7 = 272LL * i;
    v8 = *(_QWORD *)((char *)a2 + v7 + 48);
    if ( (v8 & 0x1100000000000000LL) != 0x100000000000000LL )
    {
      if ( (v8 & 0x200000000000000LL) != 0 )
      {
        v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64))qword_1C0252920)(
                *(_QWORD *)((char *)a2 + v7 + 64),
                *(unsigned int *)((char *)a2 + v7 + 76),
                0LL,
                2LL);
        v5 = v12;
        if ( v12 < 0 )
        {
          v14 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
          v14[3] = *(int *)((char *)a2 + v7 + 68);
          v14[4] = *((unsigned int *)a2 + 68 * i + 16);
          v14[5] = *((unsigned int *)a2 + 68 * i + 19);
          v14[6] = v5;
          WdLogEvent5_WdEvent(v14);
          return (unsigned int)v5;
        }
        if ( (*(_QWORD *)((_BYTE *)a2 + v7 + 48) & 0x1000000000000000LL) != 0 )
        {
          v11 = (_QWORD *)WdLogNewEntry5_WdTrace();
          v11[3] = *(int *)((char *)a2 + v7 + 68);
          v11[4] = *(unsigned int *)((char *)a2 + v7 + 64);
          v11[5] = *(unsigned int *)((char *)a2 + v7 + 76);
          WdLogEvent5_WdTrace(v11);
        }
        else if ( a3 )
        {
          ++*a3;
        }
      }
      else
      {
        if ( (v8 & 0x1000000000000000LL) == 0 )
        {
          v13 = (_QWORD *)WdLogNewEntry5_WdEvent(v8, 0x100000000000000LL, 0x1000000000000000LL);
          v13[3] = *(unsigned int *)((char *)a2 + v7 + 76);
          v13[4] = *(int *)((char *)a2 + v7 + 68);
          v13[5] = *(unsigned int *)((char *)a2 + v7 + 64);
          WdLogEvent5_WdEvent(v13);
          LODWORD(v5) = -1073741811;
          return (unsigned int)v5;
        }
        v10 = (_QWORD *)WdLogNewEntry5_WdEvent(v8, 0x100000000000000LL, 0x1000000000000000LL);
        v10[3] = *(unsigned int *)((char *)a2 + v7 + 76);
        v10[4] = *(int *)((char *)a2 + v7 + 68);
        v10[5] = *(unsigned int *)((char *)a2 + v7 + 64);
        v10[6] = 1LL;
        WdLogEvent5_WdEvent(v10);
      }
    }
  }
  return (unsigned int)v5;
}
