/*
 * XREFs of ?VerifyAvailable@CGameEntry@@AEAAJK@Z @ 0x1800422D8
 * Callers:
 *     ?CompleteInitialization@CGameEntry@@AEAAJXZ @ 0x180041E10 (-CompleteInitialization@CGameEntry@@AEAAJXZ.c)
 *     ?MarkConsumed@CGameEntry@@AEAAJK_N@Z @ 0x180042220 (-MarkConsumed@CGameEntry@@AEAAJK_N@Z.c)
 *     ?ReadUShort@CGameEntry@@AEAAJPEAG_N@Z @ 0x180042314 (-ReadUShort@CGameEntry@@AEAAJPEAG_N@Z.c)
 *     ?ReadDWORD@CGameEntry@@AEAAJPEAK@Z @ 0x180042398 (-ReadDWORD@CGameEntry@@AEAAJPEAK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CGameEntry::VerifyAvailable(CGameEntry *this, unsigned int a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 <= *((_DWORD *)this + 8) )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x582,
    (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)0x8000000BLL);
  return 2147483659LL;
}
