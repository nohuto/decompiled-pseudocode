/*
 * XREFs of HalpApicSetLogicalId @ 0x1403A3D00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpApicSetLogicalId(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v4; // rcx
  unsigned int v6; // ebx

  v2 = 0;
  if ( HalpApicX2Mode )
    return (unsigned int)-1073741637;
  if ( *(_DWORD *)a2 == 4 )
  {
    HalpApicWrite(208LL, 0LL);
    if ( !HalpApicClusterModeEnabled )
      return v2;
    v4 = 224LL;
    goto LABEL_5;
  }
  if ( *(_DWORD *)a2 == 5 )
  {
    HalpApicClusterModeEnabled = 0;
    HalpApicWrite(224LL, 0xFFFFFFFFLL);
    v4 = 208LL;
LABEL_5:
    ((void (__fastcall *)(__int64))HalpApicWrite)(v4);
    return v2;
  }
  if ( *(_DWORD *)a2 != 6 )
    return (unsigned int)-1073741637;
  HalpApicClusterModeEnabled = 1;
  HalpApicWrite(224LL, 0xFFFFFFFLL);
  if ( (unsigned int)((__int64 (__fastcall *)(__int64))HalpApicRead)(224LL) == 0xFFFFFFF )
  {
    v6 = (*(unsigned __int16 *)(a2 + 12) | (unsigned __int16)(16 * *(_WORD *)(a2 + 8))) << 24;
    HalpApicWrite(208LL, v6);
    if ( (unsigned int)((__int64 (__fastcall *)(__int64))HalpApicRead)(208LL) == v6 )
      return v2;
    HalpApicWrite(208LL, 0LL);
  }
  return 3221225659LL;
}
