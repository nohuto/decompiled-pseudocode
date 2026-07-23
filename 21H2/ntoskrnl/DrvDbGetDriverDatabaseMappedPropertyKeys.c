/*
 * XREFs of DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x14097D584
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x140630C80 (DrvDbDispatchDriverDatabase.c)
 * Callees:
 *     _PnpCtxRegCloseKey @ 0x1406306B4 (_PnpCtxRegCloseKey.c)
 *     DrvDbOpenObjectRegKey @ 0x140635220 (DrvDbOpenObjectRegKey.c)
 *     _RegRtlQueryValue @ 0x140637128 (_RegRtlQueryValue.c)
 *     DrvDbFindDatabaseNode @ 0x1406F1CEC (DrvDbFindDatabaseNode.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140735BC4 (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbGetCompositeMappedPropertyKeys @ 0x14097D42C (DrvDbGetCompositeMappedPropertyKeys.c)
 */

__int64 __fastcall DrvDbGetDriverDatabaseMappedPropertyKeys(
        __int64 a1,
        const WCHAR *a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  int *v6; // r13
  unsigned int v7; // r15d
  const WCHAR *v8; // r12
  __int64 v9; // rdi
  __int64 v10; // r14
  unsigned int v11; // esi
  signed int CompositeMappedPropertyKeys; // ebx
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  HANDLE v16; // rax
  __int64 (**v17)[3]; // r14
  unsigned int v18; // r12d
  const WCHAR *v19; // rdx
  signed int Value; // eax
  __int64 *v21; // rdx
  void *v22; // rax
  __int64 v23; // r14
  __int64 (**v24)[3]; // rsi
  unsigned int v25; // r12d
  const WCHAR *v26; // rdx
  signed int v27; // eax
  __int64 *v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // edx
  int v31; // eax
  __int64 v33; // [rsp+20h] [rbp-60h]
  unsigned int *v34; // [rsp+28h] [rbp-58h]
  __int64 v35; // [rsp+28h] [rbp-58h]
  __int64 v36; // [rsp+50h] [rbp-30h] BYREF
  const UNICODE_STRING *v37; // [rsp+58h] [rbp-28h] BYREF
  void *v38; // [rsp+60h] [rbp-20h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-18h] BYREF
  HANDLE v40; // [rsp+70h] [rbp-10h]

  v6 = (int *)a6;
  v7 = a5;
  v8 = a2;
  v34 = a6;
  v9 = a4;
  v37 = 0LL;
  v38 = 0LL;
  v10 = a1;
  KeyHandle = 0LL;
  v11 = 0;
  *a6 = 0;
  CompositeMappedPropertyKeys = DrvDbGetCompositeMappedPropertyKeys(a1, (_OWORD **)off_140C02CB0, 7u, a4, a5, v34);
  if ( CompositeMappedPropertyKeys < 0 )
    return (unsigned int)CompositeMappedPropertyKeys;
  v14 = (unsigned int)*v6;
  if ( (_DWORD)v14 )
  {
    if ( v13 )
      v9 = v13 + 20 * v14;
    v7 = a5 - v14;
  }
  CompositeMappedPropertyKeys = DrvDbFindDatabaseNode(v10, v8, &v37);
  if ( CompositeMappedPropertyKeys < 0 )
    return (unsigned int)CompositeMappedPropertyKeys;
  if ( ((__int64)v37[3].Buffer & 0x10) != 0 )
  {
    LOBYTE(v35) = 0;
    LODWORD(v33) = 1;
    CompositeMappedPropertyKeys = DrvDbOpenObjectRegKey(
                                    (__int64 *)v10,
                                    *(__int64 **)(v10 + 32),
                                    1u,
                                    v8,
                                    v33,
                                    v35,
                                    &KeyHandle,
                                    0LL,
                                    0LL);
    if ( CompositeMappedPropertyKeys < 0 )
      goto LABEL_47;
    v16 = KeyHandle;
    v17 = &off_140009E50;
    LODWORD(a6) = 0;
    v40 = KeyHandle;
    v18 = 0;
    while ( 1 )
    {
      v19 = (const WCHAR *)v17[2];
      LODWORD(v36) = 0;
      Value = RegRtlQueryValue(v16, v19, 0LL, 0LL, (unsigned int *)&v36);
      CompositeMappedPropertyKeys = Value;
      if ( Value != -1073741772 )
      {
        if ( Value && Value != -1073741789 )
          goto LABEL_22;
        if ( v9 && (unsigned int)a6 < v7 )
        {
          v21 = (__int64 *)*v17;
          v15 = 5LL * (unsigned int)a6;
          LODWORD(a6) = (_DWORD)a6 + 1;
          *(_OWORD *)(v9 + 4 * v15) = *(_OWORD *)v21;
          *(_DWORD *)(v9 + 4 * v15 + 16) = *((_DWORD *)v21 + 4);
        }
        if ( v11 + 1 < v11 )
        {
          CompositeMappedPropertyKeys = -1073741675;
          v11 = 0;
          goto LABEL_22;
        }
        ++v11;
      }
      ++v18;
      v17 += 5;
      if ( v18 >= 4 )
        break;
      v16 = v40;
    }
    CompositeMappedPropertyKeys = 0;
LABEL_22:
    if ( CompositeMappedPropertyKeys < 0 )
      goto LABEL_47;
    if ( v11 )
    {
      if ( v9 )
      {
        v15 = 5LL * v11;
        v9 += 20LL * v11;
      }
      v7 -= v11;
    }
    if ( ((__int64)v37[3].Buffer & 4) != 0 )
    {
      CompositeMappedPropertyKeys = 0;
      goto LABEL_47;
    }
    v10 = a1;
    v8 = a2;
  }
  v22 = a3;
  if ( !a3 )
  {
    CompositeMappedPropertyKeys = DrvDbOpenDriverDatabaseRegKey(
                                    (const UNICODE_STRING **)v10,
                                    v8,
                                    1u,
                                    0,
                                    (__int64)&v38,
                                    0LL);
    if ( CompositeMappedPropertyKeys < 0 )
      goto LABEL_47;
    v22 = v38;
    a3 = v38;
  }
  v23 = 0LL;
  v24 = &off_140004BA0;
  v25 = 0;
  while ( 1 )
  {
    v26 = (const WCHAR *)v24[2];
    LODWORD(a6) = 0;
    v27 = RegRtlQueryValue(v22, v26, 0LL, 0LL, (unsigned int *)&a6);
    CompositeMappedPropertyKeys = v27;
    if ( v27 == -1073741772 )
    {
      CompositeMappedPropertyKeys = 0;
      goto LABEL_44;
    }
    if ( v27 && v27 != -1073741789 )
      goto LABEL_47;
    if ( v9 && (unsigned int)v23 < v7 )
    {
      v28 = (__int64 *)*v24;
      v29 = 5 * v23;
      v23 = (unsigned int)(v23 + 1);
      *(_OWORD *)(v9 + 4 * v29) = *(_OWORD *)*v24;
      *(_DWORD *)(v9 + 4 * v29 + 16) = *((_DWORD *)v28 + 4);
    }
    v30 = *v6;
    v31 = -1;
    v15 = (unsigned int)(*v6 + 1);
    if ( (unsigned int)v15 >= *v6 )
      v31 = *v6 + 1;
    CompositeMappedPropertyKeys = (unsigned int)v15 < v30 ? 0xC0000095 : 0;
    *v6 = v31;
    if ( (unsigned int)v15 < v30 )
      break;
LABEL_44:
    v22 = a3;
    ++v25;
    v24 += 5;
    if ( v25 >= 0xC )
      goto LABEL_47;
  }
  *v6 = 0;
LABEL_47:
  if ( v38 )
    PnpCtxRegCloseKey(v15, v38);
  if ( KeyHandle )
    PnpCtxRegCloseKey(v15, KeyHandle);
  return (unsigned int)CompositeMappedPropertyKeys;
}
