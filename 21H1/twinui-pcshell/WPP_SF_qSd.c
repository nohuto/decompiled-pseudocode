/*
 * XREFs of WPP_SF_qSd @ 0x180135EBC
 * Callers:
 *     ?TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PEBUTransferWindowOptions@@@Z @ 0x18012F8D0 (-TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PE.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_qSd(TRACEHANDLE a1, __int64 a2, __int64 a3, ...)
{
  const wchar_t *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  const wchar_t *v9; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  v9 = va_arg(va1, const wchar_t *);
  v3 = v9;
  if ( v9 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v9[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10LL;
  }
  if ( !v9 )
    v3 = L"NULL";
  return TraceMessage(a1, 0x2Bu, &WPP_ff3bb96b33d535171730427b11d75d99_Traceguids, 0xEu, va, 8LL, v3, v5, va1, 4LL, 0LL);
}
