/*
 * XREFs of sub_180042F50 @ 0x180042F50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180042FBC @ 0x180042FBC (sub_180042FBC.c)
 *     sub_18004306C @ 0x18004306C (sub_18004306C.c)
 *     NtClose @ 0x18004547C (NtClose.c)
 *     RtlGetNtSystemRoot @ 0x180045494 (RtlGetNtSystemRoot.c)
 */

_BOOL8 sub_180042F50()
{
  __int64 NtSystemRoot; // rax
  int v1; // ebx
  HANDLE Handle[3]; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+58h] [rbp+20h] BYREF

  Handle[0] = 0LL;
  NtSystemRoot = RtlGetNtSystemRoot();
  v1 = sub_18004306C(NtSystemRoot, Handle);
  if ( v1 >= 0 )
  {
    v1 = sub_180042FBC(Handle[0], &v4);
    if ( v1 >= 0 )
    {
      v1 = 0;
      dword_1800B34F0 = v4;
    }
  }
  if ( Handle[0] )
    NtClose(Handle[0]);
  return v1 >= 0;
}
