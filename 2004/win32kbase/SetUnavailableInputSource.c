/*
 * XREFs of SetUnavailableInputSource @ 0x1C0026F70
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0072F8C (xxxCreateThreadInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall SetUnavailableInputSource(_DWORD *a1)
{
  if ( a1 )
  {
    *a1 = 0;
    a1[1] = 0;
  }
}
