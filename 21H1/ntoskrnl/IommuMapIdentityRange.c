/*
 * XREFs of IommuMapIdentityRange @ 0x1404D5380
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     HalpIommuFlushDmaDomain @ 0x1404C40DC (HalpIommuFlushDmaDomain.c)
 *     IommupHvUnmapDeviceIdentityRange @ 0x1404D4F28 (IommupHvUnmapDeviceIdentityRange.c)
 *     IommupValidateMdl @ 0x1404D5934 (IommupValidateMdl.c)
 *     HalpIommuMapLogicalRange @ 0x1404D6D5C (HalpIommuMapLogicalRange.c)
 *     HalpIommuUnmapLogicalRange @ 0x1404D717C (HalpIommuUnmapLogicalRange.c)
 */

__int64 __fastcall IommuMapIdentityRange(ULONG_PTR BugCheckParameter3, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v7; // r8
  unsigned __int64 v8; // rdi
  __int64 v9; // r15
  int v10; // r14d
  int v11; // eax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  bool i; // zf
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // [rsp+28h] [rbp-8h]
  unsigned __int64 v18; // [rsp+60h] [rbp+30h] BYREF
  __int64 v19; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0LL;
  if ( !*(_BYTE *)(BugCheckParameter3 + 44) )
    return 3221225711LL;
  if ( !(unsigned __int8)IommupValidateMdl(a3) )
    return 3221225713LL;
  v8 = (unsigned __int64)*(unsigned int *)(v7 + 40) >> 12;
  v9 = v7 + 8 * ((unsigned __int64)*(unsigned int *)(v7 + 44) >> 12);
  if ( !HalpHvIommu )
  {
    v18 = 0LL;
    v12 = 0LL;
    v10 = 0;
    if ( v8 )
    {
      while ( 1 )
      {
        v17 = *(_QWORD *)(v9 + 8 * v12 + 48) << 12;
        v10 = HalpIommuMapLogicalRange(0, *(_QWORD *)(BugCheckParameter3 + 24), a2, v17, 4096LL, v17);
        if ( v10 < 0 )
          break;
        v12 = ++v18;
        if ( !--v8 )
          return (unsigned int)v10;
      }
      v13 = v18;
      for ( i = v18 == 0; ; i = v13 == 0 )
      {
        v18 = v3;
        if ( i )
          break;
        v15 = *(_QWORD *)(BugCheckParameter3 + 24);
        v16 = *(_QWORD *)(v9 + 8 * v3 + 48) << 12;
        v19 = 4096LL;
        HalpIommuUnmapLogicalRange(v15, &v19, v16);
        HalpIommuFlushDmaDomain((_QWORD *)BugCheckParameter3, v16 | 1);
        v3 = v18 + 1;
        --v13;
      }
    }
    return (unsigned int)v10;
  }
  v18 = (unsigned __int64)*(unsigned int *)(v7 + 40) >> 12;
  v19 = 0LL;
  if ( *(_BYTE *)(BugCheckParameter3 + 40) )
  {
    v10 = -1073741811;
    goto LABEL_9;
  }
  LODWORD(v19) = *(_DWORD *)(BugCheckParameter3 + 32);
  BYTE4(v19) = 0;
  v10 = ((__int64 (__fastcall *)(__int64 *, _QWORD, __int64, unsigned __int64 *))qword_140C4A500)(
          &v19,
          a2,
          v9 + 48,
          &v18);
  if ( v10 < 0 )
  {
LABEL_9:
    v11 = IommupHvUnmapDeviceIdentityRange(BugCheckParameter3);
    if ( v11 < 0 )
      KeBugCheckEx(0x1D9u, 1uLL, v11, BugCheckParameter3, 0LL);
  }
  return (unsigned int)v10;
}
