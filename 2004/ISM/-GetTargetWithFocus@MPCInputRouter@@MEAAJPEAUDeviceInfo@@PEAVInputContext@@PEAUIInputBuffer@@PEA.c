/*
 * XREFs of ?GetTargetWithFocus@MPCInputRouter@@MEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180041E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall MPCInputRouter::GetTargetWithFocus(
        MPCInputRouter *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct IInputBuffer *a4,
        struct IInputTarget **a5)
{
  bool v5; // r10

  v5 = a2 && (*((_DWORD *)a2 + 1) & 0x662600) != 0;
  if ( *((_BYTE *)this + 864) && v5 )
    return (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IInputTarget **, struct IInputBuffer *))this + 99))(
             *((_QWORD *)this + 99),
             &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
             a5,
             a4);
  else
    return DWMInputRouter::GetTargetWithFocus(this, a2, a3, a4, a5);
}
