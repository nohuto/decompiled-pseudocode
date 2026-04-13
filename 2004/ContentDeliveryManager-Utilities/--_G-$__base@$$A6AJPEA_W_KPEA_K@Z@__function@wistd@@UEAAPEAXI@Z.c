/*
 * XREFs of ??_G?$__base@$$A6AJPEA_W_KPEA_K@Z@__function@wistd@@UEAAPEAXI@Z @ 0x18001B1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wistd::__function::__base<long (wchar_t *,unsigned __int64,unsigned __int64 *)>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::__function::__base<long (wchar_t *,unsigned __int64,unsigned __int64 *)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
