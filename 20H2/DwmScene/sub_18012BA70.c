/*
 * XREFs of sub_18012BA70 @ 0x18012BA70
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 sub_18012BA70()
{
  __int64 result; // rax
  __int64 *v1; // rbx
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx

  result = (__int64)NtCurrentTeb()->ThreadLocalStoragePointer;
  v1 = (__int64 *)(*(_QWORD *)(result + 8LL * (unsigned int)TlsIndex) + 16LL);
  v2 = *v1;
  if ( *v1 )
  {
    v3 = (*(_QWORD *)(*(_QWORD *)(result + 8LL * (unsigned int)TlsIndex) + 32LL) - v2) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v3 >= 0x1000 )
    {
      v4 = v3 + 39;
      v5 = v2 - *(_QWORD *)(v2 - 8);
      if ( (unsigned __int64)(v5 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v5, v4);
        JUMPOUT(0x18012BAE1LL);
      }
    }
    result = j_j__o_free();
    *v1 = 0LL;
    v1[1] = 0LL;
    v1[2] = 0LL;
  }
  return result;
}
