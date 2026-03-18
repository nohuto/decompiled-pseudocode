/*
 * XREFs of PnpQueryRemoveLockedDeviceNode @ 0x1407220BC
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x1407320D0 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1402721F0 (RtlAppendUnicodeStringToString.c)
 *     RtlCopyUnicodeString @ 0x1402909B0 (RtlCopyUnicodeString.c)
 *     PipSetDevNodeState @ 0x14036B438 (PipSetDevNodeState.c)
 *     PiIrpQueryRemoveDevice @ 0x1407221AC (PiIrpQueryRemoveDevice.c)
 *     PipClearDevNodeUserFlags @ 0x14072A900 (PipClearDevNodeUserFlags.c)
 *     IopRemoveDevice @ 0x140732450 (IopRemoveDevice.c)
 *     PipSetDevNodeUserFlags @ 0x14075F5CC (PipSetDevNodeUserFlags.c)
 */

__int64 __fastcall PnpQueryRemoveLockedDeviceNode(__int64 a1, int a2, _DWORD *a3, UNICODE_STRING *a4)
{
  struct _DEVICE_OBJECT *v8; // r14
  int v9; // eax
  unsigned int v10; // edi
  __int64 result; // rax

  switch ( *(_DWORD *)(a1 + 300) )
  {
    case 0x303:
    case 0x304:
    case 0x306:
    case 0x307:
    case 0x308:
      PipSetDevNodeUserFlags(a1, 512LL);
      v8 = *(struct _DEVICE_OBJECT **)(a1 + 32);
      v9 = PiIrpQueryRemoveDevice(v8);
      v10 = v9;
      if ( v9 < 0 )
      {
        if ( a2 == 54 && v9 == -1073740537 )
        {
          PipSetDevNodeState(a1, 784);
          *(_DWORD *)(a1 + 704) |= 2u;
        }
        else
        {
          IopRemoveDevice(v8);
          *a3 = 6;
          RtlCopyUnicodeString(a4, (PCUNICODE_STRING)(a1 + 40));
        }
      }
      else
      {
        PipSetDevNodeState(a1, 784);
        if ( a2 == 54 && (*(_DWORD *)(a1 + 704) & 2) != 0 )
          v10 = -1073740537;
      }
      PipClearDevNodeUserFlags(a1, 512LL);
      result = v10;
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}
