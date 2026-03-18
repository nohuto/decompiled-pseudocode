/*
 * XREFs of ?AddData@VIDMM_PURGE_TELEMETRY@@QEAAX_K0@Z @ 0x1C00C0654
 * Callers:
 *     ?PurgeAllSegments@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00B33B8 (-PurgeAllSegments@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PURGE_TELEMETRY::AddData(VIDMM_PURGE_TELEMETRY *this, unsigned __int64 a2, unsigned __int64 a3)
{
  char *v5; // rdi
  unsigned __int64 v6; // rcx
  char *v7; // rdi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax

  if ( a2 < 0x40000000 )
  {
    v5 = (char *)this + 32 * (unsigned int)(a2 >> 25) + 8;
    goto LABEL_9;
  }
  if ( a2 < 0x140000000LL )
  {
    v6 = (a2 - 0x40000000) >> 27;
    v7 = (char *)this + 1032;
LABEL_7:
    v5 = &v7[32 * (unsigned int)v6];
    goto LABEL_9;
  }
  if ( a2 < 0x540000000LL )
  {
    v7 = (char *)this + 2056;
    v6 = (a2 - 0x140000000LL) >> 29;
    goto LABEL_7;
  }
  v5 = (char *)this + 3080;
LABEL_9:
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 3112, 0LL);
  *((_QWORD *)this + 390) = KeGetCurrentThread();
  v8 = a3;
  v9 = *((_QWORD *)v5 + 1);
  *(_QWORD *)v5 += a3;
  ++*((_DWORD *)v5 + 6);
  if ( v9 > a3 )
    v8 = v9;
  v10 = *((_QWORD *)v5 + 2);
  *((_QWORD *)v5 + 1) = v8;
  if ( v10 < a3 )
    a3 = v10;
  *((_QWORD *)v5 + 2) = a3;
  *((_QWORD *)this + 390) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 3112, 0LL);
  KeLeaveCriticalRegion();
}
