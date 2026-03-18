/*
 * XREFs of RtlpGetStackLimitsEx @ 0x1402E6B30
 * Callers:
 *     RtlDispatchException @ 0x1402E6C20 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1402E70E0 (RtlUnwindEx.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x14029AE70 (KeQueryCurrentStackInformationEx.c)
 */

bool __fastcall RtlpGetStackLimitsEx(unsigned __int64 a1, char **a2, unsigned __int64 *a3)
{
  bool result; // al
  int v4; // [rsp+48h] [rbp+20h] BYREF

  result = KeQueryCurrentStackInformationEx(a1, &v4, a2, a3);
  if ( !result )
    __fastfail(4u);
  return result;
}
