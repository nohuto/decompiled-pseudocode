/*
 * XREFs of HvlQueryAssociatedProcessors @ 0x140547BD0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039D8F0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF00 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14039DF90 (HvlpAcquireHypercallPage.c)
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
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h]
  __int64 v16; // [rsp+38h] [rbp-28h]
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]
  __int64 v19; // [rsp+58h] [rbp-8h]

  v18 = 0LL;
  LODWORD(v19) = 0;
  v15 = 0LL;
  LODWORD(v16) = 0;
  v17 = 0LL;
  v14 = 0LL;
  if ( (HvlpFlags & 2) == 0 )
    return 3221225506LL;
  v7 = 0;
  if ( !a2 )
    return 3221225485LL;
  v8 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v17, 1, 0LL, 8LL);
  v9 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v14, 2, 0LL, 2056LL);
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
  HvlpReleaseHypercallPage((__int64)&v14);
  HvlpReleaseHypercallPage((__int64)&v17);
  return v7;
}
