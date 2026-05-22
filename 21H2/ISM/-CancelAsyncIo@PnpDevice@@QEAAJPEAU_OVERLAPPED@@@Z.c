/*
 * XREFs of ?CancelAsyncIo@PnpDevice@@QEAAJPEAU_OVERLAPPED@@@Z @ 0x1800A0670
 * Callers:
 *     ?GetAsyncIoResult@PnpDevice@@QEAAJKPEAU_OVERLAPPED@@PEA_K@Z @ 0x1800A0700 (-GetAsyncIoResult@PnpDevice@@QEAAJKPEAU_OVERLAPPED@@PEA_K@Z.c)
 * Callees:
 *     <none>
 */

signed int __fastcall PnpDevice::CancelAsyncIo(HANDLE *this, struct _OVERLAPPED *a2)
{
  signed int result; // eax

  if ( CancelIoEx(this[5], a2) )
    return 0;
  result = GetLastError();
  if ( result == 1168 || !result )
    return 0;
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
