/*
 * XREFs of WPP_SF_dii @ 0x18002AFD8
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002D49C (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_dii(TRACEHANDLE a1, __int64 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+88h] [rbp+20h] BYREF
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v6 = va_arg(va1, _QWORD);
  v5 = a4;
  return TraceMessage(
           a1,
           0x2Bu,
           &WPP_e1a7a5e290533704050c869bb9bcb4b5_Traceguids,
           0x12u,
           &v5,
           4LL,
           va,
           8LL,
           va1,
           8LL,
           0LL);
}
