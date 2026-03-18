/*
 * XREFs of ?_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C012E2B8
 * Callers:
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z @ 0x1C012BE58 (--0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C012E200 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C012E424 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_CompareDescriptors@CCD_SET_STRING_ID@@AEBAHII@Z @ 0x1C02EF830 (-_CompareDescriptors@CCD_SET_STRING_ID@@AEBAHII@Z.c)
 */

void __fastcall CCD_SET_STRING_ID::_ParseMonitorDescriptors(CCD_SET_STRING_ID *this, __int64 a2)
{
  char v3; // di
  unsigned __int16 v4; // si
  unsigned int v5; // ebp
  void *v6; // rcx
  SIZE_T v7; // rax
  PVOID v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int16 v13; // bp
  unsigned int v14; // edi
  unsigned __int16 v15; // ax
  unsigned int v16; // r8d
  __int64 v17; // rdx
  unsigned int v18; // edi
  unsigned int v19; // edi
  __int64 v20; // rcx
  bool v21; // zf
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int16 v24; // ax
  __int64 v25; // rax
  __int64 v26; // r15
  unsigned int v27; // esi
  __int64 v28; // r14
  unsigned int v29; // ebp
  unsigned __int16 v30; // r13
  unsigned __int16 v31; // r12
  int v32; // eax
  __int64 v33; // rsi
  __int64 v34; // rbp
  __int64 v35; // r14
  __int64 v36; // [rsp+60h] [rbp+8h]
  __int64 v37; // [rsp+68h] [rbp+10h]

  if ( !*((_WORD *)this + 4) )
  {
    *((_WORD *)this + 16) = 0;
    operator delete[](*((void **)this + 3));
    *((_QWORD *)this + 3) = 0LL;
    return;
  }
  v3 = 0;
  v4 = 1;
  v5 = 0;
  do
  {
    LOBYTE(a2) = *(_BYTE *)(v5 + *((_QWORD *)this + 2));
    if ( (char)a2 < 42 )
      goto LABEL_7;
    if ( (char)a2 <= 43 )
    {
      ++v4;
      if ( !v3 )
      {
        v3 = 43;
        goto LABEL_7;
      }
      v21 = v3 == 43;
    }
    else
    {
      if ( (_BYTE)a2 != 94 && (_BYTE)a2 != 126 )
        goto LABEL_7;
      ++v4;
      if ( !v3 )
      {
        v3 = *(_BYTE *)(v5 + *((_QWORD *)this + 2));
        goto LABEL_7;
      }
      v21 = v3 == (char)a2;
    }
    if ( !v21 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v5, a2);
      WdLogEvent5_WdAssertion(v22);
    }
LABEL_7:
    ++v5;
  }
  while ( v5 < *((unsigned __int16 *)this + 4) );
  if ( v4 > *((_WORD *)this + 16) )
  {
    v6 = (void *)*((_QWORD *)this + 3);
    *((_WORD *)this + 16) = 0;
    operator delete[](v6);
    v7 = 8LL * v4;
    if ( !is_mul_ok(v4, 8uLL) )
      v7 = -1LL;
    v8 = operator new[](v7, 0x63644356u, PagedPool);
    *((_QWORD *)this + 3) = v8;
    if ( !v8 )
    {
      v23 = WdLogNewEntry5_WdLowResource(v10, v9, v11, v12);
      *(_QWORD *)(v23 + 24) = v4;
      WdLogEvent5_WdLowResource(v23);
      *(_DWORD *)this = -1073741801;
      return;
    }
  }
  v13 = 0;
  v14 = 0;
  **((_QWORD **)this + 3) = 0LL;
  v15 = 1;
  LOWORD(v16) = *((_WORD *)this + 4);
  *((_WORD *)this + 16) = 1;
  if ( !(_WORD)v16 )
    goto LABEL_19;
  while ( 2 )
  {
    v17 = (unsigned int)(*(char *)(v14 + *((_QWORD *)this + 2)) - 42);
    if ( *(_BYTE *)(v14 + *((_QWORD *)this + 2)) != 42 )
    {
      v17 = (unsigned int)(*(char *)(v14 + *((_QWORD *)this + 2)) - 43);
      if ( *(_BYTE *)(v14 + *((_QWORD *)this + 2)) != 43 )
      {
        v17 = (unsigned int)(*(char *)(v14 + *((_QWORD *)this + 2)) - 94);
        if ( *(_BYTE *)(v14 + *((_QWORD *)this + 2)) != 94 && *(_BYTE *)(v14 + *((_QWORD *)this + 2)) != 126 )
          goto LABEL_17;
      }
      ++v13;
    }
    v20 = v14 + 1;
    if ( (_DWORD)v20 == (unsigned __int16)v16 )
    {
      *((_WORD *)this + 4) = v16 - 1;
    }
    else
    {
      v24 = *((_WORD *)this + 16);
      if ( v24 < v4
        || (v25 = WdLogNewEntry5_WdAssertion(v20, v17),
            WdLogEvent5_WdAssertion(v25),
            v24 = *((_WORD *)this + 16),
            v24 < v4) )
      {
        *(_WORD *)(*((_QWORD *)this + 3) + 8LL * v24) = v14 + 1;
        *(_WORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned __int16 *)this + 16) + 2) = v13;
        *(_WORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned __int16 *)this + 16) + 4) = 0;
        *(_WORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned __int16 *)this + 16) + 6) = (*((_WORD *)this + 16))++;
      }
    }
LABEL_17:
    v16 = *((unsigned __int16 *)this + 4);
    if ( ++v14 < v16 )
      continue;
    break;
  }
  v15 = *((_WORD *)this + 16);
LABEL_19:
  v18 = v15 - 1;
  if ( v15 != 1 )
  {
    v26 = v18;
    v27 = 1;
    v36 = v18;
    v28 = 6LL;
    do
    {
      v29 = v27;
      if ( v27 <= v18 )
      {
        do
        {
          v37 = *((_QWORD *)this + 3);
          v30 = *(_WORD *)(v37 + v28);
          v31 = *(_WORD *)(v37 + 8LL * v29 + 6);
          v32 = CCD_SET_STRING_ID::_CompareDescriptors(this, v30, v31);
          if ( v32 > 0 || !v32 && v30 > v31 )
          {
            *(_WORD *)(v37 + v28) = v31;
            *(_WORD *)(*((_QWORD *)this + 3) + 8LL * v29 + 6) = v30;
          }
          ++v29;
        }
        while ( v29 <= v18 );
        v26 = v36;
      }
      ++v27;
      v28 += 8LL;
      v36 = --v26;
    }
    while ( v26 );
    v15 = *((_WORD *)this + 16);
  }
  v19 = 1;
  if ( v15 > 1u )
  {
    do
    {
      v33 = *((_QWORD *)this + 3);
      v34 = *(unsigned __int16 *)(v33 + 8LL * (v19 - 1) + 6);
      v35 = *(unsigned __int16 *)(v33 + 8LL * v19 + 6);
      if ( !CCD_SET_STRING_ID::_CompareDescriptors(
              this,
              *(unsigned __int16 *)(v33 + 8LL * v19 + 6),
              *(unsigned __int16 *)(v33 + 8LL * (v19 - 1) + 6)) )
        *(_WORD *)(v33 + 8 * v35 + 4) = *(_WORD *)(v33 + 8 * v34 + 4) + 1;
      ++v19;
    }
    while ( v19 < *((unsigned __int16 *)this + 16) );
  }
}
