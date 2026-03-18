/*
 * XREFs of ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00B7F70
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00B7814 (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0018420 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ??_GVIDMM_DMA_POOL@@QEAAPEAXI@Z @ 0x1C001AC5C (--_GVIDMM_DMA_POOL@@QEAAPEAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C0098370 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ?Init@VIDMM_DMA_POOL@@QEAAJXZ @ 0x1C00A9964 (-Init@VIDMM_DMA_POOL@@QEAAJXZ.c)
 *     ??0VIDMM_DMA_POOL@@QEAA@PEAVVIDMM_GLOBAL@@KPEAVVIDMM_DEVICE@@PEAVDXGCONTEXT@@KKKKKH@Z @ 0x1C00A9B7C (--0VIDMM_DMA_POOL@@QEAA@PEAVVIDMM_GLOBAL@@KPEAVVIDMM_DEVICE@@PEAVDXGCONTEXT@@KKKKKH@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitDmaPools(VIDMM_GLOBAL *this)
{
  struct VIDMM_DEVICE *v1; // r14
  unsigned int v3; // esi
  char v4; // al
  unsigned int v5; // ebp
  VIDMM_DMA_POOL *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  VIDMM_DMA_POOL *v10; // rax
  int v11; // eax
  __int64 v12; // r9
  unsigned int v13; // ebp
  __int64 v14; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  unsigned int i; // ebx
  __int64 v21; // rsi
  VIDMM_DMA_POOL *v22; // rcx
  struct _VIDMM_DMA_BUFFER *v23; // rdx

  v1 = (struct VIDMM_DEVICE *)*((_QWORD *)this + 5049);
  v3 = 0;
  if ( *((_DWORD *)this + 1754) )
  {
    while ( 1 )
    {
      v4 = *((_BYTE *)this + v3 + 52);
      v5 = v4 ? 1 << (v4 - 1) : 0;
      v6 = (VIDMM_DMA_POOL *)operator new(144LL, 0x39326956u, 64LL);
      v10 = v6
          ? VIDMM_DMA_POOL::VIDMM_DMA_POOL(
              v6,
              this,
              v3,
              v1,
              0LL,
              *((_DWORD *)this + v3 + 29),
              0,
              0,
              v5,
              *((_DWORD *)this + v3 + 93),
              1)
          : 0LL;
      *((_QWORD *)this + v3 + 79) = v10;
      if ( !v10 )
        break;
      v11 = VIDMM_DMA_POOL::Init(v10, v7, v8, v9);
      v13 = v11;
      if ( v11 < 0 )
      {
        _InterlockedAdd(&dword_1C006E7C4, 1u);
        WdLogSingleEntry1(6LL, v11);
        DxgkLogInternalTriageEvent(v16, 262145LL);
        goto LABEL_14;
      }
      LOBYTE(v12) = 1;
      VIDMM_DMA_POOL::AcquireBuffer(
        *((VIDMM_DMA_POOL **)this + v3 + 79),
        (struct _VIDMM_DMA_BUFFER **)this + v3 + 143,
        0LL,
        v12);
      v14 = *((_QWORD *)this + v3++ + 143);
      *(_DWORD *)(v14 + 32) = 1;
      if ( v3 >= *((_DWORD *)this + 1754) )
        goto LABEL_9;
    }
    _InterlockedAdd(&dword_1C006E7C0, 1u);
    WdLogSingleEntry1(6LL, 1949LL);
    DxgkLogInternalTriageEvent(v19, 262145LL);
    v13 = -1073741801;
LABEL_14:
    for ( i = 0; i < *((_DWORD *)this + 1754); *((_QWORD *)this + v21 + 79) = 0LL )
    {
      v21 = i;
      v22 = (VIDMM_DMA_POOL *)*((_QWORD *)this + i + 79);
      if ( v22 )
      {
        v23 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + i + 143);
        if ( v23 )
        {
          LOBYTE(v17) = 1;
          VIDMM_DMA_POOL::ReleaseBuffer(v22, v23, v17, v18);
          v22 = (VIDMM_DMA_POOL *)*((_QWORD *)this + i + 79);
          *((_QWORD *)this + i + 143) = 0LL;
        }
      }
      if ( v22 )
        VIDMM_DMA_POOL::`scalar deleting destructor'(v22);
      ++i;
    }
    return v13;
  }
  else
  {
LABEL_9:
    *((_DWORD *)this + 10042) = 1;
    return 0LL;
  }
}
