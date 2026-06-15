/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x140025FA0
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x140025E90 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x1400223C4 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x140022708 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x140023AD8 (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x140025A58 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z @ 0x1400276E8 (-SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x140027EEC (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x140028088 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     memmove_s @ 0x1400420A4 (memmove_s.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::RecordUsageInternal(
        wil::details_abi::RawUsageIndex *this,
        void *a2,
        size_t a3,
        void *a4,
        size_t a5,
        unsigned int a6)
{
  __int64 v6; // rdi
  unsigned __int8 *v11; // rdi
  char v12; // r15
  int v13; // eax
  int v15; // esi
  __int16 v17; // ax
  __int64 Size; // rax
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rdx
  unsigned __int8 *v23; // r8
  const void *v24; // [rsp+30h] [rbp-40h] BYREF
  __int16 v25; // [rsp+38h] [rbp-38h]
  __int128 v26; // [rsp+40h] [rbp-30h]
  __int16 v27; // [rsp+50h] [rbp-20h] BYREF
  char v28; // [rsp+52h] [rbp-1Eh]
  unsigned int v29; // [rsp+54h] [rbp-1Ch]
  __int16 v30; // [rsp+58h] [rbp-18h]
  __int64 v31; // [rsp+60h] [rbp-10h]
  void *v32; // [rsp+68h] [rbp-8h]
  void *Source; // [rsp+A0h] [rbp+30h] BYREF

  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    v11 = (unsigned __int8 *)(v6 + 10);
    LOWORD(v24) = *((_WORD *)this + 1);
    v12 = 0;
    BYTE2(v24) = *((_BYTE *)this + 4);
    Source = v11;
    HIDWORD(v24) = 0;
    v25 = 0;
    v26 = 0LL;
    while ( 1 )
    {
      if ( !wil::details_abi::UsageIndexProperty::Read(
              (wil::details_abi::UsageIndexProperty *)&v24,
              (unsigned __int8 **)&Source,
              *((unsigned __int8 **)this + 4)) )
      {
        v11 = (unsigned __int8 *)Source;
        *((_QWORD *)this + 4) = Source;
        goto LABEL_8;
      }
      v13 = wil::details_abi::UsageIndexProperty::Compare(&v24, a2, a3);
      if ( v13 < 0 )
      {
        Source = v11;
        goto LABEL_8;
      }
      if ( !v13 )
        break;
      v11 = wil::details_abi::RawUsageIndex::SkipValues(
              this,
              (struct wil::details_abi::UsageIndexProperty *)&v24,
              (unsigned __int8 *)Source);
      Source = v11;
    }
    Source = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
               this,
               (struct wil::details_abi::UsageIndexProperty *)&v24,
               (unsigned __int8 *)Source,
               a4,
               a5,
               a6);
    v11 = (unsigned __int8 *)Source;
    if ( !Source )
      return 1;
    v12 = 1;
LABEL_8:
    if ( v12 )
    {
      v15 = HIDWORD(v24);
    }
    else
    {
      *(_QWORD *)&v26 = 0LL;
      v15 = 1;
      HIDWORD(v24) = 1;
      v25 = a3;
      *((_QWORD *)&v26 + 1) = a2;
      wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v24);
    }
    v17 = *((_WORD *)this + 3);
    v31 = 0LL;
    v27 = v17;
    v28 = *((_BYTE *)this + 8);
    v29 = a6;
    v30 = a5;
    v32 = a4;
    Size = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v27);
    v19 = *((_QWORD *)this + 4);
    v21 = v20 + Size;
    v22 = *((_QWORD *)this + 5);
    if ( ((v22 - v19) & -(__int64)(v19 < v22)) >= v21 )
    {
      memmove_s(&v11[v21], v22 - v21 - (_QWORD)v11, v11, v19 - (_QWORD)v11);
      v23 = (unsigned __int8 *)(v21 + *((_QWORD *)this + 4));
      *((_QWORD *)this + 4) = v23;
      if ( v12 )
      {
        if ( BYTE2(v24) )
          wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v24, v15 + 1);
      }
      else
      {
        wil::details_abi::UsageIndexProperty::Write(
          (wil::details_abi::UsageIndexProperty *)&v24,
          (unsigned __int8 **)&Source,
          v23);
      }
      wil::details_abi::UsageIndexProperty::Write(
        (wil::details_abi::UsageIndexProperty *)&v27,
        (unsigned __int8 **)&Source,
        *((unsigned __int8 **)this + 4));
      *((_BYTE *)this + 56) = 1;
      return 1;
    }
  }
  return 0;
}
