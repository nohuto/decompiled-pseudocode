/*
 * XREFs of ?Release@CBitmapLock@@UEAAKXZ @ 0x1800E6B30
 * Callers:
 *     ?Release@CBitmapLock@@$4PPPPPPPM@IA@EAAKXZ @ 0x1801080B0 (-Release@CBitmapLock@@$4PPPPPPPM@IA@EAAKXZ.c)
 *     ?Release@CBitmapLock@@$4PPPPPPPM@JI@EAAKXZ @ 0x1801080F0 (-Release@CBitmapLock@@$4PPPPPPPM@JI@EAAKXZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapLock::Release(CBitmapLock *this)
{
  char *v1; // rsi
  volatile signed __int32 *v2; // rdi
  unsigned __int32 v3; // ebx
  __int64 v4; // rdx

  v1 = (char *)this - 24;
  v2 = (volatile signed __int32 *)((char *)this - 8);
  v3 = _InterlockedDecrement(v2);
  if ( !v3 )
  {
    CMILRefCountImpl::AddReference((CBitmapLock *)((char *)this - 8));
    (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 48LL))(v1);
    v3 = _InterlockedDecrement(v2);
    if ( !v3 )
    {
      v4 = *(_QWORD *)v1;
      --*v2;
      (*(void (__fastcall **)(char *, __int64))(v4 + 40))(v1, 1LL);
    }
  }
  return v3;
}
