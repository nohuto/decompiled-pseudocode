/*
 * XREFs of ?_OnKeyDown@CDragVisual@@AEAAX_K@Z @ 0x1804045AC
 * Callers:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x180405998 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_ClearVisualFeedback@CDragVisual@@AEAAXXZ @ 0x180403BEC (-_ClearVisualFeedback@CDragVisual@@AEAAXXZ.c)
 *     ?_CommitPlacement@CDragVisual@@AEAAXXZ @ 0x180403C2C (-_CommitPlacement@CDragVisual@@AEAAXXZ.c)
 */

void __fastcall CDragVisual::_OnKeyDown(CDragVisual *this, int a2)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int64 v9; // rdx

  if ( !*((_BYTE *)this + 324) && !*((_BYTE *)this + 325) && !*((_DWORD *)this + 82) )
  {
    v3 = a2 - 13;
    if ( !v3 )
      goto LABEL_17;
    v4 = v3 - 14;
    if ( !v4 )
    {
      CDragVisual::_CancelPlacement(this);
      return;
    }
    v5 = v4 - 5;
    if ( v5 )
    {
      v6 = v5 - 5;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            if ( v8 != 1 )
              return;
            v9 = 3LL;
          }
          else
          {
            v9 = 2LL;
          }
        }
        else
        {
          v9 = 1LL;
        }
      }
      else
      {
        v9 = 0LL;
      }
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 17) + 24LL))(*((_QWORD *)this + 17), v9);
      CDragVisual::_ClearVisualFeedback(this);
      *((_BYTE *)this + 326) = 1;
    }
    else
    {
LABEL_17:
      CDragVisual::_CommitPlacement(this);
    }
  }
}
