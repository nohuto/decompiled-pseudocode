/*
 * XREFs of ?VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C0063270
 * Callers:
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00630AC (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00750FC (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z @ 0x1C00CD770 (-Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VidMmiSetPriorityForMemoryPages(struct _VIDMM_GLOBAL_ALLOC *a1, void *a2, __int64 a3)
{
  int v6; // ecx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbp
  _QWORD *v11; // rax
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+50h] [rbp+8h] BYREF

  v12[1] = a3;
  v12[0] = a2;
  v13 = 4;
  if ( a1 && *(_WORD *)(*((_QWORD *)a1 + 64) + 4LL) == 3 )
  {
    v6 = *((_DWORD *)a1 + 110) - 1;
    if ( v6 )
    {
      if ( v6 == 2 )
        v13 = 5;
    }
    else
    {
      v13 = 3;
    }
  }
  v7 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *, int *, int))ZwSetInformationVirtualMemory)(
         -1LL,
         1LL,
         1LL,
         v12,
         &v13,
         4);
  v10 = v7;
  if ( v7 < 0 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8);
    v11[3] = a1;
    v11[4] = a2;
    v11[5] = a3;
    v11[6] = v10;
    WdLogEvent5_WdWarning(v11);
  }
}
