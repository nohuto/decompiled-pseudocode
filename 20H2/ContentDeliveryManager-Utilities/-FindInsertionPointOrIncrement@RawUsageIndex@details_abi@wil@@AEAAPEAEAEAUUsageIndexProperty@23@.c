/*
 * XREFs of ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180009DF0
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18000A0C4 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180009944 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     memcmp_0 @ 0x1800CDA2D (memcmp_0.c)
 */

unsigned __int8 *__fastcall wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::UsageIndexProperty *a2,
        unsigned __int8 *a3,
        void *a4,
        size_t Size,
        unsigned int a6)
{
  _DWORD *v6; // rdi
  int v7; // r12d
  char v8; // bl
  unsigned __int8 *v9; // r14
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  char v14; // al
  unsigned __int8 **v15; // r8
  rsize_t v16; // r9
  rsize_t v17; // rdx
  unsigned __int64 v18; // rsi
  size_t v19; // rdi
  __int64 v20; // rax
  unsigned __int8 *v21; // r8
  int v22; // ecx
  unsigned __int8 *v23; // r8
  int v24; // esi
  unsigned __int8 *v25; // r8
  bool v26; // zf
  char v27; // al
  unsigned __int8 **v28; // r8
  rsize_t v29; // r9
  bool v30; // di
  __int16 v31; // r9
  unsigned __int8 **p_Source; // r8
  rsize_t v33; // r9
  unsigned __int8 *v35; // [rsp+20h] [rbp-50h]
  __int16 v36; // [rsp+28h] [rbp-48h] BYREF
  char v37; // [rsp+2Ah] [rbp-46h]
  int Source; // [rsp+2Ch] [rbp-44h] BYREF
  unsigned __int16 v39; // [rsp+30h] [rbp-40h]
  void *Destination[2]; // [rsp+38h] [rbp-38h]
  __int16 v41; // [rsp+48h] [rbp-28h] BYREF
  char v42; // [rsp+4Ah] [rbp-26h]
  int v43; // [rsp+4Ch] [rbp-24h]
  unsigned __int16 v44; // [rsp+50h] [rbp-20h]
  void *Buf2[2]; // [rsp+58h] [rbp-18h]
  unsigned __int8 *v46; // [rsp+B0h] [rbp+40h] BYREF
  void *Buf1; // [rsp+C8h] [rbp+58h]

  Buf1 = a4;
  v6 = (_DWORD *)((char *)a2 + 4);
  v7 = -1;
  v36 = *((_WORD *)this + 3);
  v8 = 0;
  v37 = *((_BYTE *)this + 8);
  v9 = a3;
  Source = 0;
  v39 = 0;
  *(_OWORD *)Destination = 0LL;
  if ( *((_QWORD *)this + 2) )
  {
    v12 = (*((_QWORD *)this + 4) - (_QWORD)a3) / *((_QWORD *)this + 2);
    v13 = (unsigned int)*v6;
    if ( v13 <= v12 || (_DWORD)v13 == (_DWORD)v12 )
      goto LABEL_9;
    *v6 = v12;
    v14 = *((_BYTE *)a2 + 2);
    if ( v14 == 1 )
    {
      v15 = &v46;
      LOWORD(v46) = *(_WORD *)v6;
      v16 = 2LL;
      v17 = 2LL;
    }
    else
    {
      if ( v14 != 2 )
      {
LABEL_9:
        v18 = (unsigned int)*v6;
        v19 = Size;
        v20 = v18 * *((_QWORD *)this + 2);
        *(_OWORD *)Buf2 = 0LL;
        v43 = 0;
        v44 = 0;
        v35 = &v9[v20];
        v41 = *((_WORD *)this + 3);
        v42 = *((_BYTE *)this + 8);
        while ( v18 )
        {
          v21 = (unsigned __int8 *)*((_QWORD *)this + 4);
          v46 = &v9[(v18 >> 1) * *((_QWORD *)this + 2)];
          wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v41, &v46, v21);
          if ( v19 == v44 )
            v22 = memcmp_0(Buf1, Buf2[1], v19);
          else
            v22 = v19 - v44;
          if ( v22 <= 0 )
          {
            v18 >>= 1;
          }
          else
          {
            v9 = v46;
            v18 += -1LL - (v18 >> 1);
          }
        }
        if ( v9 < v35 )
        {
          v23 = (unsigned __int8 *)*((_QWORD *)this + 4);
          v46 = v9;
          wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v36, &v46, v23);
          if ( v19 == v39 )
            v7 = memcmp_0(Buf1, Destination[1], v19);
          else
            v7 = v19 - v39;
          goto LABEL_35;
        }
        return v9;
      }
      v16 = 4LL;
      v15 = (unsigned __int8 **)((char *)a2 + 4);
      v17 = 4LL;
    }
    memcpy_s(*((void *const *)a2 + 2), v17, v15, v16);
    goto LABEL_9;
  }
  v24 = 0;
  if ( !*v6 )
    return v9;
  while ( 1 )
  {
    v25 = (unsigned __int8 *)*((_QWORD *)this + 4);
    v46 = v9;
    if ( !wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v36, &v46, v25) )
      break;
    if ( Size == v39 )
      v7 = memcmp_0(Buf1, Destination[1], Size);
    else
      v7 = Size - v39;
    v26 = v7 == 0;
    if ( v7 <= 0 )
      goto LABEL_36;
    v9 = v46;
    if ( (unsigned int)++v24 >= *v6 )
      goto LABEL_35;
  }
  if ( *v6 != v24 )
  {
    v27 = *((_BYTE *)a2 + 2);
    *v6 = v24;
    if ( v27 == 1 )
    {
      LOWORD(v46) = v24;
      v28 = &v46;
      v29 = 2LL;
LABEL_34:
      memcpy_s(*((void *const *)a2 + 2), v29, v28, v29);
      goto LABEL_35;
    }
    if ( v27 == 2 )
    {
      v29 = 4LL;
      v28 = (unsigned __int8 **)v6;
      goto LABEL_34;
    }
  }
LABEL_35:
  v26 = v7 == 0;
LABEL_36:
  if ( !v26 )
    return v9;
  v30 = v37 != 0;
  if ( !v37 )
    goto LABEL_44;
  v31 = Source + a6;
  if ( Source == Source + a6 )
    goto LABEL_44;
  Source += a6;
  if ( v37 == 1 )
  {
    LOWORD(v46) = v31;
    p_Source = &v46;
    v33 = 2LL;
  }
  else
  {
    if ( v37 != 2 )
      goto LABEL_44;
    v33 = 4LL;
    p_Source = (unsigned __int8 **)&Source;
  }
  memcpy_s(Destination[0], v33, p_Source, v33);
LABEL_44:
  if ( v30 || *((_BYTE *)this + 56) )
    v8 = 1;
  *((_BYTE *)this + 56) = v8;
  return 0LL;
}
