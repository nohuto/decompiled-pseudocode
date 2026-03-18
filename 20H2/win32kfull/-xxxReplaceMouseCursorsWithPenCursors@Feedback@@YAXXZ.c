/*
 * XREFs of ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01DA6F0
 * Callers:
 *     ?xxxSwitchCursors@@YAXHH@Z @ 0x1C01DA848 (-xxxSwitchCursors@@YAXHH@Z.c)
 * Callees:
 *     xxxClientLoadImage @ 0x1C0077158 (xxxClientLoadImage.c)
 *     RtlInitUnicodeStringOrId @ 0x1C0078EEC (RtlInitUnicodeStringOrId.c)
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C0079CA4 (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 */

void __fastcall Feedback::xxxReplaceMouseCursorsWithPenCursors(Feedback *this)
{
  unsigned __int16 *v1; // rbx
  __int64 v2; // rdi
  int v3; // esi
  unsigned __int16 *v4; // rax
  __int64 v5; // rdx
  unsigned __int8 *Image; // rax
  struct _UNICODE_STRING v7; // [rsp+40h] [rbp-18h] BYREF

  v1 = (unsigned __int16 *)&unk_1C02F4420;
  v2 = 4LL;
  v7 = 0LL;
  v3 = *(_DWORD *)(gpsi + 2056LL);
  do
  {
    v4 = v1 - 2;
    if ( !v3 )
      v4 = v1;
    RtlInitUnicodeStringOrId(&v7, (WCHAR *)*v4);
    Image = xxxClientLoadImage(&v7.Length, v5, 2u, 0, 0, 0x40u);
    if ( Image )
      zzzInternalSetSystemCursor((__int64)Image, *((_DWORD *)v1 - 2), &v7, 5);
    v1 += 6;
    --v2;
  }
  while ( v2 );
  Feedback::gfUsingPenCursors = 1;
}
