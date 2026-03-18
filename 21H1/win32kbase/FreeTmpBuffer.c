/*
 * XREFs of FreeTmpBuffer @ 0x1C0073B40
 * Callers:
 *     NtGdiOpenDCW @ 0x1C0069C10 (NtGdiOpenDCW.c)
 *     NtGdiExtCreateRegion @ 0x1C0073A20 (NtGdiExtCreateRegion.c)
 *     NtGdiGetRegionData @ 0x1C00AAF30 (NtGdiGetRegionData.c)
 *     NtGdiPolyPolyDraw @ 0x1C00C4C40 (NtGdiPolyPolyDraw.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreeTmpBuffer(char *a1)
{
  char *v1; // rbx
  __int64 v2; // rax
  char **v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

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
      if ( qword_1C0258BC0 && (int)qword_1C0258BC0(v5, v4, v6) >= 0 )
      {
        if ( qword_1C0258BC8 )
          qword_1C0258BC8(v1);
      }
    }
  }
}
