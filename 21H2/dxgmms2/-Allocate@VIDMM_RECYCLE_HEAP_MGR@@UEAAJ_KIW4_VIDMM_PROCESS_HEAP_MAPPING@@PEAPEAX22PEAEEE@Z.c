/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C007F190
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00039B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003A80 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C007EECC (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C007F2D8 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Allocate(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        int a4,
        void **a5,
        void **a6,
        void **a7,
        unsigned __int8 *a8,
        unsigned __int8 a9,
        char a10)
{
  char v13; // r8
  int v14; // ebx
  VIDMM_RECYCLE_HEAP *v15; // rcx
  int v16; // eax
  __int64 v18; // rcx
  VIDMM_RECYCLE_HEAP *v19; // rcx
  DXGFASTMUTEX *v20; // [rsp+50h] [rbp-48h]
  char v21; // [rsp+58h] [rbp-40h]
  char v22; // [rsp+A0h] [rbp+8h]

  v20 = (DXGFASTMUTEX *)(a1 + 1328);
  v21 = 0;
  if ( a1 == -1328 )
  {
    WdLogSingleEntry1(1LL, 573LL);
    DxgkLogInternalTriageEvent(v18, 262146LL);
  }
  DXGFASTMUTEX::Acquire(v20);
  v13 = 0;
  v14 = -1073741823;
  v22 = 0;
  v21 = 1;
  while ( 1 )
  {
    if ( a10 )
    {
      switch ( a4 )
      {
        case 1:
          v15 = (VIDMM_RECYCLE_HEAP *)(a1 + 736);
          break;
        case 2:
          v15 = (VIDMM_RECYCLE_HEAP *)(a1 + 808);
          break;
        case 3:
          v15 = (VIDMM_RECYCLE_HEAP *)(a1 + 880);
          break;
        case 4:
          v15 = (VIDMM_RECYCLE_HEAP *)(a1 + 952);
          break;
        case 5:
          v15 = (VIDMM_RECYCLE_HEAP *)(a1 + 1024);
          break;
        case 6:
          v15 = (VIDMM_RECYCLE_HEAP *)(a1 + 1096);
          break;
        case 7:
          v15 = (VIDMM_RECYCLE_HEAP *)(a1 + 1168);
          break;
        case 8:
          v15 = (VIDMM_RECYCLE_HEAP *)(a1 + 1240);
          break;
        default:
          goto LABEL_11;
      }
    }
    else if ( a4 > 6 )
    {
      if ( a4 == 7 )
      {
        v15 = (VIDMM_RECYCLE_HEAP *)(a1 + 448);
      }
      else
      {
        if ( a4 != 8 )
        {
          if ( a4 == 9 )
          {
            v19 = (VIDMM_RECYCLE_HEAP *)(a1 + 592);
          }
          else
          {
            if ( a4 != 10 )
              goto LABEL_11;
            v19 = (VIDMM_RECYCLE_HEAP *)(a1 + 664);
          }
          v16 = VIDMM_RECYCLE_HEAP::Allocate(v19, a2, a3, a5, a6, a7, a8, a9);
          goto LABEL_10;
        }
        v15 = (VIDMM_RECYCLE_HEAP *)(a1 + 520);
      }
    }
    else
    {
      switch ( a4 )
      {
        case 6:
          v15 = (VIDMM_RECYCLE_HEAP *)(a1 + 376);
          break;
        case 1:
          v15 = (VIDMM_RECYCLE_HEAP *)(a1 + 16);
          break;
        case 2:
          v15 = (VIDMM_RECYCLE_HEAP *)(a1 + 88);
          break;
        case 3:
          v15 = (VIDMM_RECYCLE_HEAP *)(a1 + 160);
          break;
        case 4:
          v15 = (VIDMM_RECYCLE_HEAP *)(a1 + 232);
          break;
        case 5:
          v15 = (VIDMM_RECYCLE_HEAP *)(a1 + 304);
          break;
        default:
          goto LABEL_11;
      }
    }
    v16 = VIDMM_RECYCLE_HEAP::Allocate(v15, a2, a3, a5, a6, 0LL, a8, a9);
LABEL_10:
    v13 = v22;
    v14 = v16;
LABEL_11:
    if ( v14 >= 0 || v13 )
      break;
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList((VIDMM_RECYCLE_HEAP_MGR *)a1, 0, 0);
    v13 = 1;
    v22 = 1;
  }
  if ( v21 )
  {
    v21 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v20);
  }
  return (unsigned int)v14;
}
