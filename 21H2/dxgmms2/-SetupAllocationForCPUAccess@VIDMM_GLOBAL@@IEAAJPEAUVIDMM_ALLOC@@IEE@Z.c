/*
 * XREFs of ?SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z @ 0x1C00D9C30
 * Callers:
 *     ?BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAPEAX@Z @ 0x1C00A0354 (-BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A90B8 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 *     ?VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z @ 0x1C00E1D48 (-VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z.c)
 *     ?VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z @ 0x1C00E1E0C (-VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::SetupAllocationForCPUAccess(VIDMM_GLOBAL *this, __int64 **a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // r14
  VIDMM_GLOBAL *v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rbx
  union _LARGE_INTEGER v9; // rbx
  void *v10; // rcx
  struct _MDL *v11; // rax
  struct _MDL *v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rcx

  v4 = *a2;
  v5 = this;
  LODWORD(v6) = 0;
  v7 = **a2;
  v8 = *(_QWORD *)(v7 + 120);
  if ( (*(_DWORD *)(v8 + 80) & 4) != 0
    && (a2 = (__int64 **)**(unsigned int **)(v7 + 528), ((unsigned __int8)a2 & 0x38) == 0)
    && (LOBYTE(this) = (*(_DWORD *)(v7 + 72) & 0x10000) == 0,
        ((unsigned __int8)this & (((unsigned __int8)a2 & 2) == 0)) != 0) )
  {
    v9.QuadPart = *(_QWORD *)(v7 + 128) + *(_QWORD *)(v8 + 32);
    if ( (v4[4] & 1) == 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(this, a2, a3, a4);
      if ( (*((_DWORD *)v5 + 1764) & 0x1000) != 0 )
      {
        LODWORD(v6) = -1073741823;
      }
      else
      {
        v10 = (void *)v4[2];
        if ( (*(_DWORD *)(*((_QWORD *)v5 + 3) + 436LL) & 8) != 0 )
          v11 = VidMmiBuildMdlFromMdl(
                  v10,
                  *(_QWORD *)(v7 + 16),
                  *(struct _MDL **)(*(_QWORD *)(v7 + 120) + 32LL),
                  (v9.QuadPart - *(_QWORD *)(*(_QWORD *)(v7 + 120) + 32LL)) / 4096);
        else
          v11 = VidMmiBuildMdlForContiguousMmIo(v10, *(_QWORD *)(v7 + 16), v9);
        v12 = v11;
        if ( v11 )
        {
          v13 = VIDMM_GLOBAL::Rotate(
                  (__int64)v5,
                  *(_QWORD *)(v4[1] + 24),
                  v4[3],
                  1u,
                  (__int64)v11,
                  *(_QWORD *)(v7 + 16),
                  0LL,
                  0LL,
                  0,
                  v7);
          v6 = v13;
          if ( v13 < 0 )
          {
            ExFreePoolWithTag(v12, 0);
            if ( bTracingEnabled )
            {
              if ( (byte_1C006E941 & 1) != 0 )
                McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventPerformanceWarning, v15, 7);
            }
            _InterlockedIncrement(&dword_1C006E824);
            WdLogSingleEntry1(6LL, v6);
            DxgkLogInternalTriageEvent(v16, 262145LL);
          }
          else
          {
            *((_BYTE *)v4 + 32) |= 1u;
            *(_BYTE *)(v7 + 83) = 1;
          }
        }
        else
        {
          _InterlockedIncrement(&dword_1C006E804);
          WdLogSingleEntry1(6LL, 19812LL);
          DxgkLogInternalTriageEvent(v17, 262145LL);
          LODWORD(v6) = -1073741801;
        }
      }
    }
    return (unsigned int)v6;
  }
  else
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    return 3221225473LL;
  }
}
