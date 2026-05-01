/*
 * XREFs of ?GetIdentifier@CGameEntry@@UEAAJPEAPEBGPEAK@Z @ 0x180041A80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CGameEntry::GetIdentifier(CGameEntry *this, const unsigned __int16 **a2, unsigned int *a3)
{
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v3 = 1202LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  if ( !*((_QWORD *)this + 5) )
  {
    v3 = 1203LL;
    goto LABEL_3;
  }
  if ( !a3 )
  {
    v3 = 1204LL;
    goto LABEL_3;
  }
  *a3 = *((unsigned __int16 *)this + 24) >> 1;
  *a2 = (const unsigned __int16 *)*((_QWORD *)this + 5);
  return 0LL;
}
