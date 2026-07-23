/*
 * XREFs of HvlQueryAssociatedProcessors @ 0x1404F5FA0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x140390610 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x1404F27C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F33B0 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlQueryAssociatedProcessors(int a1, unsigned int *a2, _DWORD *a3)
{
  unsigned int v7; // edi
  _QWORD *v8; // rbx
  _QWORD *v9; // r15
  unsigned int v10; // ecx
  unsigned __int16 *v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  PHYSICAL_ADDRESS v14[4]; // [rsp+20h] [rbp-58h] BYREF
  PHYSICAL_ADDRESS v15[4]; // [rsp+40h] [rbp-38h] BYREF

  memset(v15, 0, sizeof(v15));
  memset(v14, 0, sizeof(v14));
  if ( (HvlpFlags & 2) == 0 )
    return 3221225506LL;
  v7 = 0;
  if ( !a2 )
    return 3221225485LL;
  v8 = HvlpAcquireHypercallPage(v15, 1, 0LL, 8LL);
  v9 = HvlpAcquireHypercallPage(v14, 2, 0LL, 2056LL);
  *(_DWORD *)v8 = a1;
  if ( (unsigned __int16)HvcallInitiateHypercall(138) )
  {
    v7 = -1073741823;
  }
  else
  {
    v10 = *(_DWORD *)v9;
    if ( *a2 < *(_DWORD *)v9 )
    {
      v7 = -1073741789;
    }
    else if ( v10 )
    {
      v11 = (unsigned __int16 *)v9 + 2;
      v12 = v10;
      do
      {
        v13 = *v11++;
        *a3++ = v13;
        --v12;
      }
      while ( v12 );
    }
    *a2 = v10;
  }
  HvlpReleaseHypercallPage((__int64)v14);
  HvlpReleaseHypercallPage((__int64)v15);
  return v7;
}
