/*
 * XREFs of _WaitForWerSvc@4 @ 0x4B33AD78
 * Callers:
 *     _SendMessageToWERService@8 @ 0x4B33AB80 (_SendMessageToWERService@8.c)
 * Callees:
 *     _ZwWaitForSingleObject@12 @ 0x4B2F29A0 (_ZwWaitForSingleObject@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtOpenEvent@12 @ 0x4B2F2D80 (_NtOpenEvent@12.c)
 */

int __fastcall WaitForWerSvc(int a1)
{
  int result; // eax
  __int64 *v3; // eax
  int v4; // esi
  _DWORD v5[6]; // [esp+8h] [ebp-30h] BYREF
  __int64 v6; // [esp+20h] [ebp-18h] BYREF
  _WORD v7[2]; // [esp+2Ch] [ebp-Ch] BYREF
  const wchar_t *v8; // [esp+30h] [ebp-8h]
  HANDLE Handle; // [esp+34h] [ebp-4h] BYREF

  v7[0] = 70;
  v7[1] = 72;
  v8 = L"\\KernelObjects\\SystemErrorPortReady";
  v5[2] = v7;
  v5[0] = 24;
  v5[1] = 0;
  memset(&v5[3], 0, 12);
  result = NtOpenEvent((int)&Handle, 1048577, (int)v5);
  if ( result >= 0 )
  {
    if ( a1 == -1 )
    {
      v3 = 0;
    }
    else
    {
      v6 = -10000LL * a1;
      v3 = &v6;
    }
    v4 = ZwWaitForSingleObject((int)Handle, 0, (int)v3);
    NtClose(Handle);
    return v4;
  }
  return result;
}
