/*
 * XREFs of wil::details::lambda_call__lambda_4b6cdc335957e3b3b0c4e577e65e749c___::_lambda_call__lambda_4b6cdc335957e3b3b0c4e577e65e749c___ @ 0x18009B240
 * Callers:
 *     _GazeDeviceCollection::OnDeviceAttach_::_1_::dtor$1 @ 0x18009B567 (_GazeDeviceCollection--OnDeviceAttach_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void **__fastcall wil::details::lambda_call__lambda_4b6cdc335957e3b3b0c4e577e65e749c___::_lambda_call__lambda_4b6cdc335957e3b3b0c4e577e65e749c___(
        __int64 a1)
{
  void **result; // rax
  void *v3; // rcx

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v3 = **(void ***)a1;
    if ( v3 )
    {
      operator delete(v3, (const struct std::nothrow_t *)0x60C);
      **(_QWORD **)a1 = 0LL;
    }
    result = *(void ***)(a1 + 8);
    if ( *result )
    {
      operator delete(*result, (const struct std::nothrow_t *)0x638);
      result = *(void ***)(a1 + 8);
      *result = 0LL;
    }
  }
  return result;
}
