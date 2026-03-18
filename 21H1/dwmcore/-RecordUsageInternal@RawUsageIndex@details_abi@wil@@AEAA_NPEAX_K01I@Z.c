/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180087224
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180086E10 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x180020CB0 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180086614 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x180086F24 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x180087534 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180087568 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x18008779C (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     _invalid_parameter_noinfo @ 0x1800E253E (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x1800EBD77 (memmove_0.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::RecordUsageInternal(
        wil::details_abi::RawUsageIndex *this,
        void *a2,
        unsigned __int64 a3,
        void *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  __int64 v6; // rbx
  char *v10; // rbx
  unsigned __int8 *v11; // r8
  int v12; // eax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned int v15; // edx
  void *v16; // r12
  int v18; // r14d
  char v19; // r13
  __int16 v20; // cx
  unsigned __int64 Size; // rax
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rsi
  char *v26; // rcx
  size_t v27; // r9
  size_t v28; // r8
  char *v29; // r8
  unsigned int v30; // esi
  char v31; // al
  unsigned int v32; // r14d
  void *Src; // [rsp+30h] [rbp-50h] BYREF
  __int16 v34; // [rsp+38h] [rbp-48h] BYREF
  char v35; // [rsp+3Ah] [rbp-46h]
  unsigned int v36; // [rsp+3Ch] [rbp-44h]
  __int16 v37; // [rsp+40h] [rbp-40h]
  __int128 v38; // [rsp+48h] [rbp-38h]
  __int16 v39; // [rsp+58h] [rbp-28h] BYREF
  char v40; // [rsp+5Ah] [rbp-26h]
  unsigned int v41; // [rsp+5Ch] [rbp-24h]
  __int16 v42; // [rsp+60h] [rbp-20h]
  __int128 v43; // [rsp+68h] [rbp-18h]

  v6 = *((_QWORD *)this + 3);
  if ( !v6 )
    return 0;
  v34 = *((_WORD *)this + 1);
  v10 = (char *)(v6 + 10);
  v35 = *((_BYTE *)this + 4);
  v36 = 0;
  v37 = 0;
  v38 = 0LL;
  while ( 1 )
  {
    v11 = (unsigned __int8 *)*((_QWORD *)this + 4);
    Src = v10;
    if ( !wil::details_abi::UsageIndexProperty::Read(
            (wil::details_abi::UsageIndexProperty *)&v34,
            (unsigned __int8 **)&Src,
            v11) )
    {
      v10 = (char *)Src;
      *((_QWORD *)this + 4) = Src;
LABEL_13:
      *(_QWORD *)&v38 = 0LL;
      v18 = 1;
      v37 = a3;
      v36 = 1;
      *((_QWORD *)&v38 + 1) = a2;
      wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v34);
      v16 = a4;
      v19 = 0;
      goto LABEL_14;
    }
    v12 = wil::details_abi::UsageIndexProperty::Compare((wil::details_abi::UsageIndexProperty *)&v34, a2, a3);
    if ( v12 < 0 )
    {
      Src = v10;
      goto LABEL_13;
    }
    if ( !v12 )
      break;
    v13 = *((_QWORD *)this + 2);
    v10 = (char *)Src;
    if ( v13 )
    {
      v14 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / v13;
      v15 = v36;
      if ( v36 > v14 )
      {
        wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v34, v14);
        v13 = *((_QWORD *)this + 2);
        v15 = v36;
      }
      v10 += v13 * v15;
    }
    else
    {
      v30 = 0;
      v39 = *((_WORD *)this + 3);
      v31 = *((_BYTE *)this + 8);
      v41 = 0;
      v42 = 0;
      v32 = v36;
      v40 = v31;
      v43 = 0LL;
      if ( v36 )
      {
        do
        {
          if ( !wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v39,
                  (unsigned __int8 **)&Src,
                  *((unsigned __int8 **)this + 4)) )
            break;
          ++v30;
        }
        while ( v30 < v32 );
        v10 = (char *)Src;
      }
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v34, v30);
    }
  }
  v16 = a4;
  Src = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
          this,
          (struct wil::details_abi::UsageIndexProperty *)&v34,
          (unsigned __int8 *)Src,
          a4,
          a5,
          a6);
  v10 = (char *)Src;
  if ( !Src )
    return 1;
  v19 = 1;
  v18 = v36;
LABEL_14:
  v20 = *((_WORD *)this + 3);
  *(_QWORD *)&v43 = 0LL;
  v39 = v20;
  v40 = *((_BYTE *)this + 8);
  v41 = a6;
  v42 = a5;
  *((_QWORD *)&v43 + 1) = v16;
  Size = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v39);
  v22 = *((_QWORD *)this + 5);
  v23 = *((_QWORD *)this + 4);
  v25 = v24 + Size;
  if ( ((v22 - v23) & -(__int64)(v23 < v22)) >= v24 + Size )
  {
    v26 = &v10[v25];
    v27 = v22 - v25 - (_QWORD)v10;
    v28 = v23 - (_QWORD)v10;
    if ( v28 )
    {
      if ( v26 && v10 )
      {
        if ( v27 >= v28 )
        {
          memmove_0(v26, v10, v28);
          goto LABEL_20;
        }
        *(_DWORD *)_o__errno(v26) = 34;
      }
      else
      {
        *(_DWORD *)_o__errno(v26) = 22;
      }
      invalid_parameter_noinfo();
    }
LABEL_20:
    v29 = (char *)(v25 + *((_QWORD *)this + 4));
    *((_QWORD *)this + 4) = v29;
    if ( v19 )
    {
      if ( v35 )
        wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v34, v18 + 1);
    }
    else
    {
      wil::details_abi::UsageIndexProperty::Write((wil::details_abi::UsageIndexProperty *)&v34, (char **)&Src, v29);
    }
    wil::details_abi::UsageIndexProperty::Write(
      (wil::details_abi::UsageIndexProperty *)&v39,
      (char **)&Src,
      *((char **)this + 4));
    *((_BYTE *)this + 56) = 1;
    return 1;
  }
  return 0;
}
