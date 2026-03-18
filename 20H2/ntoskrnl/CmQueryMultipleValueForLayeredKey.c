/*
 * XREFs of CmQueryMultipleValueForLayeredKey @ 0x14086E904
 * Callers:
 *     CmQueryMultipleValueKey @ 0x1406A503C (CmQueryMultipleValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140267C30 (CmSiFreeMemory.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405F3B6C (CmpGetKcbAtLayerHeight.c)
 *     CmpLockKcbStackShared @ 0x14061B4F0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x14061B550 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14066FBB0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpFindNameInListWithStatus @ 0x14066FDFC (CmpFindNameInListWithStatus.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406773C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpGetValueData @ 0x14067B060 (CmpGetValueData.c)
 *     CmpIsValueTombstone @ 0x1406D53F0 (CmpIsValueTombstone.c)
 *     CmpGetKeyNodeForKcb @ 0x1407028D4 (CmpGetKeyNodeForKcb.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmQueryMultipleValueForLayeredKey(
        size_t a1,
        __int64 a2,
        __int64 a3,
        struct _LOOKASIDE_LIST_EX *a4,
        unsigned int *a5,
        unsigned int *a6)
{
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // r12
  void *v10; // r15
  unsigned int v11; // r13d
  int started; // edi
  unsigned int i; // eax
  __int64 v14; // rdi
  unsigned __int16 j; // dx
  __int16 v16; // r14
  __int64 KcbAtLayerHeight; // rsi
  __int64 KeyNodeForKcb; // rax
  unsigned int v19; // r14d
  __int64 v20; // rcx
  unsigned int v21; // edi
  unsigned int v22; // edx
  __int64 v23; // rdx
  char v25; // [rsp+40h] [rbp-B8h]
  _BYTE v26[3]; // [rsp+41h] [rbp-B7h] BYREF
  unsigned int v27; // [rsp+44h] [rbp-B4h]
  __int64 v28; // [rsp+48h] [rbp-B0h]
  void *Src; // [rsp+50h] [rbp-A8h] BYREF
  unsigned int v30; // [rsp+58h] [rbp-A0h]
  __int64 v31; // [rsp+60h] [rbp-98h] BYREF
  __int64 v32; // [rsp+68h] [rbp-90h] BYREF
  __int64 v33; // [rsp+70h] [rbp-88h] BYREF
  __int64 v34; // [rsp+78h] [rbp-80h]
  __int64 v35; // [rsp+80h] [rbp-78h]
  __int64 v36; // [rsp+88h] [rbp-70h]
  __int64 v37; // [rsp+90h] [rbp-68h]
  __int128 v38; // [rsp+98h] [rbp-60h] BYREF
  __int128 v39; // [rsp+A8h] [rbp-50h]
  size_t Size; // [rsp+100h] [rbp+8h] BYREF
  __int64 v41; // [rsp+108h] [rbp+10h]
  unsigned int v42; // [rsp+110h] [rbp+18h]
  struct _LOOKASIDE_LIST_EX *v43; // [rsp+118h] [rbp+20h]

  v43 = a4;
  v42 = a3;
  v41 = a2;
  Size = a1;
  v6 = *(_QWORD *)(a1 + 8);
  v38 = 0LL;
  v39 = 0LL;
  WORD1(v38) = -1;
  LOBYTE(v7) = 0;
  v8 = 0LL;
  v32 = 0xFFFFFFFFLL;
  v33 = 0xFFFFFFFFLL;
  v9 = 0LL;
  v35 = 0LL;
  v10 = 0LL;
  Src = 0LL;
  v26[0] = 0;
  v31 = 0xFFFFFFFFLL;
  v11 = 0;
  v27 = 0;
  v25 = 0;
  v36 = v6;
  started = CmpStartKcbStackForTopLayerKcb((__int64)&v38, v6, a3, a4);
  if ( started >= 0 )
  {
    CmpLockKcbStackShared((__int64)&v38);
    v7 = 1LL;
    v28 = 1LL;
    v26[1] = 1;
    started = CmpPerformKeyBodyDeletionCheck(Size, 0LL);
    if ( started >= 0 )
    {
      for ( i = 0; ; i = v7 + v30 )
      {
        v30 = i;
        if ( i >= v42 )
          break;
        v14 = v41 + 32LL * i;
        v34 = v14;
        for ( j = *(_WORD *)v14;
              j && !*(_WORD *)(*(_QWORD *)(v14 + 8) + 2 * (((unsigned __int64)j - v7) >> 1));
              *(_WORD *)v14 = j )
        {
          j -= 2;
        }
        LODWORD(Size) = -1;
        v16 = *(_WORD *)(v36 + 66);
        while ( v16 >= 0 )
        {
          KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)&v38, v16);
          if ( *(_WORD *)(KcbAtLayerHeight + 66) )
          {
            if ( *(_BYTE *)(KcbAtLayerHeight + 65) == (_BYTE)v28 )
              break;
          }
          if ( *(_DWORD *)(KcbAtLayerHeight + 40) == -1 )
          {
            --v16;
          }
          else
          {
            KeyNodeForKcb = CmpGetKeyNodeForKcb(KcbAtLayerHeight, (__int64)&v33, 0);
            started = CmpFindNameInListWithStatus(
                        *(_QWORD *)(KcbAtLayerHeight + 32),
                        (unsigned int *)(KeyNodeForKcb + 36),
                        v14,
                        0,
                        0LL,
                        (__int64)&Size);
            (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 32) + 16LL))(
              *(_QWORD *)(KcbAtLayerHeight + 32),
              &v33);
            if ( started >= 0 )
            {
              v9 = KcbAtLayerHeight;
              v35 = KcbAtLayerHeight;
              break;
            }
            if ( started != -1073741772 )
              goto LABEL_23;
            if ( *(_WORD *)(KcbAtLayerHeight + 66) && *(_BYTE *)(KcbAtLayerHeight + 65) )
              break;
            --v16;
            v14 = v34;
          }
        }
        v19 = Size;
        if ( (_DWORD)Size == -1 )
        {
          started = -1073741772;
LABEL_23:
          LOBYTE(v7) = v28;
          goto LABEL_44;
        }
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 8LL))(
               *(_QWORD *)(v9 + 32),
               (unsigned int)Size,
               &v32);
        v37 = v8;
        if ( CmpIsValueTombstone(*(_QWORD *)(v9 + 32), v8) )
        {
          started = -1073741772;
LABEL_26:
          LOBYTE(v7) = v28;
          goto LABEL_45;
        }
        v21 = *(_DWORD *)(v8 + 4);
        if ( v21 >= 0x80000000 )
          v21 += 0x80000000;
        LODWORD(Size) = v21;
        v11 = (v11 + 7) & 0xFFFFFFF8;
        v22 = (v27 + 7) & 0xFFFFFFF8;
        v27 = v22;
        if ( v25 || v21 + v11 > *a5 || v21 + v11 < v11 )
        {
          v7 = v28;
          v25 = v28;
        }
        else
        {
          if ( !CmpGetValueData(v20, v19, v8, (unsigned int *)&Size, (__int64)&Src, (__int64)v26, (__int64)&v31) )
          {
            started = -1073741670;
            v10 = Src;
            goto LABEL_26;
          }
          v21 = Size;
          memmove((char *)v43 + v11, Src, (unsigned int)Size);
          v23 = v34;
          *(_DWORD *)(v34 + 24) = *(_DWORD *)(v8 + 12);
          *(_DWORD *)(v23 + 16) = v21;
          *(_DWORD *)(v23 + 20) = v11;
          v11 += v21;
          if ( v26[0] )
            ExFreePoolWithTag(Src, 0);
          else
            (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 16LL))(*(_QWORD *)(v9 + 32), &v31);
          v10 = 0LL;
          Src = 0LL;
          v20 = *(_QWORD *)(v9 + 32);
          v7 = v28;
          v22 = v27;
        }
        v27 = v21 + v22;
        (*(void (__fastcall **)(__int64, __int64 *))(v20 + 16))(v20, &v32);
      }
      *a5 = v11;
      if ( a6 )
        *a6 = v27;
      started = -2147483643;
      if ( !v25 )
        started = 0;
LABEL_44:
      v8 = 0LL;
    }
  }
LABEL_45:
  if ( v10 )
  {
    if ( v26[0] )
      ExFreePoolWithTag(v10, 0);
    else
      (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 16LL))(*(_QWORD *)(v9 + 32), &v31);
  }
  if ( v8 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 16LL))(*(_QWORD *)(v9 + 32), &v32);
  if ( (_BYTE)v7 )
    CmpUnlockKcbStack((__int64)&v38);
  if ( *((_QWORD *)&v39 + 1) )
    CmSiFreeMemory(*((PPRIVILEGE_SET *)&v39 + 1));
  return (unsigned int)started;
}
