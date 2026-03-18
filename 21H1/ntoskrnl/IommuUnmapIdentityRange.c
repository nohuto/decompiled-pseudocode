/*
 * XREFs of IommuUnmapIdentityRange @ 0x1404D57F0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     HalpIommuFlushDmaDomain @ 0x1404C40DC (HalpIommuFlushDmaDomain.c)
 *     IommupHvUnmapDeviceIdentityRange @ 0x1404D4F28 (IommupHvUnmapDeviceIdentityRange.c)
 *     IommupValidateMdl @ 0x1404D5934 (IommupValidateMdl.c)
 *     HalpIommuUnmapLogicalRange @ 0x1404D717C (HalpIommuUnmapLogicalRange.c)
 */

__int64 __fastcall IommuUnmapIdentityRange(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // r8
  unsigned __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rcx
  bool i; // zf
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // [rsp+50h] [rbp+8h]
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

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
      v12 = v7;
      if ( i )
        break;
      v9 = *(_QWORD *)(v6 + 8 * v7 + 48);
      v10 = *(_QWORD *)(BugCheckParameter3 + 24);
      v11 = v9 << 12;
      v13 = 4096LL;
      result = HalpIommuUnmapLogicalRange(v10, &v13, v11);
      if ( (int)result < 0 || v13 != 4096 )
        break;
      HalpIommuFlushDmaDomain((_QWORD *)BugCheckParameter3, v11 | 1);
      result = 0LL;
      v7 = v12 + 1;
      --v5;
    }
  }
  return result;
}
