/*
 * XREFs of GetWorkspaceId @ 0x1C012A920
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0063044 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall GetWorkspaceId(unsigned __int64 a1)
{
  __int64 result; // rax

  result = HMValidateHandleNoSecure(a1, 19);
  if ( result )
    return *(unsigned int *)(result + 1324);
  return result;
}
