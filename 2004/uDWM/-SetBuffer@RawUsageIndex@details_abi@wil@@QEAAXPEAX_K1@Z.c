/*
 * XREFs of ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180040660
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x18002F878 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x1800404D8 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180042450 (-MemoryFree@@YAXPEAX@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007DF70 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details_abi::RawUsageIndex::SetBuffer(
        wil::details_abi::RawUsageIndex *this,
        _WORD *a2,
        unsigned __int64 a3,
        const char *a4)
{
  void *v8; // rcx
  char v9; // al
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned __int64)a4 < 0xA )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x10AD,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil/Staging.h",
      a4);
    __debugbreak();
  }
  v8 = (void *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v8 )
    MemoryFree(v8);
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = (char *)a2 + a3;
  *((_QWORD *)this + 5) = &a4[(_QWORD)a2];
  *((_BYTE *)this + 57) = 0;
  if ( a3 < 0xA )
    goto LABEL_13;
  if ( *a2 || (v9 = 0, a2[1] > *(_WORD *)this) )
    v9 = 1;
  *((_BYTE *)this + 57) = v9;
  if ( *a2
    || a2[1] != *(_WORD *)this
    || a2[2] != *((_WORD *)this + 1)
    || *((_BYTE *)a2 + 8) != *((_BYTE *)this + 4)
    || a2[3] != *((_WORD *)this + 3)
    || *((_BYTE *)a2 + 9) != *((_BYTE *)this + 8) )
  {
LABEL_13:
    *a2 = 0;
    a2[1] = *(_WORD *)this;
    a2[2] = *((_WORD *)this + 1);
    *((_BYTE *)a2 + 8) = *((_BYTE *)this + 4);
    a2[3] = *((_WORD *)this + 3);
    *((_BYTE *)a2 + 9) = *((_BYTE *)this + 8);
    *((_QWORD *)this + 4) = *((_QWORD *)this + 3) + 10LL;
  }
}
