/*
 * XREFs of _anonymous_namespace_::GetRelaunchPolicyFromActivationResult @ 0x18034A9DC
 * Callers:
 *     _lambda_7701e7176002895e9cf0bc610689a4a2_::operator() @ 0x1800B162C (_lambda_7701e7176002895e9cf0bc610689a4a2_--operator().c)
 * Callees:
 *     _Init_thread_footer @ 0x18008E0E8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18008E150 (_Init_thread_header.c)
 */

__int64 __fastcall anonymous_namespace_::GetRelaunchPolicyFromActivationResult(int a1)
{
  _DWORD *v2; // rax

  if ( dword_1805CE788 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1805CE788);
    if ( dword_1805CE788 == -1 )
    {
      dword_1805CAC7C = 0;
      dword_1805CAC78 = -2147009295;
      Init_thread_footer(&dword_1805CE788);
    }
  }
  v2 = &unk_1805CAC70;
  while ( *v2 != a1 )
  {
    v2 += 2;
    if ( v2 == (_DWORD *)&PPILayoutOperation::_insertSide )
      return 1LL;
  }
  return (unsigned int)v2[1];
}
