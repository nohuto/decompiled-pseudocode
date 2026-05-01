/*
 * XREFs of _anonymous_namespace_::GetRelaunchPolicyFromActivationResult @ 0x1803298EC
 * Callers:
 *     _lambda_4072c03f0563dda202850bcb805fe733_::operator() @ 0x1800A12A0 (_lambda_4072c03f0563dda202850bcb805fe733_--operator().c)
 * Callees:
 *     _Init_thread_footer @ 0x18008DC88 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18008DCF0 (_Init_thread_header.c)
 */

__int64 __fastcall anonymous_namespace_::GetRelaunchPolicyFromActivationResult(int a1)
{
  _DWORD *v2; // rax

  if ( dword_1805A2340 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1805A2340);
    if ( dword_1805A2340 == -1 )
    {
      dword_18059EA4C = 0;
      dword_18059EA48 = -2147009295;
      Init_thread_footer(&dword_1805A2340);
    }
  }
  v2 = &unk_18059EA40;
  while ( *v2 != a1 )
  {
    v2 += 2;
    if ( v2 == (_DWORD *)&PPILayoutOperation::_insertSide )
      return 1LL;
  }
  return (unsigned int)v2[1];
}
