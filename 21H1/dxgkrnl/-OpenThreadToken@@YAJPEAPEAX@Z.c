/*
 * XREFs of ?OpenThreadToken@@YAJPEAPEAX@Z @ 0x1C003D304
 * Callers:
 *     ?IsAllowedToCallMiracast@@YA_NXZ @ 0x1C003CFA8 (-IsAllowedToCallMiracast@@YA_NXZ.c)
 *     ?IsInLowBox@@YAHXZ @ 0x1C0295E40 (-IsInLowBox@@YAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OpenThreadToken(void **a1)
{
  NTSTATUS v2; // ebx
  int TokenInformation; // [rsp+50h] [rbp+20h] BYREF
  ULONG ReturnLength; // [rsp+58h] [rbp+28h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp+30h] BYREF

  *a1 = 0LL;
  Handle = 0LL;
  v2 = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 1u, 0x200u, &Handle);
  if ( v2 >= 0 )
  {
    TokenInformation = 0;
    ReturnLength = 4;
    v2 = ZwQueryInformationToken(Handle, TokenImpersonationLevel, &TokenInformation, 4u, &ReturnLength);
    if ( v2 < 0 || TokenInformation < 2 )
    {
      v2 = -1073741700;
      ZwClose(Handle);
      Handle = 0LL;
    }
  }
  if ( v2 == -1073741700 )
    v2 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &Handle);
  *a1 = Handle;
  return (unsigned int)v2;
}
