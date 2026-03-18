/*
 * XREFs of ?Open@CInputSink@@UEAAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1C00A5CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputSink::Open(void **this, struct _WIN32_OPENMETHOD_PARAMETERS *a2)
{
  PVOID v2; // r8
  __int64 result; // rax

  v2 = (PVOID)*((_QWORD *)a2 + 1);
  result = 0LL;
  if ( (!v2 || v2 != g_pepDwm) && v2 != this[5] )
    return 3221225659LL;
  return result;
}
