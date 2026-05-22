/*
 * XREFs of ?SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z @ 0x18006749C
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x1800662C0 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180065D08 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x1800678D0 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 */

unsigned __int8 *__fastcall wil::details_abi::RawUsageIndex::SkipValues(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::UsageIndexProperty *a2,
        unsigned __int8 *a3)
{
  unsigned __int64 v4; // rcx
  unsigned __int8 *v5; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned int v9; // ebp
  __int16 v11; // [rsp+20h] [rbp-38h] BYREF
  char v12; // [rsp+22h] [rbp-36h]
  int v13; // [rsp+24h] [rbp-34h]
  __int16 v14; // [rsp+28h] [rbp-30h]
  __int128 v15; // [rsp+30h] [rbp-28h]
  unsigned __int8 *v16; // [rsp+70h] [rbp+18h] BYREF

  v16 = a3;
  v4 = *((_QWORD *)this + 2);
  v5 = a3;
  if ( v4 )
  {
    v7 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / v4;
    v8 = *((unsigned int *)a2 + 1);
    if ( v8 > v7 )
    {
      wil::details_abi::UsageIndexProperty::UpdateCount(a2, v7);
      LODWORD(v8) = *((_DWORD *)a2 + 1);
      v4 = *((_QWORD *)this + 2);
    }
    v5 += v4 * (unsigned int)v8;
  }
  else
  {
    v9 = 0;
    v11 = *((_WORD *)this + 3);
    v12 = *((_BYTE *)this + 8);
    v13 = 0;
    v14 = 0;
    v15 = 0LL;
    if ( *((_DWORD *)a2 + 1) )
    {
      do
      {
        if ( !wil::details_abi::UsageIndexProperty::Read(
                (wil::details_abi::UsageIndexProperty *)&v11,
                &v16,
                *((unsigned __int8 **)this + 4)) )
          break;
        ++v9;
      }
      while ( v9 < *((_DWORD *)a2 + 1) );
      v5 = v16;
    }
    wil::details_abi::UsageIndexProperty::UpdateCount(a2, v9);
  }
  return v5;
}
