/*
 * XREFs of HvlCollectLivedump @ 0x14054A9B4
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x140A66300 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039D8F0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF00 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14039DF90 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     VslCollectLiveDumpInSk @ 0x14054DD58 (VslCollectLiveDumpInSk.c)
 */

__int64 __fastcall HvlCollectLivedump(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // r15
  __int16 v11; // ax
  int v12; // esi
  void *v13; // rcx
  unsigned int v14; // ebx
  __int128 v15; // [rsp+20h] [rbp-89h] BYREF
  __int64 v16; // [rsp+30h] [rbp-79h]
  __int64 v17; // [rsp+38h] [rbp-71h]
  __int128 v18; // [rsp+40h] [rbp-69h] BYREF
  __int64 v19; // [rsp+50h] [rbp-59h]
  __int64 v20; // [rsp+58h] [rbp-51h]
  _BYTE v21[32]; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v22[64]; // [rsp+80h] [rbp-29h] BYREF

  v19 = 0LL;
  LODWORD(v20) = 0;
  v16 = 0LL;
  LODWORD(v17) = 0;
  v18 = 0LL;
  v15 = 0LL;
  if ( (HvlpRootFlags & 2) == 0 || !qword_140C48908 )
    return 3221225659LL;
  if ( VslVsmEnabled )
  {
    result = VslCollectLiveDumpInSk(a1, a2, a3, a4, v15, *((_QWORD *)&v15 + 1), v16, v17);
    if ( (int)result >= 0 )
    {
      *(_OWORD *)(a4 + 16) = HvlSkCrashdumpGuid;
      *a3 = 0LL;
    }
  }
  else
  {
    v9 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v18, 1, (__int64)v22, 32LL);
    v10 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v15, 2, (__int64)v21, 16LL);
    *v9 = a1;
    *(_OWORD *)(v9 + 1) = *(_OWORD *)a2;
    v9[3] = *(_QWORD *)(a2 + 16);
    v11 = HvcallInitiateHypercall(142);
    if ( !v11 || v11 == 51 )
    {
      *a3 = *v10;
      v12 = 0;
    }
    else
    {
      v12 = -1073741823;
    }
    HvlpReleaseHypercallPage((__int64)&v15);
    HvlpReleaseHypercallPage((__int64)&v18);
    if ( v12 >= 0 )
    {
      v13 = *(void **)(a4 + 32);
      v14 = dword_140C48918 << 12;
      if ( v13 == *(void **)a4 && *(_DWORD *)(a4 + 8) >= v14 )
        memmove(v13, qword_140C48908, v14);
      else
        *(_QWORD *)(a4 + 32) = qword_140C48908;
      *(_DWORD *)(a4 + 40) = v14;
      *(_OWORD *)(a4 + 16) = HvlCrashdumpGuid;
    }
    return (unsigned int)v12;
  }
  return result;
}
