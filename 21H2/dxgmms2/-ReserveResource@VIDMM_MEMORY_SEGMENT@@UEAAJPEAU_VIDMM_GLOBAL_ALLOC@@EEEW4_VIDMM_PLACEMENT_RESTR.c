/*
 * XREFs of ?ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1C0074E10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0028C84 (-AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1C0073800 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::ReserveResource(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        char a5,
        unsigned int a6,
        unsigned __int64 a7)
{
  __int64 v9; // rsi
  __int64 v11; // rax
  VIDMM_CPU_HOST_APERTURE *v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax

  if ( (*(_DWORD *)(a2 + 84) & 0x20) == 0 || (*(_DWORD *)(a1 + 80) & 4) != 0 || *(_QWORD *)(a1 + 488) )
  {
    LODWORD(v9) = VIDMM_SEGMENT::ReserveResource(a1, a2, a3, a4, a5, a6, a7);
    if ( (int)v9 >= 0 && (*(_DWORD *)(a2 + 84) & 0x20) != 0 )
    {
      v12 = *(VIDMM_CPU_HOST_APERTURE **)(a1 + 488);
      if ( v12 )
      {
        v13 = VIDMM_CPU_HOST_APERTURE::AcquireRange(v12, (struct _VIDMM_GLOBAL_ALLOC *)a2);
        v9 = v13;
        if ( v13 < 0 )
        {
          v16 = WdLogNewEntry5_WdWarning(v15, v14);
          *(_QWORD *)(v16 + 24) = a1;
          *(_QWORD *)(v16 + 32) = v9;
          WdLogEvent5_WdWarning(v16);
          (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 24LL))(
            a1,
            a2,
            *(_QWORD *)(a2 + 200),
            *(_QWORD *)(a2 + 16));
          *(_QWORD *)(a2 + 216) = 0LL;
          *(_QWORD *)(a2 + 200) = 0LL;
        }
      }
    }
    return (unsigned int)v9;
  }
  else
  {
    v11 = WdLogNewEntry5_WdWarning(a1, a2);
    *(_QWORD *)(v11 + 24) = a1;
    WdLogEvent5_WdWarning(v11);
    return 3221225473LL;
  }
}
