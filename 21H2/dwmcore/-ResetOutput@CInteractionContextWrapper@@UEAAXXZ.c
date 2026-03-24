/*
 * XREFs of ?ResetOutput@CInteractionContextWrapper@@UEAAXXZ @ 0x180231470
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z @ 0x1800B61F8 (-ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180152D40 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

void __fastcall CInteractionContextWrapper::ResetOutput(CInteractionContextWrapper *this)
{
  int v1; // edx
  __int64 v2; // r9
  __int64 v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  CInteractionContextWrapper::ResetCachedInteractionOutput(this, 0LL);
  if ( (unsigned int)dword_180344EF0 > 4 && (qword_180344F00 & 2) != 0 && (qword_180344F08 & 2) == qword_180344F08 )
  {
    v7 &= v1;
    v5 = &v3;
    v3 = v2;
    v6 = 8;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_180344EF0,
      (unsigned __int8 *)dword_1802EC909,
      0LL,
      0LL,
      3u,
      &v4);
  }
}
