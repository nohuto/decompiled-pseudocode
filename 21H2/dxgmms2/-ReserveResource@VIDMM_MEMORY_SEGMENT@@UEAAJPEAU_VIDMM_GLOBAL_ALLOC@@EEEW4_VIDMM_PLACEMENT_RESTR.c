/*
 * XREFs of ?ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1C009BCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001A46C (-AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1C009BD90 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::ReserveResource(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // esi
  unsigned __int64 v7; // rcx
  int v8; // eax

  if ( !*(_BYTE *)(a2 + 80) || (*(_DWORD *)(a1 + 80) & 4) != 0 || *(_QWORD *)(a1 + 504) )
  {
    v5 = VIDMM_SEGMENT::ReserveResource(a1, a2, a3);
    if ( v5 >= 0 )
    {
      if ( *(_BYTE *)(a2 + 80) )
      {
        v7 = *(_QWORD *)(a1 + 504);
        if ( v7 )
        {
          v8 = VIDMM_CPU_HOST_APERTURE::AcquireRange(v7, (struct _VIDMM_GLOBAL_ALLOC *)a2);
          v5 = v8;
          if ( v8 < 0 )
          {
            WdLogSingleEntry2(3LL, a1, v8);
            (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 24LL))(
              a1,
              a2,
              *(_QWORD *)(a2 + 184),
              *(_QWORD *)(a2 + 16));
            *(_QWORD *)(a2 + 200) = 0LL;
            *(_QWORD *)(a2 + 184) = 0LL;
          }
        }
      }
    }
    return (unsigned int)v5;
  }
  else
  {
    WdLogSingleEntry1(3LL, a1);
    return 3221225473LL;
  }
}
