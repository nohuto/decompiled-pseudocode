/*
 * XREFs of ?GetContentType@CVisual@@UEAAKXZ @ 0x18019FF40
 * Callers:
 *     ?GetContentType@CWindowNode@@UEAAKXZ @ 0x1802441E0 (-GetContentType@CWindowNode@@UEAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::GetContentType(CVisual *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 32);
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 56LL))(v3, 127LL) )
    {
      return 4;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 56LL))(
                *((_QWORD *)this + 32),
                40LL) )
    {
      return 2;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 56LL))(
                *((_QWORD *)this + 32),
                196LL) )
    {
      return 3;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 56LL))(
                *((_QWORD *)this + 32),
                144LL) )
    {
      return 1;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 56LL))(
                *((_QWORD *)this + 32),
                206LL) )
    {
      return 5;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 56LL))(
                *((_QWORD *)this + 32),
                173LL) )
    {
      return 6;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 56LL))(
                *((_QWORD *)this + 32),
                86LL) )
    {
      return 7;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 56LL))(
                *((_QWORD *)this + 32),
                64LL) )
    {
      return 8;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 56LL))(
                *((_QWORD *)this + 32),
                180LL) )
    {
      return 9;
    }
  }
  return v2;
}
