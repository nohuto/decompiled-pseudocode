/*
 * XREFs of ?Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ @ 0x1C01618D8
 * Callers:
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C0160F74 (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01E8B48 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_SESSION_MGR::Initialize(OUTPUTDUPL_SESSION_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  unsigned int v6; // edi
  void **v7; // rax
  void **v8; // rbx
  unsigned int v10; // eax
  unsigned int v11; // eax
  const wchar_t *v12; // r9
  unsigned int CurrentProcessSessionId; // eax

  v4 = *(_DWORD *)this;
  *((_DWORD *)this + 1) = *(_DWORD *)this;
  v6 = 32 * v4;
  v7 = (void **)operator new[](0x10uLL, 0x674D444Fu, 256LL, a4);
  v8 = v7;
  if ( v7 )
  {
    *v7 = 0LL;
    *((_DWORD *)v7 + 2) = 0;
    *((_DWORD *)v7 + 3) = 0;
    AUTOEXPANDALLOCATION::GetBuffer((AUTOEXPANDALLOCATION *)v7, v6, 0);
  }
  else
  {
    v8 = 0LL;
  }
  *((_QWORD *)this + 7) = v8;
  if ( v8 )
  {
    if ( *v8 )
    {
      memset(*v8, 0, v6);
      return 0LL;
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    WdLogSingleEntry2(6LL, *((unsigned int *)this + 1), CurrentProcessSessionId);
    v11 = PsGetCurrentProcessSessionId();
    v12 = L"Failed to get session data buffer for output duplication with 0x%I64x apps in session 0x%I64x.";
  }
  else
  {
    v10 = PsGetCurrentProcessSessionId();
    WdLogSingleEntry2(6LL, *((unsigned int *)this + 1), v10);
    v11 = PsGetCurrentProcessSessionId();
    v12 = L"Failed to allocate session data for output duplication with 0x%I64x apps in session 0x%I64x.";
  }
  DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v12, *((unsigned int *)this + 1), v11, 0LL, 0LL, 0LL);
  return 3221225495LL;
}
