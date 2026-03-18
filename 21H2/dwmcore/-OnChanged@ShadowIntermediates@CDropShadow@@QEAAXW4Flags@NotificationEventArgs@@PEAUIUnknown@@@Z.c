/*
 * XREFs of ?OnChanged@ShadowIntermediates@CDropShadow@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1802128C8
 * Callers:
 *     ?NotifyOnChanged@CDropShadow@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800F4D10 (-NotifyOnChanged@CDropShadow@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ @ 0x18000F9CC (-IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ.c)
 *     ?DestroyIntermediates@ShadowIntermediates@CDropShadow@@QEAAX_N@Z @ 0x1802125D8 (-DestroyIntermediates@ShadowIntermediates@CDropShadow@@QEAAX_N@Z.c)
 */

void __fastcall CDropShadow::ShadowIntermediates::OnChanged(
        CDropShadow::ShadowIntermediates *a1,
        __int64 a2,
        __int64 a3)
{
  if ( *((_QWORD *)a1 + 1) && a3 == *((_QWORD *)a1 + 1) && !CDropShadow::ShadowIntermediates::IsRectangularShadow(a1) )
    CDropShadow::ShadowIntermediates::DestroyIntermediates(a1, 1);
}
