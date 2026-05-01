/*
 * XREFs of ?RmpRpExtStart@@YAJPEAU_RM_RESOURCE_POLICY_CONTEXT@@@Z @ 0x180040820
 * Callers:
 *     ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180040430 (-RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     IsRmRpsInitializePresent @ 0x1800457D8 (IsRmRpsInitializePresent.c)
 */

__int64 __fastcall RmpRpExtStart(struct _RM_RESOURCE_POLICY_CONTEXT *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v5; // rcx
  int v6; // r9d
  int v7; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+38h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-48h] BYREF
  int *v10; // [rsp+60h] [rbp-28h]
  __int64 v11; // [rsp+68h] [rbp-20h]

  v2 = 0;
  if ( (unsigned __int8)IsRmRpsInitializePresent() )
  {
    if ( (int)RmRpsInitialize(&v8) < 0 )
    {
      if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
      {
        v7 = v6;
        v10 = &v7;
        v11 = 4LL;
        tlgWriteTransfer_EventWriteTransfer(v5, (unsigned __int8 *)dword_18009A9E2, 0LL, 0LL, 3u, &v9);
      }
      return (unsigned int)-1073741823;
    }
    else
    {
      v3 = v8;
      *((_DWORD *)a1 + 2) |= 1u;
      *(_QWORD *)a1 = v3;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v2;
}
