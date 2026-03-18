/*
 * XREFs of ?ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1C00624F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0028CE4 (-AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1C0064580 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::ReserveResource(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v7; // rax
  VIDMM_CPU_HOST_APERTURE *v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax

  if ( (*(_DWORD *)(a2 + 84) & 0x20) == 0 || (*(_DWORD *)(a1 + 80) & 4) != 0 || *(_QWORD *)(a1 + 488) )
  {
    LODWORD(v5) = VIDMM_SEGMENT::ReserveResource(a1, a2, a3);
    if ( (int)v5 >= 0 && (*(_DWORD *)(a2 + 84) & 0x20) != 0 )
    {
      v8 = *(VIDMM_CPU_HOST_APERTURE **)(a1 + 488);
      if ( v8 )
      {
        v9 = VIDMM_CPU_HOST_APERTURE::AcquireRange(v8, (struct _VIDMM_GLOBAL_ALLOC *)a2);
        v5 = v9;
        if ( v9 < 0 )
        {
          v12 = WdLogNewEntry5_WdWarning(v11, v10);
          *(_QWORD *)(v12 + 24) = a1;
          *(_QWORD *)(v12 + 32) = v5;
          WdLogEvent5_WdWarning(v12);
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
    return (unsigned int)v5;
  }
  else
  {
    v7 = WdLogNewEntry5_WdWarning(a1, a2);
    *(_QWORD *)(v7 + 24) = a1;
    WdLogEvent5_WdWarning(v7);
    return 3221225473LL;
  }
}
