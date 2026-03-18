/*
 * XREFs of PnpQueryRemoveLockedDeviceNode @ 0x140947628
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x140766834 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     PipSetDevNodeState @ 0x1402DE844 (PipSetDevNodeState.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     PipClearDevNodeUserFlags @ 0x14074A08C (PipClearDevNodeUserFlags.c)
 *     IopRemoveDevice @ 0x140766C3C (IopRemoveDevice.c)
 *     PipSetDevNodeUserFlags @ 0x140767220 (PipSetDevNodeUserFlags.c)
 *     PiIrpQueryRemoveDevice @ 0x1409589A4 (PiIrpQueryRemoveDevice.c)
 */

__int64 __fastcall PnpQueryRemoveLockedDeviceNode(__int64 a1, _DWORD *a2, UNICODE_STRING *a3)
{
  struct _DEVICE_OBJECT *v6; // rbp
  int v7; // esi
  __int64 result; // rax

  switch ( *(_DWORD *)(a1 + 300) )
  {
    case 0x305:
    case 0x306:
    case 0x308:
    case 0x309:
    case 0x30A:
      PipSetDevNodeUserFlags(a1, 512);
      v6 = *(struct _DEVICE_OBJECT **)(a1 + 32);
      v7 = PiIrpQueryRemoveDevice(v6);
      if ( v7 < 0 )
      {
        IopRemoveDevice(v6, 3);
        *a2 = 6;
        RtlCopyUnicodeString(a3, (PCUNICODE_STRING)(a1 + 40));
      }
      else
      {
        PipSetDevNodeState(a1, 786);
      }
      PipClearDevNodeUserFlags(a1, 512);
      result = (unsigned int)v7;
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}
