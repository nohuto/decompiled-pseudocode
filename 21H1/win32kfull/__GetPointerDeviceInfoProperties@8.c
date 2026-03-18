/*
 * XREFs of __GetPointerDeviceInfoProperties@8 @ 0x159B80
 * Callers:
 *     _NtUserGetPointerDevices@8 @ 0x8286E (_NtUserGetPointerDevices@8.c)
 *     _NtUserGetPointerDevice@8 @ 0x163D8B (_NtUserGetPointerDevice@8.c)
 * Callees:
 *     ?RtlStringCbCopyUnicodeString@@YGJPAGIPBU_UNICODE_STRING@@@Z @ 0x157CFD (-RtlStringCbCopyUnicodeString@@YGJPAGIPBU_UNICODE_STRING@@@Z.c)
 *     _PHIDTtoPT@4 @ 0x159214 (_PHIDTtoPT@4.c)
 */

int __fastcall _GetPointerDeviceInfoProperties(size_t a1, ULONG a2)
{
  _WORD *v4; // ecx
  int v5; // edx
  __int16 v6; // ax
  int result; // eax
  unsigned int v8; // [esp+0h] [ebp-8h]
  const struct _UNICODE_STRING *v9; // [esp+4h] [ebp-4h]

  v4 = (_WORD *)(a1 + 22);
  if ( *(_DWORD *)(a2 + 308) )
    RtlStringCbCopyUnicodeString(0x410u, v4, a1, a2, (unsigned __int16 *)(a2 + 304), v8, v9);
  else
    *v4 = 0;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 696);
  *(_DWORD *)(a1 + 8) = PHIDTtoPT((_DWORD *)a2);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(v5 + 1140);
  v6 = *(_WORD *)(a2 + 684);
  if ( *(_DWORD *)(a2 + 12) == 7 )
    --v6;
  *(_WORD *)(a1 + 20) = v6;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(*(_DWORD *)(a2 + 860) + 4);
  result = *(_DWORD *)(a2 + 212);
  *(_DWORD *)a1 = result;
  return result;
}
