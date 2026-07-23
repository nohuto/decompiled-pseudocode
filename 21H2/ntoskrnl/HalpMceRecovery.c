/*
 * XREFs of HalpMceRecovery @ 0x1404D04E0
 * Callers:
 *     <none>
 * Callees:
 *     HalpMceRecoveryNotRequiredAmd @ 0x1404D07DC (HalpMceRecoveryNotRequiredAmd.c)
 *     HalpMceRecoveryNotRequiredIntel @ 0x1404D08A4 (HalpMceRecoveryNotRequiredIntel.c)
 *     HalpMceRecoveryRequired @ 0x1404D0998 (HalpMceRecoveryRequired.c)
 */

__int64 __fastcall HalpMceRecovery(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rbx
  __int64 v3; // r9
  int v4; // r8d
  int v5; // r10d

  v2 = (_DWORD *)a2;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = -1073741637;
  if ( !HalpMcaRecoverySupported || !HalpMcaRecoveryPolicy )
    return (unsigned int)v4;
  v5 = *(_DWORD *)(a1 + 4);
  if ( v5 == 1 )
  {
    if ( (v3 & 0x80000000000000LL) == 0 )
      goto LABEL_5;
  }
  else if ( v5 != 2 || (a2 = 0x2000000000000000LL, (v3 & 0x2000100000000000LL) != 0x2000000000000000LL) )
  {
LABEL_5:
    if ( v5 == 1 )
      HalpMceRecoveryNotRequiredIntel(a1, a2, 3221225659LL);
    else
      HalpMceRecoveryNotRequiredAmd(a1, a2, 3221225659LL);
    v4 = 0;
    goto LABEL_15;
  }
  if ( ((v3 & 0x4000000000000000LL) == 0 || HalpMcaOverflowRecoverySupported) && (v3 & 0x200000000000000LL) == 0 )
  {
    v4 = HalpMceRecoveryRequired(a1, a2, 3221225659LL);
LABEL_15:
    if ( v4 >= 0 )
      *v2 = 2;
  }
  return (unsigned int)v4;
}
