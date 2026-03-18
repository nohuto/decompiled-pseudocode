/*
 * XREFs of ?TransferMemorySlow@VIDMM_MEMORY_SEGMENT@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@@Z @ 0x1C00C68C4
 * Callers:
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1C0088A2C (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C0070774 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0071F34 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0088D68 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C0089738 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 *     ?Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C00C6B88 (-Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::TransferMemorySlow(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        enum _DXGK_MEMORY_TRANSFER_DIRECTION a3,
        struct VIDMM_SEGMENT *a4,
        union _LARGE_INTEGER a5)
{
  __int64 v5; // r11
  __int64 v6; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v10; // rbx
  unsigned __int64 v12; // r12
  __int64 v13; // r15
  __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  int v16; // esi
  struct _MDL *MDLForRange; // rdx
  int v18; // eax
  struct _MDL *v19; // r11
  struct _MDL *v20; // rsi
  struct VIDMM_SEGMENT *v21; // r8
  union _LARGE_INTEGER *v22; // rax
  struct VIDMM_SEGMENT *v23; // rdx
  union _LARGE_INTEGER *v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  struct VIDMM_SEGMENT *v27; // [rsp+20h] [rbp-50h]
  struct _MDL *v28; // [rsp+60h] [rbp-10h] BYREF
  char v29; // [rsp+B0h] [rbp+40h] BYREF
  char v30; // [rsp+B8h] [rbp+48h]
  struct VIDMM_SEGMENT *v31; // [rsp+C8h] [rbp+58h]

  v31 = a4;
  v5 = 1584LL * *((unsigned int *)this + 95);
  v6 = *((_QWORD *)this + 1);
  v8 = *((_QWORD *)a2 + 1);
  v29 = 0;
  v10 = v8 >> 1;
  v12 = 0LL;
  v30 = *(_BYTE *)(v5 + *(_QWORD *)(v6 + 40216) + 436);
  v28 = 0LL;
  if ( (v30 & 4) == 0 || (v13 = 0x10000LL, !Use64KbPagesForTransfer(a2, this)) )
    v13 = 4096LL;
  if ( v8 )
  {
    do
    {
      if ( VIDMM_GLOBAL::IsTdrPending(*((VIDMM_GLOBAL **)this + 1)) )
        return;
      v15 = ~(v13 - 1) & (v13 - 1 + v10);
      if ( (*(_DWORD *)(v14 + 7048) & 0x800) == 0 || v13 == v15 )
      {
        LOBYTE(v27) = v13 == v15;
        v16 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, unsigned __int64, unsigned __int64, struct VIDMM_SEGMENT *, char *, struct _MDL **))(**((_QWORD **)a2 + 32) + 96LL))(
                *((_QWORD *)a2 + 32),
                a2,
                v12,
                v15,
                v27,
                &v29,
                &v28);
        if ( v16 >= 0 )
        {
          MDLForRange = v28;
          if ( !v28 )
          {
            MDLForRange = VidMmGetMDLForRange(a2, v12, v15);
            v28 = MDLForRange;
            if ( !MDLForRange )
              v16 = -1071775487;
          }
          if ( v16 >= 0 )
          {
            if ( !v29 )
            {
              v18 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, unsigned __int64, unsigned __int64, struct _MDL *))(**((_QWORD **)a2 + 32) + 112LL))(
                      *((_QWORD *)a2 + 32),
                      a2,
                      v12,
                      v15,
                      MDLForRange);
              MDLForRange = v28;
              v16 = v18;
            }
            if ( v16 >= 0 )
            {
              v19 = 0LL;
              v20 = 0LL;
              if ( (v30 & 4) != 0 )
              {
                if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
                  v19 = MDLForRange;
                else
                  v20 = MDLForRange;
                v21 = v31;
                v22 = &a5;
                v23 = 0LL;
                v24 = &a5;
                if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
                  v22 = 0LL;
                else
                  v23 = v31;
                if ( a3 != DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
                {
                  v21 = 0LL;
                  v24 = 0LL;
                }
              }
              else if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
              {
                v21 = v31;
                v24 = &a5;
                v22 = (union _LARGE_INTEGER *)((char *)a2 + 248);
                v23 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 32);
              }
              else
              {
                v23 = v31;
                v22 = &a5;
                v24 = (union _LARGE_INTEGER *)((char *)a2 + 248);
                v21 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 32);
              }
              VIDMM_GLOBAL::MemoryTransfer(*((VIDMM_GLOBAL **)this + 1), a2, v15, v12, v23, v22, v19, v21, v24, v20, 0);
              VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
              (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, unsigned __int64, unsigned __int64, struct _MDL *))(**((_QWORD **)a2 + 32) + 120LL))(
                *((_QWORD *)a2 + 32),
                a2,
                v12,
                v15,
                v28);
              LOBYTE(v25) = 1;
              (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, __int64))(**((_QWORD **)a2 + 32) + 104LL))(
                *((_QWORD *)a2 + 32),
                a2,
                v25);
              v26 = *((_QWORD *)a2 + 1);
              v12 += v15;
              v10 = v26 - v12;
              continue;
            }
          }
          (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD))(**((_QWORD **)a2 + 32) + 104LL))(
            *((_QWORD *)a2 + 32),
            a2,
            0LL,
            0LL);
        }
      }
      v26 = *((_QWORD *)a2 + 1);
      v10 = v15 >> 1;
    }
    while ( v12 != v26 );
  }
}
