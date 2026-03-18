/*
 * XREFs of CmEnumerateValueFromLayeredKey @ 0x1408678C0
 * Callers:
 *     CmEnumerateValueKey @ 0x14061EA20 (CmEnumerateValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14061ABF0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpGetKcbAtLayerHeight @ 0x14061CD58 (CmpGetKcbAtLayerHeight.c)
 *     CmpQueryKeyValueData @ 0x140620F80 (CmpQueryKeyValueData.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1406231D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockKcbStackShared @ 0x1406260F0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x140626150 (CmpUnlockKcbStack.c)
 *     CmpGetKeyNodeForKcb @ 0x140692A30 (CmpGetKeyNodeForKcb.c)
 *     CmpValueEnumStackAdvance @ 0x140715DE4 (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackCleanup @ 0x1407160C0 (CmpValueEnumStackCleanup.c)
 *     CmpValueEnumStackInitialize @ 0x1407163CC (CmpValueEnumStackInitialize.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x1408773CC (CmpValueEnumStackStartFromKcbStack.c)
 */

__int64 __fastcall CmEnumerateValueFromLayeredKey(
        __int64 a1,
        unsigned int a2,
        int a3,
        size_t a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v7; // r12
  char v8; // r14
  __int64 v9; // rdx
  __int64 KcbAtLayerHeight; // rsi
  __int64 v11; // r15
  __int64 v12; // r8
  struct _LOOKASIDE_LIST_EX *v13; // r9
  int started; // edi
  __int16 v15; // dx
  __int16 v16; // dx
  char v17; // r9
  __int16 v18; // r10
  int v19; // ebx
  unsigned int v20; // edi
  __int64 v21; // r13
  __int64 KeyNodeForKcb; // rax
  __int64 v23; // rbx
  __int64 v25; // [rsp+40h] [rbp-A9h] BYREF
  __int64 v26; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v27; // [rsp+50h] [rbp-99h] BYREF
  int v28; // [rsp+58h] [rbp-91h]
  __int128 v29; // [rsp+60h] [rbp-89h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+70h] [rbp-79h]
  __int64 v31; // [rsp+80h] [rbp-69h]
  size_t Size; // [rsp+88h] [rbp-61h]
  int v33[24]; // [rsp+90h] [rbp-59h] BYREF

  v7 = a2;
  v28 = a3;
  Size = a4;
  v31 = a6;
  memset(v33, 0, 0x58uLL);
  v29 = 0LL;
  WORD1(v29) = -1;
  v8 = 0;
  *(_OWORD *)Privileges = 0LL;
  CmpValueEnumStackInitialize(v33);
  v9 = *(_QWORD *)(a1 + 8);
  KcbAtLayerHeight = 0LL;
  v11 = 0LL;
  v27 = 0xFFFFFFFFLL;
  v25 = 0xFFFFFFFFLL;
  v26 = 0xFFFFFFFFLL;
  started = CmpStartKcbStackForTopLayerKcb((__int64)&v29, v9, v12, v13);
  if ( started < 0 )
    goto LABEL_22;
  CmpLockKcbStackShared((__int64)&v29);
  v8 = 1;
  if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
  {
    started = (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
    goto LABEL_22;
  }
  v15 = WORD1(v29);
  if ( SWORD1(v29) <= 0 )
    goto LABEL_15;
  do
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)&v29, v15);
    if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
      v17 = 1;
    v15 = v18 + v16;
  }
  while ( v15 > 0 );
  if ( !v17 )
  {
LABEL_15:
    KcbAtLayerHeight = *((_QWORD *)&v29 + 1);
    v21 = *((_QWORD *)&v29 + 1);
    KeyNodeForKcb = CmpGetKeyNodeForKcb(*((__int64 *)&v29 + 1), (__int64)&v25, 0);
    v11 = KeyNodeForKcb;
    if ( *(_DWORD *)(KeyNodeForKcb + 36) <= (unsigned int)v7 )
    {
      started = -2147483622;
      goto LABEL_22;
    }
    v20 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 32) + 8LL))(
                        *(_QWORD *)(KcbAtLayerHeight + 32),
                        *(unsigned int *)(KeyNodeForKcb + 40),
                        &v26)
                    + 4 * v7);
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 32) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 32),
      &v26);
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 32) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 32),
      &v25);
    goto LABEL_18;
  }
  started = CmpValueEnumStackStartFromKcbStack(v33, &v29);
  if ( started < 0 )
    goto LABEL_22;
  started = CmpValueEnumStackAdvance((__int64)v33);
  if ( started < 0 )
    goto LABEL_22;
  v19 = 0;
  if ( !(_DWORD)v7 )
  {
LABEL_14:
    v20 = v33[0];
    v21 = CmpGetKcbAtLayerHeight((__int64)&v29, SHIWORD(v33[1]));
LABEL_18:
    v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v21 + 32) + 8LL))(
            *(_QWORD *)(v21 + 32),
            v20,
            &v27);
    started = CmpQueryKeyValueData(v21, v20, v23, v28, (_DWORD *)Size, a5, (unsigned int *)v31);
    if ( started >= 0 )
      started = 0;
    v11 = 0LL;
    if ( v23 )
      (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v21 + 32) + 16LL))(*(_QWORD *)(v21 + 32), &v27);
    goto LABEL_22;
  }
  while ( 1 )
  {
    started = CmpValueEnumStackAdvance((__int64)v33);
    if ( started < 0 )
      break;
    if ( ++v19 >= (unsigned int)v7 )
      goto LABEL_14;
  }
LABEL_22:
  CmpValueEnumStackCleanup((__int64)v33);
  if ( v11 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 32) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 32),
      &v25);
  if ( v8 )
    CmpUnlockKcbStack((__int64)&v29);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  return (unsigned int)started;
}
