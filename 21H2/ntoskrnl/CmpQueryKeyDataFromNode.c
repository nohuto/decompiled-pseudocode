/*
 * XREFs of CmpQueryKeyDataFromNode @ 0x14065F940
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x1405D8520 (CmpEnumerateLayeredKey.c)
 *     CmpQueryKeyData @ 0x14065F49C (CmpQueryKeyData.c)
 *     CmEnumerateKey @ 0x1406E3AB0 (CmEnumerateKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     CmpPopulateKeyNodeInformation @ 0x14065F3B0 (CmpPopulateKeyNodeInformation.c)
 *     CmGetVisibleValueCount @ 0x14065F744 (CmGetVisibleValueCount.c)
 *     CmGetKeyLastWriteTime @ 0x14065F780 (CmGetKeyLastWriteTime.c)
 *     CmGetVisibleMaxValueNameLenAndDataLen @ 0x14065F7F8 (CmGetVisibleMaxValueNameLenAndDataLen.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x14065F88C (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpPopulateKeyFullInformation @ 0x14065FF60 (CmpPopulateKeyFullInformation.c)
 *     CmGetVisibleSubkeyCount @ 0x14066000C (CmGetVisibleSubkeyCount.c)
 *     CmEqualTrans @ 0x14066440C (CmEqualTrans.c)
 *     CmListGetPrevElement @ 0x140768C48 (CmListGetPrevElement.c)
 */

__int64 __fastcall CmpQueryKeyDataFromNode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // r12
  const void *v11; // r13
  __int64 v12; // rbx
  unsigned __int16 v13; // cx
  unsigned int v14; // edx
  unsigned int v15; // r15d
  unsigned int v16; // r8d
  unsigned int v17; // r8d
  unsigned int i; // eax
  int VisibleMaxNameLenAndClassLen; // ebx
  __int64 PrevElement; // rax
  __int64 v22; // r15
  int v23; // r8d
  int v24; // [rsp+50h] [rbp-68h] BYREF
  __int16 v25; // [rsp+54h] [rbp-64h]
  __int16 v26; // [rsp+56h] [rbp-62h]
  __int64 v27; // [rsp+58h] [rbp-60h] BYREF
  __int128 v28; // [rsp+60h] [rbp-58h] BYREF
  __int128 v29; // [rsp+70h] [rbp-48h] BYREF
  __int128 v30; // [rsp+80h] [rbp-38h] BYREF

  v10 = a1;
  v11 = 0LL;
  v26 = 0;
  v24 = -1;
  v25 = 0;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  if ( !(_DWORD)a3 )
  {
    v27 = 0LL;
    if ( a2 )
    {
      v12 = *(_QWORD *)(a2 + 4);
      if ( !a7 )
      {
LABEL_4:
        v13 = *(_WORD *)(a2 + 72);
        if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
          v13 *= 2;
        v14 = v13;
        v15 = v13 + 16;
        *a6 = v15;
        if ( a5 < 0x10 )
        {
          VisibleMaxNameLenAndClassLen = -1073741789;
        }
        else
        {
          *(_QWORD *)a4 = v12;
          *(_DWORD *)(a4 + 8) = 0;
          *(_DWORD *)(a4 + 12) = v13;
          v16 = a5 - 16;
          if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
          {
            v17 = v16 >> 1;
            if ( v17 >= *(unsigned __int16 *)(a2 + 72) )
              v17 = *(unsigned __int16 *)(a2 + 72);
            for ( i = 0; i < v17; ++i )
              *(_WORD *)(a4 + 2LL * i + 16) = *(unsigned __int8 *)(i + a2 + 76);
          }
          else
          {
            if ( v16 <= v13 )
              v14 = a5 - 16;
            memmove((void *)(a4 + 16), (const void *)(a2 + 76), v14);
          }
          if ( a5 < v15 )
            VisibleMaxNameLenAndClassLen = -2147483643;
          else
            VisibleMaxNameLenAndClassLen = 0;
        }
        goto LABEL_20;
      }
    }
    else
    {
      v12 = *(_QWORD *)(a7 + 168);
    }
    if ( a8 )
    {
      while ( 1 )
      {
        PrevElement = CmListGetPrevElement(a7 + 208, &v27, a3, a4);
        v22 = PrevElement;
        if ( !PrevElement )
          break;
        if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(PrevElement + 56), a8) && *(_DWORD *)(v22 + 68) == 8 )
        {
          v12 = *(_QWORD *)(v22 + 88);
          break;
        }
      }
      v10 = a1;
    }
    goto LABEL_4;
  }
  v23 = a3 - 1;
  if ( v23 )
  {
    if ( v23 == 1 )
    {
      *(_QWORD *)&v28 = CmGetKeyLastWriteTime(a7, a2, a8, a4);
      DWORD2(v28) = 0;
      VisibleMaxNameLenAndClassLen = CmGetVisibleMaxNameLenAndClassLen(
                                       a7,
                                       a2,
                                       a8,
                                       (unsigned int *)&v29 + 2,
                                       (unsigned int *)&v29 + 3);
      if ( VisibleMaxNameLenAndClassLen >= 0 )
      {
        VisibleMaxNameLenAndClassLen = CmGetVisibleMaxValueNameLenAndDataLen(
                                         a7,
                                         a2,
                                         a8,
                                         (_DWORD *)&v30 + 1,
                                         (unsigned int *)&v30 + 2);
        if ( VisibleMaxNameLenAndClassLen >= 0 )
        {
          DWORD1(v29) = CmGetVisibleSubkeyCount(a7, a2, a8);
          LODWORD(v30) = CmGetVisibleValueCount(a7, a2, a8);
          if ( *(_WORD *)(a2 + 74) )
            v11 = (const void *)(*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v10 + 8))(
                                  v10,
                                  *(unsigned int *)(a2 + 48),
                                  &v24);
          VisibleMaxNameLenAndClassLen = CmpPopulateKeyFullInformation(
                                           &v28,
                                           v11,
                                           *(unsigned __int16 *)(a2 + 74),
                                           a4,
                                           a5,
                                           a6);
        }
      }
    }
    else
    {
      VisibleMaxNameLenAndClassLen = -1073741811;
    }
  }
  else
  {
    *(_QWORD *)&v28 = CmGetKeyLastWriteTime(a7, a2, a8, a4);
    DWORD2(v28) = 0;
    if ( *(_WORD *)(a2 + 74) )
      v11 = (const void *)(*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v10 + 8))(
                            v10,
                            *(unsigned int *)(a2 + 48),
                            &v24);
    VisibleMaxNameLenAndClassLen = CmpPopulateKeyNodeInformation(
                                     (__int64)&v28,
                                     a2,
                                     v11,
                                     *(unsigned __int16 *)(a2 + 74),
                                     a4,
                                     a5,
                                     a6);
  }
LABEL_20:
  if ( v11 )
    (*(void (__fastcall **)(__int64, int *))(v10 + 16))(v10, &v24);
  return (unsigned int)VisibleMaxNameLenAndClassLen;
}
