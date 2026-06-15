/*
 * XREFs of ?GetMaxCallInstanceCount@TelephonyController@@UEAAJPEAI@Z @ 0x180141380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TelephonyController::GetMaxCallInstanceCount(TelephonyController *this, unsigned int *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 2147500035LL;
  *a2 = 3 * *((_DWORD *)this + 10);
  return result;
}
