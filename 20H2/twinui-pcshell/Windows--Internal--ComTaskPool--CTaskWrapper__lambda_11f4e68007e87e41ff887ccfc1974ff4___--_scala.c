/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_11f4e68007e87e41ff887ccfc1974ff4___::_scalar_deleting_destructor_ @ 0x18028DF40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_11f4e68007e87e41ff887ccfc1974ff4_::__lambda_11f4e68007e87e41ff887ccfc1974ff4_ @ 0x18028D0E0 (_lambda_11f4e68007e87e41ff887ccfc1974ff4_--__lambda_11f4e68007e87e41ff887ccfc1974ff4_.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_11f4e68007e87e41ff887ccfc1974ff4___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  lambda_11f4e68007e87e41ff887ccfc1974ff4_::__lambda_11f4e68007e87e41ff887ccfc1974ff4_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x58);
  return a1;
}
