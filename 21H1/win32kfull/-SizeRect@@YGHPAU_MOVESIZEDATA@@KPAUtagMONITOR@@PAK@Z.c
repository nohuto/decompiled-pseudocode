/*
 * XREFs of ?SizeRect@@YGHPAU_MOVESIZEDATA@@KPAUtagMONITOR@@PAK@Z @ 0x17220B
 * Callers:
 *     ?xxxApplyArrangeAction@@YGHPAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPAU_MOVESIZEDATA@@@Z @ 0x172C47 (-xxxApplyArrangeAction@@YGHPAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YGXPAU_MOVESIZEDATA@@J@Z @ 0x175D86 (-xxxTM_MoveDragRect@@YGXPAU_MOVESIZEDATA@@J@Z.c)
 * Callees:
 *     ?GetOrUpdateCheckPointIfNotPresent@@YGPAUtagCHECKPOINT@@PAU_MOVESIZEDATA@@@Z @ 0x171112 (-GetOrUpdateCheckPointIfNotPresent@@YGPAUtagCHECKPOINT@@PAU_MOVESIZEDATA@@@Z.c)
 *     ?SnapSizeRect@@YGXPAU_MOVESIZEDATA@@PAUtagCHECKPOINT@@PAUtagMONITOR@@PAK@Z @ 0x172387 (-SnapSizeRect@@YGXPAU_MOVESIZEDATA@@PAUtagCHECKPOINT@@PAUtagMONITOR@@PAK@Z.c)
 */

int __userpurge SizeRect@<eax>(
        int a1@<edx>,
        int *a2@<ecx>,
        struct _MOVESIZEDATA *a3,
        struct tagCHECKPOINT *a4,
        struct tagMONITOR *a5,
        unsigned int *a6)
{
  int v7; // edi
  int v8; // ebx
  int v10; // ebx
  int v11; // eax
  int v12; // ebx
  int v13; // edx
  int v14; // ecx
  int v15; // ebx
  int v16; // eax
  int v17; // edi
  __int64 v18; // rax
  int v19; // edi
  int v20; // edx
  int v21; // edi
  int v22; // eax
  int v23; // ebx
  int v24; // ecx
  int v25; // edi
  int v26; // eax
  __int64 v27; // rax
  struct tagMONITOR *v28; // [esp+0h] [ebp-20h]
  unsigned int *v29; // [esp+4h] [ebp-1Ch]
  int v30; // [esp+10h] [ebp-10h]
  __int16 v31; // [esp+12h] [ebp-Eh]
  int v32; // [esp+14h] [ebp-Ch]
  int v33; // [esp+1Ch] [ebp-4h]
  int v34; // [esp+1Ch] [ebp-4h]

  v31 = HIWORD(a1);
  v7 = (__int16)a1;
  if ( (a2[46] & 0x400) != 0 )
  {
    v8 = SHIWORD(a1) - a2[40];
    v33 = (__int16)a1 - a2[39];
    if ( v33 == a2[67] && v8 == a2[68] || !GetOrUpdateCheckPointIfNotPresent(a2) )
      return 0;
    a2[67] = v33;
    a2[68] = v8;
  }
  v10 = dword_251404[a2[41]];
  if ( v10 >= 0 )
  {
    v11 = v10;
    v12 = v10 ^ 2;
    v34 = v11 * 4;
    a2[v11 + 7] = v7;
    v13 = a2[v12 + 7];
    v14 = v7 - v13;
    v32 = v13;
    v15 = v12 & 2;
    if ( v15 )
      v14 = v13 - v7;
    v16 = a2[23];
    if ( v14 < v16 || (v16 = a2[25], v14 > v16) )
    {
      v17 = v34;
    }
    else
    {
      if ( (*(_BYTE *)(*(_DWORD *)(a2[2] + 20) + 23) & 0x40) == 0 )
        goto LABEL_19;
      v17 = v34;
      v18 = *(int *)((char *)a2 + v34 + 76) - v13;
      v16 = (HIDWORD(v18) ^ v18) - HIDWORD(v18);
      if ( v14 <= v16 )
        goto LABEL_19;
      v13 = v32;
    }
    if ( v15 )
      v16 = -v16;
    *(int *)((char *)a2 + v17 + 28) = v13 + v16;
  }
LABEL_19:
  v19 = dword_2513D8[a2[41]];
  if ( v19 >= 0 )
  {
    v20 = 4 * v19;
    v21 = v19 ^ 2;
    v22 = v31;
    v30 = v20;
    *(int *)((char *)a2 + v20 + 28) = v22;
    v23 = a2[v21 + 7];
    v24 = v22 - v23;
    v25 = v21 & 2;
    if ( v25 )
      v24 = v23 - v22;
    v26 = a2[24];
    if ( v24 < v26 )
      goto LABEL_27;
    v26 = a2[26];
    if ( v24 > v26 )
      goto LABEL_27;
    if ( (*(_BYTE *)(*(_DWORD *)(a2[2] + 20) + 23) & 0x40) != 0 )
    {
      v27 = *(int *)((char *)a2 + v20 + 76) - v23;
      v26 = (HIDWORD(v27) ^ v27) - HIDWORD(v27);
      if ( v24 > v26 )
      {
        v20 = v30;
LABEL_27:
        if ( v25 )
          v26 = -v26;
        *(int *)((char *)a2 + v20 + 28) = v23 + v26;
      }
    }
  }
  if ( (a2[46] & 0x400) != 0 )
    SnapSizeRect(a3, a4, v28, v29);
  return 1;
}
