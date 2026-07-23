/*
 * XREFs of KsepLogEtwMessage @ 0x140371328
 * Callers:
 *     KsepLogInfo @ 0x1403712F8 (KsepLogInfo.c)
 *     KsepLogError @ 0x140371AC4 (KsepLogError.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     RtlStringCbVPrintfA @ 0x14037141C (RtlStringCbVPrintfA.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void __fastcall KsepLogEtwMessage(int a1, int a2, const char *a3, va_list a4)
{
  __int64 v5; // rax
  const EVENT_DESCRIPTOR *v6; // rdx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  char *v8; // [rsp+50h] [rbp-B0h]
  int v9; // [rsp+58h] [rbp-A8h]
  int v10; // [rsp+5Ch] [rbp-A4h]
  char pszDest[256]; // [rsp+60h] [rbp-A0h] BYREF
  int v12; // [rsp+180h] [rbp+80h] BYREF

  v12 = a1;
  if ( KseEtwHandle && RtlStringCbVPrintfA(pszDest, 0x100uLL, a3, a4) >= 0 )
  {
    UserData.Reserved = 0;
    UserData.Ptr = (ULONGLONG)&v12;
    UserData.Size = 4;
    v8 = pszDest;
    v5 = -1LL;
    do
      ++v5;
    while ( pszDest[v5] );
    v10 = 0;
    v6 = (const EVENT_DESCRIPTOR *)KShimErrorMessage;
    v9 = v5 + 1;
    if ( a2 )
      v6 = &KShimInfoMessage;
    EtwWriteEx(KseEtwHandle, v6, 0LL, 0, 0LL, 0LL, 2u, &UserData);
  }
}
