/*
 * XREFs of sub_18007F872 @ 0x18007F872
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x180044290 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 */

void __fastcall sub_18007F872(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        void **a12)
{
  a12 = &ATL::CSecurityDesc::`vftable';
  ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&a12);
  JUMPOUT(0x180006445LL);
}
