/*
 * XREFs of ?_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C01AD9E8
 * Callers:
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C01AD930 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C01ADB54 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z @ 0x1C01AEE04 (--0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?_CompareDescriptors@CCD_SET_STRING_ID@@AEBAHII@Z @ 0x1C03AA710 (-_CompareDescriptors@CCD_SET_STRING_ID@@AEBAHII@Z.c)
 */

void __fastcall CCD_SET_STRING_ID::_ParseMonitorDescriptors(CCD_SET_STRING_ID *this)
{
  char v2; // di
  unsigned __int16 v3; // si
  unsigned int v4; // ebp
  char v5; // dl
  void *v6; // rcx
  __int64 v7; // r9
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int16 v10; // bp
  unsigned int v11; // edi
  unsigned __int16 v12; // ax
  unsigned int v13; // r8d
  unsigned int v14; // edi
  unsigned int v15; // edi
  unsigned __int16 v16; // ax
  __int64 v17; // r14
  unsigned int v18; // esi
  __int64 v19; // r15
  unsigned int v20; // ebp
  unsigned __int16 v21; // r13
  unsigned __int16 v22; // r12
  int v23; // eax
  __int64 v24; // rsi
  __int64 v25; // rbp
  __int64 v26; // r14
  __int64 v27; // [rsp+60h] [rbp+8h]
  __int64 v28; // [rsp+68h] [rbp+10h]

  if ( !*((_WORD *)this + 4) )
  {
    *((_WORD *)this + 16) = 0;
    operator delete[](*((void **)this + 3));
    *((_QWORD *)this + 3) = 0LL;
    return;
  }
  v2 = 0;
  v3 = 1;
  v4 = 0;
  do
  {
    v5 = *(_BYTE *)(v4 + *((_QWORD *)this + 2));
    if ( v5 < 42 )
      goto LABEL_7;
    if ( v5 <= 43 )
    {
      ++v3;
      if ( v2 )
      {
        if ( v2 != 43 )
          goto LABEL_29;
      }
      else
      {
        v2 = 43;
      }
    }
    else if ( v5 == 94 || v5 == 126 )
    {
      ++v3;
      if ( !v2 )
      {
        v2 = *(_BYTE *)(v4 + *((_QWORD *)this + 2));
        goto LABEL_7;
      }
      if ( v2 != v5 )
LABEL_29:
        WdLogSingleEntry0(1LL);
    }
LABEL_7:
    ++v4;
  }
  while ( v4 < *((unsigned __int16 *)this + 4) );
  if ( v3 > *((_WORD *)this + 16) )
  {
    v6 = (void *)*((_QWORD *)this + 3);
    *((_WORD *)this + 16) = 0;
    operator delete[](v6);
    v8 = 8LL * v3;
    if ( !is_mul_ok(v3, 8uLL) )
      v8 = -1LL;
    v9 = operator new[](v8, 0x63644356u, 256LL, v7);
    *((_QWORD *)this + 3) = v9;
    if ( !v9 )
    {
      WdLogSingleEntry1(6LL, v3);
      *(_DWORD *)this = -1073741801;
      return;
    }
  }
  v10 = 0;
  v11 = 0;
  **((_QWORD **)this + 3) = 0LL;
  v12 = 1;
  LOWORD(v13) = *((_WORD *)this + 4);
  *((_WORD *)this + 16) = 1;
  if ( !(_WORD)v13 )
    goto LABEL_19;
  while ( 2 )
  {
    if ( *(_BYTE *)(v11 + *((_QWORD *)this + 2)) != 42 )
    {
      if ( *(_BYTE *)(v11 + *((_QWORD *)this + 2)) != 43
        && *(_BYTE *)(v11 + *((_QWORD *)this + 2)) != 94
        && *(_BYTE *)(v11 + *((_QWORD *)this + 2)) != 126 )
      {
        goto LABEL_17;
      }
      ++v10;
    }
    if ( v11 + 1 == (unsigned __int16)v13 )
    {
      *((_WORD *)this + 4) = v13 - 1;
    }
    else
    {
      v16 = *((_WORD *)this + 16);
      if ( v16 < v3 || (WdLogSingleEntry0(1LL), v16 = *((_WORD *)this + 16), v16 < v3) )
      {
        *(_WORD *)(*((_QWORD *)this + 3) + 8LL * v16) = v11 + 1;
        *(_WORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned __int16 *)this + 16) + 2) = v10;
        *(_WORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned __int16 *)this + 16) + 4) = 0;
        *(_WORD *)(*((_QWORD *)this + 3) + 8LL * *((unsigned __int16 *)this + 16) + 6) = (*((_WORD *)this + 16))++;
      }
    }
LABEL_17:
    v13 = *((unsigned __int16 *)this + 4);
    if ( ++v11 < v13 )
      continue;
    break;
  }
  v12 = *((_WORD *)this + 16);
LABEL_19:
  v14 = v12 - 1;
  if ( v12 != 1 )
  {
    v17 = 0LL;
    v18 = 1;
    v19 = v14;
    v27 = v14;
    do
    {
      v20 = v18;
      if ( v18 <= v14 )
      {
        do
        {
          v28 = *((_QWORD *)this + 3);
          v21 = *(_WORD *)(v28 + v17 + 6);
          v22 = *(_WORD *)(v28 + 8LL * v20 + 6);
          v23 = CCD_SET_STRING_ID::_CompareDescriptors(this, v21, v22);
          if ( v23 > 0 || !v23 && v21 > v22 )
          {
            *(_WORD *)(v28 + v17 + 6) = v22;
            *(_WORD *)(*((_QWORD *)this + 3) + 8LL * v20 + 6) = v21;
          }
          ++v20;
        }
        while ( v20 <= v14 );
        v19 = v27;
      }
      ++v18;
      v17 += 8LL;
      v27 = --v19;
    }
    while ( v19 );
    v12 = *((_WORD *)this + 16);
  }
  v15 = 1;
  if ( v12 > 1u )
  {
    do
    {
      v24 = *((_QWORD *)this + 3);
      v25 = *(unsigned __int16 *)(v24 + 8LL * (v15 - 1) + 6);
      v26 = *(unsigned __int16 *)(v24 + 8LL * v15 + 6);
      if ( !CCD_SET_STRING_ID::_CompareDescriptors(
              this,
              *(unsigned __int16 *)(v24 + 8LL * v15 + 6),
              *(unsigned __int16 *)(v24 + 8LL * (v15 - 1) + 6)) )
        *(_WORD *)(v24 + 8 * v26 + 4) = *(_WORD *)(v24 + 8 * v25 + 4) + 1;
      ++v15;
    }
    while ( v15 < *((unsigned __int16 *)this + 16) );
  }
}
