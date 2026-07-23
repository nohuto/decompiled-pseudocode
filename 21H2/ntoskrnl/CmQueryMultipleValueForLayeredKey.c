/*
 * XREFs of CmQueryMultipleValueForLayeredKey @ 0x14086C6A8
 * Callers:
 *     CmQueryMultipleValueKey @ 0x14065E494 (CmQueryMultipleValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     CmpIsValueTombstone @ 0x140611F60 (CmpIsValueTombstone.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14065AB50 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpFindNameInListWithStatus @ 0x14065AD9C (CmpFindNameInListWithStatus.c)
 *     CmpGetKeyNodeForKcb @ 0x140660DF4 (CmpGetKeyNodeForKcb.c)
 *     CmpGetKcbAtLayerHeight @ 0x1406DECB0 (CmpGetKcbAtLayerHeight.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406E3E60 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpGetValueData @ 0x1406E7B70 (CmpGetValueData.c)
 *     CmpLockKcbStackShared @ 0x1407127C0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x140712820 (CmpUnlockKcbStack.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmQueryMultipleValueForLayeredKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _LOOKASIDE_LIST_EX *a4,
        unsigned int *a5,
        unsigned int *a6)
{
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // r13
  void *v10; // r12
  unsigned int v11; // r15d
  int started; // edi
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int16 v15; // cx
  __int64 v16; // rdx
  __int16 v17; // ax
  bool i; // sf
  __int64 KcbAtLayerHeight; // r14
  __int16 *v20; // rsi
  char v21; // al
  __int64 KeyNodeForKcb; // rax
  char v23; // al
  __int64 v24; // rcx
  unsigned int v25; // edi
  unsigned int v26; // edx
  __int64 v27; // rcx
  char v29; // [rsp+40h] [rbp-B8h]
  _BYTE v30[3]; // [rsp+41h] [rbp-B7h] BYREF
  unsigned int Size; // [rsp+44h] [rbp-B4h] BYREF
  unsigned int Size_4; // [rsp+48h] [rbp-B0h]
  unsigned int v33; // [rsp+4Ch] [rbp-ACh] BYREF
  __int64 v34; // [rsp+50h] [rbp-A8h]
  void *Src; // [rsp+58h] [rbp-A0h] BYREF
  int v36; // [rsp+60h] [rbp-98h]
  __int64 v37; // [rsp+68h] [rbp-90h] BYREF
  __int64 v38; // [rsp+70h] [rbp-88h] BYREF
  int v39; // [rsp+78h] [rbp-80h] BYREF
  __int16 v40; // [rsp+7Ch] [rbp-7Ch]
  __int16 v41; // [rsp+7Eh] [rbp-7Ah]
  __int64 v42; // [rsp+80h] [rbp-78h]
  __int64 v43; // [rsp+88h] [rbp-70h]
  __int64 v44; // [rsp+90h] [rbp-68h]
  __int64 v45; // [rsp+98h] [rbp-60h]
  __int128 v46; // [rsp+A0h] [rbp-58h] BYREF
  __int128 v47; // [rsp+B0h] [rbp-48h]
  unsigned int v50; // [rsp+110h] [rbp+18h]

  v50 = a3;
  v6 = *(_QWORD *)(a1 + 8);
  v46 = 0LL;
  v47 = 0LL;
  WORD1(v46) = -1;
  LOBYTE(v7) = 0;
  v8 = 0LL;
  v38 = 0xFFFFFFFFLL;
  v41 = 0;
  v39 = -1;
  v40 = 0;
  v9 = 0LL;
  v43 = 0LL;
  v10 = 0LL;
  Src = 0LL;
  v30[0] = 0;
  v37 = 0xFFFFFFFFLL;
  v11 = 0;
  Size_4 = 0;
  v29 = 0;
  v44 = v6;
  started = CmpStartKcbStackForTopLayerKcb((__int64)&v46, v6, a3, a4);
  if ( started < 0 )
    goto LABEL_55;
  CmpLockKcbStackShared((__int64)&v46);
  v7 = 1LL;
  v34 = 1LL;
  v30[1] = 1;
  started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( started < 0 )
    goto LABEL_55;
  v13 = 0LL;
LABEL_4:
  v36 = v13;
  if ( (unsigned int)v13 < v50 )
  {
    v45 = 3 * v13;
    v14 = *(_QWORD *)(a2 + 24 * v13);
    v42 = v14;
    v15 = *(_WORD *)v14;
    if ( *(_WORD *)v14 )
    {
      v16 = *(_QWORD *)(v14 + 8);
      do
      {
        if ( *(_WORD *)(v16 + 2 * (((unsigned __int64)v15 - v7) >> 1)) )
          break;
        v15 -= 2;
        *(_WORD *)v14 = v15;
      }
      while ( v15 );
    }
    v33 = -1;
    v17 = *(_WORD *)(v44 + 66);
    for ( i = v17 < 0; ; i = (__int16)(Size - v34) < 0 )
    {
      LOWORD(Size) = v17;
      if ( i )
      {
LABEL_33:
        if ( v33 == -1 )
        {
          started = -1073741772;
          goto LABEL_54;
        }
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 8LL))(
               *(_QWORD *)(v9 + 32),
               v33,
               &v38);
        v42 = v8;
        if ( CmpIsValueTombstone(*(_QWORD *)(v9 + 32), v8) )
        {
          started = -1073741772;
          goto LABEL_55;
        }
        v25 = *(_DWORD *)(v8 + 4);
        if ( v25 >= 0x80000000 )
          v25 += 0x80000000;
        Size = v25;
        v11 = (v11 + 7) & 0xFFFFFFF8;
        v26 = (Size_4 + 7) & 0xFFFFFFF8;
        Size_4 = v26;
        if ( v29 || v25 + v11 > *a5 || v25 + v11 < v11 )
        {
          v29 = v7;
        }
        else
        {
          if ( !CmpGetValueData(v24, v33, v8, &Size, (__int64)&Src, (__int64)v30, (__int64)&v37) )
          {
            started = -1073741670;
            v10 = Src;
            goto LABEL_55;
          }
          v25 = Size;
          memmove((char *)a4 + v11, Src, Size);
          v27 = v45;
          *(_DWORD *)(a2 + 8 * v45 + 16) = *(_DWORD *)(v8 + 12);
          *(_DWORD *)(a2 + 8 * v27 + 8) = v25;
          *(_DWORD *)(a2 + 8 * v27 + 12) = v11;
          v11 += v25;
          if ( v30[0] )
            ExFreePoolWithTag(Src, 0);
          else
            (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 16LL))(*(_QWORD *)(v9 + 32), &v37);
          v10 = 0LL;
          Src = 0LL;
          v24 = *(_QWORD *)(v9 + 32);
          v26 = Size_4;
        }
        Size_4 = v25 + v26;
        (*(void (__fastcall **)(__int64, __int64 *))(v24 + 16))(v24, &v38);
        v13 = (unsigned int)(v7 + v36);
        goto LABEL_4;
      }
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)&v46, v17);
      v20 = (__int16 *)(KcbAtLayerHeight + 66);
      if ( a1 && *v20 == *(unsigned __int16 *)(a1 + 4) )
      {
        v21 = *(_BYTE *)(KcbAtLayerHeight + 65);
        if ( !v21 )
          goto LABEL_18;
      }
      else
      {
        if ( !*v20 )
          goto LABEL_18;
        v21 = *(_BYTE *)(KcbAtLayerHeight + 65);
      }
      if ( v21 == (_BYTE)v34 )
        goto LABEL_32;
LABEL_18:
      if ( *(_DWORD *)(KcbAtLayerHeight + 40) == -1 )
        goto LABEL_29;
      KeyNodeForKcb = CmpGetKeyNodeForKcb(KcbAtLayerHeight, (__int64)&v39, 0);
      started = CmpFindNameInListWithStatus(
                  *(_QWORD *)(KcbAtLayerHeight + 32),
                  (unsigned int *)(KeyNodeForKcb + 36),
                  v14,
                  0,
                  0LL,
                  (__int64)&v33);
      (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(KcbAtLayerHeight + 32) + 16LL))(
        *(_QWORD *)(KcbAtLayerHeight + 32),
        &v39);
      if ( started >= 0 )
      {
        v9 = KcbAtLayerHeight;
        v43 = KcbAtLayerHeight;
LABEL_32:
        v7 = v34;
        goto LABEL_33;
      }
      if ( started != -1073741772 )
      {
        LOBYTE(v7) = v34;
        goto LABEL_54;
      }
      if ( a1 && *v20 == *(unsigned __int16 *)(a1 + 4) )
      {
        v23 = *(_BYTE *)(KcbAtLayerHeight + 65);
        if ( !v23 )
          goto LABEL_32;
LABEL_27:
        if ( v23 )
          goto LABEL_32;
        goto LABEL_28;
      }
      if ( *v20 )
      {
        v23 = *(_BYTE *)(KcbAtLayerHeight + 65);
        goto LABEL_27;
      }
LABEL_28:
      v14 = v42;
LABEL_29:
      v7 = v34;
      v17 = Size - v34;
    }
  }
  *a5 = v11;
  if ( a6 )
    *a6 = Size_4;
  started = -2147483643;
  if ( !v29 )
    started = 0;
LABEL_54:
  v8 = 0LL;
LABEL_55:
  if ( v10 )
  {
    if ( v30[0] )
      ExFreePoolWithTag(v10, 0);
    else
      (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 16LL))(*(_QWORD *)(v9 + 32), &v37);
  }
  if ( v8 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 16LL))(*(_QWORD *)(v9 + 32), &v38);
  if ( (_BYTE)v7 )
    CmpUnlockKcbStack((__int64)&v46);
  if ( *((_QWORD *)&v47 + 1) )
    CmSiFreeMemory(*((PPRIVILEGE_SET *)&v47 + 1));
  return (unsigned int)started;
}
