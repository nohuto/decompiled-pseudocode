/*
 * XREFs of ?GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z @ 0x1C0263918
 * Callers:
 *     DxgkEscape @ 0x1C00FB2D0 (DxgkEscape.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1C0043D74 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00E444C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall GetDiagnosticsBuffer(struct _D3DKMT_DXGK_DIAGNOSTICS *a1, __int64 a2, int a3)
{
  unsigned int v5; // edi
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGGLOBAL *Global; // rax
  __int64 v11; // rdx
  DXGFASTMUTEX **v12; // rcx
  __int64 v13; // rax
  _QWORD v15[8]; // [rsp+20h] [rbp-58h] BYREF

  v5 = -1073741811;
  if ( (unsigned int)a2 >= 4 )
  {
    v6 = *(unsigned int *)a1;
    v7 = v6 + 4;
    if ( (unsigned int)a2 == v6 + 4 )
    {
      if ( a3 && (_DWORD)v6 )
      {
        memset(v15, 0, sizeof(v15));
        v15[7] = MEMORY[0xFFFFF78000000014];
        ExSystemTimeToLocalTime((PLARGE_INTEGER)&v15[7], (PLARGE_INTEGER)&v15[6]);
        memset(&v15[1], 0, 36);
        v15[0] = 0x400000000ALL;
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v15, CurrentProcessSessionId);
      }
      Global = DXGGLOBAL::GetGlobal(v7, a2);
      if ( Global )
      {
        if ( a3 )
          v12 = (DXGFASTMUTEX **)*((_QWORD *)Global + 86);
        else
          v12 = (DXGFASTMUTEX **)*((_QWORD *)Global + 87);
        if ( !v12 )
        {
          v13 = WdLogNewEntry5_WdError(0LL, v11);
          *(_QWORD *)(v13 + 32) = 0LL;
          *(_QWORD *)(v13 + 24) = a1;
          WdLogEvent5_WdError(v13);
          return 3221225860LL;
        }
        return (unsigned int)DXGDIAGNOSTICS::ReadDiagnostics(v12, (unsigned __int8 *)a1 + 4, (unsigned int *)a1, -1);
      }
    }
  }
  return v5;
}
