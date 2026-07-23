/*
 * XREFs of IommuUnmapIdentityRange @ 0x1404DAEA0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     HalpIommuFlushDmaDomain @ 0x1404C96C8 (HalpIommuFlushDmaDomain.c)
 *     IommupHvUnmapDeviceIdentityRange @ 0x1404DA5B8 (IommupHvUnmapDeviceIdentityRange.c)
 *     IommupValidateMdl @ 0x1404DB024 (IommupValidateMdl.c)
 *     HalpIommuUnmapLogicalRange @ 0x1404DC86C (HalpIommuUnmapLogicalRange.c)
 */

__int64 __fastcall IommuUnmapIdentityRange(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // r8
  unsigned __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rcx
  bool i; // zf
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rbp
  unsigned __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v14; // [rsp+60h] [rbp+8h]
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  if ( !*(_BYTE *)(BugCheckParameter3 + 44) )
    return 3221225711LL;
  if ( !(unsigned __int8)IommupValidateMdl(a2) )
    return 3221225712LL;
  v5 = (unsigned __int64)*(unsigned int *)(v4 + 40) >> 12;
  v6 = v4 + 8 * ((unsigned __int64)*(unsigned int *)(v4 + 44) >> 12);
  if ( HalpHvIommu )
  {
    result = IommupHvUnmapDeviceIdentityRange(BugCheckParameter3);
    if ( (int)result < 0 )
      KeBugCheckEx(0x1D9u, 1uLL, (int)result, BugCheckParameter3, 0LL);
  }
  else
  {
    result = 0LL;
    v7 = 0LL;
    for ( i = v5 == 0; ; i = v5 == 0 )
    {
      v14 = v7;
      if ( i )
        break;
      v9 = *(_QWORD *)(v6 + 8 * v7 + 48);
      v10 = *(_QWORD *)(BugCheckParameter3 + 24);
      v11 = v9 << 12;
      v15 = 4096LL;
      result = HalpIommuUnmapLogicalRange(v10, &v15, v11);
      if ( (int)result < 0 || v15 != 4096 )
        break;
      v12 = 1LL;
      do
      {
        v13 = 1024LL;
        if ( v12 < 0x400 )
          v13 = v12;
        HalpIommuFlushDmaDomain(
          (_QWORD *)BugCheckParameter3,
          v11 ^ ((unsigned __int16)v11 ^ (unsigned __int16)(v13 - 1)) & 0x3FF);
        v12 -= v13;
        v11 += v13 << 12;
      }
      while ( v12 );
      result = 0LL;
      v7 = v14 + 1;
      --v5;
    }
  }
  return result;
}
