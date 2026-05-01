/*
 * XREFs of CrmRegistrationCleanup @ 0x180036074
 * Callers:
 *     CrmSrvRegister @ 0x180004E94 (CrmSrvRegister.c)
 *     CrmSrvUnregister @ 0x180035F74 (CrmSrvUnregister.c)
 *     CrmGlobalsCleanup @ 0x180084550 (CrmGlobalsCleanup.c)
 *     CrmGlobalsRegistrationsDeleteRoutine @ 0x18008479C (CrmGlobalsRegistrationsDeleteRoutine.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     CrmGlobalsRegistrationRemove @ 0x180036100 (CrmGlobalsRegistrationRemove.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     CrmRegistrationRemoveActivity @ 0x1800847DC (CrmRegistrationRemoveActivity.c)
 */

void __fastcall CrmRegistrationCleanup(_QWORD *a1, int a2)
{
  _QWORD *i; // rdi
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-58h] BYREF
  UUID *v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+68h] [rbp-30h]
  int v9; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v10; // [rsp+70h] [rbp-28h]
  int v11; // [rsp+78h] [rbp-20h]
  int v12; // [rsp+7Ch] [rbp-1Ch]

  if ( a2 && a1[6] != -1LL )
    CrmGlobalsRegistrationRemove();
  for ( i = a1 + 7; (_QWORD *)*i != i; CrmRegistrationRemoveActivity(a1, *i, 0LL) )
    ;
  if ( (unsigned int)dword_1800B3250 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1800B3250, 2LL) )
    {
      v9 = 0;
      v12 = 0;
      v7 = &Uuid;
      v5 = a1[2];
      v10 = &v5;
      v8 = 16;
      v11 = 8;
      tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_1800A2EED, 0LL, 0LL, 4u, &v6);
    }
  }
}
