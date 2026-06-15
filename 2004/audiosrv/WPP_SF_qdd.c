/*
 * XREFs of WPP_SF_qDD @ 0x1800E9D9C
 * Callers:
 *     _lambda_27865861a6df232656caf317e6e02d06_::operator() @ 0x1800E81F8 (_lambda_27865861a6df232656caf317e6e02d06_--operator().c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qDD(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_95ddedc4add13e06ef360afb0b04205c_Traceguids, 11LL, (__int64 *)va);
}
