/*
 * XREFs of NtUserGetAncestor @ 0x1C00E9AE0
 * Callers:
 *     <none>
 * Callees:
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     _GetParent @ 0x1C00E9C04 (_GetParent.c)
 */

__int64 __fastcall NtUserGetAncestor(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 *v5; // rcx
  __int64 *v6; // r8
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 *v10; // r9
  int v11; // edi
  int v13; // edi
  __int64 Parent; // rax
  __int64 DesktopWindow; // rax
  __int64 *v16; // rax

  EnterSharedCrit(0LL, 1LL);
  v6 = (__int64 *)ValidateHwnd(a1);
  if ( !v6 )
    goto LABEL_28;
  if ( (unsigned int)(a2 - 1) > 2 )
  {
    UserSetLastError(87LL, v4, (__int64)v6);
LABEL_28:
    v8 = 0LL;
    goto LABEL_27;
  }
  v7 = v6[3];
  v8 = 0LL;
  v5 = 0LL;
  if ( v7 )
    v5 = *(__int64 **)(v7 + 104);
  if ( v6 == v5 && a2 == 4 )
    goto LABEL_25;
  v5 = 0LL;
  if ( v7 )
  {
    v4 = *(_QWORD *)(v7 + 8);
    if ( v4 )
      v5 = *(__int64 **)(v4 + 24);
  }
  if ( v6 != v5 )
  {
    v5 = 0LL;
    if ( v7 )
      v5 = *(__int64 **)(v7 + 104);
    if ( v6 != v5 && v6[13] )
    {
      if ( a2 == 2 )
      {
        while ( 1 )
        {
          v9 = v6[3];
          v5 = 0LL;
          v10 = (__int64 *)v6[13];
          if ( v9 )
          {
            v4 = *(_QWORD *)(v9 + 8);
            if ( v4 )
              v5 = *(__int64 **)(v4 + 24);
          }
          if ( v10 == v5 )
            break;
          v5 = 0LL;
          if ( v9 )
            v5 = *(__int64 **)(v9 + 104);
          if ( v10 == v5 )
            break;
          v6 = (__int64 *)v6[13];
        }
      }
      else
      {
        v11 = a2 - 1;
        if ( v11 )
        {
          v13 = v11 - 2;
          if ( v13 )
          {
            if ( v13 == 1 )
            {
              while ( 1 )
              {
                v4 = v6[13];
                if ( !v4 )
                  break;
                DesktopWindow = GetDesktopWindow((__int64)v6);
                if ( v4 == DesktopWindow )
                  break;
                v5 = (__int64 *)v6[3];
                v16 = 0LL;
                if ( v5 )
                  v16 = (__int64 *)v5[13];
                if ( v6 == v16 )
                  break;
                v6 = (__int64 *)v4;
              }
            }
          }
          else
          {
            while ( 1 )
            {
              Parent = GetParent(v6);
              if ( !Parent )
                break;
              v6 = (__int64 *)Parent;
            }
          }
        }
        else
        {
          v6 = (__int64 *)v6[13];
        }
      }
LABEL_25:
      if ( v6 )
        v8 = *v6;
    }
  }
LABEL_27:
  UserSessionSwitchLeaveCrit(v5, v4, v6);
  return v8;
}
