/*
 * XREFs of PiRestartDevice @ 0x140733E00
 * Callers:
 *     PnpDeviceActionWorker @ 0x140381DA0 (PnpDeviceActionWorker.c)
 * Callees:
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     PnpRestartDeviceNode @ 0x1407319F8 (PnpRestartDeviceNode.c)
 *     PipProcessDevNodeTree @ 0x1407413C4 (PipProcessDevNodeTree.c)
 */

__int64 __fastcall PiRestartDevice(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // ecx
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0LL;
  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 312LL) + 40LL);
  v3 = *(_DWORD *)(v2 + 300);
  if ( (unsigned int)(v3 - 787) <= 1 )
    return 3221225558LL;
  if ( (*(_DWORD *)(v2 + 396) & 0x6000) != 0 )
    return 3221225473LL;
  switch ( v3 )
  {
    case 769:
    case 771:
    case 772:
    case 774:
    case 775:
    case 781:
      goto LABEL_4;
    case 770:
    case 786:
      PnpRestartDeviceNode(v2);
LABEL_4:
      if ( *(_DWORD *)(a1 + 24) == 16 )
      {
        BYTE4(v5) = PnPBootDriversInitialized;
        LODWORD(v5) = 3;
        ObfReferenceObject(*(PVOID *)(v2 + 32));
        PipProcessDevNodeTree(v2, a1, (unsigned int)&v5, 0, 0, 0, 0);
      }
      break;
    case 773:
    case 776:
    case 777:
    case 778:
    case 779:
    case 780:
      return 0LL;
    default:
      return 3221225473LL;
  }
  return 0LL;
}
