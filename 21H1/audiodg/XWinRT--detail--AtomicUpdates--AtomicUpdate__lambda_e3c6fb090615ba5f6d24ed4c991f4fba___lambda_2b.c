/*
 * XREFs of XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_e3c6fb090615ba5f6d24ed4c991f4fba___lambda_2b4e95c994fbfcf834a48c0377dad5b5___ @ 0x140049258
 * Callers:
 *     _lambda_ed38f1c9fab6ded12fecd945b1b9e25e_::operator() @ 0x14004B594 (_lambda_ed38f1c9fab6ded12fecd945b1b9e25e_--operator().c)
 * Callees:
 *     _lambda_e3c6fb090615ba5f6d24ed4c991f4fba_::operator() @ 0x14004B674 (_lambda_e3c6fb090615ba5f6d24ed4c991f4fba_--operator().c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_e3c6fb090615ba5f6d24ed4c991f4fba___lambda_2b4e95c994fbfcf834a48c0377dad5b5___(
        volatile signed __int32 *a1,
        __int64 a2,
        _BYTE ***a3)
{
  unsigned __int32 v3; // edi
  int v7; // r9d
  bool v8; // zf
  signed __int32 v9; // eax
  signed __int32 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  while ( 1 )
  {
    v7 = lambda_e3c6fb090615ba5f6d24ed4c991f4fba_::operator()(a2, v3, &v11);
    if ( v7 < 0 )
      break;
    v9 = _InterlockedCompareExchange(a1, v11, v3);
    v8 = v3 == v9;
    v3 = v9;
    if ( v8 )
      break;
    ***a3 = 0;
  }
  return (unsigned int)v7;
}
