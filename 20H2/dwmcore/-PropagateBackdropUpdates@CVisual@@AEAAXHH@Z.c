/*
 * XREFs of ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x1800AA564
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180079330 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x1800A84FC (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 *     ?RemoveChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1800A9C00 (-RemoveChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x1800AA250 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::PropagateBackdropUpdates(CVisual *this, int a2, int a3)
{
  CVisual *v3; // rax

  if ( a2 || a3 )
  {
    v3 = this;
    do
    {
      *((_DWORD *)this + 64) += a2;
      *((_DWORD *)this + 65) += a3;
      this = (CVisual *)*((_QWORD *)this + 10);
      if ( v3 )
      {
        v3 = (CVisual *)*((_QWORD *)v3 + 10);
        if ( v3 )
          v3 = (CVisual *)*((_QWORD *)v3 + 10);
      }
    }
    while ( this != v3 );
  }
}
