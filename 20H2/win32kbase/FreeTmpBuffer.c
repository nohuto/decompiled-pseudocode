/*
 * XREFs of FreeTmpBuffer @ 0x1C005CCE0
 * Callers:
 *     NtGdiExtCreateRegion @ 0x1C005CBC0 (NtGdiExtCreateRegion.c)
 *     NtGdiOpenDCW @ 0x1C005DBC0 (NtGdiOpenDCW.c)
 *     NtGdiGetRegionData @ 0x1C0090350 (NtGdiGetRegionData.c)
 *     NtGdiPolyPolyDraw @ 0x1C00C4640 (NtGdiPolyPolyDraw.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
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
      if ( qword_1C0250C00 && (int)qword_1C0250C00() >= 0 )
      {
        if ( qword_1C0250C08 )
          qword_1C0250C08(v1);
      }
    }
  }
}
