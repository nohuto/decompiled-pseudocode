/*
 * XREFs of _anonymous_namespace_::GetRelaunchPolicyFromActivationResult @ 0x18034B43C
 * Callers:
 *     _lambda_fcdff22f78a8ccb3bef514f85cb2b95c_::operator() @ 0x1800B0038 (_lambda_fcdff22f78a8ccb3bef514f85cb2b95c_--operator().c)
 * Callees:
 *     _Init_thread_footer @ 0x18008E588 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18008E5F0 (_Init_thread_header.c)
 */

__int64 __fastcall anonymous_namespace_::GetRelaunchPolicyFromActivationResult(int a1)
{
  _DWORD *v2; // rax

  if ( dword_1805CF788 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1805CF788);
    if ( dword_1805CF788 == -1 )
    {
      dword_1805CBC3C = 0;
      dword_1805CBC38 = -2147009295;
      Init_thread_footer(&dword_1805CF788);
    }
  }
  v2 = &unk_1805CBC30;
  while ( *v2 != a1 )
  {
    v2 += 2;
    if ( v2 == (_DWORD *)&PPILayoutOperation::_insertSide )
      return 1LL;
  }
  return (unsigned int)v2[1];
}
