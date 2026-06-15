/*
 * XREFs of sub_180051E30 @ 0x180051E30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180051F48 @ 0x180051F48 (sub_180051F48.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 */

__int64 __fastcall sub_180051E30(__int64 a1, __int64 a2, const PROPVARIANT *a3)
{
  __int64 *v6; // r14
  __int64 v7; // rax
  __int64 *v8; // rbx
  __int64 v9; // rcx
  HRESULT v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rax
  int v14; // r9d
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rbx
  HRESULT v18; // eax
  PROPVARIANT pvarDest[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v20; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  if ( !(unsigned __int8)sub_180051F48(a1, a3) )
  {
    sub_18004BD84((int)retaddr, 3089, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", -2147023266);
    return 2147944030LL;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  v6 = (__int64 *)(a1 + 40);
  v7 = *(_QWORD *)(a1 + 40);
  v8 = (__int64 *)(a1 + 40);
  if ( !v7 )
  {
LABEL_18:
    v16 = sub_18006A18C(56LL, &unk_18019F848);
    v17 = v16;
    if ( v16 )
    {
      *(_OWORD *)(v16 + 24) = 0LL;
      *(_QWORD *)(v16 + 40) = 0LL;
      v18 = PropVariantCopy((PROPVARIANT *)(v16 + 24), a3);
      v11 = v18;
      if ( v18 >= 0 )
      {
        while ( *v6 )
          v6 = (__int64 *)(*v6 + 48);
        *(_QWORD *)(v17 + 48) = 0LL;
        *(_DWORD *)(v17 + 16) = *(_DWORD *)(a2 + 16);
        *(_OWORD *)v17 = *(_OWORD *)a2;
        *v6 = v17;
        goto LABEL_11;
      }
      sub_18004BD84((int)retaddr, 3124, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v18);
      sub_18006A148(v17, 56LL);
LABEL_21:
      if ( a1 != -56 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
      return v11;
    }
    v11 = -2147024882;
    v15 = 3120;
    v14 = -2147024882;
LABEL_17:
    sub_18004BD84((int)retaddr, v15, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v14);
    goto LABEL_21;
  }
  while ( 1 )
  {
    if ( *(_DWORD *)(v7 + 16) == *(_DWORD *)(a2 + 16) )
    {
      v9 = *(_QWORD *)v7 - *(_QWORD *)a2;
      if ( *(_QWORD *)v7 == *(_QWORD *)a2 )
        v9 = *(_QWORD *)(v7 + 8) - *(_QWORD *)(a2 + 8);
      if ( !v9 )
        break;
    }
    v8 = (__int64 *)(v7 + 48);
    v7 = *(_QWORD *)(v7 + 48);
    if ( !v7 )
      goto LABEL_18;
  }
  *(_OWORD *)pvarDest = 0LL;
  v20 = 0LL;
  v10 = PropVariantCopy(pvarDest, a3);
  v11 = v10;
  if ( v10 < 0 )
  {
    v14 = v10;
    v15 = 3103;
    goto LABEL_17;
  }
  PropVariantClear((PROPVARIANT *)(*v8 + 24));
  v12 = *v8;
  *(_OWORD *)(v12 + 24) = *(_OWORD *)pvarDest;
  *(_QWORD *)(v12 + 40) = v20;
LABEL_11:
  *(_BYTE *)(a1 + 96) = 1;
  if ( a1 != -56 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  return 0LL;
}
