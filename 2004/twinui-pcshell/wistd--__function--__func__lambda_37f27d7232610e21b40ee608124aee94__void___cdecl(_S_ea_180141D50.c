/*
 * XREFs of wistd::__function::__func__lambda_37f27d7232610e21b40ee608124aee94__void___cdecl(_SEB_EVENT_HEADER_const_&)_::__move @ 0x180141D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 (__fastcall **__fastcall wistd::__function::__func__lambda_37f27d7232610e21b40ee608124aee94__void___cdecl__SEB_EVENT_HEADER_const____::__move(
        __int64 a1,
        _QWORD *a2))(void *)
{
  __int64 (__fastcall **result)(void *); // rax
  __int64 (__fastcall ***v3)(void *); // rcx
  __int64 (__fastcall ***v4)(void *); // rdx

  result = &off_180491698;
  v3 = (__int64 (__fastcall ***)(void *))(a1 + 8);
  *a2 = &off_180491698;
  v4 = (__int64 (__fastcall ***)(void *))(a2 + 1);
  *v4 = 0LL;
  if ( v4 != v3 )
  {
    result = *v3;
    *v4 = *v3;
    *v3 = 0LL;
  }
  return result;
}
