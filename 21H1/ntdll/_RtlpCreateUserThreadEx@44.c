/*
 * XREFs of _RtlpCreateUserThreadEx@44 @ 0x4B2F0524
 * Callers:
 *     _EtwpCreateEtwThread@8 @ 0x4B2F04A0 (_EtwpCreateEtwThread@8.c)
 *     _RtlCreateUserThread@40 @ 0x4B2F04F0 (_RtlCreateUserThread@40.c)
 *     _DbgUiIssueRemoteBreakin@4 @ 0x4B32DB10 (_DbgUiIssueRemoteBreakin@4.c)
 *     _RtlCreateProcessReflection@24 @ 0x4B335060 (_RtlCreateProcessReflection@24.c)
 *     _RtlQueryProcessDebugInformation@12 @ 0x4B336B50 (_RtlQueryProcessDebugInformation@12.c)
 *     _RtlSetProcessDebugInformation@12 @ 0x4B337540 (_RtlSetProcessDebugInformation@12.c)
 *     _RtlpHeapPerformCrossProcessQuery@8 @ 0x4B358165 (_RtlpHeapPerformCrossProcessQuery@8.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtCreateThreadEx@44 @ 0x4B2F3590 (_NtCreateThreadEx@44.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __fastcall RtlpCreateUserThreadEx(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        void *a9,
        HANDLE *a10,
        _DWORD *a11)
{
  int v11; // eax
  int result; // eax
  _DWORD v13[6]; // [esp+10h] [ebp-54h] BYREF
  int v14; // [esp+28h] [ebp-3Ch]
  int v15; // [esp+2Ch] [ebp-38h] BYREF
  int v16; // [esp+30h] [ebp-34h]
  HANDLE Handle; // [esp+34h] [ebp-30h] BYREF
  _DWORD v18[9]; // [esp+38h] [ebp-2Ch] BYREF

  v15 = 0;
  v16 = 0;
  v14 = a8;
  Handle = a9;
  if ( (a3 & 0xFFFFFF88) != 0 )
    return -1073741811;
  v11 = a3 & 1;
  if ( (a3 & 2) != 0 )
    v11 |= 2u;
  if ( (a3 & 4) != 0 )
    v11 |= 4u;
  if ( (a3 & 0x10) != 0 )
    v11 |= 0x10u;
  if ( (a3 & 0x20) != 0 )
    v11 |= 0x20u;
  if ( (a3 & 0x40) != 0 )
    v11 |= 0x40u;
  v13[0] = 24;
  v13[1] = 0;
  v13[2] = 0;
  v13[5] = 0;
  v18[4] = 0;
  v18[3] = &v15;
  v13[3] = 512;
  v13[4] = a2;
  v18[1] = 65539;
  v18[2] = 8;
  v18[0] = 20;
  result = NtCreateThreadEx(&Handle, 0x1FFFFF, v13, a1, v14, Handle, v11, a4, a6, a5, v18);
  if ( result >= 0 )
  {
    if ( a10 )
      *a10 = Handle;
    else
      NtClose(Handle);
    if ( a11 )
    {
      *a11 = v15;
      a11[1] = v16;
    }
    return 0;
  }
  return result;
}
