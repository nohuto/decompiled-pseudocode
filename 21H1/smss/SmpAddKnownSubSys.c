/*
 * XREFs of SmpAddKnownSubSys @ 0x140003DA8
 * Callers:
 *     SmpHandleConnectionRequest @ 0x140003020 (SmpHandleConnectionRequest.c)
 *     SmpLoadSubSystem @ 0x14001466C (SmpLoadSubSystem.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SmpAddKnownSubSys(__int64 a1, _DWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *i; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  _QWORD *result; // rax

  v2 = *(_QWORD **)(a1 + 8);
  ++*a2;
  for ( i = (_QWORD *)v2[1]; i != v2; i = (_QWORD *)i[1] )
  {
    if ( *((_DWORD *)i - 2) == a2[16] )
      break;
  }
  v4 = a2 + 18;
  v5 = *i;
  result = *(_QWORD **)(*i + 8LL);
  if ( *result != v5 )
    __fastfail(3u);
  *v4 = v5;
  v4[1] = result;
  *result = v4;
  *(_QWORD *)(v5 + 8) = v4;
  return result;
}
