/*
 * XREFs of _GetPointerDeviceInfoProperties @ 0x1C01EEED0
 * Callers:
 *     NtUserGetPointerDevices @ 0x1C0109F80 (NtUserGetPointerDevices.c)
 *     NtUserGetPointerDevice @ 0x1C01FAAF0 (NtUserGetPointerDevice.c)
 * Callees:
 *     ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x1C01ECC90 (-RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 *     PHIDTtoPT @ 0x1C01EE34C (PHIDTtoPT.c)
 */

__int64 __fastcall GetPointerDeviceInfoProperties(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int16 v5; // cx
  __int64 result; // rax

  if ( *(_QWORD *)(a2 + 328) )
    RtlStringCbCopyUnicodeString((char *)(a1 + 38), 0x410uLL, (const struct _UNICODE_STRING *)(a2 + 320));
  else
    *(_WORD *)(a1 + 38) = 0;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 736);
  *(_DWORD *)(a1 + 16) = PHIDTtoPT(a2);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(v4 + 1352);
  v5 = *(_WORD *)(a2 + 720) - 1;
  if ( *(_DWORD *)(a2 + 24) != 7 )
    v5 = *(_WORD *)(a2 + 720);
  *(_WORD *)(a1 + 36) = v5;
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(*(_QWORD *)(a2 + 968) + 4LL);
  result = *(unsigned int *)(a2 + 224);
  *(_DWORD *)a1 = result;
  return result;
}
