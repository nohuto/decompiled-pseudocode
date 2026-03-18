/*
 * XREFs of ?bDoGradient@@YGHPA_J00JJJPAU_GRADSTRUCT@@@Z @ 0x1E9E03
 * Callers:
 *     ?bCalulateColorGradient@@YGHPAU_TRIVERTEX@@00PAU_TRIANGLEDATA@@@Z @ 0x1E9CBD (-bCalulateColorGradient@@YGHPAU_TRIVERTEX@@00PAU_TRIANGLEDATA@@@Z.c)
 * Callees:
 *     ?MDiv64@@YG_J_J00@Z @ 0xBEEFC (-MDiv64@@YG_J_J00@Z.c)
 *     __alldiv @ 0xF91D3 (__alldiv.c)
 *     __allmul @ 0xF91DF (__allmul.c)
 */

int __userpurge bDoGradient@<eax>(
        _QWORD *a1@<edx>,
        _QWORD *a2@<ecx>,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        int a6,
        int a7,
        int a8,
        struct _GRADSTRUCT *a9)
{
  int v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // esi
  int v12; // kr10_4
  __int64 v13; // rax
  int v14; // edi
  bool v15; // cf
  unsigned int v16; // ebx
  int v17; // esi
  unsigned int v18; // edx
  int v19; // esi
  unsigned int v20; // edx
  __int64 v22; // [esp-10h] [ebp-44h]
  unsigned int v25; // [esp+18h] [ebp-1Ch]
  unsigned int v26; // [esp+1Ch] [ebp-18h]
  int v27; // [esp+20h] [ebp-14h]
  __int64 v28; // [esp+24h] [ebp-10h]
  __int64 v29; // [esp+2Ch] [ebp-8h]
  int v30; // [esp+44h] [ebp+10h]
  int v31; // [esp+48h] [ebp+14h]

  v9 = ((char *)a5 - (char *)a4) * *(_DWORD *)(a7 + 4);
  v10 = ((char *)a5 - (char *)a4) * *(_DWORD *)(a7 + 12) - (a6 - (int)a4) * *(_DWORD *)(a7 + 8);
  v11 = HIDWORD(v10);
  v27 = HIDWORD(v10);
  v30 = v10;
  v12 = (a6 - (_DWORD)a4) * *(_DWORD *)a7 - v9;
  v31 = v12;
  v13 = *(int *)(a7 + 20);
  v26 = v12 >> 31;
  v14 = *(_DWORD *)(a7 + 20);
  v29 = v13;
  if ( v13 < 0 )
  {
    v15 = v30 != 0;
    v30 = -v30;
    v11 = -(v15 + v11);
    v27 = v11;
    v31 = -v12;
    v14 = -v14;
    v26 = (unsigned __int64)-(__int64)v12 >> 32;
    LODWORD(v29) = v14;
    HIDWORD(v13) = (unsigned __int64)-__SPAIR64__(HIDWORD(v13), v14) >> 32;
    HIDWORD(v29) = HIDWORD(v13);
  }
  v16 = *(_DWORD *)(a7 + 36);
  HIDWORD(v22) = v16;
  v28 = *(_QWORD *)(a7 + 24);
  LODWORD(v22) = *(_DWORD *)(a7 + 32);
  v25 = v22;
  v17 = MDiv64(__SPAIR64__(v11, v30), v22, __SPAIR64__(HIDWORD(v13), v14));
  *a2 = v28 * __PAIR64__(v27, v30) + __PAIR64__(v18, v17);
  v19 = MDiv64(__SPAIR64__(v26, v31), __SPAIR64__(v16, v25), v29);
  *a1 = v28 * __PAIR64__(v26, v31) + __PAIR64__(v20, v19);
  *a3 = *(int *)(a7 + 16)
      + __PAIR64__((_DWORD)a4 << 16, 0)
      + v28 * ((v29 >> 1) + 1)
      + (__int64)(__PAIR64__(v16, v25) * ((v29 >> 1) + 1) - *(int *)(a7 + 16) - 1) / v29;
  return 1;
}
