/*
 * XREFs of ??1CGenericInkMarshaler@DirectComposition@@UEAA@XZ @ 0x1C01D65D0
 * Callers:
 *     ??_GCGenericInkMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D68C0 (--_GCGenericInkMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CGenericInkMarshaler::~CGenericInkMarshaler(
        DirectComposition::CGenericInkMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &DirectComposition::CGenericInkMarshaler::`vftable';
  v4 = *((_QWORD *)this + 12);
  if ( v4 )
    Win32FreePool(v4, a2, a3);
  v5 = *((_QWORD *)this + 7);
  if ( v5 )
    Win32FreePool(v5, a2, a3);
}
