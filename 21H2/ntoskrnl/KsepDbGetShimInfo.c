/*
 * XREFs of KsepDbGetShimInfo @ 0x1408BF97C
 * Callers:
 *     KsepEngineGetShimsFromRegistry @ 0x14075B90C (KsepEngineGetShimsFromRegistry.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140371274 (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x14037129C (KsepPoolAllocatePaged.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KseShimDatabaseClose @ 0x140758F48 (KseShimDatabaseClose.c)
 *     KsepDbFreeDriverShims @ 0x1407590F0 (KsepDbFreeDriverShims.c)
 *     SdbFindFirstStringIndexedTag @ 0x140759DC0 (SdbFindFirstStringIndexedTag.c)
 *     SdbReadDWORDTag @ 0x140759F54 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x14075A344 (SdbFindFirstTag.c)
 *     KseShimDatabaseOpen @ 0x14075B2A0 (KseShimDatabaseOpen.c)
 *     SdbTagRefToTagID @ 0x1407C25B0 (SdbTagRefToTagID.c)
 *     SdbTagIDToTagRef @ 0x1407CD6D0 (SdbTagIDToTagRef.c)
 *     KsepDbGetSdbString @ 0x1408BF948 (KsepDbGetSdbString.c)
 *     SdbReadGUIDTag @ 0x140966430 (SdbReadGUIDTag.c)
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
  const WCHAR *v13; // r9
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
  __int64 v27; // r9
  unsigned int v28; // eax
  __int64 v29; // r9
  _DWORD *v30; // r8
  char *v31; // r9
  __int128 v32; // xmm0
  __int64 v34; // [rsp+28h] [rbp-99h]
  __int64 v35; // [rsp+30h] [rbp-91h]
  __int64 v36; // [rsp+38h] [rbp-89h] BYREF
  __int128 v37; // [rsp+48h] [rbp-79h] BYREF
  __int64 v38; // [rsp+58h] [rbp-69h] BYREF
  __int64 v39; // [rsp+60h] [rbp-61h]
  __int64 v40; // [rsp+68h] [rbp-59h]
  __int64 v41; // [rsp+70h] [rbp-51h]
  _OWORD v42[2]; // [rsp+78h] [rbp-49h] BYREF
  __int64 v43; // [rsp+98h] [rbp-29h]
  char v44[24]; // [rsp+A0h] [rbp-21h] BYREF
  __int128 v45; // [rsp+B8h] [rbp-9h]

  v41 = a1;
  v2 = a1;
  LODWORD(v36) = 0;
  v38 = 0LL;
  v45 = 0LL;
  v3 = 0LL;
  *(_QWORD *)&v37 = 0LL;
  v4 = a2;
  v5 = KseShimDatabaseOpen(&v37);
  v6 = (__int64 *)v37;
  SdbString = v5;
  if ( v5 >= 0 )
  {
    v8 = (unsigned int)v4;
    Paged = (__m128i *)KsepPoolAllocatePaged(80 * v4);
    HIDWORD(v36) = 0;
    v3 = Paged;
    v10 = *v6;
    SdbString = -1073741275;
    v39 = *v6;
    if ( (_DWORD)v4 )
    {
      v11 = Paged + 4;
      v12 = v2 - (_QWORD)Paged;
      v40 = v2 - (_QWORD)v3;
      while ( 1 )
      {
        v13 = *(const WCHAR **)((char *)&v11[-2] + v12 - 8);
        v14 = *(void **)(v10 + 8);
        LODWORD(v37) = 0;
        v43 = 0LL;
        memset(v42, 0, sizeof(v42));
        FirstStringIndexedTag = SdbFindFirstStringIndexedTag(v14, 28709LL, 24577, v13, (unsigned int *)v42);
        v16 = (__int64)v14;
        v17 = v39;
        v18 = SdbTagIDToTagRef(v39, v16, FirstStringIndexedTag, (int *)&v37);
        v19 = v18 != 0 ? v37 : 0;
        if ( !v19 )
          break;
        if ( (unsigned int)SdbTagRefToTagID(v17, v19, &v38, (int *)&v36) )
        {
          v20 = v38;
          FirstTag = SdbFindFirstTag(v38, (unsigned int)v36, 36880);
          if ( !FirstTag )
            break;
          v37 = 0LL;
          v22 = (__m128i *)SdbReadGUIDTag(v44, v20, FirstTag, &v37, v34, v35, v36);
          v23 = *v22;
          v24 = v22->m128i_i64[0] - v45;
          if ( !v24 )
            v24 = _mm_srli_si128(v23, 8).m128i_u64[0] - *((_QWORD *)&v45 + 1);
          if ( !v24 )
            break;
          v25 = (unsigned int)v36;
          v11[-4] = v23;
          v26 = SdbFindFirstTag(v20, v25, 24579);
          if ( !v26 )
            break;
          SdbString = KsepDbGetSdbString(v20, v26, (__int64)v3[5 * HIDWORD(v36) + 2].m128i_i64, v27);
          if ( SdbString < 0 )
            break;
          v28 = SdbFindFirstTag(v20, (unsigned int)v36, 16407);
          if ( !v28 )
            break;
          v11->m128i_i32[0] = SdbReadDWORDTag(v20, v28, 0LL, v29);
        }
        v11 += 5;
        v10 = v39;
        ++HIDWORD(v36);
        v12 = v40;
        if ( HIDWORD(v36) >= (unsigned int)v4 )
        {
          v2 = v41;
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
        v30 = (_DWORD *)(v2 + 64);
        v31 = &v3->m128i_i8[-v2];
        do
        {
          *v30 = *(_DWORD *)((char *)v30 + (_QWORD)v31);
          v32 = *(_OWORD *)((char *)v30 + (_QWORD)v31 - 32);
          v30 += 20;
          *((_OWORD *)v30 - 7) = v32;
          *((_OWORD *)v30 - 9) = *(_OWORD *)((char *)v30 + (_QWORD)v31 - 144);
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
