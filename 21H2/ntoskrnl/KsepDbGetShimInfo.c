/*
 * XREFs of KsepDbGetShimInfo @ 0x1409638AC
 * Callers:
 *     KsepEngineGetShimsFromRegistry @ 0x14075CC14 (KsepEngineGetShimsFromRegistry.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1402D8494 (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x1402D84BC (KsepPoolAllocatePaged.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     SdbFindFirstStringIndexedTag @ 0x14075B7F4 (SdbFindFirstStringIndexedTag.c)
 *     KsepDbFreeDriverShims @ 0x14075C424 (KsepDbFreeDriverShims.c)
 *     KseShimDatabaseClose @ 0x14075C588 (KseShimDatabaseClose.c)
 *     KseShimDatabaseOpen @ 0x14075C68C (KseShimDatabaseOpen.c)
 *     SdbFindFirstTag @ 0x140792CCC (SdbFindFirstTag.c)
 *     SdbReadDWORDTag @ 0x1407ECF5C (SdbReadDWORDTag.c)
 *     SdbTagRefToTagID @ 0x140843CD4 (SdbTagRefToTagID.c)
 *     SdbTagIDToTagRef @ 0x14085CF70 (SdbTagIDToTagRef.c)
 *     KsepDbGetSdbString @ 0x140963878 (KsepDbGetSdbString.c)
 *     SdbReadGUIDTag @ 0x140A1329C (SdbReadGUIDTag.c)
 */

__int64 __fastcall KsepDbGetShimInfo(__int64 a1, unsigned int a2)
{
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
  char *v28; // rdx
  _DWORD *v29; // rcx
  __int128 v30; // xmm0
  unsigned int v32; // [rsp+38h] [rbp-89h] BYREF
  unsigned int v33; // [rsp+3Ch] [rbp-85h]
  __int128 v34; // [rsp+48h] [rbp-79h] BYREF
  __int64 v35; // [rsp+58h] [rbp-69h] BYREF
  __int64 v36; // [rsp+60h] [rbp-61h]
  __int64 v37; // [rsp+68h] [rbp-59h]
  __int64 v38; // [rsp+70h] [rbp-51h]
  _OWORD v39[2]; // [rsp+78h] [rbp-49h] BYREF
  __int64 v40; // [rsp+98h] [rbp-29h]
  char v41[24]; // [rsp+A0h] [rbp-21h] BYREF
  __int128 v42; // [rsp+B8h] [rbp-9h]

  v38 = a1;
  v32 = 0;
  v35 = 0LL;
  v42 = 0LL;
  v3 = 0LL;
  *(_QWORD *)&v34 = 0LL;
  v4 = a2;
  v5 = KseShimDatabaseOpen(&v34);
  v6 = (__int64 *)v34;
  SdbString = v5;
  if ( v5 >= 0 )
  {
    v8 = (unsigned int)v4;
    Paged = (__m128i *)KsepPoolAllocatePaged(80 * v4);
    v33 = 0;
    v3 = Paged;
    v10 = *v6;
    SdbString = -1073741275;
    v36 = *v6;
    if ( (_DWORD)v4 )
    {
      v11 = Paged + 4;
      v12 = a1 - (_QWORD)Paged;
      v37 = a1 - (_QWORD)v3;
      while ( 1 )
      {
        v13 = *(_QWORD *)((char *)&v11[-2] + v12 - 8);
        v14 = *(void **)(v10 + 8);
        LODWORD(v34) = 0;
        v40 = 0LL;
        memset(v39, 0, sizeof(v39));
        FirstStringIndexedTag = SdbFindFirstStringIndexedTag(v14, 28709LL, 24577, v13, (unsigned int *)v39);
        v16 = (__int64)v14;
        v17 = v36;
        v18 = SdbTagIDToTagRef(v36, v16, FirstStringIndexedTag, (int *)&v34);
        v19 = v18 != 0 ? v34 : 0;
        if ( !v19 )
          break;
        if ( (unsigned int)SdbTagRefToTagID(v17, v19, &v35, (int *)&v32) )
        {
          v20 = v35;
          FirstTag = SdbFindFirstTag(v35, v32, 36880);
          if ( !FirstTag )
            break;
          v34 = 0LL;
          v22 = (__m128i *)SdbReadGUIDTag(v41, v20, FirstTag, &v34);
          v23 = *v22;
          v24 = v22->m128i_i64[0] - v42;
          if ( !v24 )
            v24 = _mm_srli_si128(v23, 8).m128i_u64[0] - *((_QWORD *)&v42 + 1);
          if ( !v24 )
            break;
          v25 = v32;
          v11[-4] = v23;
          v26 = SdbFindFirstTag(v20, v25, 24579);
          if ( !v26 )
            break;
          SdbString = KsepDbGetSdbString(v20, v26, (__int64)v3[5 * v33 + 2].m128i_i64);
          if ( SdbString < 0 )
            break;
          v27 = SdbFindFirstTag(v20, v32, 16407);
          if ( !v27 )
            break;
          v11->m128i_i32[0] = SdbReadDWORDTag(v20, v27, 0);
        }
        v11 += 5;
        v10 = v36;
        ++v33;
        v12 = v37;
        if ( v33 >= (unsigned int)v4 )
        {
          v28 = &v3->m128i_i8[-v38];
          v29 = (_DWORD *)(v38 + 64);
          do
          {
            *v29 = *(_DWORD *)((char *)v29 + (_QWORD)v28);
            v30 = *(_OWORD *)((char *)v29 + (_QWORD)v28 - 32);
            v29 += 20;
            *((_OWORD *)v29 - 7) = v30;
            *((_OWORD *)v29 - 9) = *(_OWORD *)((char *)v29 + (_QWORD)v28 - 144);
            --v8;
          }
          while ( v8 );
          goto LABEL_17;
        }
      }
    }
    else
    {
LABEL_17:
      SdbString = 0;
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
