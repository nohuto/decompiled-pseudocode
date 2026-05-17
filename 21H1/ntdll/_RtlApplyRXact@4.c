/*
 * XREFs of _RtlApplyRXact@4 @ 0x4B345770
 * Callers:
 *     <none>
 * Callees:
 *     _ZwSetValueKey@24 @ 0x4B2F2F80 (_ZwSetValueKey@24.c)
 *     _NtDeleteValueKey@8 @ 0x4B2F36E0 (_NtDeleteValueKey@8.c)
 *     _NtFlushKey@4 @ 0x4B2F3810 (_NtFlushKey@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _RXactpCommit@4 @ 0x4B34539B (_RXactpCommit@4.c)
 *     _RtlAbortRXact@4 @ 0x4B345550 (_RtlAbortRXact@4.c)
 */

int __stdcall RtlApplyRXact(_DWORD *a1)
{
  int v1; // esi
  int result; // eax
  int v3; // ebx
  UNICODE_STRING DestinationString; // [esp+10h] [ebp-8h] BYREF

  v1 = a1[1];
  RtlInitUnicodeString(&DestinationString, L"Log");
  result = ZwSetValueKey(v1, (int)&DestinationString, 0, 3, a1[3], *(_DWORD *)(a1[3] + 8));
  if ( result >= 0 )
  {
    v3 = NtFlushKey(v1);
    if ( v3 < 0 )
    {
      NtDeleteValueKey(v1, (int)&DestinationString);
      return v3;
    }
    v3 = RXactpCommit(a1);
    NtDeleteValueKey(v1, (int)&DestinationString);
    if ( v3 < 0 )
      return v3;
    RtlAbortRXact((int)a1);
    return 0;
  }
  return result;
}
