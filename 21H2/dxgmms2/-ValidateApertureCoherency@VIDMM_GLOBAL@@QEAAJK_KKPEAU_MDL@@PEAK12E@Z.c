/*
 * XREFs of ?ValidateApertureCoherency@VIDMM_GLOBAL@@QEAAJK_KKPEAU_MDL@@PEAK12E@Z @ 0x1C00CA37C
 * Callers:
 *     ?RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00C9F88 (-RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001D90 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018EC0 (memset.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C006118C (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1C008AF24 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C008BF20 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ValidateApertureCoherency(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        union _LARGE_INTEGER a3,
        unsigned int a4,
        struct _MDL *a5,
        unsigned int *a6,
        struct _MDL *a7,
        unsigned int *a8,
        unsigned __int8 a9)
{
  __int64 v9; // rax
  unsigned int v10; // ebx
  unsigned int *v12; // r12
  __int64 v13; // rsi
  __int64 v14; // r13
  unsigned int v15; // r14d
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rcx
  unsigned int v19; // r15d
  signed __int64 v20; // r13
  unsigned int *v21; // r12
  __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  union _LARGE_INTEGER v34; // [rsp+60h] [rbp-59h] BYREF
  union _LARGE_INTEGER v35; // [rsp+68h] [rbp-51h] BYREF
  __int64 v36; // [rsp+70h] [rbp-49h]
  __int64 v37; // [rsp+78h] [rbp-41h] BYREF
  __int64 v38; // [rsp+80h] [rbp-39h] BYREF
  union _LARGE_INTEGER v39; // [rsp+88h] [rbp-31h] BYREF
  union _LARGE_INTEGER v40; // [rsp+90h] [rbp-29h] BYREF
  __int128 v41; // [rsp+98h] [rbp-21h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-11h]
  VIDMM_GLOBAL *v43; // [rsp+B0h] [rbp-9h]
  union _LARGE_INTEGER v44; // [rsp+100h] [rbp+47h] BYREF
  union _LARGE_INTEGER v45; // [rsp+110h] [rbp+57h]

  v45 = a3;
  v9 = *((_QWORD *)this + 464);
  v10 = a9;
  v38 = 0LL;
  v37 = 0LL;
  v34.QuadPart = 0LL;
  v44.QuadPart = 0LL;
  v12 = a6;
  v42 = 0LL;
  v43 = this;
  v41 = 0LL;
  v13 = a4;
  v14 = a2;
  BYTE12(v41) = a9;
  v42 = *(_QWORD *)(v9 + 8LL * a4);
  memset(a6, 186, 0x1000uLL);
  memset(a8, 205, 0x1000uLL);
  v15 = v10;
  v16 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v13);
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, struct _MDL *, _QWORD, __int64 *, union _LARGE_INTEGER *))(*(_QWORD *)v16 + 200LL))(
          v16,
          1LL,
          a5,
          v10,
          &v38,
          &v34);
  if ( v17 >= 0 )
  {
    v18 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v13);
    v17 = (*(__int64 (__fastcall **)(__int64, __int64, struct _MDL *, _QWORD, __int64 *, union _LARGE_INTEGER *))(*(_QWORD *)v18 + 200LL))(
            v18,
            1LL,
            a7,
            v15,
            &v37,
            &v44);
    if ( v17 >= 0 )
    {
      v36 = v14;
      v19 = 0;
      v20 = (char *)v12 - (char *)a8;
      do
      {
        v21 = a8;
        v22 = 0LL;
        while ( 1 )
        {
          VIDMM_GLOBAL::FlushPagingBuffer(this, 1u, 0LL, 0LL);
          v23 = *((_QWORD *)this + 464);
          v35 = v45;
          v39 = v34;
          VIDMM_GLOBAL::MemoryTransferInternal(
            this,
            0,
            0LL,
            0x1000uLL,
            0LL,
            *(struct VIDMM_SEGMENT **)(v23 + 8 * v13),
            &v39,
            0LL,
            *(struct VIDMM_SEGMENT **)(v23 + 8 * v36),
            &v35,
            0LL,
            0);
          v24 = *((_QWORD *)this + 464);
          v40 = v44;
          VIDMM_GLOBAL::MemoryTransferInternal(
            this,
            0,
            0LL,
            0x1000uLL,
            0LL,
            *(struct VIDMM_SEGMENT **)(v24 + 8 * v36),
            &v35,
            0LL,
            *(struct VIDMM_SEGMENT **)(v24 + 8 * v13),
            &v40,
            0LL,
            0);
          DWORD2(v41) = v19 + 868941431;
          *(_QWORD *)&v41 = &a6[v22];
          VIDMM_GLOBAL::FlushPagingBuffer(this, 0, (void (*)(void *))VIDMM_SEGMENT::Defragment, &v41);
          VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
          v25 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v13);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 72LL))(v25);
          VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
          if ( *(unsigned int *)((char *)v21 + v20) != *v21 )
            break;
          v22 = (unsigned int)(v22 + 1);
          ++v21;
          if ( (unsigned int)v22 >= 0x400 )
            goto LABEL_9;
        }
        WdLogNewEntry5_WdAssertion(v27, v26, v28);
        v29 = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(*((_QWORD *)this + 464) + 8 * v13));
        *(_QWORD *)(v30 + 24) = v29;
        WdLogEvent5_WdAssertion(v30);
        v17 = -1073741823;
LABEL_9:
        ++v19;
      }
      while ( v19 < 0xA );
    }
  }
  if ( v37 )
  {
    v31 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v13);
    (*(void (__fastcall **)(__int64, __int64, struct _MDL *))(*(_QWORD *)v31 + 208LL))(v31, 1LL, a7);
  }
  if ( v38 )
  {
    v32 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v13);
    (*(void (__fastcall **)(__int64, __int64, struct _MDL *))(*(_QWORD *)v32 + 208LL))(v32, 1LL, a5);
  }
  return (unsigned int)v17;
}
