/*
 * XREFs of ?TransferMemoryFast@VIDMM_MEMORY_SEGMENT@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N@Z @ 0x1C0088A5C
 * Callers:
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1C00889BC (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0088C9C (-ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0088CF8 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C00896D8 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::TransferMemoryFast(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        enum _DXGK_MEMORY_TRANSFER_DIRECTION a3,
        struct VIDMM_SEGMENT *a4,
        union _LARGE_INTEGER a5,
        bool *a6)
{
  __int64 v8; // rdx
  __int64 v12; // r9
  __int64 v13; // rcx
  char v14; // r15
  __int64 v15; // rcx
  int v16; // edi
  struct _MDL *MDLForRange; // rax
  struct _MDL *v18; // rdx
  int v19; // eax
  struct _MDL *v20; // r10
  struct _MDL *v21; // r11
  struct VIDMM_SEGMENT *v22; // rdx
  union _LARGE_INTEGER *v23; // rax
  union _LARGE_INTEGER *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  struct _MDL *v28; // [rsp+60h] [rbp-38h] BYREF
  char v29; // [rsp+A0h] [rbp+8h] BYREF

  v8 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v8 + 7048) & 0x400) != 0 )
    return 3223191809LL;
  v12 = *((_QWORD *)a2 + 1);
  v13 = 1584LL * *((unsigned int *)this + 95);
  v29 = 0;
  v14 = *(_BYTE *)(v13 + *(_QWORD *)(v8 + 40216) + 436);
  v15 = *((_QWORD *)a2 + 32);
  v28 = 0LL;
  v16 = (*(__int64 (__fastcall **)(__int64, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, _BYTE, char *, struct _MDL **))(*(_QWORD *)v15 + 96LL))(
          v15,
          a2,
          0LL,
          v12,
          0,
          &v29,
          &v28);
  if ( v16 >= 0 )
  {
    MDLForRange = VidMmGetMDLForRange(a2, 0LL, *((_QWORD *)a2 + 1));
    v28 = MDLForRange;
    v18 = MDLForRange;
    if ( MDLForRange )
    {
      if ( !v29 )
      {
        v19 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *))(**((_QWORD **)a2 + 32) + 112LL))(
                *((_QWORD *)a2 + 32),
                a2,
                0LL,
                *((_QWORD *)a2 + 1),
                MDLForRange);
        v18 = v28;
        v16 = v19;
      }
      if ( v16 >= 0 )
      {
        v20 = 0LL;
        v21 = 0LL;
        if ( (v14 & 4) != 0 )
        {
          if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
            v20 = v18;
          else
            v21 = v18;
          v22 = 0LL;
          v23 = &a5;
          v24 = &a5;
          if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
          {
            v23 = 0LL;
          }
          else
          {
            v22 = a4;
            a4 = 0LL;
            v24 = 0LL;
          }
        }
        else if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
        {
          v24 = &a5;
          v23 = (union _LARGE_INTEGER *)((char *)a2 + 248);
          v22 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 32);
        }
        else
        {
          v22 = a4;
          v23 = &a5;
          a4 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 32);
          v24 = (union _LARGE_INTEGER *)((char *)a2 + 248);
        }
        VIDMM_GLOBAL::MemoryTransfer(
          *((VIDMM_GLOBAL **)this + 1),
          a2,
          *((_QWORD *)a2 + 1),
          0LL,
          v22,
          v23,
          v20,
          a4,
          v24,
          v21,
          0);
        if ( (*((_DWORD *)a2 + 21) & 4) != 0 )
        {
          v27 = WdLogNewEntry5_WdEvent(v26, v25);
          *(_QWORD *)(v27 + 24) = a2;
          WdLogEvent5_WdEvent(v27);
          *a6 = 1;
        }
        else
        {
          VIDMM_GLOBAL::ReleaseTemporaryResourcesForAllocation(*((VIDMM_GLOBAL **)this + 1), a2);
        }
        if ( a3 == DXGK_MEMORY_TRANSFER_LOCAL_TO_SYSTEM )
          *(_BYTE *)(*((_QWORD *)this + 1) + 40939LL) = 1;
        return (unsigned int)v16;
      }
    }
    else
    {
      v16 = -1071775487;
    }
    (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, _QWORD))(**((_QWORD **)a2 + 32) + 104LL))(
      *((_QWORD *)a2 + 32),
      a2,
      0LL);
  }
  return (unsigned int)v16;
}
