/*
 * XREFs of ?NotifyOnChanged@CProjectedShadowScene@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18000ECC0
 * Callers:
 *     <none>
 * Callees:
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x18000ECE4 (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 */

void __fastcall CProjectedShadowScene::NotifyOnChanged(CProjectedShadowScene *a1)
{
  if ( !CCommonRegistryData::DisableProjectedShadows )
  {
    *((_QWORD *)a1 + 12) = 0LL;
    CProjectedShadowScene::RequestRedrawAll(a1);
  }
}
