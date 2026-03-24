/*
 * XREFs of ?GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z @ 0x1C0267EC8
 * Callers:
 *     DxgkEscape @ 0x1C00F9100 (DxgkEscape.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1C0045C24 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C013AB0C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall GetDiagnosticsBuffer(struct _D3DKMT_DXGK_DIAGNOSTICS *a1, __int64 a2, int a3)
{
  unsigned int v5; // edi
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // rdx
  DXGFASTMUTEX **v13; // rcx
  __int64 v14; // rax
  _QWORD v16[8]; // [rsp+20h] [rbp-58h] BYREF

  v5 = -1073741811;
  if ( (unsigned int)a2 >= 4 )
  {
    v6 = *(unsigned int *)a1;
    v7 = v6 + 4;
    if ( (unsigned int)a2 == v6 + 4 )
    {
      if ( a3 && (_DWORD)v6 )
      {
        memset(v16, 0, sizeof(v16));
        v16[7] = MEMORY[0xFFFFF78000000014];
        ExSystemTimeToLocalTime((PLARGE_INTEGER)&v16[7], (PLARGE_INTEGER)&v16[6]);
        memset(&v16[1], 0, 36);
        v16[0] = 0x400000000ALL;
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9, v8);
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v16, CurrentProcessSessionId);
      }
      Global = DXGGLOBAL::GetGlobal(v7, a2);
      if ( Global )
      {
        if ( a3 )
          v13 = (DXGFASTMUTEX **)*((_QWORD *)Global + 100);
        else
          v13 = (DXGFASTMUTEX **)*((_QWORD *)Global + 101);
        if ( !v13 )
        {
          v14 = WdLogNewEntry5_WdError(0LL, v12);
          *(_QWORD *)(v14 + 32) = 0LL;
          *(_QWORD *)(v14 + 24) = a1;
          WdLogEvent5_WdError(v14);
          return 3221225860LL;
        }
        return (unsigned int)DXGDIAGNOSTICS::ReadDiagnostics(v13, (unsigned __int8 *)a1 + 4, (unsigned int *)a1, -1);
      }
    }
  }
  return v5;
}
