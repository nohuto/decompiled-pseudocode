/*
 * XREFs of ?TransferMemorySlow@VIDMM_MEMORY_SEGMENT@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@@Z @ 0x1C00E96B0
 * Callers:
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1C00A7774 (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00856F4 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C0085AA0 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00A7A1C (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C00A8444 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 *     ?Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C00E9950 (-Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::TransferMemorySlow(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        enum _DXGK_MEMORY_TRANSFER_DIRECTION a3,
        struct VIDMM_SEGMENT *a4,
        union _LARGE_INTEGER a5)
{
  unsigned __int64 v6; // r8
  __int64 v8; // r11
  __int64 v9; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  struct _MDL *v17; // r8
  __int64 v18; // rax
  struct _MDL *v19; // r11
  struct _MDL *v20; // r9
  union _LARGE_INTEGER *v21; // rax
  struct VIDMM_SEGMENT *v22; // rdx
  union _LARGE_INTEGER *v23; // rcx
  struct VIDMM_SEGMENT *v24; // r8
  __int64 v25; // r8
  struct VIDMM_SEGMENT *v26; // [rsp+20h] [rbp-50h]
  struct _MDL *MDLForRange; // [rsp+60h] [rbp-10h] BYREF
  char v28; // [rsp+B0h] [rbp+40h] BYREF
  char v29; // [rsp+B8h] [rbp+48h]

  v6 = *((_QWORD *)a2 + 1);
  v8 = 1584LL * *((unsigned int *)this + 95);
  v9 = *((_QWORD *)this + 1);
  v28 = 0;
  v11 = v6 >> 1;
  v29 = *(_BYTE *)(v8 + *(_QWORD *)(v9 + 40224) + 436);
  v13 = 0LL;
  MDLForRange = 0LL;
  if ( (v29 & 4) == 0 || (v14 = 0x10000LL, !Use64KbPagesForTransfer(a2, this)) )
    v14 = 4096LL;
  if ( v6 )
  {
    do
    {
      if ( VIDMM_GLOBAL::IsTdrPending(*((VIDMM_GLOBAL **)this + 1)) )
        return;
      v16 = ~(v14 - 1) & (v14 + v11 - 1);
      if ( (*(_DWORD *)(v15 + 7056) & 0x800) == 0 || v14 == v16 )
      {
        LOBYTE(v26) = v14 == v16;
        if ( (*(int (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, unsigned __int64, unsigned __int64, struct VIDMM_SEGMENT *, char *, struct _MDL **))(**((_QWORD **)a2 + 30) + 96LL))(
               *((_QWORD *)a2 + 30),
               a2,
               v13,
               v16,
               v26,
               &v28,
               &MDLForRange) >= 0 )
        {
          v17 = MDLForRange;
          if ( MDLForRange || (MDLForRange = VidMmGetMDLForRange(a2, v13, v16), (v17 = MDLForRange) != 0LL) )
          {
            if ( v28 )
              goto LABEL_18;
            if ( (*(int (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, unsigned __int64, unsigned __int64, struct _MDL *))(**((_QWORD **)a2 + 30) + 112LL))(
                   *((_QWORD *)a2 + 30),
                   a2,
                   v13,
                   v16,
                   v17) >= 0 )
            {
              v17 = MDLForRange;
LABEL_18:
              v19 = 0LL;
              if ( (v29 & 4) != 0 )
              {
                if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
                {
                  v19 = v17;
                  v20 = 0LL;
                }
                else
                {
                  v20 = v17;
                }
                v21 = &a5;
                v22 = 0LL;
                v23 = &a5;
                v24 = a4;
                if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
                {
                  v21 = 0LL;
                }
                else
                {
                  v23 = 0LL;
                  v22 = a4;
                  v24 = 0LL;
                }
              }
              else
              {
                if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
                {
                  v23 = &a5;
                  v24 = a4;
                  v21 = (union _LARGE_INTEGER *)((char *)a2 + 232);
                  v22 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 30);
                }
                else
                {
                  v21 = &a5;
                  v22 = a4;
                  v23 = (union _LARGE_INTEGER *)((char *)a2 + 232);
                  v24 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 30);
                }
                v20 = 0LL;
              }
              VIDMM_GLOBAL::MemoryTransfer(*((VIDMM_GLOBAL **)this + 1), a2, v16, v13, v22, v21, v19, v24, v23, v20, 0);
              VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
              (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, unsigned __int64, unsigned __int64, struct _MDL *))(**((_QWORD **)a2 + 30) + 120LL))(
                *((_QWORD *)a2 + 30),
                a2,
                v13,
                v16,
                MDLForRange);
              LOBYTE(v25) = 1;
              (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, __int64))(**((_QWORD **)a2 + 30) + 104LL))(
                *((_QWORD *)a2 + 30),
                a2,
                v25);
              v18 = *((_QWORD *)a2 + 1);
              v13 += v16;
              v11 = v18 - v13;
              continue;
            }
          }
          (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, _QWORD))(**((_QWORD **)a2 + 30) + 104LL))(
            *((_QWORD *)a2 + 30),
            a2,
            0LL);
        }
      }
      v18 = *((_QWORD *)a2 + 1);
      v11 = v16 >> 1;
    }
    while ( v13 != v18 );
  }
}
