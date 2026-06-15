/*
 * XREFs of sub_180037CE0 @ 0x180037CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=2
int __fastcall sub_180037CE0(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // eax
  struct _TP_TIMER *v4; // rcx
  int result; // eax
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = Mtx_lock((_Mtx_t)(v1 + 8));
  if ( v2 )
  {
    std::_Throw_C_error(v2);
    goto LABEL_8;
  }
  if ( (*(_DWORD *)v1)-- == 1 )
  {
    v4 = *(struct _TP_TIMER **)(v1 + 96);
    if ( v4 )
    {
      pftDueTime.dwLowDateTime = -200000000;
      pftDueTime.dwHighDateTime = -1;
      SetThreadpoolTimer(v4, &pftDueTime, 0, 0);
    }
  }
  result = Mtx_unlock((_Mtx_t)(v1 + 8));
  if ( result )
  {
LABEL_8:
    std::_Throw_C_error(result);
    JUMPOUT(0x1800994CELL);
  }
  return result;
}
