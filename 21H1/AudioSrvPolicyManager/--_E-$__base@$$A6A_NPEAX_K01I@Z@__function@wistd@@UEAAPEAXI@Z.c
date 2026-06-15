/*
 * XREFs of ??_E?$__base@$$A6A_NPEAX_K01I@Z@__function@wistd@@UEAAPEAXI@Z @ 0x18000E8F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall wistd::__function::__base<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::__function::__base<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)8);
  return a1;
}
