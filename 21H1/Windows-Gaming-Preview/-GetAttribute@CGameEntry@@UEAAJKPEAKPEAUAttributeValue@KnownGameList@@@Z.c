/*
 * XREFs of ?GetAttribute@CGameEntry@@UEAAJKPEAKPEAUAttributeValue@KnownGameList@@@Z @ 0x180041CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CGameEntry::GetAttribute(
        CGameEntry *this,
        unsigned int a2,
        unsigned int *a3,
        struct KnownGameList::AttributeValue *a4)
{
  __int64 v5; // rdx
  __int64 v7; // rdx
  unsigned int v8; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    v5 = 1258LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  if ( !a4 )
  {
    v5 = 1259LL;
    goto LABEL_3;
  }
  if ( a2 < *((unsigned __int16 *)this + 26) )
  {
    v7 = 2LL * a2;
    v8 = *(_DWORD *)(*((_QWORD *)this + 8) + 8 * v7);
    *a3 = v8;
    if ( (v8 & 0x10000000) != 0 )
    {
      *(_DWORD *)a4 = 0;
      *((_DWORD *)a4 + 2) = *((_WORD *)a3 + 1) & 0x7FF;
    }
    else
    {
      *(_DWORD *)a4 = 1;
      *((_QWORD *)a4 + 1) = *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v7 + 8);
      *((_DWORD *)a4 + 4) = *(_DWORD *)(*((_QWORD *)this + 8) + 8 * v7 + 4);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4ED,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL);
    return 2147483659LL;
  }
}
