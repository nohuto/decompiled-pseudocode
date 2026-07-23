/*
 * XREFs of IommuMapIdentityRange @ 0x1404DAA10
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpIommuFlushDmaDomain @ 0x1404C96C8 (HalpIommuFlushDmaDomain.c)
 *     IommupHvUnmapDeviceIdentityRange @ 0x1404DA5B8 (IommupHvUnmapDeviceIdentityRange.c)
 *     IommupValidateMdl @ 0x1404DB024 (IommupValidateMdl.c)
 *     HalpIommuMapLogicalRange @ 0x1404DC44C (HalpIommuMapLogicalRange.c)
 *     HalpIommuUnmapLogicalRange @ 0x1404DC86C (HalpIommuUnmapLogicalRange.c)
 */

__int64 __fastcall IommuMapIdentityRange(ULONG_PTR BugCheckParameter3, unsigned int a2, __int64 a3)
{
  __int64 v6; // r8
  unsigned __int64 v7; // rbx
  __int64 v8; // r12
  int v9; // esi
  int v10; // eax
  unsigned __int64 v11; // rax
  bool i; // zf
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rax
  bool j; // zf
  __int64 v16; // rcx
  __int64 v17; // r15
  unsigned __int64 v18; // r13
  __int64 v19; // rbx
  __int64 v20; // [rsp+28h] [rbp-8h]
  unsigned __int64 v21; // [rsp+70h] [rbp+40h] BYREF
  __int64 v22; // [rsp+88h] [rbp+58h] BYREF

  if ( !*(_BYTE *)(BugCheckParameter3 + 44) )
    return 3221225711LL;
  if ( !(unsigned __int8)IommupValidateMdl(a3) )
    return 3221225713LL;
  v7 = (unsigned __int64)*(unsigned int *)(v6 + 40) >> 12;
  v8 = v6 + 8 * ((unsigned __int64)*(unsigned int *)(v6 + 44) >> 12);
  if ( !HalpHvIommu )
  {
    v11 = 0LL;
    v9 = 0;
    for ( i = v7 == 0; ; i = v7 == 0 )
    {
      v21 = v11;
      if ( i )
        break;
      v20 = *(_QWORD *)(v8 + 8 * v11 + 48) << 12;
      v9 = HalpIommuMapLogicalRange(0, *(_QWORD *)(BugCheckParameter3 + 24), a2, v20, 4096LL, v20);
      if ( v9 < 0 )
      {
        v13 = v21;
        v14 = 0LL;
        for ( j = v21 == 0; ; j = v13 == 0 )
        {
          v21 = v14;
          if ( j )
            break;
          v16 = *(_QWORD *)(BugCheckParameter3 + 24);
          v17 = *(_QWORD *)(v8 + 8 * v14 + 48) << 12;
          v22 = 4096LL;
          HalpIommuUnmapLogicalRange(v16, &v22, v17);
          v18 = 1LL;
          do
          {
            v19 = 1024LL;
            if ( v18 < 0x400 )
              v19 = v18;
            HalpIommuFlushDmaDomain(
              (_QWORD *)BugCheckParameter3,
              v17 ^ ((unsigned __int16)v17 ^ (unsigned __int16)(v19 - 1)) & 0x3FF);
            v18 -= v19;
            v17 += v19 << 12;
          }
          while ( v18 );
          v14 = v21 + 1;
          --v13;
        }
        return (unsigned int)v9;
      }
      v11 = v21 + 1;
      --v7;
    }
    return (unsigned int)v9;
  }
  v21 = (unsigned __int64)*(unsigned int *)(v6 + 40) >> 12;
  v22 = 0LL;
  if ( *(_BYTE *)(BugCheckParameter3 + 40) )
  {
    v9 = -1073741811;
    goto LABEL_9;
  }
  LODWORD(v22) = *(_DWORD *)(BugCheckParameter3 + 32);
  BYTE4(v22) = 0;
  v9 = ((__int64 (__fastcall *)(__int64 *, _QWORD, __int64, unsigned __int64 *))qword_140C4A360)(
         &v22,
         a2,
         v8 + 48,
         &v21);
  if ( v9 < 0 )
  {
LABEL_9:
    v10 = IommupHvUnmapDeviceIdentityRange(BugCheckParameter3);
    if ( v10 < 0 )
      KeBugCheckEx(0x1D9u, 1uLL, v10, BugCheckParameter3, 0LL);
  }
  return (unsigned int)v9;
}
