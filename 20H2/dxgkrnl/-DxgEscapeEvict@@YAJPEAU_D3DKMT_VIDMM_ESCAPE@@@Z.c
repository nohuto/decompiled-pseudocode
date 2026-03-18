/*
 * XREFs of ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0265698
 * Callers:
 *     DxgkEscape @ 0x1C00F72C0 (DxgkEscape.c)
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0001FDC (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00E17F0 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00E1890 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkpIsDrtEnabled @ 0x1C02603A8 (DxgkpIsDrtEnabled.c)
 *     ?DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z @ 0x1C0265A24 (-DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall DxgEscapeEvict(struct _D3DKMT_VIDMM_ESCAPE *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  HANDLE hProcess; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  struct DXGPROCESS *Process; // rax
  __int64 v16; // rax
  struct DXGPROCESS *Current; // rax
  _BYTE v18[8]; // [rsp+20h] [rbp-68h] BYREF
  HANDLE v19; // [rsp+28h] [rbp-60h]
  __int64 v20; // [rsp+30h] [rbp-58h]
  int v21; // [rsp+38h] [rbp-50h]
  __int16 v22; // [rsp+3Ch] [rbp-4Ch]
  char v23; // [rsp+3Eh] [rbp-4Ah]

  if ( a1->GetVads.GetVad.VadAddress )
  {
    if ( DxgkpIsDrtEnabled((__int64)a1, a2) )
    {
      hProcess = a1->Evict.hProcess;
      v20 = 0LL;
      v22 = 0;
      v19 = hProcess;
      v21 = 2048;
      v23 = 0;
      v7 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v18, 1);
      v11 = v7;
      if ( v7 >= 0 )
      {
        Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v18);
        LODWORD(v11) = DxgEscapeEvictWorker(a1, Process);
      }
      else
      {
        v12 = WdLogNewEntry5_WdWarning(v9, v8, v10);
        *(_QWORD *)(v12 + 24) = a1->Evict.hProcess;
        *(_QWORD *)(v12 + 32) = v11;
        WdLogEvent5_WdWarning(v12);
      }
      if ( (_BYTE)v22 )
        DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v18, v13);
      return (unsigned int)v11;
    }
    else
    {
      v16 = WdLogNewEntry5_WdWarning(v4, v3, v5);
      *(_QWORD *)(v16 + 24) = -1073741823LL;
      WdLogEvent5_WdWarning(v16);
      return 3221225473LL;
    }
  }
  else
  {
    Current = DXGPROCESS::GetCurrent((__int64)a1, a2);
    return DxgEscapeEvictWorker(a1, Current);
  }
}
