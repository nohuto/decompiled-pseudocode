/*
 * XREFs of FreeTmpBuffer @ 0x1C007A7B0
 * Callers:
 *     NtGdiGetRegionData @ 0x1C00268D0 (NtGdiGetRegionData.c)
 *     NtGdiOpenDCW @ 0x1C0079880 (NtGdiOpenDCW.c)
 *     NtGdiExtCreateRegion @ 0x1C007A690 (NtGdiExtCreateRegion.c)
 *     NtGdiPolyPolyDraw @ 0x1C00C5440 (NtGdiPolyPolyDraw.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreeTmpBuffer(char *a1)
{
  char *v1; // rbx
  __int64 v2; // rax
  char **v3; // rcx

  if ( a1 == gpTmpGlobal )
  {
    *gpTmpGlobalFree = a1;
  }
  else
  {
    v1 = a1 - 32;
    if ( a1 != (char *)32 )
    {
      KeEnterCriticalRegion();
      v2 = *(_QWORD *)v1;
      if ( *(char **)(*(_QWORD *)v1 + 8LL) != v1 || (v3 = (char **)*((_QWORD *)v1 + 1), *v3 != v1) )
        __fastfail(3u);
      *v3 = (char *)v2;
      *(_QWORD *)(v2 + 8) = v3;
      *((_QWORD *)v1 + 1) = v1;
      *(_QWORD *)v1 = v1;
      KeLeaveCriticalRegion();
      if ( qword_1C0252C00 && (int)qword_1C0252C00() >= 0 )
      {
        if ( qword_1C0252C08 )
          qword_1C0252C08(v1);
      }
    }
  }
}
