/*
 * XREFs of ?UnmapCpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_PROCESS@@@Z @ 0x1C008750C
 * Callers:
 *     ?UnmapCpuVA@VIDMM_GLOBAL@@SAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C00874EC (-UnmapCpuVA@VIDMM_GLOBAL@@SAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_FENCE_STORAGE_PAGE::UnmapCpuVA(VIDMM_FENCE_STORAGE_PAGE *this, struct VIDMM_PROCESS *a2)
{
  char *v4; // rbp
  char *v5; // rcx
  char *v6; // rax
  char *v7; // rdi
  char *v8; // rsi
  __int64 v10; // rcx
  char **v11; // rax

  if ( !a2 || (*(_BYTE *)(*((_QWORD *)a2 + 4) + 347LL) & 0x20) == 0 )
  {
    v4 = (char *)this + 72;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v4, 0LL);
    v5 = (char *)this + 40;
    *((_QWORD *)v4 + 1) = KeGetCurrentThread();
    v6 = (char *)*((_QWORD *)this + 5);
    while ( v6 != v5 )
    {
      v7 = v6 - 16;
      v8 = v6;
      v6 = *(char **)v6;
      if ( a2 == *((struct VIDMM_PROCESS **)v7 + 1) || !a2 )
      {
        if ( (*((_DWORD *)v7 + 8))-- == 1 )
        {
          MmUnmapViewOfSection(*(_QWORD *)a2, *(_QWORD *)v7);
          v10 = *(_QWORD *)v8;
          if ( *(char **)(*(_QWORD *)v8 + 8LL) != v8 || (v11 = (char **)*((_QWORD *)v8 + 1), *v11 != v8) )
            __fastfail(3u);
          *v11 = (char *)v10;
          *(_QWORD *)(v10 + 8) = v11;
          ExFreePoolWithTag(v7, 0);
        }
        break;
      }
    }
    *((_QWORD *)v4 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v4, 0LL);
    KeLeaveCriticalRegion();
  }
}
