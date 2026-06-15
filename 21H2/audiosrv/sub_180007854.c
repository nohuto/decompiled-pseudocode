/*
 * XREFs of sub_180007854 @ 0x180007854
 * Callers:
 *     sub_180005E08 @ 0x180005E08 (sub_180005E08.c)
 *     sub_180006008 @ 0x180006008 (sub_180006008.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800D5648 @ 0x1800D5648 (sub_1800D5648.c)
 *     sub_1800D5670 @ 0x1800D5670 (sub_1800D5670.c)
 */

void __fastcall sub_180007854(PSECURITY_DESCRIPTOR *a1)
{
  PSECURITY_DESCRIPTOR v2; // rcx
  PSECURITY_DESCRIPTOR v3; // rcx
  void *v4; // rax
  void *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // ebx
  WORD pControl; // [rsp+40h] [rbp+8h] BYREF
  DWORD dwBufferLength; // [rsp+48h] [rbp+10h] BYREF
  DWORD dwRevision; // [rsp+50h] [rbp+18h] BYREF

  v2 = a1[1];
  if ( v2 )
  {
    pControl = 0;
    if ( !GetSecurityDescriptorControl(v2, &pControl, &dwRevision) )
      sub_1800B8610(2147500037LL);
    if ( (pControl & 0x8000u) == 0 )
    {
      v3 = a1[1];
      dwBufferLength = 0;
      MakeSelfRelativeSD(v3, 0LL, &dwBufferLength);
      if ( GetLastError() != 122 )
        sub_1800D5670();
      v4 = (void *)o_malloc(dwBufferLength);
      v5 = v4;
      if ( !v4 )
        sub_1800B8610(2147942414LL);
      if ( !MakeSelfRelativeSD(a1[1], v4, &dwBufferLength) )
      {
        v9 = sub_1800D5648(v7, v6, v8);
        _o_free(v5);
        sub_1800B8610(v9);
      }
      (*((void (__fastcall **)(PSECURITY_DESCRIPTOR *))*a1 + 1))(a1);
      a1[1] = v5;
    }
  }
}
