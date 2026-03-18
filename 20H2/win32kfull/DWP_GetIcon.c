/*
 * XREFs of DWP_GetIcon @ 0x1C0113D58
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0076550 (HMValidateHandleNoRip.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall DWP_GetIcon(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rax

  if ( (unsigned int)a2 > 2 )
  {
    UserSetLastError(87LL, a2, a3);
    return 0LL;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 40);
    if ( (_DWORD)a2 == 1 )
      return *(_QWORD *)(v3 + 272);
    v4 = *(_QWORD *)(v3 + 264);
    if ( !(_DWORD)a2 )
    {
      if ( v4 )
      {
        v5 = HMValidateHandleNoRip(v4, 3);
        if ( v5 )
        {
          if ( *(char *)(v5 + 80) < 0 )
            return 0LL;
        }
      }
    }
    return v4;
  }
}
