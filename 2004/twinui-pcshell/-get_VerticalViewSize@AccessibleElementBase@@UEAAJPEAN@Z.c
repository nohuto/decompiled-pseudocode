/*
 * XREFs of ?get_VerticalViewSize@AccessibleElementBase@@UEAAJPEAN@Z @ 0x1803B5CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803B4F78 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall AccessibleElementBase::get_VerticalViewSize(AccessibleElementBase *this, double *a2)
{
  int Element; // ebx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  *a2 = 100.0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  Element = AccessibleElementBase::_GetElement(
              (AccessibleElementBase *)((char *)this - 48),
              &GUID_2ee57b14_e8de_441b_ba80_94bbf2ee0423,
              &v6);
  if ( Element >= 0 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v6 + 96LL))(v6)
      && (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v6 + 64LL))(v6) )
    {
      *a2 = (*(double (__fastcall **)(void *))(*(_QWORD *)v6 + 56LL))(v6);
    }
    Element = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  return (unsigned int)Element;
}
