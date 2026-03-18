/*
 * XREFs of ??1CTableTransferEffectMarshaler@DirectComposition@@UEAA@XZ @ 0x1C01E3FF4
 * Callers:
 *     ??_GCTableTransferEffectMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D6D00 (--_GCTableTransferEffectMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CTableTransferEffectMarshaler::~CTableTransferEffectMarshaler(
        DirectComposition::CTableTransferEffectMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  __int64 *v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &DirectComposition::CTableTransferEffectMarshaler::`vftable';
  v4 = (__int64 *)((char *)this + 112);
  v5 = 4LL;
  do
  {
    if ( *v4 )
      Win32FreePool(*v4, a2, a3);
    v4 += 2;
    --v5;
  }
  while ( v5 );
  *(_QWORD *)this = &DirectComposition::CFilterEffectMarshaler::`vftable';
  v6 = *((_QWORD *)this + 11);
  if ( v6 )
    Win32FreePool(v6, a2, a3);
  v7 = *((_QWORD *)this + 12);
  if ( v7 )
    Win32FreePool(v7, a2, a3);
}
