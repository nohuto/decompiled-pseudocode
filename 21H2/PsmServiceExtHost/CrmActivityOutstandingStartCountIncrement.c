/*
 * XREFs of CrmActivityOutstandingStartCountIncrement @ 0x18002EC78
 * Callers:
 *     CrmSrvActivityStart @ 0x18002ECD8 (CrmSrvActivityStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmActivityOutstandingStartCountIncrement(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 136);
  if ( !v1 )
  {
    RtlQueryUnbiasedInterruptTime(a1 + 168);
    *(_QWORD *)(a1 + 184) = 0LL;
    *(_QWORD *)(a1 + 176) = 0LL;
    *(_QWORD *)(a1 + 192) = MEMORY[0x7FFE0008];
    v1 = *(_DWORD *)(a1 + 136);
  }
  result = (unsigned int)(v1 + 1);
  *(_DWORD *)(a1 + 136) = result;
  return result;
}
