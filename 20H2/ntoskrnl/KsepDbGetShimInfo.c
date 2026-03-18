/*
 * XREFs of KsepDbGetShimInfo @ 0x1408C205C
 * Callers:
 *     KsepEngineGetShimsFromRegistry @ 0x140754898 (KsepEngineGetShimsFromRegistry.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140371034 (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x14037105C (KsepPoolAllocatePaged.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KseShimDatabaseClose @ 0x140751FB8 (KseShimDatabaseClose.c)
 *     KsepDbFreeDriverShims @ 0x140752160 (KsepDbFreeDriverShims.c)
 *     SdbFindFirstStringIndexedTag @ 0x140752E30 (SdbFindFirstStringIndexedTag.c)
 *     SdbReadDWORDTag @ 0x140752FC4 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x1407533B4 (SdbFindFirstTag.c)
 *     KseShimDatabaseOpen @ 0x14075422C (KseShimDatabaseOpen.c)
 *     SdbTagRefToTagID @ 0x1407BDC90 (SdbTagRefToTagID.c)
 *     SdbTagIDToTagRef @ 0x1407C92A0 (SdbTagIDToTagRef.c)
 *     KsepDbGetSdbString @ 0x1408C2028 (KsepDbGetSdbString.c)
 *     SdbReadGUIDTag @ 0x1409689DC (SdbReadGUIDTag.c)
 */

__int64 __fastcall KsepDbGetShimInfo(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __m128i *v3; // rsi
  __int64 v4; // r14
  int v5; // eax
  __int64 *v6; // r13
  int SdbString; // edi
  __int64 v8; // r15
  __m128i *Paged; // rax
  __int64 v10; // rcx
  __m128i *v11; // r12
  __int64 v12; // rax
  __int64 v13; // r9
  void *v14; // rbx
  unsigned int FirstStringIndexedTag; // eax
  __int64 v16; // rdx
  __int64 v17; // rbx
  int v18; // eax
  unsigned int v19; // edx
  __int64 v20; // rbx
  unsigned int FirstTag; // eax
  __m128i *v22; // rax
  __m128i v23; // xmm1
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  unsigned int v26; // eax
  unsigned int v27; // eax
  _DWORD *v28; // r8
  char *v29; // r9
  __int128 v30; // xmm0
  __int64 v32; // [rsp+28h] [rbp-99h]
  __int64 v33; // [rsp+30h] [rbp-91h]
  __int64 v34; // [rsp+38h] [rbp-89h] BYREF
  __int128 v35; // [rsp+48h] [rbp-79h] BYREF
  __int64 v36; // [rsp+58h] [rbp-69h] BYREF
  __int64 v37; // [rsp+60h] [rbp-61h]
  __int64 v38; // [rsp+68h] [rbp-59h]
  __int64 v39; // [rsp+70h] [rbp-51h]
  _OWORD v40[2]; // [rsp+78h] [rbp-49h] BYREF
  __int64 v41; // [rsp+98h] [rbp-29h]
  char v42[24]; // [rsp+A0h] [rbp-21h] BYREF
  __int128 v43; // [rsp+B8h] [rbp-9h]

  v39 = a1;
  v2 = a1;
  LODWORD(v34) = 0;
  v36 = 0LL;
  v43 = 0LL;
  v3 = 0LL;
  *(_QWORD *)&v35 = 0LL;
  v4 = a2;
  v5 = KseShimDatabaseOpen(&v35);
  v6 = (__int64 *)v35;
  SdbString = v5;
  if ( v5 >= 0 )
  {
    v8 = (unsigned int)v4;
    Paged = (__m128i *)KsepPoolAllocatePaged(80 * v4);
    HIDWORD(v34) = 0;
    v3 = Paged;
    v10 = *v6;
    SdbString = -1073741275;
    v37 = *v6;
    if ( (_DWORD)v4 )
    {
      v11 = Paged + 4;
      v12 = v2 - (_QWORD)Paged;
      v38 = v2 - (_QWORD)v3;
      while ( 1 )
      {
        v13 = *(_QWORD *)((char *)&v11[-2] + v12 - 8);
        v14 = *(void **)(v10 + 8);
        LODWORD(v35) = 0;
        v41 = 0LL;
        memset(v40, 0, sizeof(v40));
        FirstStringIndexedTag = SdbFindFirstStringIndexedTag(v14, 28709LL, 24577, v13, (unsigned int *)v40);
        v16 = (__int64)v14;
        v17 = v37;
        v18 = SdbTagIDToTagRef(v37, v16, FirstStringIndexedTag, (int *)&v35);
        v19 = v18 != 0 ? v35 : 0;
        if ( !v19 )
          break;
        if ( (unsigned int)SdbTagRefToTagID(v17, v19, &v36, (int *)&v34) )
        {
          v20 = v36;
          FirstTag = SdbFindFirstTag(v36, (unsigned int)v34, 36880);
          if ( !FirstTag )
            break;
          v35 = 0LL;
          v22 = (__m128i *)SdbReadGUIDTag(v42, v20, FirstTag, &v35, v32, v33, v34);
          v23 = *v22;
          v24 = v22->m128i_i64[0] - v43;
          if ( !v24 )
            v24 = _mm_srli_si128(v23, 8).m128i_u64[0] - *((_QWORD *)&v43 + 1);
          if ( !v24 )
            break;
          v25 = (unsigned int)v34;
          v11[-4] = v23;
          v26 = SdbFindFirstTag(v20, v25, 24579);
          if ( !v26 )
            break;
          SdbString = KsepDbGetSdbString(v20, v26, (__int64)v3[5 * HIDWORD(v34) + 2].m128i_i64);
          if ( SdbString < 0 )
            break;
          v27 = SdbFindFirstTag(v20, (unsigned int)v34, 16407);
          if ( !v27 )
            break;
          v11->m128i_i32[0] = SdbReadDWORDTag(v20, v27, 0);
        }
        v11 += 5;
        v10 = v37;
        ++HIDWORD(v34);
        v12 = v38;
        if ( HIDWORD(v34) >= (unsigned int)v4 )
        {
          v2 = v39;
          goto LABEL_16;
        }
      }
    }
    else
    {
LABEL_16:
      SdbString = 0;
      if ( (_DWORD)v4 )
      {
        v28 = (_DWORD *)(v2 + 64);
        v29 = &v3->m128i_i8[-v2];
        do
        {
          *v28 = *(_DWORD *)((char *)v28 + (_QWORD)v29);
          v30 = *(_OWORD *)((char *)v28 + (_QWORD)v29 - 32);
          v28 += 20;
          *((_OWORD *)v28 - 7) = v30;
          *((_OWORD *)v28 - 9) = *(_OWORD *)((char *)v28 + (_QWORD)v29 - 144);
          --v8;
        }
        while ( v8 );
      }
    }
  }
  if ( v6 )
    KseShimDatabaseClose((__int64)v6);
  if ( SdbString >= 0 )
    KsepPoolFreePaged(v3);
  else
    KsepDbFreeDriverShims(v3, v4);
  return (unsigned int)SdbString;
}
