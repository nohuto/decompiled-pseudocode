/*
 * XREFs of ?BuildDeviceCapabilities@InteractiveControlParser@@SGJPAU_HIDP_PREPARSED_DATA@@PAVInteractiveControlDevice@@@Z @ 0x1B5930
 * Callers:
 *     ?Initialize@InteractiveControlDevice@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1B1F54 (-Initialize@InteractiveControlDevice@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?BuildComponentInformation@InteractiveControlParser@@CGJPAU_HIDP_PREPARSED_DATA@@GPAVInteractiveControlDevice@@@Z @ 0x1B5646 (-BuildComponentInformation@InteractiveControlParser@@CGJPAU_HIDP_PREPARSED_DATA@@GPAVInteractive.c)
 *     ?BuildDeviceAttributes@InteractiveControlParser@@CGJPAU_INTERACTIVECTRL_CAPABILITIES@@PAVInteractiveControlDevice@@@Z @ 0x1B58D8 (-BuildDeviceAttributes@InteractiveControlParser@@CGJPAU_INTERACTIVECTRL_CAPABILITIES@@PAVInterac.c)
 *     ?FreeDeviceCapabilities@InteractiveControlParser@@SGXPAU_INTERACTIVECTRL_CAPABILITIES@@@Z @ 0x1B5DA9 (-FreeDeviceCapabilities@InteractiveControlParser@@SGXPAU_INTERACTIVECTRL_CAPABILITIES@@@Z.c)
 */

NTSTATUS __fastcall InteractiveControlParser::BuildDeviceCapabilities(struct _HIDP_PREPARSED_DATA *a1, int a2)
{
  struct _HIDP_LINK_COLLECTION_NODE *v2; // ebx
  int v4; // edi
  NTSTATUS Caps; // esi
  struct _INTERACTIVECTRL_CAPABILITIES *v7; // [esp+0h] [ebp-18h]
  struct InteractiveControlDevice *v8; // [esp+4h] [ebp-14h]
  ULONG LinkCollectionNodesLength; // [esp+14h] [ebp-4h] BYREF

  v2 = 0;
  LinkCollectionNodesLength = 0;
  v4 = a2 + 40;
  memset((void *)(a2 + 40), 0, 0x9Cu);
  Caps = HidP_GetCaps(a1, (PHIDP_CAPS)(v4 + 4));
  if ( Caps < 0 )
    goto LABEL_14;
  Caps = HidP_GetLinkCollectionNodes(0, &LinkCollectionNodesLength, a1);
  if ( Caps != -1072627705 )
    goto LABEL_13;
  if ( LinkCollectionNodesLength > 1 )
  {
    v2 = (struct _HIDP_LINK_COLLECTION_NODE *)Win32AllocPool(20 * LinkCollectionNodesLength, 1819440195);
    if ( !v2 )
    {
      Caps = -1073741670;
      goto LABEL_14;
    }
    Caps = HidP_GetLinkCollectionNodes(v2, &LinkCollectionNodesLength, a1);
    if ( Caps == 1114112 )
    {
      Caps = InteractiveControlParser::BuildComponentInformation(
               a1,
               (struct _HIDP_PREPARSED_DATA *)a2,
               (unsigned __int16)v7,
               v8);
      if ( Caps < 0 )
        goto LABEL_14;
      Caps = InteractiveControlParser::BuildDeviceAttributes((_DWORD *)v4);
      if ( Caps < 0 )
        goto LABEL_14;
      *(_DWORD *)v4 = *(_DWORD *)(v4 + 80) && *(_DWORD *)(v4 + 88);
    }
LABEL_13:
    if ( Caps >= 0 )
      goto LABEL_15;
  }
LABEL_14:
  InteractiveControlParser::FreeDeviceCapabilities(v7);
LABEL_15:
  if ( v2 )
    Win32FreePool(v2);
  return Caps;
}
